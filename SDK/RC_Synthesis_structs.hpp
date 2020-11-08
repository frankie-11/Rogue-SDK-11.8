#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Synthesis.ESynth1PatchDestination
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain = 0,
	ESynth1PatchDestination__Osc1Frequency = 1,
	ESynth1PatchDestination__Osc1Pulsewidth = 2,
	ESynth1PatchDestination__Osc2Gain = 3,
	ESynth1PatchDestination__Osc2Frequency = 4,
	ESynth1PatchDestination__Osc2Pulsewidth = 5,
	ESynth1PatchDestination__FilterFrequency = 6,
	ESynth1PatchDestination__FilterQ = 7,
	ESynth1PatchDestination__Gain  = 8,
	ESynth1PatchDestination__Pan   = 9,
	ESynth1PatchDestination__LFO1Frequency = 10,
	ESynth1PatchDestination__LFO1Gain = 11,
	ESynth1PatchDestination__LFO2Frequency = 12,
	ESynth1PatchDestination__LFO2Gain = 13,
	ESynth1PatchDestination__Count = 14,
	ESynth1PatchDestination__ESynth1PatchDestination_MAX = 15
};


// Enum Synthesis.ESynth1PatchSource
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1       = 0,
	ESynth1PatchSource__LFO2       = 1,
	ESynth1PatchSource__Envelope   = 2,
	ESynth1PatchSource__BiasEnvelope = 3,
	ESynth1PatchSource__Count      = 4,
	ESynth1PatchSource__ESynth1PatchSource_MAX = 5
};


// Enum Synthesis.ESynthStereoDelayMode
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal  = 0,
	ESynthStereoDelayMode__Cross   = 1,
	ESynthStereoDelayMode__PingPong = 2,
	ESynthStereoDelayMode__Count   = 3,
	ESynthStereoDelayMode__ESynthStereoDelayMode_MAX = 4
};


// Enum Synthesis.ESynthFilterAlgorithm
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole = 0,
	ESynthFilterAlgorithm__StateVariable = 1,
	ESynthFilterAlgorithm__Ladder  = 2,
	ESynthFilterAlgorithm__Count   = 3,
	ESynthFilterAlgorithm__ESynthFilterAlgorithm_MAX = 4
};


// Enum Synthesis.ESynthFilterType
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass      = 0,
	ESynthFilterType__HighPass     = 1,
	ESynthFilterType__BandPass     = 2,
	ESynthFilterType__BandStop     = 3,
	ESynthFilterType__Count        = 4,
	ESynthFilterType__ESynthFilterType_MAX = 5
};


// Enum Synthesis.ESynthModEnvBiasPatch
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq = 7,
	ESynthModEnvBiasPatch__Count   = 8,
	ESynthModEnvBiasPatch__ESynthModEnvBiasPatch_MAX = 9
};


// Enum Synthesis.ESynthModEnvPatch
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone = 0,
	ESynthModEnvPatch__PatchToOscFreq = 1,
	ESynthModEnvPatch__PatchToFilterFreq = 2,
	ESynthModEnvPatch__PatchToFilterQ = 3,
	ESynthModEnvPatch__PatchToLFO1Gain = 4,
	ESynthModEnvPatch__PatchToLFO2Gain = 5,
	ESynthModEnvPatch__PatchToLFO1Freq = 6,
	ESynthModEnvPatch__PatchToLFO2Freq = 7,
	ESynthModEnvPatch__Count       = 8,
	ESynthModEnvPatch__ESynthModEnvPatch_MAX = 9
};


// Enum Synthesis.ESynthLFOPatchType
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone = 0,
	ESynthLFOPatchType__PatchToGain = 1,
	ESynthLFOPatchType__PatchToOscFreq = 2,
	ESynthLFOPatchType__PatchToFilterFreq = 3,
	ESynthLFOPatchType__PatchToFilterQ = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth = 5,
	ESynthLFOPatchType__PatchToOscPan = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain = 8,
	ESynthLFOPatchType__Count      = 9,
	ESynthLFOPatchType__ESynthLFOPatchType_MAX = 10
};


// Enum Synthesis.ESynthLFOMode
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync            = 0,
	ESynthLFOMode__OneShot         = 1,
	ESynthLFOMode__Free            = 2,
	ESynthLFOMode__Count           = 3,
	ESynthLFOMode__ESynthLFOMode_MAX = 4
};


// Enum Synthesis.ESynthLFOType
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine            = 0,
	ESynthLFOType__UpSaw           = 1,
	ESynthLFOType__DownSaw         = 2,
	ESynthLFOType__Square          = 3,
	ESynthLFOType__Triangle        = 4,
	ESynthLFOType__Exponential     = 5,
	ESynthLFOType__RandomSampleHold = 6,
	ESynthLFOType__Count           = 7,
	ESynthLFOType__ESynthLFOType_MAX = 8
};


