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

// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
// 0x3DE80 (0x5B1E8C80 - 0x5B1AAE00)
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x3DE80];                                   // 0x5B1AAE00(0x3DE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSection");
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
// 0x5B1E8C00
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1E8C00];                                // 0x0000(0x5B1E8C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection");
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
// 0xFFFFFFFFA4E17400 (0x0000 - 0x5B1E8C00)
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation");
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
// 0xFFFFFFFFA4E17400 (0x0000 - 0x5B1E8C00)
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole");
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
// 0xFFFFFFFFA4E17400 (0x0000 - 0x5B1E8C00)
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties");
		return ptr;
	}

};


// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
// 0xFFFFFFFFFFFAEC80 (0x5B197680 - 0x5B1E8A00)
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLinkMovieScene.MovieSceneLiveLinkTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
