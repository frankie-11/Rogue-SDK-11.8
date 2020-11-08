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

// Class AkAudio.AkAcousticPortal
// 0x5B1913C0
class AAkAcousticPortal : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5B1913C0];                                // 0x0000(0x5B1913C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticPortal");
		return ptr;
	}


	void OpenPortal();
	void GetCurrentState();
	void ClosePortal();
};


// Class AkAudio.AkPortalComponent
// 0xFFFFFFFFAF367880 (0x0000 - 0x50C98780)
class UAkPortalComponent : public USceneComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPortalComponent");
		return ptr;
	}

};


// Class AkAudio.AkAudioType
// 0x5B185980
class UAkAudioType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B185980];                                // 0x0000(0x5B185980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioType");
		return ptr;
	}

};


// Class AkAudio.AkAcousticTexture
// 0xFFFFFFFFA4E7A680 (0x0000 - 0x5B185980)
class UAkAcousticTexture : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAcousticTexture");
		return ptr;
	}

};


// Class AkAudio.AkAmbientSound
// 0x1E7700 (0x5B185700 - 0x5AF9E000)
class AAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1E7700];                                  // 0x5AF9E000(0x1E7700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StartAmbientSound();
};


// Class AkAudio.AkAndroidInitializationSettings
// 0x5B185500
class UAkAndroidInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B185500];                                // 0x0000(0x5B185500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAndroidInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkPlatformInfo
// 0x0000
class UAkPlatformInfo : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkAndroidPlatformInfo
// 0x0000
class UAkAndroidPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAndroidPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkAssetData
// 0x0000
class UAkAssetData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetData");
		return ptr;
	}

};


// Class AkAudio.AkAssetDataWithMedia
// 0x5B191280
class UAkAssetDataWithMedia : public UAkAssetData
{
public:
	unsigned char                                      UnknownData00[0x5B191280];                                // 0x0000(0x5B191280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetDataWithMedia");
		return ptr;
	}

};


// Class AkAudio.AkAssetPlatformData
// 0x5B185400
class UAkAssetPlatformData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B185400];                                // 0x0000(0x5B185400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetPlatformData");
		return ptr;
	}

};


// Class AkAudio.AkAssetBase
// 0xFFFFFFFFFFFFFA00 (0x5B185380 - 0x5B185980)
class UAkAssetBase : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetBase");
		return ptr;
	}

};


// Class AkAudio.AkAudioBank
// 0x1F00 (0x5B187280 - 0x5B185380)
class UAkAudioBank : public UAkAssetBase
{
public:
	unsigned char                                      UnknownData00[0x1F00];                                    // 0x5B185380(0x1F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioBank");
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainerData
// 0x5B187100
class UAkAssetDataSwitchContainerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B187100];                                // 0x0000(0x5B187100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainerData");
		return ptr;
	}

};


// Class AkAudio.AkAssetDataSwitchContainer
// 0xFFFFFFFFFFFFFE20 (0x5B1910A0 - 0x5B191280)
class UAkAssetDataSwitchContainer : public UAkAssetDataWithMedia
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAssetDataSwitchContainer");
		return ptr;
	}

};


// Class AkAudio.AkAudioEventData
// 0xFFFFFFFFFFFF5CE0 (0x5B186D80 - 0x5B1910A0)
class UAkAudioEventData : public UAkAssetDataSwitchContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEventData");
		return ptr;
	}

};


// Class AkAudio.AkAudioEvent
// 0x1500 (0x5B186880 - 0x5B185380)
class UAkAudioEvent : public UAkAssetBase
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5B185380(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioEvent");
		return ptr;
	}


	void MinimumDuration();
	void MaximumDuration();
	void MaxAttenuationRadius();
	void IsInfinite();
	void GetMaxAttenuationRadius();
};