// Enum Synthesis.ESynth1OscType
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine           = 0,
	ESynth1OscType__Saw            = 1,
	ESynth1OscType__Triangle       = 2,
	ESynth1OscType__Square         = 3,
	ESynth1OscType__Noise          = 4,
	ESynth1OscType__Count          = 5,
	ESynth1OscType__ESynth1OscType_MAX = 6
};


// Enum Synthesis.ESourceEffectDynamicsPeakMode
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESourceEffectDynamicsPeakMode__Peak = 2,
	ESourceEffectDynamicsPeakMode__Count = 3,
	ESourceEffectDynamicsPeakMode__ESourceEffectDynamicsPeakMode_MAX = 4
};


// Enum Synthesis.ESourceEffectDynamicsProcessorType
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor = 0,
	ESourceEffectDynamicsProcessorType__Limiter = 1,
	ESourceEffectDynamicsProcessorType__Expander = 2,
	ESourceEffectDynamicsProcessorType__Gate = 3,
	ESourceEffectDynamicsProcessorType__Count = 4,
	ESourceEffectDynamicsProcessorType__ESourceEffectDynamicsProcessorType_MAX = 5
};


// Enum Synthesis.EEnvelopeFollowerPeakMode
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared = 1,
	EEnvelopeFollowerPeakMode__Peak = 2,
	EEnvelopeFollowerPeakMode__Count = 3,
	EEnvelopeFollowerPeakMode__EEnvelopeFollowerPeakMode_MAX = 4
};


// Enum Synthesis.ESourceEffectFilterType
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass = 0,
	ESourceEffectFilterType__HighPass = 1,
	ESourceEffectFilterType__BandPass = 2,
	ESourceEffectFilterType__BandStop = 3,
	ESourceEffectFilterType__Count = 4,
	ESourceEffectFilterType__ESourceEffectFilterType_MAX = 5
};


// Enum Synthesis.ESourceEffectFilterCircuit
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole = 0,
	ESourceEffectFilterCircuit__StateVariable = 1,
	ESourceEffectFilterCircuit__Ladder = 2,
	ESourceEffectFilterCircuit__Count = 3,
	ESourceEffectFilterCircuit__ESourceEffectFilterCircuit_MAX = 4
};


// Enum Synthesis.EStereoChannelMode
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide    = 0,
	EStereoChannelMode__LeftRight  = 1,
	EStereoChannelMode__count      = 2,
	EStereoChannelMode__EStereoChannelMode_MAX = 3
};


// Enum Synthesis.EPhaserLFOType
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine           = 0,
	EPhaserLFOType__UpSaw          = 1,
	EPhaserLFOType__DownSaw        = 2,
	EPhaserLFOType__Square         = 3,
	EPhaserLFOType__Triangle       = 4,
	EPhaserLFOType__Exponential    = 5,
	EPhaserLFOType__RandomSampleHold = 6,
	EPhaserLFOType__Count          = 7,
	EPhaserLFOType__EPhaserLFOType_MAX = 8
};


// Enum Synthesis.ERingModulatorTypeSourceEffect
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine = 0,
	ERingModulatorTypeSourceEffect__Saw = 1,
	ERingModulatorTypeSourceEffect__Triangle = 2,
	ERingModulatorTypeSourceEffect__Square = 3,
	ERingModulatorTypeSourceEffect__Count = 4,
	ERingModulatorTypeSourceEffect__ERingModulatorTypeSourceEffect_MAX = 5
};


// Enum Synthesis.EStereoDelaySourceEffect
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal = 0,
	EStereoDelaySourceEffect__Cross = 1,
	EStereoDelaySourceEffect__PingPong = 2,
	EStereoDelaySourceEffect__Count = 3,
	EStereoDelaySourceEffect__EStereoDelaySourceEffect_MAX = 4
};


// Enum Synthesis.ESubmixEffectConvolutionReverbBlockSize
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256 = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512 = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024 = 2,
	ESubmixEffectConvolutionReverbBlockSize__ESubmixEffectConvolutionReverbBlockSize_MAX = 3
};


// Enum Synthesis.ESubmixFilterAlgorithm
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole = 0,
	ESubmixFilterAlgorithm__StateVariable = 1,
	ESubmixFilterAlgorithm__Ladder = 2,
	ESubmixFilterAlgorithm__Count  = 3,
	ESubmixFilterAlgorithm__ESubmixFilterAlgorithm_MAX = 4
};


