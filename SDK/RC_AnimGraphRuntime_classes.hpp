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

// Class AnimGraphRuntime.AnimNotify_PlayMontageNotify
// 0x5DC1EC80
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5DC1EC80];                                // 0x0000(0x5DC1EC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotify");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow
// 0x5DC1EC00
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5DC1EC00];                                // 0x0000(0x5DC1EC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimNotify_PlayMontageNotifyWindow");
		return ptr;
	}

};


// Class AnimGraphRuntime.AnimSequencerInstance
// 0xFFFFFFFFA4E31100 (0x0000 - 0x5B1CEF00)
class UAnimSequencerInstance : public UAnimInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.AnimSequencerInstance");
		return ptr;
	}

};


// Class AnimGraphRuntime.KismetAnimationLibrary
// 0x0000
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.KismetAnimationLibrary");
		return ptr;
	}


	void K2_TwoBoneIK();
	void K2_StartProfilingTimer();
	void K2_MakePerlinNoiseVectorAndRemap();
	void K2_MakePerlinNoiseAndRemap();
	void K2_LookAt();
	void K2_EndProfilingTimer();
	void K2_DistanceBetweenTwoSocketsAndMapRange();
	void K2_DirectionBetweenSockets();
	void K2_CalculateVelocityFromSockets();
	void K2_CalculateVelocityFromPositionHistory();
};


// Class AnimGraphRuntime.PlayMontageCallbackProxy
// 0x5DC31200
class UPlayMontageCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC31200];                                // 0x0000(0x5DC31200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.PlayMontageCallbackProxy");
		return ptr;
	}


	void OnNotifyEndReceived();
	void OnNotifyBeginReceived();
	void OnMontageEnded();
	void OnMontageBlendingOut();
	void CreateProxyObjectForPlayMontage();
};


// Class AnimGraphRuntime.SequencerAnimationSupport
// 0x0000
class USequencerAnimationSupport : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimGraphRuntime.SequencerAnimationSupport");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
