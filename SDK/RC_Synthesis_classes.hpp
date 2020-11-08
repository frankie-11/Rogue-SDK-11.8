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

// Class Synthesis.ModularSynthPresetBank
// 0x5B234AC0
class UModularSynthPresetBank : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B234AC0];                                // 0x0000(0x5B234AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthPresetBank");
		return ptr;
	}

};


// Class Synthesis.ModularSynthLibrary
// 0x0000
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthLibrary");
		return ptr;
	}


	void AddModularSynthPresetToBankAsset();
};


// Class Synthesis.ModularSynthComponent
// 0x115E80 (0x5B247280 - 0x5B131400)
class UModularSynthComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x115E80];                                  // 0x5B131400(0x115E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.ModularSynthComponent");
		return ptr;
	}


	void SetSynthPreset();
	void SetSustainGain();
	void SetStereoDelayWetlevel();
	void SetStereoDelayTime();
	void SetStereoDelayRatio();
	void SetStereoDelayMode();
	void SetStereoDelayIsEnabled();
	void SetStereoDelayFeedback();
	void SetSpread();
	void SetReleaseTime();
	void SetPortamento();
	void SetPitchBend();
	void SetPan();
	void SetOscType();
	void SetOscSync();
	void SetOscSemitones();
	void SetOscPulsewidth();
	void SetOscOctave();
	void SetOscGainMod();
	void SetOscGain();
	void SetOscFrequencyMod();
	void SetOscCents();
	void SetModEnvSustainGain();
	void SetModEnvReleaseTime();
	void SetModEnvPatch();
	void SetModEnvInvert();
	void SetModEnvDepth();
	void SetModEnvDecayTime();
	void SetModEnvBiasPatch();
	void SetModEnvBiasInvert();
	void SetModEnvAttackTime();
	void SetLFOType();
	void SetLFOPatch();
	void SetLFOMode();
	void SetLFOGainMod();
	void SetLFOGain();
	void SetLFOFrequencyMod();
	void SetLFOFrequency();
	void SetGainDb();
	void SetFilterType();
	void SetFilterQMod();
	void SetFilterQ();
	void SetFilterFrequencyMod();
	void SetFilterFrequency();
	void SetFilterAlgorithm();
	void SetEnableUnison();
	void SetEnableRetrigger();
	void SetEnablePolyphony();
	void SetEnablePatch();
	void SetEnableLegato();
	void SetDecayTime();
	void SetChorusFrequency();
	void SetChorusFeedback();
	void SetChorusEnabled();
	void SetChorusDepth();
	void SetAttackTime();
	void NoteOn();
	void NoteOff();
	void CreatePatch();
};


// Class Synthesis.SourceEffectBitCrusherPreset
// 0x5B247180
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B247180];                                // 0x0000(0x5B247180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectBitCrusherPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectChorusPreset
// 0x5B247080
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B247080];                                // 0x0000(0x5B247080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectChorusPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectDynamicsProcessorPreset
// 0x5B246F80
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246F80];                                // 0x0000(0x5B246F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectDynamicsProcessorPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.EnvelopeFollowerListener
// 0xA697080 (0x5B246F00 - 0x50BAFE80)
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA697080];                                 // 0x50BAFE80(0xA697080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.EnvelopeFollowerListener");
		return ptr;
	}

};


// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// 0x5B246D00
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246D00];                                // 0x0000(0x5B246D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEnvelopeFollowerPreset");
		return ptr;
	}


	void UnregisterEnvelopeFollowerListener();
	void SetSettings();
	void RegisterEnvelopeFollowerListener();
};


// Class Synthesis.SourceEffectEQPreset
// 0x5B246C00
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246C00];                                // 0x0000(0x5B246C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectEQPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectFilterPreset
// 0x5B246B00
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246B00];                                // 0x0000(0x5B246B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFilterPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectFoldbackDistortionPreset
// 0x5B246A00
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246A00];                                // 0x0000(0x5B246A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectFoldbackDistortionPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectMidSideSpreaderPreset
// 0x5B246900
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246900];                                // 0x0000(0x5B246900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectMidSideSpreaderPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectPannerPreset
// 0x5B246800
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246800];                                // 0x0000(0x5B246800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPannerPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectPhaserPreset
// 0x5B246700
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246700];                                // 0x0000(0x5B246700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectPhaserPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectRingModulationPreset
// 0x5B246600
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246600];                                // 0x0000(0x5B246600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectRingModulationPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectSimpleDelayPreset
// 0x5B246500
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246500];                                // 0x0000(0x5B246500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectSimpleDelayPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectStereoDelayPreset
// 0x5B246400
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B246400];                                // 0x0000(0x5B246400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectStereoDelayPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SourceEffectWaveShaperPreset
// 0x5B248400
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	unsigned char                                      UnknownData00[0x5B248400];                                // 0x0000(0x5B248400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SourceEffectWaveShaperPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.AudioImpulseResponse
// 0x5B2342A0
class UAudioImpulseResponse : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2342A0];                                // 0x0000(0x5B2342A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.AudioImpulseResponse");
		return ptr;
	}

};


// Class Synthesis.SubmixEffectConvolutionReverbPreset
// 0x5B247E80
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5B247E80];                                // 0x0000(0x5B247E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectConvolutionReverbPreset");
		return ptr;
	}


	void SetSettings();
	void SetImpulseResponse();
};


// Class Synthesis.SubmixEffectDelayPreset
// 0x5B247B80
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5B247B80];                                // 0x0000(0x5B247B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectDelayPreset");
		return ptr;
	}


	void SetSettings();
	void SetInterpolationTime();
	void SetDelay();
	void GetMaxDelayInMilliseconds();
};


