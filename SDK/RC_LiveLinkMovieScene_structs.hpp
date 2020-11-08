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

// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
// 0x82180 (0x5AF81980 - 0x5AEFF800)
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x82180];                                   // 0x5AEFF800(0x82180) MISSED OFFSET
};

// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
// 0x5AF51BE0
struct FLiveLinkSubSectionData
{
	unsigned char                                      UnknownData00[0x5AF51BE0];                                // 0x0000(0x5AF51BE0) MISSED OFFSET
};

// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
// 0x5AF81A80
struct FLiveLinkPropertyData
{
	unsigned char                                      UnknownData00[0x5AF81A80];                                // 0x0000(0x5AF81A80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
