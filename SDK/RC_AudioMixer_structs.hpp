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

// Enum AudioMixer.EAudioSpectrumType
enum class EAudioSpectrumType : uint8_t
{
	EAudioSpectrumType__MagnitudeSpectrum = 0,
	EAudioSpectrumType__PowerSpectrum = 1,
	EAudioSpectrumType__EAudioSpectrumType_MAX = 2
};


// Enum AudioMixer.EFFTWindowType
enum class EFFTWindowType : uint8_t
{
	EFFTWindowType__None           = 0,
	EFFTWindowType__Hamming        = 1,
	EFFTWindowType__Hann           = 2,
	EFFTWindowType__Blackman       = 3,
	EFFTWindowType__EFFTWindowType_MAX = 4
};


// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class EFFTPeakInterpolationMethod : uint8_t
{
	EFFTPeakInterpolationMethod__NearestNeighbor = 0,
	EFFTPeakInterpolationMethod__Linear = 1,
	EFFTPeakInterpolationMethod__Quadratic = 2,
	EFFTPeakInterpolationMethod__EFFTPeakInterpolationMethod_MAX = 3
};


// Enum AudioMixer.EFFTSize
enum class EFFTSize : uint8_t
{
	EFFTSize__DefaultSize          = 0,
	EFFTSize__Min                  = 1,
	EFFTSize__Small                = 2,
	EFFTSize__Medium               = 3,
	EFFTSize__Large                = 4,
	EFFTSize__Max                  = 5
};


// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class ESubmixEffectDynamicsChannelLinkMode : uint8_t
{
	ESubmixEffectDynamicsChannelLinkMode__Disabled = 0,
	ESubmixEffectDynamicsChannelLinkMode__Average = 1,
	ESubmixEffectDynamicsChannelLinkMode__Peak = 2,
	ESubmixEffectDynamicsChannelLinkMode__Count = 3,
	ESubmixEffectDynamicsChannelLinkMode__ESubmixEffectDynamicsChannelLinkMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class ESubmixEffectDynamicsPeakMode : uint8_t
{
	ESubmixEffectDynamicsPeakMode__MeanSquared = 0,
	ESubmixEffectDynamicsPeakMode__RootMeanSquared = 1,
	ESubmixEffectDynamicsPeakMode__Peak = 2,
	ESubmixEffectDynamicsPeakMode__Count = 3,
	ESubmixEffectDynamicsPeakMode__ESubmixEffectDynamicsPeakMode_MAX = 4
};


// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class ESubmixEffectDynamicsProcessorType : uint8_t
{
	ESubmixEffectDynamicsProcessorType__Compressor = 0,
	ESubmixEffectDynamicsProcessorType__Limiter = 1,
	ESubmixEffectDynamicsProcessorType__Expander = 2,
	ESubmixEffectDynamicsProcessorType__Gate = 3,
	ESubmixEffectDynamicsProcessorType__Count = 4,
	ESubmixEffectDynamicsProcessorType__ESubmixEffectDynamicsProcessorType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// 0x5AFE9FC0
struct FSubmixEffectDynamicsProcessorSettings
{
	unsigned char                                      UnknownData00[0x5AFE9FC0];                                // 0x0000(0x5AFE9FC0) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// 0x5B02B880
struct FSubmixEffectDynamicProcessorFilterSettings
{
	unsigned char                                      UnknownData00[0x5B02B880];                                // 0x0000(0x5B02B880) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// 0x5AFE9F20
struct FSubmixEffectSubmixEQSettings
{
	unsigned char                                      UnknownData00[0x5AFE9F20];                                // 0x0000(0x5AFE9F20) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// 0x5B02CE80
struct FSubmixEffectEQBand
{
	unsigned char                                      UnknownData00[0x5B02CE80];                                // 0x0000(0x5B02CE80) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// 0x5B02C800
struct FSubmixEffectReverbSettings
{
	unsigned char                                      UnknownData00[0x5B02C800];                                // 0x0000(0x5B02C800) MISSED OFFSET
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// 0x5B02E200
struct FSubmixEffectReverbFastSettings
{
	unsigned char                                      UnknownData00[0x5B02E200];                                // 0x0000(0x5B02E200) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
