#pragma once
#include "message_list.h"
#include "system.h"

class IMessageSystem :virtual public ISystem
{
public:
	~IMessageSystem();
	virtual void RegisterMsgFuntion() = 0;

	void AttachCallBackHander(MessageCallBackFunctionInfo* pCallback);
	bool IsFollowMsgId(Packet* packet) const;
	void ProcessPacket(Packet* packet) const;
	static void DispatchPacket(Packet* pPacket);
	static void SendPacket(Packet* pPacket);

protected:
	MessageCallBackFunctionInfo* _pCallBackFuns{ nullptr };
};