// Class AkAudio.AkGameObject
// 0xA4EF580 (0x5B187D00 - 0x50C98780)
class UAkGameObject : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA4EF580];                                 // 0x50C98780(0xA4EF580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameObject");
		return ptr;
	}


	void Stop();
	void PostAssociatedAkEventAsync();
	void PostAssociatedAkEvent();
	void PostAkEventAsync();
	void PostAkEvent();
};


// Class AkAudio.AkComponent
// 0x1F80 (0x5B189C80 - 0x5B187D00)
class UAkComponent : public UAkGameObject
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5B187D00(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkComponent");
		return ptr;
	}


	void UseReverbVolumes();
	void UseEarlyReflections();
	void SetSwitch();
	void SetStopWhenOwnerDestroyed();
	void SetRTPCValue();
	void SetOutputBusVolume();
	void SetListeners();
	void SetEarlyReflectionsVolume();
	void SetEarlyReflectionsAuxBus();
	void SetAttenuationScalingFactor();
	void PostTrigger();
	void PostAssociatedAkEventAndWaitForEndAsync();
	void PostAssociatedAkEventAndWaitForEnd();
	void PostAkEventByName();
	void PostAkEventAndWaitForEndAsync();
	void PostAkEventAndWaitForEnd();
	void GetRTPCValue();
	void GetAttenuationRadius();
};


// Class AkAudio.AkAudioInputComponent
// 0xFFFFFFFFA4E76380 (0x0000 - 0x5B189C80)
class UAkAudioInputComponent : public UAkComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAudioInputComponent");
		return ptr;
	}


	void PostAssociatedAudioInputEvent();
};


// Class AkAudio.AkAuxBus
// 0x4800 (0x5B189B80 - 0x5B185380)
class UAkAuxBus : public UAkAssetBase
{
public:
	unsigned char                                      UnknownData00[0x4800];                                    // 0x5B185380(0x4800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkAuxBus");
		return ptr;
	}

};


// Class AkAudio.AkCheckBox
// 0x5B1907E0
class UAkCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5B1907E0];                                // 0x0000(0x5B1907E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCheckBox");
		return ptr;
	}


	void SetIsChecked();
	void SetCheckedState();
	void SetAkItemId();
	void SetAkBoolProperty();
	void IsPressed();
	void IsChecked();
	void GetCheckedState();
	void GetAkProperty();
	void GetAkItemId();
};


// Class AkAudio.AkChinookPlatformInfo
// 0x0000
class UAkChinookPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkChinookPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkMPXPlatformInfo
// 0x0000
class UAkMPXPlatformInfo : public UAkChinookPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMPXPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkXSXPlatformInfo
// 0x0000
class UAkXSXPlatformInfo : public UAkChinookPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXSXPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkGameplayStatics
// 0x0000
class UAkGameplayStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGameplayStatics");
		return ptr;
	}


	void UseReverbVolumes();
	void UseEarlyReflections();
	void UnloadBankByName();
	void UnloadBankAsync();
	void UnloadBank();
	void StopProfilerCapture();
	void StopOutputCapture();
	void StopAllAmbientSounds();
	void StopAll();
	void StopActor();
	void StartProfilerCapture();
	void StartOutputCapture();
	void StartAllAmbientSounds();
	void SpawnAkComponentAtLocation();
	void SetSwitch();
	void SetState();
	void SetSpeakerAngles();
	void SetRTPCValueDirect();
	void SetRTPCValue();
	void SetReflectionsOrder();
	void SetPanningRule();
	void SetOutputBusVolume();
	void SetOcclusionScalingFactor();
	void SetOcclusionRefreshInterval();
	void SetMultiplePositions();
	void SetMultipleChannelMaskEmitterPositions();
	void SetMultipleChannelEmitterPositions();
	void SetCurrentAudioCultureAsync();
	void SetCurrentAudioCulture();
	void SetBusConfig();
	void PostTrigger();
	void PostEventByName();
	void PostEventAttached();
	void PostEventAtLocationByName();
	void PostEventAtLocation();
	void PostEvent();
	void PostAndWaitForEndOfEventAsync();
	void PostAndWaitForEndOfEvent();
	void LoadInitBank();
	void LoadBanks();
	void LoadBankByName();
	void LoadBankAsync();
	void LoadBank();
	void IsGame();
	void IsEditor();
	void GetSpeakerAngles();
	void GetRTPCValue();
	void GetOcclusionScalingFactor();
	void GetCurrentAudioCulture();
	void GetAvailableAudioCultures();
	void GetAkMediaAssetUserData();
	void GetAkComponent();
	void GetAkAudioTypeUserData();
	void ExecuteActionOnPlayingID();
	void ExecuteActionOnEvent();
	void ClearBanks();
	void CancelEventCallback();
	void AddOutputCaptureMarker();
};