// Enum Synthesis.ESubmixFilterType
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass     = 0,
	ESubmixFilterType__HighPass    = 1,
	ESubmixFilterType__BandPass    = 2,
	ESubmixFilterType__BandStop    = 3,
	ESubmixFilterType__Count       = 4,
	ESubmixFilterType__ESubmixFilterType_MAX = 5
};


// Enum Synthesis.ETapLineMode
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel    = 0,
	ETapLineMode__Panning          = 1,
	ETapLineMode__Disabled         = 2,
	ETapLineMode__ETapLineMode_MAX = 3
};


// Enum Synthesis.EGranularSynthSeekType
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning = 0,
	EGranularSynthSeekType__FromCurrentPosition = 1,
	EGranularSynthSeekType__Count  = 2,
	EGranularSynthSeekType__EGranularSynthSeekType_MAX = 3
};


// Enum Synthesis.EGranularSynthEnvelopeType
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular = 0,
	EGranularSynthEnvelopeType__Triangle = 1,
	EGranularSynthEnvelopeType__DownwardTriangle = 2,
	EGranularSynthEnvelopeType__UpwardTriangle = 3,
	EGranularSynthEnvelopeType__ExponentialDecay = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease = 5,
	EGranularSynthEnvelopeType__Gaussian = 6,
	EGranularSynthEnvelopeType__Hanning = 7,
	EGranularSynthEnvelopeType__Lanczos = 8,
	EGranularSynthEnvelopeType__Cosine = 9,
	EGranularSynthEnvelopeType__CosineSquared = 10,
	EGranularSynthEnvelopeType__Welch = 11,
	EGranularSynthEnvelopeType__Blackman = 12,
	EGranularSynthEnvelopeType__BlackmanHarris = 13,
	EGranularSynthEnvelopeType__Count = 14,
	EGranularSynthEnvelopeType__EGranularSynthEnvelopeType_MAX = 15
};


// Enum Synthesis.CurveInterpolationType
enum class ECurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP = 0,
	CurveInterpolationType__LINEAR = 1,
	CurveInterpolationType__CONSTANT = 2,
	CurveInterpolationType__CurveInterpolationType_MAX = 3
};


// Enum Synthesis.ESamplePlayerSeekType
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning = 0,
	ESamplePlayerSeekType__FromCurrentPosition = 1,
	ESamplePlayerSeekType__FromEnd = 2,
	ESamplePlayerSeekType__Count   = 3,
	ESamplePlayerSeekType__ESamplePlayerSeekType_MAX = 4
};


// Enum Synthesis.ESynthKnobSize
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium         = 0,
	ESynthKnobSize__Large          = 1,
	ESynthKnobSize__Count          = 2,
	ESynthKnobSize__ESynthKnobSize_MAX = 3
};


// Enum Synthesis.ESynthSlateColorStyle
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light   = 0,
	ESynthSlateColorStyle__Dark    = 1,
	ESynthSlateColorStyle__Count   = 2,
	ESynthSlateColorStyle__ESynthSlateColorStyle_MAX = 3
};


// Enum Synthesis.ESynthSlateSizeType
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small     = 0,
	ESynthSlateSizeType__Medium    = 1,
	ESynthSlateSizeType__Large     = 2,
	ESynthSlateSizeType__Count     = 3,
	ESynthSlateSizeType__ESynthSlateSizeType_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// 0x5AFA4E00
struct FModularSynthPresetBankEntry
{
	unsigned char                                      UnknownData00[0x5AFA4E00];                                // 0x0000(0x5AFA4E00) MISSED OFFSET
};

// ScriptStruct Synthesis.ModularSynthPreset
// 0x5AFA4E80
struct FModularSynthPreset : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AFA4E80];                                // 0x0000(0x5AFA4E80) MISSED OFFSET
};

// ScriptStruct Synthesis.EpicSynth1Patch
// 0x5AF5A060
struct FEpicSynth1Patch
{
	unsigned char                                      UnknownData00[0x5AF5A060];                                // 0x0000(0x5AF5A060) MISSED OFFSET
};

// ScriptStruct Synthesis.Synth1PatchCable
// 0x5AFA2A00
struct FSynth1PatchCable
{
	unsigned char                                      UnknownData00[0x5AFA2A00];                                // 0x0000(0x5AFA2A00) MISSED OFFSET
};

