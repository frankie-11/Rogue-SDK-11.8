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

// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FTickAnimationSharingFunction : public FTickFunction
{

};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// 0x5AF8C680
struct FAnimationSharingScalability
{
	unsigned char                                      UnknownData00[0x5AF8C680];                                // 0x0000(0x5AF8C680) MISSED OFFSET
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// 0x5AF8DE80
struct FPerSkeletonAnimationSharingSetup
{
	unsigned char                                      UnknownData00[0x5AF8DE80];                                // 0x0000(0x5AF8DE80) MISSED OFFSET
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// 0x5AF8DF80
struct FAnimationStateEntry
{
	unsigned char                                      UnknownData00[0x5AF8DF80];                                // 0x0000(0x5AF8DF80) MISSED OFFSET
};

// ScriptStruct AnimationSharing.AnimationSetup
// 0x5AF8E000
struct FAnimationSetup
{
	unsigned char                                      UnknownData00[0x5AF8E000];                                // 0x0000(0x5AF8E000) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
