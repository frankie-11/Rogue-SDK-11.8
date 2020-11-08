#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectFrameMessage
// 0x5B0D8F80
struct FLiveLinkSubjectFrameMessage
{
	unsigned char                                      UnknownData00[0x5B0D8F80];                                // 0x0000(0x5B0D8F80) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkSubjectDataMessage
// 0x5B0D8E80
struct FLiveLinkSubjectDataMessage
{
	unsigned char                                      UnknownData00[0x5B0D8E80];                                // 0x0000(0x5B0D8E80) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkClearSubject
// 0x5B0D8E00
struct FLiveLinkClearSubject
{
	unsigned char                                      UnknownData00[0x5B0D8E00];                                // 0x0000(0x5B0D8E00) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkHeartbeatMessage
// 0x0000
struct FLiveLinkHeartbeatMessage
{

};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkConnectMessage
// 0x5B0D8D80
struct FLiveLinkConnectMessage
{
	unsigned char                                      UnknownData00[0x5B0D8D80];                                // 0x0000(0x5B0D8D80) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPongMessage
// 0x5B0D8B00
struct FLiveLinkPongMessage
{
	unsigned char                                      UnknownData00[0x5B0D8B00];                                // 0x0000(0x5B0D8B00) MISSED OFFSET
};

// ScriptStruct LiveLinkMessageBusFramework.LiveLinkPingMessage
// 0x5B0D8A00
struct FLiveLinkPingMessage
{
	unsigned char                                      UnknownData00[0x5B0D8A00];                                // 0x0000(0x5B0D8A00) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
