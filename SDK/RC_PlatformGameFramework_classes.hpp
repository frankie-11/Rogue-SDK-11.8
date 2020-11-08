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

// Class PlatformGameFramework.DistributionVectorUniformParameter
// 0x1F00 (0x5B133100 - 0x5B131200)
class UDistributionVectorUniformParameter : public UDistributionVector
{
public:
	unsigned char                                      UnknownData00[0x1F00];                                    // 0x5B131200(0x1F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.DistributionVectorUniformParameter");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_BlueprintFunctionLibrary
// 0x0000
class UPGame_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_BlueprintFunctionLibrary");
		return ptr;
	}


	void ShowSkinnedMeshMaterialSection();
	void SetLightingChannels();
	void IsSteamClient();
	void IsPlatformType();
	void IsPlatform();
	void IsGameBit();
	void IsAnonymousLogin();
	void GetPropertyClampedValue();
	void GetGameLocalizationType();
	void FrameDelay();
	void ConvertToEngineLightingChannels();
	void ConvertToBlueprintableLightingChannels();
	void AreMeshComponentTexturesFullyStreamedIn();
	void AreActorTexturesFullyStreamedIn();
};


// Class PlatformGameFramework.PGame_Character
// 0xFFFFFFFFFFFFFE80 (0x5B13B400 - 0x5B13B580)
class APGame_Character : public ACharacter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Character");
		return ptr;
	}


	void OnRep_Tween();
	void OnRep_Charge();
};


// Class PlatformGameFramework.PGame_CharacterMovementComponent
// 0x6F3C80 (0x5B13AD80 - 0x5AA47100)
class UPGame_CharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x6F3C80];                                  // 0x5AA47100(0x6F3C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CharacterMovementComponent");
		return ptr;
	}


	void StopTween();
	void StopCharge();
	void StartTween();
	void StartCharge();
	void OnRep_Tween();
	void OnRep_Charge();
};


// Class PlatformGameFramework.PGame_CheatComponent
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UPGame_CheatComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CheatComponent");
		return ptr;
	}


	void TestFubar();
	void ServerTestFubar();
	void ServerExecCall();
	void ServerExec();
	void gmmf();
	void gmJoinQueue();
	void gmCommand();
	void gmC();
	void DumpAnimationStats();
};


// Class PlatformGameFramework.PGame_CombatLogVisualizer
// 0x19CA80 (0x5B13AA80 - 0x5AF9E000)
class APGame_CombatLogVisualizer : public AActor
{
public:
	unsigned char                                      UnknownData00[0x19CA80];                                  // 0x5AF9E000(0x19CA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_CombatLogVisualizer");
		return ptr;
	}


	void Visualize();
	void LoadCombatLog();
	void ClearVisualization();
};


// Class PlatformGameFramework.PGame_EffectManagerComponent
// 0xA58C600 (0x5B13C480 - 0x50BAFE80)
class UPGame_EffectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA58C600];                                 // 0x50BAFE80(0xA58C600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectManagerComponent");
		return ptr;
	}


	void OnRep_EffectData();
	void InstantEffectBroadcast();
	void GetPropertyValueIntFromBlueprint();
	void GetPropertyValueFromBlueprint();
	void GetDefaultEffectGroupForPersistentRepData();
	void GetDefaultEffectGroupForInstantRepData();
	void CreatePersistentAttachment();
	void CreateInstantAttachment();
};


// Class PlatformGameFramework.PGame_EffectAttachment
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UPGame_EffectAttachment : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectAttachment");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroup
// 0x5B13C300
class UPGame_EffectGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B13C300];                                // 0x0000(0x5B13C300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroup");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupPersistent
// 0xFFFFFFFFFFFFFB80 (0x5B13BE80 - 0x5B13C300)
class UPGame_EffectGroupPersistent : public UPGame_EffectGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroupPersistent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_EffectGroupInstant
// 0xFFFFFFFFA4EC3D00 (0x0000 - 0x5B13C300)
class UPGame_EffectGroupInstant : public UPGame_EffectGroup
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectGroupInstant");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effect
// 0x5B13BD80
class UPGame_Effect : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B13BD80];                                // 0x0000(0x5B13BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Effect");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_Effectable
// 0x0000
class UPGame_Effectable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_Effectable");
		return ptr;
	}


	void GetIntPropertyValue();
	void GetFloatPropertyValue();
};