// ScriptStruct Synthesis.PatchId
// 0x5AFA4D80
struct FPatchId
{
	unsigned char                                      UnknownData00[0x5AFA4D80];                                // 0x0000(0x5AFA4D80) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// 0x5AFA4C80
struct FSourceEffectBitCrusherSettings
{
	unsigned char                                      UnknownData00[0x5AFA4C80];                                // 0x0000(0x5AFA4C80) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// 0x5AFA4980
struct FSourceEffectChorusSettings
{
	unsigned char                                      UnknownData00[0x5AFA4980];                                // 0x0000(0x5AFA4980) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// 0x5AF59700
struct FSourceEffectDynamicsProcessorSettings
{
	unsigned char                                      UnknownData00[0x5AF59700];                                // 0x0000(0x5AF59700) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// 0x5AFA6280
struct FSourceEffectEnvelopeFollowerSettings
{
	unsigned char                                      UnknownData00[0x5AFA6280];                                // 0x0000(0x5AFA6280) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEQSettings
// 0x5AF595C0
struct FSourceEffectEQSettings
{
	unsigned char                                      UnknownData00[0x5AF595C0];                                // 0x0000(0x5AF595C0) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectEQBand
// 0x5AFA6000
struct FSourceEffectEQBand
{
	unsigned char                                      UnknownData00[0x5AFA6000];                                // 0x0000(0x5AFA6000) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// 0x5AF59480
struct FSourceEffectFilterSettings
{
	unsigned char                                      UnknownData00[0x5AF59480];                                // 0x0000(0x5AF59480) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// 0x5AFA5C80
struct FSourceEffectFoldbackDistortionSettings
{
	unsigned char                                      UnknownData00[0x5AFA5C80];                                // 0x0000(0x5AFA5C80) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// 0x5AF59340
struct FSourceEffectMidSideSpreaderSettings
{
	unsigned char                                      UnknownData00[0x5AF59340];                                // 0x0000(0x5AF59340) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// 0x5AFA5980
struct FSourceEffectPannerSettings
{
	unsigned char                                      UnknownData00[0x5AFA5980];                                // 0x0000(0x5AFA5980) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// 0x5AFA5700
struct FSourceEffectPhaserSettings
{
	unsigned char                                      UnknownData00[0x5AFA5700];                                // 0x0000(0x5AFA5700) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// 0x5AF59200
struct FSourceEffectRingModulationSettings
{
	unsigned char                                      UnknownData00[0x5AF59200];                                // 0x0000(0x5AF59200) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// 0x5AFA7280
struct FSourceEffectSimpleDelaySettings
{
	unsigned char                                      UnknownData00[0x5AFA7280];                                // 0x0000(0x5AFA7280) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// 0x5AF59160
struct FSourceEffectStereoDelaySettings
{
	unsigned char                                      UnknownData00[0x5AF59160];                                // 0x0000(0x5AF59160) MISSED OFFSET
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// 0x5AFA6F00
struct FSourceEffectWaveShaperSettings
{
	unsigned char                                      UnknownData00[0x5AFA6F00];                                // 0x0000(0x5AFA6F00) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// 0x5AFA6B80
struct FSubmixEffectConvolutionReverbSettings
{
	unsigned char                                      UnknownData00[0x5AFA6B80];                                // 0x0000(0x5AFA6B80) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// 0x5AFA6A00
struct FSubmixEffectDelaySettings
{
	unsigned char                                      UnknownData00[0x5AFA6A00];                                // 0x0000(0x5AFA6A00) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// 0x5AF5B960
struct FSubmixEffectFilterSettings
{
	unsigned char                                      UnknownData00[0x5AF5B960];                                // 0x0000(0x5AF5B960) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// 0x5AFA6600
struct FSubmixEffectFlexiverbSettings
{
	unsigned char                                      UnknownData00[0x5AFA6600];                                // 0x0000(0x5AFA6600) MISSED OFFSET
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// 0x5AFA8280
struct FSubmixEffectTapDelaySettings
{
	unsigned char                                      UnknownData00[0x5AFA8280];                                // 0x0000(0x5AFA8280) MISSED OFFSET
};

// ScriptStruct Synthesis.TapDelayInfo
// 0x5AF5B820
struct FTapDelayInfo
{
	unsigned char                                      UnknownData00[0x5AF5B820];                                // 0x0000(0x5AF5B820) MISSED OFFSET
};

// ScriptStruct Synthesis.Synth2DSliderStyle
// 0x5AFA7F80
struct FSynth2DSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFA7F80];                                // 0x0000(0x5AFA7F80) MISSED OFFSET
};

// ScriptStruct Synthesis.SynthKnobStyle
// 0x5AFA7C00
struct FSynthKnobStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFA7C00];                                // 0x0000(0x5AFA7C00) MISSED OFFSET
};

// ScriptStruct Synthesis.SynthSlateStyle
// 0x5AF5B640
struct FSynthSlateStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AF5B640];                                // 0x0000(0x5AF5B640) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