// Class AkAudio.AkCallbackInfo
// 0x5B18FA80
class UAkCallbackInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B18FA80];                                // 0x0000(0x5B18FA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkEventCallbackInfo
// 0xFFFFFFFFFFFFFF00 (0x5B18F980 - 0x5B18FA80)
class UAkEventCallbackInfo : public UAkCallbackInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkEventCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMIDIEventCallbackInfo
// 0xFFFFFFFFA4E70680 (0x0000 - 0x5B18F980)
class UAkMIDIEventCallbackInfo : public UAkEventCallbackInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMIDIEventCallbackInfo");
		return ptr;
	}


	void GetType();
	void GetProgramChange();
	void GetPitchBend();
	void GetNoteOn();
	void GetNoteOff();
	void GetNoteAftertouch();
	void GetGeneric();
	void GetChannelAftertouch();
	void GetChannel();
	void GetCc();
};


// Class AkAudio.AkMarkerCallbackInfo
// 0x10E80 (0x5B1A0800 - 0x5B18F980)
class UAkMarkerCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x10E80];                                   // 0x5B18F980(0x10E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMarkerCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkDurationCallbackInfo
// 0x10C00 (0x5B1A0580 - 0x5B18F980)
class UAkDurationCallbackInfo : public UAkEventCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x10C00];                                   // 0x5B18F980(0x10C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDurationCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkMusicSyncCallbackInfo
// 0x10900 (0x5B1A0380 - 0x5B18FA80)
class UAkMusicSyncCallbackInfo : public UAkCallbackInfo
{
public:
	unsigned char                                      UnknownData00[0x10900];                                   // 0x5B18FA80(0x10900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMusicSyncCallbackInfo");
		return ptr;
	}

};


// Class AkAudio.AkGeometryComponent
// 0xA4F9780 (0x5B191F00 - 0x50C98780)
class UAkGeometryComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA4F9780];                                 // 0x50C98780(0xA4F9780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGeometryComponent");
		return ptr;
	}


	void UpdateGeometry();
	void RemoveGeometry();
	void ConvertMesh();
};


// Class AkAudio.AkGroupValue
// 0x1C600 (0x5B1A1F80 - 0x5B185980)
class UAkGroupValue : public UAkAudioType
{
public:
	unsigned char                                      UnknownData00[0x1C600];                                   // 0x5B185980(0x1C600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkGroupValue");
		return ptr;
	}

};


// Class AkAudio.AkHololensInitializationSettings
// 0x5B1A1D80
class UAkHololensInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A1D80];                                // 0x0000(0x5B1A1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkHololensInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkHololensPlatformInfo
// 0x0000
class UAkHololensPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkHololensPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkInitBankAssetData
// 0x0BE0 (0x5B191E60 - 0x5B191280)
class UAkInitBankAssetData : public UAkAssetDataWithMedia
{
public:
	unsigned char                                      UnknownData00[0xBE0];                                     // 0x5B191280(0x0BE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkInitBankAssetData");
		return ptr;
	}

};


// Class AkAudio.AkInitBank
// 0xCA40 (0x5B191DC0 - 0x5B185380)
class UAkInitBank : public UAkAssetBase
{
public:
	unsigned char                                      UnknownData00[0xCA40];                                    // 0x5B185380(0xCA40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkInitBank");
		return ptr;
	}

};


