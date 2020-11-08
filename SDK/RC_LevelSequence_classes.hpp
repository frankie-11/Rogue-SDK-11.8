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

// Class LevelSequence.LevelSequenceActor
// 0x95600 (0x5B033600 - 0x5AF9E000)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x95600];                                   // 0x5AF9E000(0x95600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return ptr;
	}


	void ShowBurnin();
	void SetSequence();
	void SetReplicatePlayback();
	void SetEventReceivers();
	void SetBindingByTag();
	void SetBinding();
	void ResetBindings();
	void ResetBinding();
	void RemoveBindingByTag();
	void RemoveBinding();
	void OnLevelSequenceLoaded__DelegateSignature();
	void LoadSequence();
	void HideBurnin();
	void GetSequencePlayer();
	void GetSequence();
	void FindNamedBindings();
	void FindNamedBinding();
	void AddBindingByTag();
	void AddBinding();
};


// Class LevelSequence.DefaultLevelSequenceInstanceData
// 0x5DCA9800
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCA9800];                                // 0x0000(0x5DCA9800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.DefaultLevelSequenceInstanceData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceMetaData
// 0x0000
class ULevelSequenceMetaData : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMetaData");
		return ptr;
	}

};


// Class LevelSequence.LevelSequence
// 0x2A7EA80 (0x5DCAB480 - 0x5B22CA00)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x2A7EA80];                                 // 0x5B22CA00(0x2A7EA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequence");
		return ptr;
	}


	void RemoveMetaDataByClass();
	void FindOrAddMetaDataByClass();
	void FindMetaDataByClass();
	void CopyMetaData();
};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0000
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return ptr;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x5DCAB280
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCAB280];                                // 0x0000(0x5DCAB280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return ptr;
	}


	void SetBurnIn();
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x30BAE80 (0x5DCAB100 - 0x5ABF0280)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x30BAE80];                                 // 0x5ABF0280(0x30BAE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return ptr;
	}


	void SetSettings();
	void GetSettingsClass();
};


// Class LevelSequence.LevelSequenceDirector
// 0x5DCAB080
class ULevelSequenceDirector : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCAB080];                                // 0x0000(0x5DCAB080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceDirector");
		return ptr;
	}


	void OnCreated();
};


// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
// 0xFFFFFFFFA2410B40 (0x0000 - 0x5DBEF4C0)
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LegacyLevelSequenceDirectorBlueprint");
		return ptr;
	}

};


// Class LevelSequence.LevelSequencePlayer
// 0x2A7BD00 (0x5DCAA700 - 0x5B22EA00)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	unsigned char                                      UnknownData00[0x2A7BD00];                                 // 0x5B22EA00(0x2A7BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return ptr;
	}


	void GetActiveCameraComponent();
	void CreateLevelSequencePlayer();
};


// Class LevelSequence.LevelSequenceMediaController
// 0x2D0E500 (0x5DCAC500 - 0x5AF9E000)
class ALevelSequenceMediaController : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D0E500];                                 // 0x5AF9E000(0x2D0E500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LevelSequence.LevelSequenceMediaController");
		return ptr;
	}


	void SynchronizeToServer();
	void Play();
	void OnRep_ServerStartTimeSeconds();
	void GetSequence();
	void GetMediaComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
