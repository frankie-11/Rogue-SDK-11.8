#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum SceneComponentPools.EPoolOverflowHandling
enum class EPoolOverflowHandling : uint8_t
{
	EPoolOverflowHandling__IgnoreNewRequest = 0,
	EPoolOverflowHandling__KillExistingRequest = 1,
	EPoolOverflowHandling__CreateStandaloneInstance = 2,
	EPoolOverflowHandling__EPoolOverflowHandling_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SceneComponentPools.PoolAttachmentInfo
// 0x5AEFFF80
struct FPoolAttachmentInfo
{
	unsigned char                                      UnknownData00[0x5AEFFF80];                                // 0x0000(0x5AEFFF80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