// Class AkAudio.AkIOSInitializationSettings
// 0x5B1A1A00
class UAkIOSInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A1A00];                                // 0x0000(0x5B1A1A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkIOSInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkIOSPlatformInfo
// 0x0000
class UAkIOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkIOSPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkItemBoolPropertiesConv
// 0x0000
class UAkItemBoolPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolPropertiesConv");
		return ptr;
	}


	void Conv_FAkBoolPropertyToControlToText();
	void Conv_FAkBoolPropertyToControlToString();
};


// Class AkAudio.AkItemBoolProperties
// 0x719580 (0x5B1A1580 - 0x5AA88000)
class UAkItemBoolProperties : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x719580];                                  // 0x5AA88000(0x719580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemBoolProperties");
		return ptr;
	}


	void SetSearchText();
	void GetSelectedProperty();
	void GetSearchText();
};


// Class AkAudio.AkItemPropertiesConv
// 0x0000
class UAkItemPropertiesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemPropertiesConv");
		return ptr;
	}


	void Conv_FAkPropertyToControlToText();
	void Conv_FAkPropertyToControlToString();
};


// Class AkAudio.AkItemProperties
// 0x719100 (0x5B1A1100 - 0x5AA88000)
class UAkItemProperties : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x719100];                                  // 0x5AA88000(0x719100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkItemProperties");
		return ptr;
	}


	void SetSearchText();
	void GetSelectedProperty();
	void GetSearchText();
};


// Class AkAudio.AkLateReverbComponent
// 0xA50A700 (0x5B1A2E80 - 0x50C98780)
class UAkLateReverbComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA50A700];                                 // 0x50C98780(0xA50A700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLateReverbComponent");
		return ptr;
	}

};


// Class AkAudio.AkLinuxInitializationSettings
// 0x5B1A2C80
class UAkLinuxInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2C80];                                // 0x0000(0x5B1A2C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLinuxInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkLinuxPlatformInfo
// 0x0000
class UAkLinuxPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLinuxPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkLuminInitializationSettings
// 0x5B1A2A80
class UAkLuminInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2A80];                                // 0x0000(0x5B1A2A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLuminInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkLuminPlatformInfo
// 0x0000
class UAkLuminPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLuminPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkMacInitializationSettings
// 0x5B1A2880
class UAkMacInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2880];                                // 0x0000(0x5B1A2880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMacInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkMacPlatformInfo
// 0x0000
class UAkMacPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMacPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkMediaAssetData
// 0x5B1A2780
class UAkMediaAssetData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2780];                                // 0x0000(0x5B1A2780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMediaAssetData");
		return ptr;
	}

};


// Class AkAudio.AkMediaAsset
// 0x5B1A2600
class UAkMediaAsset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2600];                                // 0x0000(0x5B1A2600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMediaAsset");
		return ptr;
	}

};


// Class AkAudio.AkLocalizedMediaAsset
// 0xFFFFFFFFA4E5DA00 (0x0000 - 0x5B1A2600)
class UAkLocalizedMediaAsset : public UAkMediaAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkLocalizedMediaAsset");
		return ptr;
	}

};


// Class AkAudio.AkExternalMediaAsset
// 0xFFFFFFFFA4E5DA00 (0x0000 - 0x5B1A2600)
class UAkExternalMediaAsset : public UAkMediaAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkExternalMediaAsset");
		return ptr;
	}

};


