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

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x5AF90B80
struct FMovieSceneGeometryCacheParams
{
	unsigned char                                      UnknownData00[0x5AF90B80];                                // 0x0000(0x5AF90B80) MISSED OFFSET
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x40640 (0x5AF90B00 - 0x5AF504C0)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x40640];                                   // 0x5AF504C0(0x40640) MISSED OFFSET
};

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0xFFFFFFFFFFFFFE80 (0x5AF90A00 - 0x5AF90B80)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
