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

// ScriptStruct KSNetTools.ReplicatedLog
// 0x5AF8C580
struct FReplicatedLog
{
	unsigned char                                      UnknownData00[0x5AF8C580];                                // 0x0000(0x5AF8C580) MISSED OFFSET
};

// ScriptStruct KSNetTools.ReplicatedLogItem
// 0x0000
struct FReplicatedLogItem
{

};

// ScriptStruct KSNetTools.ReplicatedPreloader
// 0x148520 (0x5AF55E20 - 0x5AE0D900)
struct FReplicatedPreloader : public FFastArraySerializer
{
	unsigned char                                      UnknownData00[0x148520];                                  // 0x5AE0D900(0x148520) MISSED OFFSET
};

// ScriptStruct KSNetTools.RepPreloaderItem
// 0x664280 (0x5AF8C300 - 0x5A928080)
struct FRepPreloaderItem : public FFastArraySerializerItem
{
	unsigned char                                      UnknownData00[0x664280];                                  // 0x5A928080(0x664280) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
