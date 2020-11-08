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

// Class TemplateSequence.TemplateSequence
// 0x1E00 (0x5B22E800 - 0x5B22CA00)
class UTemplateSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x1E00];                                    // 0x5B22CA00(0x1E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequence");
		return ptr;
	}

};


// Class TemplateSequence.CameraAnimationSequence
// 0xFFFFFFFFA4DD1800 (0x0000 - 0x5B22E800)
class UCameraAnimationSequence : public UTemplateSequence
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.CameraAnimationSequence");
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceActor
// 0x291C00 (0x5B22FC00 - 0x5AF9E000)
class ATemplateSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x291C00];                                  // 0x5AF9E000(0x291C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceActor");
		return ptr;
	}


	void SetSequence();
	void SetBinding();
	void LoadSequence();
	void GetSequencePlayer();
	void GetSequence();
};


// Class TemplateSequence.TemplateSequencePlayer
// 0xFFFFFFFFA4DD1600 (0x0000 - 0x5B22EA00)
class UTemplateSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequencePlayer");
		return ptr;
	}


	void CreateTemplateSequencePlayer();
};


// Class TemplateSequence.TemplateSequenceSection
// 0xFFFFFFFFA4DBF280 (0x0000 - 0x5B240D80)
class UTemplateSequenceSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceSection");
		return ptr;
	}

};


// Class TemplateSequence.TemplateSequenceTrack
// 0xFFFFFFFFA4DCCDA0 (0x0000 - 0x5B233260)
class UTemplateSequenceTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TemplateSequence.TemplateSequenceTrack");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
