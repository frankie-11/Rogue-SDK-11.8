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

// ScriptStruct EngineMessages.EngineServiceNotification
// 0x5B02F500
struct FEngineServiceNotification
{
	unsigned char                                      UnknownData00[0x5B02F500];                                // 0x0000(0x5B02F500) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceTerminate
// 0x5B02F480
struct FEngineServiceTerminate
{
	unsigned char                                      UnknownData00[0x5B02F480];                                // 0x0000(0x5B02F480) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceExecuteCommand
// 0x5B02F380
struct FEngineServiceExecuteCommand
{
	unsigned char                                      UnknownData00[0x5B02F380];                                // 0x0000(0x5B02F380) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthGrant
// 0x5B02F280
struct FEngineServiceAuthGrant
{
	unsigned char                                      UnknownData00[0x5B02F280];                                // 0x0000(0x5B02F280) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServiceAuthDeny
// 0x5B02F180
struct FEngineServiceAuthDeny
{
	unsigned char                                      UnknownData00[0x5B02F180];                                // 0x0000(0x5B02F180) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePong
// 0x5B02EE00
struct FEngineServicePong
{
	unsigned char                                      UnknownData00[0x5B02EE00];                                // 0x0000(0x5B02EE00) MISSED OFFSET
};

// ScriptStruct EngineMessages.EngineServicePing
// 0x0000
struct FEngineServicePing
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
