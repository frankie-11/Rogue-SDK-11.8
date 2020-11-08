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

// Class AudioCapture.AudioCapture
// 0x0000
class UAudioCapture : public UAudioGenerator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCapture");
		return ptr;
	}


	void StopCapturingAudio();
	void StartCapturingAudio();
	void IsCapturingAudio();
	void GetAudioCaptureDeviceInfo();
};


// Class AudioCapture.AudioCaptureFunctionLibrary
// 0x0000
class UAudioCaptureFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureFunctionLibrary");
		return ptr;
	}


	void CreateAudioCapture();
};


// Class AudioCapture.AudioCaptureComponent
// 0x110380 (0x5B241780 - 0x5B131400)
class UAudioCaptureComponent : public USynthComponent
{
public:
	unsigned char                                      UnknownData00[0x110380];                                  // 0x5B131400(0x110380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AudioCapture.AudioCaptureComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
