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

// Enum LiveLink.ELiveLinkAxis
enum class ELiveLinkAxis : uint8_t
{
	ELiveLinkAxis__X               = 0,
	ELiveLinkAxis__Y               = 1,
	ELiveLinkAxis__Z               = 2,
	ELiveLinkAxis__XNeg            = 3,
	ELiveLinkAxis__YNeg            = 4,
	ELiveLinkAxis__ZNeg            = 5,
	ELiveLinkAxis__ELiveLinkAxis_MAX = 6
};


// Enum LiveLink.ELiveLinkTimecodeProviderEvaluationType
enum class ELiveLinkTimecodeProviderEvaluationType : uint8_t
{
	ELiveLinkTimecodeProviderEvaluationType__Lerp = 0,
	ELiveLinkTimecodeProviderEvaluationType__Nearest = 1,
	ELiveLinkTimecodeProviderEvaluationType__Latest = 2,
	ELiveLinkTimecodeProviderEvaluationType__ELiveLinkTimecodeProviderEvaluationType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct LiveLink.AnimNode_LiveLinkPose
// 0x5AEFFD00
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
	unsigned char                                      UnknownData00[0x5AEFFD00];                                // 0x0000(0x5AEFFD00) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkInstanceProxy
// 0x5AEFFC80
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
	unsigned char                                      UnknownData00[0x5AEFFC80];                                // 0x0000(0x5AEFFC80) MISSED OFFSET
};

// ScriptStruct LiveLink.ProviderPollResult
// 0x5AEFFB00
struct FProviderPollResult
{
	unsigned char                                      UnknownData00[0x5AEFFB00];                                // 0x0000(0x5AEFFB00) MISSED OFFSET
};

// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
// 0x0000
struct FLiveLinkRetargetAssetReference
{

};

// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
// 0x5AF51D20
struct FLiveLinkRoleProjectSetting
{
	unsigned char                                      UnknownData00[0x5AF51D20];                                // 0x0000(0x5AF51D20) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