// Class Synthesis.SubmixEffectFilterPreset
// 0x5B247780
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5B247780];                                // 0x0000(0x5B247780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFilterPreset");
		return ptr;
	}


	void SetSettings();
	void SetFilterType();
	void SetFilterQMod();
	void SetFilterQ();
	void SetFilterCutoffFrequencyMod();
	void SetFilterCutoffFrequency();
	void SetFilterAlgorithm();
};


// Class Synthesis.SubmixEffectFlexiverbPreset
// 0x5B247600
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5B247600];                                // 0x0000(0x5B247600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectFlexiverbPreset");
		return ptr;
	}


	void SetSettings();
};


// Class Synthesis.SubmixEffectTapDelayPreset
// 0x5B249180
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	unsigned char                                      UnknownData00[0x5B249180];                                // 0x0000(0x5B249180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SubmixEffectTapDelayPreset");
		return ptr;
	}


	void SetTap();
	void SetSettings();
	void SetInterpolationTime();
	void RemoveTap();
	void GetTapIds();
	void GetTap();
	void GetMaxDelayInMilliseconds();
	void AddTap();
};


// Class Synthesis.Synth2DSlider
// 0x7C0680 (0x5B248680 - 0x5AA88000)
class USynth2DSlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x7C0680];                                  // 0x5AA88000(0x7C0680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.Synth2DSlider");
		return ptr;
	}


	void SetValue();
	void SetStepSize();
	void SetSliderHandleColor();
	void SetLocked();
	void SetIndentHandle();
	void GetValue();
};


// Class Synthesis.GranularSynth
// 0x118380 (0x5B249780 - 0x5B131400)
class UGranularSynth : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x118380];                                  // 0x5B131400(0x118380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.GranularSynth");
		return ptr;
	}


	void SetSustainGain();
	void SetSoundWave();
	void SetScrubMode();
	void SetReleaseTimeMsec();
	void SetPlayheadTime();
	void SetPlaybackSpeed();
	void SetGrainVolume();
	void SetGrainsPerSecond();
	void SetGrainProbability();
	void SetGrainPitch();
	void SetGrainPan();
	void SetGrainEnvelopeType();
	void SetGrainDuration();
	void SetDecayTime();
	void SetAttackTime();
	void NoteOn();
	void NoteOff();
	void IsLoaded();
	void GetSampleDuration();
	void GetCurrentPlayheadTime();
};


// Class Synthesis.MonoWaveTableSynthPreset
// 0x5B24B580
class UMonoWaveTableSynthPreset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B24B580];                                // 0x0000(0x5B24B580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.MonoWaveTableSynthPreset");
		return ptr;
	}

};


// Class Synthesis.SynthComponentMonoWaveTable
// 0x11A500 (0x5B24B900 - 0x5B131400)
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x11A500];                                  // 0x5B131400(0x11A500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthComponentMonoWaveTable");
		return ptr;
	}


	void SetWaveTablePosition();
	void SetSustainPedalState();
	void SetPosLfoType();
	void SetPosLfoFrequency();
	void SetPosLfoDepth();
	void SetPositionEnvelopeSustainGain();
	void SetPositionEnvelopeReleaseTime();
	void SetPositionEnvelopeInvert();
	void SetPositionEnvelopeDepth();
	void SetPositionEnvelopeDecayTime();
	void SetPositionEnvelopeBiasInvert();
	void SetPositionEnvelopeBiasDepth();
	void SetPositionEnvelopeAttackTime();
	void SetLowPassFilterResonance();
	void SetLowPassFilterFrequency();
	void SetFrequencyWithMidiNote();
	void SetFrequencyPitchBend();
	void SetFrequency();
	void SetFilterEnvelopeSustainGain();
	void SetFilterEnvelopeReleaseTime();
	void SetFilterEnvelopenDecayTime();
	void SetFilterEnvelopeInvert();
	void SetFilterEnvelopeDepth();
	void SetFilterEnvelopeBiasInvert();
	void SetFilterEnvelopeBiasDepth();
	void SetFilterEnvelopeAttackTime();
	void SetCurveValue();
	void SetCurveTangent();
	void SetCurveInterpolationType();
	void SetAmpEnvelopeSustainGain();
	void SetAmpEnvelopeReleaseTime();
	void SetAmpEnvelopeInvert();
	void SetAmpEnvelopeDepth();
	void SetAmpEnvelopeDecayTime();
	void SetAmpEnvelopeBiasInvert();
	void SetAmpEnvelopeBiasDepth();
	void SetAmpEnvelopeAttackTime();
	void RefreshWaveTable();
	void RefreshAllWaveTables();
	void NoteOn();
	void NoteOff();
	void GetNumTableEntries();
	void GetMaxTableIndex();
	void GetKeyFrameValuesForTable();
	void GetCurveTangent();
};


// Class Synthesis.SynthSamplePlayer
// 0x11BE80 (0x5B24D280 - 0x5B131400)
class USynthSamplePlayer : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x11BE80];                                  // 0x5B131400(0x11BE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthSamplePlayer");
		return ptr;
	}


	void SetSoundWave();
	void SetScrubTimeWidth();
	void SetScrubMode();
	void SetPitch();
	void SeekToTime();
	void IsLoaded();
	void GetSampleDuration();
	void GetCurrentPlaybackProgressTime();
	void GetCurrentPlaybackProgressPercent();
};


// Class Synthesis.SynthKnob
// 0x7C4880 (0x5B24C880 - 0x5AA88000)
class USynthKnob : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x7C4880];                                  // 0x5AA88000(0x7C4880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Synthesis.SynthKnob");
		return ptr;
	}


	void SetValue();
	void SetStepSize();
	void SetLocked();
	void GetValue();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
