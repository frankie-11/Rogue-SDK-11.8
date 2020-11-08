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

// Class MagicLeapARPin.MagicLeapARPinComponent
// 0x1480 (0x50C99C00 - 0x50C98780)
class UMagicLeapARPinComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x50C98780(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinComponent");
		return ptr;
	}


	void UnPin();
	void PinSceneComponent();
	void PinRestoredOrSynced();
	void PinActor();
	void PersistentEntityPinned__DelegateSignature();
	void PersistentEntityPinLost__DelegateSignature();
	void IsPinned();
	void GetPinState();
	void GetPinnedPinID();
	void GetPinData();
};


// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// 0x0000
class UMagicLeapARPinFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinFunctionLibrary");
		return ptr;
	}


	void UnBindToOnMagicLeapARPinUpdatedDelegate();
	void IsTrackerValid();
	void GetNumAvailableARPins();
	void GetClosestARPin();
	void GetAvailableARPins();
	void GetARPinStateToString();
	void GetARPinState();
	void GetARPinPositionAndOrientation_TrackingSpace();
	void GetARPinPositionAndOrientation();
	void DestroyTracker();
	void CreateTracker();
	void BindToOnMagicLeapARPinUpdatedDelegate();
};


// Class MagicLeapARPin.MagicLeapARPinSettings
// 0x5B22AD00
class UMagicLeapARPinSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B22AD00];                                // 0x0000(0x5B22AD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSettings");
		return ptr;
	}

};


// Class MagicLeapARPin.MagicLeapARPinSaveGame
// 0x5B22AB80
class UMagicLeapARPinSaveGame : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x5B22AB80];                                // 0x0000(0x5B22AB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MagicLeapARPin.MagicLeapARPinSaveGame");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
