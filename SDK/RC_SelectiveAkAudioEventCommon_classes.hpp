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

// Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent
// 0x5B1CA000
class UAnimNotify_SelectiveAkEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B1CA000];                                // 0x0000(0x5B1CA000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.AnimNotify_SelectiveAkEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent
// 0x0000
class USelectiveAkAudioEvent : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.SelectiveAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics
// 0x0000
class USelectiveAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.SelectiveAkGameplayStatics");
		return ptr;
	}


	void PostSelectiveEventStopToAkComponent();
	void PostSelectiveEventStop();
	void PostSelectiveEventPlayToAkComponent();
	void PostSelectiveEventPlay();
	void GetStopEventsFromSelectiveEventForAkComponent();
	void GetStopEventsFromSelectiveEvent();
	void GetPlayEventFromSelectiveEventForAkComponent();
	void GetPlayEventFromSelectiveEvent();
};


// Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent
// 0x5B1945C0
class UViewDependentAkAudioEvent : public USelectiveAkAudioEvent
{
public:
	unsigned char                                      UnknownData00[0x5B1945C0];                                // 0x0000(0x5B1945C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentAkAudioEvent");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules
// 0x0000
class UViewDependentAkEventRules : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentAkEventRules");
		return ptr;
	}

};


// Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget
// 0x0000
class UViewDependentRules_IsViewTarget : public UViewDependentAkEventRules
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SelectiveAkAudioEventCommon.ViewDependentRules_IsViewTarget");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
