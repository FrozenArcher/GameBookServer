#include "common.h"
#include "server_app.h"

#include "res_path.h"
#include "app_type.h"
#include "yaml.h"

#include "object_pool_packet.h"
#include "component_help.h"

ServerApp::ServerApp(APP_TYPE appType, int argc, char* argv[])
{
    _appType = appType;
    _argc = argc;
    _argv = argv;
}

void ServerApp::Dispose()
{
    DynamicPacketPool::GetInstance()->Dispose();
    DynamicPacketPool::DestroyInstance();

    ThreadMgr::DestroyInstance();
}

void ServerApp::Initialize()
{
    signal(SIGINT, Signalhandler);

    Global::Instance(_appType, 0);

    // Packet对象池
    DynamicPacketPool::Instance();

    // 全局基础组件
    _pThreadMgr = ThreadMgr::Instance();
    _pThreadMgr->InitializeGlobalComponent(_appType, 0);

    // 创建线程
    _pThreadMgr->InitializeThread();
}

void ServerApp::Signalhandler(const int signalValue)
{
    auto pGlobal = Global::GetInstance();
    switch (signalValue)
    {
#if ENGINE_PLATFORM != PLATFORM_WIN32
    case SIGSTOP:
    case SIGQUIT:
#endif

    case SIGTERM:
    case SIGINT:
        pGlobal->IsStop = true;
        break;
    }

    std::cout << "\nrecv signal. value:" << signalValue << " Global IsStop::" << pGlobal->IsStop << std::endl;
}

void ServerApp::Run()
{
    log4cplus::initialize();

    auto pGlobal = Global::GetInstance();
    while (!pGlobal->IsStop)
    {
        pGlobal->UpdateTime();
        _pThreadMgr->Update();
        DynamicPacketPool::GetInstance()->Update();
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }

    // 停止所有线程
    std::cout << "stoping all threads..." << std::endl;
    bool isStop;
    do
    {
        isStop = _pThreadMgr->IsStopAll();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    } while (!isStop);

    // 销毁线程
    std::cout << "destroy all threads..." << std::endl;
    _pThreadMgr->DestroyThread();
    bool isDestroy;
    do
    {
        isDestroy = _pThreadMgr->IsDestroyAll();
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
    } while (!isDestroy);

    // 
    _pThreadMgr->Dispose();

    log4cplus::deinitialize();
}
