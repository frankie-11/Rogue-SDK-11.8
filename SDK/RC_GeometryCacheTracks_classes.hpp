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

// Class GeometryCacheTracks.MovieSceneGeometryCacheSection
// 0x5F900 (0x5B20A700 - 0x5B1AAE00)
class UMovieSceneGeometryCacheSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x5F900];                                   // 0x5B1AAE00(0x5F900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheSection");
		return ptr;
	}

};


// Class GeometryCacheTracks.MovieSceneGeometryCacheTrack
// 0x5B19C400
class UMovieSceneGeometryCacheTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x5B19C400];                                // 0x0000(0x5B19C400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCacheTracks.MovieSceneGeometryCacheTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