// Class AkAudio.AkPellegrinoPlatformInfo
// 0x0000
class UAkPellegrinoPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPellegrinoPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkDPXPlatformInfo
// 0x0000
class UAkDPXPlatformInfo : public UAkPellegrinoPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDPXPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkPS5PlatformInfo
// 0x0000
class UAkPS5PlatformInfo : public UAkPellegrinoPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS5PlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkPS4InitializationSettings
// 0x5B1A2400
class UAkPS4InitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2400];                                // 0x0000(0x5B1A2400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS4InitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkPS4PlatformInfo
// 0x0000
class UAkPS4PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS4PlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkPS5InitializationSettings
// 0x5B1A2280
class UAkPS5InitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A2280];                                // 0x0000(0x5B1A2280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkPS5InitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkDPXInitializationSettings
// 0xFFFFFFFFA4E5DD80 (0x0000 - 0x5B1A2280)
class UAkDPXInitializationSettings : public UAkPS5InitializationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkDPXInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkReverbVolume
// 0x5B1A4000
class AAkReverbVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5B1A4000];                                // 0x0000(0x5B1A4000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkReverbVolume");
		return ptr;
	}

};


// Class AkAudio.AkRoomComponent
// 0x1C000 (0x5B1A3D00 - 0x5B187D00)
class UAkRoomComponent : public UAkGameObject
{
public:
	unsigned char                                      UnknownData00[0x1C000];                                   // 0x5B187D00(0x1C000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRoomComponent");
		return ptr;
	}

};


// Class AkAudio.AkRtpc
// 0xFFFFFFFFA4E7A680 (0x0000 - 0x5B185980)
class UAkRtpc : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkRtpc");
		return ptr;
	}

};


// Class AkAudio.AkSettings
// 0x5B1A3400
class UAkSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A3400];                                // 0x0000(0x5B1A3400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettings");
		return ptr;
	}

};


// Class AkAudio.AkSettingsPerUser
// 0x5B1A5180
class UAkSettingsPerUser : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A5180];                                // 0x0000(0x5B1A5180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSettingsPerUser");
		return ptr;
	}

};


// Class AkAudio.AkSlider
// 0x71C480 (0x5B1A4480 - 0x5AA88000)
class UAkSlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x71C480];                                  // 0x5AA88000(0x71C480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSlider");
		return ptr;
	}


	void SetValue();
	void SetStepSize();
	void SetSliderHandleColor();
	void SetSliderBarColor();
	void SetLocked();
	void SetIndentHandle();
	void SetAkSliderItemProperty();
	void SetAkSliderItemId();
	void GetValue();
	void GetAkSliderItemProperty();
	void GetAkSliderItemId();
};


// Class AkAudio.AkSpatialAudioVolume
// 0x5B1A4300
class AAkSpatialAudioVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5B1A4300];                                // 0x0000(0x5B1A4300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpatialAudioVolume");
		return ptr;
	}

};


// Class AkAudio.AkSpotReflector
// 0x208180 (0x5B1A6180 - 0x5AF9E000)
class AAkSpotReflector : public AActor
{
public:
	unsigned char                                      UnknownData00[0x208180];                                  // 0x5AF9E000(0x208180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSpotReflector");
		return ptr;
	}

};


// Class AkAudio.AkStateValue
// 0xFFFFFFFFA4E5E080 (0x0000 - 0x5B1A1F80)
class UAkStateValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkStateValue");
		return ptr;
	}

};


// Class AkAudio.AkSurfaceReflectorSetComponent
// 0xA50D780 (0x5B1A5F00 - 0x50C98780)
class UAkSurfaceReflectorSetComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xA50D780];                                 // 0x50C98780(0xA50D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSurfaceReflectorSetComponent");
		return ptr;
	}


	void UpdateSurfaceReflectorSet();
	void SendSurfaceReflectorSet();
	void RemoveSurfaceReflectorSet();
};


// Class AkAudio.AkSwitchInitializationSettings
// 0x5B1A5D00
class UAkSwitchInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A5D00];                                // 0x0000(0x5B1A5D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitchInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkSwitchPlatformInfo
// 0x0000
class UAkSwitchPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitchPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkSwitchValue
// 0xFFFFFFFFA4E5E080 (0x0000 - 0x5B1A1F80)
class UAkSwitchValue : public UAkGroupValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkSwitchValue");
		return ptr;
	}

};


