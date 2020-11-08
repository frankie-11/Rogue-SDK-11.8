#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection
// 0x79580 (0x5B224380 - 0x5B1AAE00)
class UMovieSceneGeometryCollectionSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x79580];                                   // 0x5B1AAE00(0x79580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionSection");
		return ptr;
	}

};


// Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack
// 0x5B19FC40
class UMovieSceneGeometryCollectionTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x5B19FC40];                                // 0x0000(0x5B19FC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionTracks.MovieSceneGeometryCollectionTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
