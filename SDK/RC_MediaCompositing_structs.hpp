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

// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
// 0xA2280 (0x5AFA1A80 - 0x5AEFF800)
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0xA2280];                                   // 0x5AEFF800(0xA2280) MISSED OFFSET
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
// 0x51540 (0x5AFA1A00 - 0x5AF504C0)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x51540];                                   // 0x5AF504C0(0x51540) MISSED OFFSET
};

// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
// 0x5AFA1600
struct FMovieSceneMediaSectionParams
{
	unsigned char                                      UnknownData00[0x5AFA1600];                                // 0x0000(0x5AFA1600) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