// Class AkAudio.AkTrigger
// 0xFFFFFFFFA4E7A680 (0x0000 - 0x5B185980)
class UAkTrigger : public UAkAudioType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkTrigger");
		return ptr;
	}

};


// Class AkAudio.AkTVOSInitializationSettings
// 0x5B1A5B00
class UAkTVOSInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A5B00];                                // 0x0000(0x5B1A5B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkTVOSInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkTVOSPlatformInfo
// 0x0000
class UAkTVOSPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkTVOSPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWaapiCalls
// 0x0000
class UAkWaapiCalls : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiCalls");
		return ptr;
	}


	void Unsubscribe();
	void SubscribeToWaapi();
	void SetSubscriptionID();
	void RegisterWaapiProjectLoadedCallback();
	void RegisterWaapiConnectionLostCallback();
	void GetSubscriptionID();
	void Conv_FAkWaapiSubscriptionIdToText();
	void Conv_FAkWaapiSubscriptionIdToString();
	void CallWaapi();
};


// Class AkAudio.SAkWaapiFieldNamesConv
// 0x0000
class USAkWaapiFieldNamesConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.SAkWaapiFieldNamesConv");
		return ptr;
	}


	void Conv_FAkWaapiFieldNamesToText();
	void Conv_FAkWaapiFieldNamesToString();
};


// Class AkAudio.AkWaapiJsonManager
// 0x0000
class UAkWaapiJsonManager : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiJsonManager");
		return ptr;
	}


	void SetStringField();
	void SetObjectField();
	void SetNumberField();
	void SetBoolField();
	void SetArrayStringFields();
	void SetArrayObjectFields();
	void GetStringField();
	void GetObjectField();
	void GetNumberField();
	void GetIntegerField();
	void GetBoolField();
	void GetArrayField();
	void Conv_FAKWaapiJsonObjectToText();
	void Conv_FAKWaapiJsonObjectToString();
};


// Class AkAudio.AkWaapiUriConv
// 0x0000
class UAkWaapiUriConv : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWaapiUriConv");
		return ptr;
	}


	void Conv_FAkWaapiUriToText();
	void Conv_FAkWaapiUriToString();
};


// Class AkAudio.AkWindowsInitializationSettings
// 0x5B1A9480
class UAkWindowsInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A9480];                                // 0x0000(0x5B1A9480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWindowsInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkWin32PlatformInfo
// 0x0000
class UAkWin32PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWin32PlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWin64PlatformInfo
// 0x0000
class UAkWin64PlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWin64PlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWindowsPlatformInfo
// 0x0000
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWindowsPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWinGDKInitializationSettings
// 0x5B1A9280
class UAkWinGDKInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A9280];                                // 0x0000(0x5B1A9280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinGDKInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkWinAnvilInitializationSettings
// 0xFFFFFFFFA4E56D80 (0x0000 - 0x5B1A9280)
class UAkWinAnvilInitializationSettings : public UAkWinGDKInitializationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinAnvilInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkWinGDKPlatformInfo
// 0x0000
class UAkWinGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinGDKPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWinAnvilPlatformInfo
// 0x0000
class UAkWinAnvilPlatformInfo : public UAkWinGDKPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWinAnvilPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkWwiseTree
// 0x721000 (0x5B1A9000 - 0x5AA88000)
class UAkWwiseTree : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x721000];                                  // 0x5AA88000(0x721000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTree");
		return ptr;
	}


	void SetSearchText();
	void GetSelectedItem();
	void GetSearchText();
};


// Class AkAudio.AkWwiseTreeSelector
// 0x720F00 (0x5B1A8F00 - 0x5AA88000)
class UAkWwiseTreeSelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x720F00];                                  // 0x5AA88000(0x720F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkWwiseTreeSelector");
		return ptr;
	}

};


