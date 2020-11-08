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

// Class MediaCompositing.MovieSceneMediaPlayerPropertySection
// 0x80D80 (0x5B22BB80 - 0x5B1AAE00)
class UMovieSceneMediaPlayerPropertySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80D80];                                   // 0x5B1AAE00(0x80D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaPlayerPropertySection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack
// 0xFFFFFFFFA4E17600 (0x0000 - 0x5B1E8A00)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaPlayerPropertyTrack");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x80A00 (0x5B22B800 - 0x5B1AAE00)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x80A00];                                   // 0x5B1AAE00(0x80A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return ptr;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x5B233940
class UMovieSceneMediaTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x5B233940];                                // 0x0000(0x5B233940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