// Class PlatformGameFramework.PGame_EffectSource
// 0x0000
class UPGame_EffectSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_EffectSource");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_GameInstance
// 0xFFFFFFFFF985C680 (0x5B13BA00 - 0x618DF380)
class UPGame_GameInstance : public UGameInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_GameInstance");
		return ptr;
	}


	void EndLoadingScreen();
	void BeginLoadingScreen();
};


// Class PlatformGameFramework.PGame_GameModeBase
// 0xFFFFFFFFA505F380 (0x0000 - 0x5AFA0C80)
class APGame_GameModeBase : public AGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_GameModeBase");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_GameMode
// 0x5B13B680
class APGame_GameMode : public APGame_GameModeBase
{
public:
	unsigned char                                      UnknownData00[0x5B13B680];                                // 0x0000(0x5B13B680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_GameMode");
		return ptr;
	}


	void OnFubarShutdownTimeout();
	void InactivePlayerStateDestroyed();
	void FinalShutdown();
	void FinalizeMatchEnded();
};


// Class PlatformGameFramework.PGame_LandingPanelJSONHandler
// 0x5B13D500
class UPGame_LandingPanelJSONHandler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B13D500];                                // 0x0000(0x5B13D500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_LandingPanelJSONHandler");
		return ptr;
	}


	void RequestNewJson();
};


// Class PlatformGameFramework.PGame_PerformanceCaptureSettings
// 0x5B13D300
class UPGame_PerformanceCaptureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B13D300];                                // 0x0000(0x5B13D300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PerformanceCaptureSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerController
// 0xFFFFFFFFFFF55F40 (0x5B09C7C0 - 0x5B146880)
class APGame_PlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PlayerController");
		return ptr;
	}


	void ClientGameFubared();
};


// Class PlatformGameFramework.PGame_PlayerInputDefault
// 0x5B146700
class UPGame_PlayerInputDefault : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B146700];                                // 0x0000(0x5B146700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PlayerInputDefault");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PlayerInput
// 0xAB620 (0x5B147C00 - 0x5B09C5E0)
class UPGame_PlayerInput : public UPlayerInput
{
public:
	unsigned char                                      UnknownData00[0xAB620];                                   // 0x5B09C5E0(0xAB620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PlayerInput");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_HierarchicalInputComponent
// 0xFFFFFFFFA4F63AC0 (0x0000 - 0x5B09C540)
class UPGame_HierarchicalInputComponent : public UInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_HierarchicalInputComponent");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_PositionHistoryComponent
// 0xA4EC580 (0x5B09C400 - 0x50BAFE80)
class UPGame_PositionHistoryComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA4EC580];                                 // 0x50BAFE80(0xA4EC580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_PositionHistoryComponent");
		return ptr;
	}


	void RemoveTrackedPrimitive();
	void AddTrackedPrimitive();
};


// Class PlatformGameFramework.PGame_ShippingConsole
// 0x0000
class UPGame_ShippingConsole : public UShippingConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_ShippingConsole");
		return ptr;
	}

};


// Class PlatformGameFramework.PGame_WorldSettings
// 0xFFFFFFFFFFF52680 (0x5B09BC80 - 0x5B149600)
class APGame_WorldSettings : public AWorldSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGame_WorldSettings");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_ParallelSequence
// 0xFFFFFFFFA4F64560 (0x0000 - 0x5B09BAA0)
class UPGameBTComposite_ParallelSequence : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_ParallelSequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random
// 0xFFFFFFFFFFFFFF60 (0x5B09BA00 - 0x5B09BAA0)
class UPGameBTComposite_Random : public UBTCompositeNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Selector
// 0xFFFFFFFFA4F64600 (0x0000 - 0x5B09BA00)
class UPGameBTComposite_Random_Selector : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random_Selector");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTComposite_Random_Sequence
// 0xFFFFFFFFA4F64600 (0x0000 - 0x5B09BA00)
class UPGameBTComposite_Random_Sequence : public UPGameBTComposite_Random
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTComposite_Random_Sequence");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_AlwaysReturn
// 0xACF60 (0x5B14B200 - 0x5B09E2A0)
class UPGameBTTask_AlwaysReturn : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0xACF60];                                   // 0x5B09E2A0(0xACF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTTask_AlwaysReturn");
		return ptr;
	}

};


// Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UPGameBTTask_ClearBlackboardKey : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformGameFramework.PGameBTTask_ClearBlackboardKey");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