// Class AkAudio.AkXboxOneGDKInitializationSettings
// 0x5B1A8C80
class UAkXboxOneGDKInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A8C80];                                // 0x0000(0x5B1A8C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneGDKInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkXboxOneAnvilInitializationSettings
// 0xFFFFFFFFA4E57380 (0x0000 - 0x5B1A8C80)
class UAkXboxOneAnvilInitializationSettings : public UAkXboxOneGDKInitializationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneAnvilInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.AkXboxOneGDKPlatformInfo
// 0x0000
class UAkXboxOneGDKPlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneGDKPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkXboxOneAnvilPlatformInfo
// 0x0000
class UAkXboxOneAnvilPlatformInfo : public UAkXboxOneGDKPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneAnvilPlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkXboxOneInitializationSettings
// 0x5B1A8A00
class UAkXboxOneInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A8A00];                                // 0x0000(0x5B1A8A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOneInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkXboxOnePlatformInfo
// 0x0000
class UAkXboxOnePlatformInfo : public UAkPlatformInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXboxOnePlatformInfo");
		return ptr;
	}

};


// Class AkAudio.AkXSXInitializationSettings
// 0x5B1A8780
class UAkXSXInitializationSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1A8780];                                // 0x0000(0x5B1A8780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkXSXInitializationSettings");
		return ptr;
	}


	void MigrateMultiCoreRendering();
};


// Class AkAudio.AkMPXInitializationSettings
// 0xFFFFFFFFA4E57880 (0x0000 - 0x5B1A8780)
class UAkMPXInitializationSettings : public UAkXSXInitializationSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.AkMPXInitializationSettings");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioEvent
// 0xFFFFFFFFFFFE76C0 (0x5B1918C0 - 0x5B1AA200)
class UInterpTrackAkAudioEvent : public UInterpTrackVectorBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackAkAudioRTPC
// 0xFFFFFFFFFFFFFE80 (0x5B1A9E80 - 0x5B1AA000)
class UInterpTrackAkAudioRTPC : public UInterpTrackFloatBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioEvent
// 0x5B1A9E00
class UInterpTrackInstAkAudioEvent : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5B1A9E00];                                // 0x0000(0x5B1A9E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioEvent");
		return ptr;
	}

};


// Class AkAudio.InterpTrackInstAkAudioRTPC
// 0x5B1A9D80
class UInterpTrackInstAkAudioRTPC : public UInterpTrackInst
{
public:
	unsigned char                                      UnknownData00[0x5B1A9D80];                                // 0x0000(0x5B1A9D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.InterpTrackInstAkAudioRTPC");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventSection
// 0xFFFFFFFFFFFFFC80 (0x5B1AAA80 - 0x5B1AAE00)
class UMovieSceneAkAudioEventSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkTrack
// 0xFFFFFFFFFFFE6CC0 (0x5B191640 - 0x5B1AA980)
class UMovieSceneAkTrack : public UMovieSceneTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioEventTrack
// 0xFFFFFFFFA4E6E9C0 (0x0000 - 0x5B191640)
class UMovieSceneAkAudioEventTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioEventTrack");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCSection
// 0xFFFFFFFFFFFFF800 (0x5B1AA600 - 0x5B1AAE00)
class UMovieSceneAkAudioRTPCSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCSection");
		return ptr;
	}

};


// Class AkAudio.MovieSceneAkAudioRTPCTrack
// 0xFFFFFFFFA4E6E9C0 (0x0000 - 0x5B191640)
class UMovieSceneAkAudioRTPCTrack : public UMovieSceneAkTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.MovieSceneAkAudioRTPCTrack");
		return ptr;
	}

};


// Class AkAudio.PostEventAsync
// 0x5B1AC280
class UPostEventAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B1AC280];                                // 0x0000(0x5B1AC280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.PostEventAsync");
		return ptr;
	}


	void PostEventAsync();
	void PollPostEventFuture();
};


// Class AkAudio.PostEventAtLocationAsync
// 0x5B1ABF80
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B1ABF80];                                // 0x0000(0x5B1ABF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AkAudio.PostEventAtLocationAsync");
		return ptr;
	}


	void PostEventAtLocationAsync();
	void PollPostEventFuture();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
