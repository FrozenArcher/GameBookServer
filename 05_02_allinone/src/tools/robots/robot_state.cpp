#include "robot_state.h"
#include "libserver/packet.h"
#include "libserver/network_connector.h"
#include "robot.h"
#include "libserver/thread_mgr.h"

// 检测是否已断线
RobotStateType RobotState::Update()
{
    const auto state = GetState();
    if (state > RobotState_Login_Connectting && state != RobotState_Game_Connectting)
    {
        if (!_pParentObj->IsConnected())
        {
            return RobotState_Login_Connectting;
        }
    }

    return OnUpdate();
}

void RobotState::EnterState()
{
    // 每进入一个状态，通知 robot mgr
    Proto::RobotSyncState protoState;
    auto pState = protoState.add_states();
    pState->set_account(_pParentObj->GetAccount());
    pState->set_state(GetState());

    // 只发送给主线程
    auto pPacket = MessageSystemHelp::CreatePacket(Proto::MsgId::MI_RobotSyncState, 0);
    pPacket->SerializeToBuffer(protoState);
    ThreadMgr::GetInstance()->GetMessageSystem()->AddPacketToList(pPacket);

    OnEnterState();
}

void RobotState::LeaveState()
{
    OnLeaveState();
}
