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

// Class AudioMixer.SynthComponent
// 0xA498C80 (0x5B131400 - 0x50C98780)
class USynthComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA498C80];                                 // 0x50C98780(0xA498C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthComponent");
		return ptr;
	}


	void Stop();
	void start();
	void SetVolumeMultiplier();
	void SetSubmixSend();
	void IsPlaying();
};


// Class AudioMixer.AudioGenerator
// 0x0000
class UAudioGenerator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioGenerator");
		return ptr;
	}

};


// Class AudioMixer.AudioMixerBlueprintLibrary
// 0x0000
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.AudioMixerBlueprintLibrary");
		return ptr;
	}


	void TrimAudioCache();
	void StopRecordingOutput();
	void StopAnalyzingOutput();
	void StartRecordingOutput();
	void StartAnalyzingOutput();
	void SetBypassSourceEffectChainEntry();
	void ResumeRecordingOutput();
	void ReplaceSoundEffectSubmix();
	void RemoveSubmixEffectPresetAtIndex();
	void RemoveSubmixEffectPreset();
	void RemoveSourceEffectFromPresetChain();
	void RemoveMasterSubmixEffect();
	void PrimeSoundForPlayback();
	void PrimeSoundCueForPlayback();
	void PauseRecordingOutput();
	void GetPhaseForFrequencies();
	void GetNumberOfEntriesInSourceEffectChain();
	void GetMagnitudeForFrequencies();
	void ClearSubmixEffects();
	void ClearMasterSubmixEffects();
	void AddSubmixEffect();
	void AddSourceEffectToPresetChain();
	void AddMasterSubmixEffect();
};


// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// 0x5DC84E00
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5DC84E00];                                // 0x0000(0x5DC84E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings();
	void SetExternalSubmix();
};


// Class AudioMixer.SubmixEffectSubmixEQPreset
// 0x5DC84D00
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5DC84D00];                                // 0x0000(0x5DC84D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectSubmixEQPreset");
		return ptr;
	}


	void SetSettings();
};


// Class AudioMixer.SubmixEffectReverbPreset
// 0x5DC84A80
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5DC84A80];                                // 0x0000(0x5DC84A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect();
	void SetSettings();
};


// Class AudioMixer.SubmixEffectReverbFastPreset
// 0x5DC84800
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5DC84800];                                // 0x0000(0x5DC84800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SubmixEffectReverbFastPreset");
		return ptr;
	}


	void SetSettingsWithReverbEffect();
	void SetSettings();
};


// Class AudioMixer.SynthSound
// 0x5DC87280
class USynthSound : public USoundWaveProcedural
{
public:
	unsigned char                                      UnknownData00[0x5DC87280];                                // 0x0000(0x5DC87280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioMixer.SynthSound");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
