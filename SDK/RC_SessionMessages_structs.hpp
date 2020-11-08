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

// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
// 0x0000
struct FSessionServiceLogUnsubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLogSubscribe
// 0x0000
struct FSessionServiceLogSubscribe
{

};

// ScriptStruct SessionMessages.SessionServiceLog
// 0x5B0D0E80
struct FSessionServiceLog
{
	unsigned char                                      UnknownData00[0x5B0D0E80];                                // 0x0000(0x5B0D0E80) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePong
// 0x5B0D0980
struct FSessionServicePong
{
	unsigned char                                      UnknownData00[0x5B0D0980];                                // 0x0000(0x5B0D0980) MISSED OFFSET
};

// ScriptStruct SessionMessages.SessionServicePing
// 0x5B0D0900
struct FSessionServicePing
{
	unsigned char                                      UnknownData00[0x5B0D0900];                                // 0x0000(0x5B0D0900) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
