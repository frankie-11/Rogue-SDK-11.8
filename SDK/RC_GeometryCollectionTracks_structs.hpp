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

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionParams
// 0x5AF92480
struct FMovieSceneGeometryCollectionParams
{
	unsigned char                                      UnknownData00[0x5AF92480];                                // 0x0000(0x5AF92480) MISSED OFFSET
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplate
// 0x41F40 (0x5AF92400 - 0x5AF504C0)
struct FMovieSceneGeometryCollectionSectionTemplate : public FMovieSceneEvalTemplate
{
	unsigned char                                      UnknownData00[0x41F40];                                   // 0x5AF504C0(0x41F40) MISSED OFFSET
};

// ScriptStruct GeometryCollectionTracks.MovieSceneGeometryCollectionSectionTemplateParameters
// 0xFFFFFFFFFFFFFE80 (0x5AF92300 - 0x5AF92480)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
