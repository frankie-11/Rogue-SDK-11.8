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

// Class Killstreak.AkPoolComponent
// 0x56020 (0x5B236320 - 0x5B1E0300)
class UAkPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x56020];                                   // 0x5B1E0300(0x56020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.AkPoolComponent");
		return ptr;
	}

};


// Class Killstreak.AnimNotifyState_DirectionSwap
// 0x0000
class UAnimNotifyState_DirectionSwap : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.AnimNotifyState_DirectionSwap");
		return ptr;
	}

};


// Class Killstreak.AnimNotifyState_LeftHandIKOff
// 0x0000
class UAnimNotifyState_LeftHandIKOff : public UAnimNotifyState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.AnimNotifyState_LeftHandIKOff");
		return ptr;
	}

};


// Class Killstreak.ItemCollection
// 0x5B24E680
class UItemCollection : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5B24E680];                                // 0x0000(0x5B24E680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ItemCollection");
		return ptr;
	}

};


// Class Killstreak.ApparelCollection
// 0xFFFFFFFFFFFFFF00 (0x5B24E580 - 0x5B24E680)
class UApparelCollection : public UItemCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ApparelCollection");
		return ptr;
	}

};


// Class Killstreak.AttachmentCollection
// 0xFFFFFFFFFFFFFD00 (0x5B24E380 - 0x5B24E680)
class UAttachmentCollection : public UItemCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.AttachmentCollection");
		return ptr;
	}


	void GetCompatibleAttachmentsForWeaponType();
};


// Class Killstreak.BakedOcclusionLUT
// 0x5B0E6040
class UBakedOcclusionLUT : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E6040];                                // 0x0000(0x5B0E6040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.BakedOcclusionLUT");
		return ptr;
	}

};


// Class Killstreak.AudioOcclusionComponent
// 0xA69DE80 (0x5B24DD00 - 0x50BAFE80)
class UAudioOcclusionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA69DE80];                                 // 0x50BAFE80(0xA69DE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.AudioOcclusionComponent");
		return ptr;
	}


	void GetPathedOcclusion();
};


// Class Killstreak.EchoBlueprintLibrary
// 0x0000
class UEchoBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.EchoBlueprintLibrary");
		return ptr;
	}


	void RequestEchoFromActor();
	void RequestEcho();
};


// Class Killstreak.EnvironmentActorInterface
// 0x0000
class UEnvironmentActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.EnvironmentActorInterface");
		return ptr;
	}


	void TrackerLeave();
	void TrackerEnter();
	void GetEnvironmentTag();
};


// Class Killstreak.EnvironmentListenerComponent
// 0xA69F280 (0x5B24F100 - 0x50BAFE80)
class UEnvironmentListenerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA69F280];                                 // 0x50BAFE80(0xA69F280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.EnvironmentListenerComponent");
		return ptr;
	}


	void ViewTargetEnvironmentChanged();
	void OnEnvironmentChanged();
	void GetCurrentEnvironment();
};


// Class Killstreak.EnvironmentTrackerComponent
// 0xA686220 (0x5B2360A0 - 0x50BAFE80)
class UEnvironmentTrackerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA686220];                                 // 0x50BAFE80(0xA686220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.EnvironmentTrackerComponent");
		return ptr;
	}


	void ReevalulateEnvironment();
	void OnRep_CurrentEnvironment();
	void GetCurrentEnvironment();
	void EndTouchingOwnerUpdatedComponent();
	void BlueprintEnvironmentChanged();
	void BeginTouchingOwnerUpdatedComponent();
};


// Class Killstreak.EnvironmentVolume
// 0x5B24FF00
class AEnvironmentVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x5B24FF00];                                // 0x0000(0x5B24FF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.EnvironmentVolume");
		return ptr;
	}

};


// Class Killstreak.JobCollection
// 0x1780 (0x5B24FE00 - 0x5B24E680)
class UJobCollection : public UItemCollection
{
public:
	unsigned char                                      UnknownData00[0x1780];                                    // 0x5B24E680(0x1780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.JobCollection");
		return ptr;
	}

};


// Class Killstreak.KSJobRole
// 0x1B26C0 (0x5B24FB00 - 0x5B09D440)
class UKSJobRole : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1B26C0];                                  // 0x5B09D440(0x1B26C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobRole");
		return ptr;
	}


	void GetRoleIcon();
};


// Class Killstreak.KickbackModule
// 0x0000
class UKickbackModule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KickbackModule");
		return ptr;
	}


	void MakeKickbackInstance();
	void GetMaximumVerticalKick();
	void GetMaximumHorizontalKick();
};


// Class Killstreak.KickbackModuleRandom
// 0x5B270F00
class UKickbackModuleRandom : public UKickbackModule
{
public:
	unsigned char                                      UnknownData00[0x5B270F00];                                // 0x0000(0x5B270F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KickbackModuleRandom");
		return ptr;
	}

};


// Class Killstreak.Killstreak_ShippingConsole
// 0x0000
class UKillstreak_ShippingConsole : public UPGame_ShippingConsole
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.Killstreak_ShippingConsole");
		return ptr;
	}

};


// Class Killstreak.KillstreakGameSingleton
// 0x0000
class UKillstreakGameSingleton : public UPlatformGameSingleton
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KillstreakGameSingleton");
		return ptr;
	}

};


// Class Killstreak.KSAccoladeTracker
// 0x5B270980
class UKSAccoladeTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B270980];                                // 0x0000(0x5B270980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAccoladeTracker");
		return ptr;
	}


	void StartTracking();
	void ResetTracker();
	void NativeHandleElimEvent();
	void NativeHandleDownEvent();
	void HandleElimEvent();
	void HandleDownEvent();
	void GetPrimaryAccoladeDisplayInfo();
	void GetOwningGameMode();
	void DispatchGameStateAccoladeDisplay();
};


// Class Killstreak.KSAcquisition
// 0x5B236000
class UKSAcquisition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B236000];                                // 0x0000(0x5B236000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAcquisition");
		return ptr;
	}


	void IsVoucherAcquisition();
	void IsPurchase();
	void IsBundleAcquisition();
};


// Class Killstreak.KSAcquisitionManager
// 0x121B80 (0x5B270400 - 0x5B14E880)
class UKSAcquisitionManager : public UPUMG_AcquisitionManager
{
public:
	unsigned char                                      UnknownData00[0x121B80];                                  // 0x5B14E880(0x121B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAcquisitionManager");
		return ptr;
	}


	void GetNextAcquistion();
	void CreateAcquisitionForItem();
};


// Class Killstreak.KSActivityInstanceManager
// 0x0000
class UKSActivityInstanceManager : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSActivityInstanceManager");
		return ptr;
	}

};


// Class Killstreak.KSActivity
// 0x122900 (0x5B271480 - 0x5B14EB80)
class UKSActivity : public UPlatformInventoryItem
{
public:
	unsigned char                                      UnknownData00[0x122900];                                  // 0x5B14EB80(0x122900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSActivity");
		return ptr;
	}


	void InitNewlyCreatedActivity();
	void GetTierDataForProgress();
	void GetInstanceForPlayer();
};


// Class Killstreak.KSJobActivity
// 0xFFFFFFFFFFFFFF80 (0x5B271400 - 0x5B271480)
class UKSJobActivity : public UKSActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobActivity");
		return ptr;
	}

};


// Class Killstreak.KSMapActivity
// 0xFFFFFFFFFFFFFE80 (0x5B271300 - 0x5B271480)
class UKSMapActivity : public UKSActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMapActivity");
		return ptr;
	}

};


// Class Killstreak.KSActivityInstance
// 0x5B273C80
class UKSActivityInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B273C80];                                // 0x0000(0x5B273C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSActivityInstance");
		return ptr;
	}


	void UpdateActivityTiers();
	void OnEventTrackerTriggered();
	void IsUnlocked();
	void IsFinished();
	void IsActive();
	void IncrementProgress();
	void HasAuthority();
	void GetTiersForXpRange();
	void GetTiers();
	void GetTierDataForProgress();
	void GetProgressTierForSpecifiedProgressCount();
	void GetProgressTier();
	void GetProgressPercentageToNextTier();
	void GetProgressPercentageToMaxTier();
	void GetProgressEarned();
	void GetProgressDisplayText();
	void GetProgressCount();
	void GetPlayerId();
	void GetNextTier();
	void GetMaxTier();
	void GetLastProgressTime();
	void GetInventoryProgressCount();
	void GetInventoryId();
	void CreateTracker();
};


// Class Killstreak.KSActivityManagerBase
// 0x5B274600
class UKSActivityManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B274600];                                // 0x0000(0x5B274600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSActivityManagerBase");
		return ptr;
	}


	void RequestActivitiesLoad();
	void QueryActivityInstancesByTime();
	void QueryActivityInstances();
	void OnStoreVendorsLoaded();
	void OnSetupPhaseStarted();
	void OnSetupPhaseFinished();
	void OnServerPlayerPostLogin();
	void OnServerPlayerLogout();
	void OnGameModePhaseChanged();
	void OnGameModeInitialized();
	void OnClientLoggedIn();
	void OnAllActivitiesLoaded();
	void IsSetupFinished();
	void GoToNextSetupPhase();
	void GetActivityInstances();
	void GetActivityInstanceByItemId();
	void GetActivityInstance();
	void FindActivity();
	void FindActivitiesByJob();
	void DoesRequireSetupPhase();
	void AttemptInitialActivityCreation();
};


// Class Killstreak.KSActivityTestManager
// 0x299720 (0x5B237720 - 0x5AF9E000)
class AKSActivityTestManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x299720];                                  // 0x5AF9E000(0x299720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSActivityTestManager");
		return ptr;
	}


	void DirectlySetupActivityTrackingForPlayer();
};


// Class Killstreak.KSLagCompensatedActor
// 0x2D7C80 (0x5B275C80 - 0x5AF9E000)
class AKSLagCompensatedActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2D7C80];                                  // 0x5AF9E000(0x2D7C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLagCompensatedActor");
		return ptr;
	}


	void YieldToRealActor();
	void TryToDestroy();
	void SetLagCompActorIDFromWeapon();
	void SetLagCompActorIDFromParentProjectile();
	void SetLagCompActorIDFromModInstance();
	void RealActorTakeOver();
	void RealActorDestroyed();
	void OnTakeOverAsRealActor();
	void OnRep_LagCompActorID();
	void OnRealActorSpawn();
	void OnPlayerStateChanged();
	void OnPlayerSpawned();
	void IsClientPredictedActor();
	void IsActiveRealActor();
	void InitializeRealActor();
	void InitializeFakeActor();
	void FakeDestroyCleanup();
};


// Class Killstreak.KSAgentBase
// 0xFFFFFFFFFFFFF980 (0x5B275600 - 0x5B275C80)
class AKSAgentBase : public AKSLagCompensatedActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAgentBase");
		return ptr;
	}


	void RefundAgentAsset();
	void OnRep_CurrentHealth();
	void OnMissionBegin();
	void MovementPlaybackStop();
	void BroadcastMissionBegin();
};


// Class Killstreak.KSAgent_RevealDrone
// 0x1880 (0x5B276E80 - 0x5B275600)
class AKSAgent_RevealDrone : public AKSAgentBase
{
public:
	unsigned char                                      UnknownData00[0x1880];                                    // 0x5B275600(0x1880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAgent_RevealDrone");
		return ptr;
	}


	void UpdateReplicatedTimer();
	void StartNextReveal();
	void SetPlayerOwner();
	void ScrambleEnemies();
	void RevealOpposingTeam();
	void Ping();
	void GetRevealPeriodDuration();
	void EndRevealPeriod();
};


// Class Killstreak.KSAgent_RevivalDrone
// 0x2600 (0x5B277C00 - 0x5B275600)
class AKSAgent_RevivalDrone : public AKSAgentBase
{
public:
	unsigned char                                      UnknownData00[0x2600];                                    // 0x5B275600(0x2600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAgent_RevivalDrone");
		return ptr;
	}


	void TargetStartGuaranteedRevive();
	void StartReviveEffects();
	void SetOutlineVisibility();
	void SetFriendlyOutlineVisibility();
	void OnTargetKilled();
	void OnReviveEnd();
	void OnRep_OngoingReviveEffectsActive();
	void OnRep_DroneVulnerability();
	void OnRep_DroneVisibility();
	void GetReviveProgress();
	void GetMovementStage();
	void GetFlightPath();
	void EventStartReviveEffects();
	void EventOngoingReviveEffectsStarted();
	void EventEndReviveEffects();
	void BroadcastMovementState();
	void BroadcastEndReviveEffects();
	void BroadcastDroneVulnerability();
	void BroadcastDroneVisibility();
	void BeginRevive();
	void ApplyDroneVulnerabilityInternal();
	void ApplyDroneVisibilityInternal();
	void ActivateDroneOngoingEffects();
};


// Class Killstreak.KSAIActorCollection
// 0xA6873A0 (0x5B237220 - 0x50BAFE80)
class UKSAIActorCollection : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA6873A0];                                 // 0x50BAFE80(0xA6873A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIActorCollection");
		return ptr;
	}

};


// Class Killstreak.KSAIActorCollection_Extraction
// 0xFFFFFFFFFFFFFF60 (0x5B237180 - 0x5B237220)
class UKSAIActorCollection_Extraction : public UKSAIActorCollection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIActorCollection_Extraction");
		return ptr;
	}

};


// Class Killstreak.KSAIController
// 0x1200 (0x5B27B400 - 0x5B27A200)
class AKSAIController : public AAIController
{
public:
	unsigned char                                      UnknownData00[0x1200];                                    // 0x5B27A200(0x1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIController");
		return ptr;
	}


	void SetNavigationInteractTarget();
	void OnPawnKilled();
	void HandleTeamSidesFlipped();
	void HandleJobChanged();
	void GetOwnedCharacter();
	void GetNavigationInteractTarget();
	void GetKSPerceptionComponent();
	void ClearNavigationInteractTarget();
};


// Class Killstreak.KSAIDifficultyComponent
// 0xA6CC600 (0x5B27C480 - 0x50BAFE80)
class UKSAIDifficultyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA6CC600];                                 // 0x50BAFE80(0xA6CC600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIDifficultyComponent");
		return ptr;
	}


	void GetCurrentDifficulty();
	void ChangeDifficulty();
};


// Class Killstreak.KSAIItemPriorityComponent
// 0xA686D60 (0x5B236BE0 - 0x50BAFE80)
class UKSAIItemPriorityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA686D60];                                 // 0x50BAFE80(0xA686D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIItemPriorityComponent");
		return ptr;
	}


	void InsertPriority();
	void InsertPriorities();
	void GetWeightByName();
	void GetWeight();
	void GetShopPurchaseWeightByName();
	void GetShopPurchaseWeight();
	void GetShopPriorityGroupByName();
	void GetShopPriorityGroup();
	void GetPriorityMultiplierByName();
	void GetPriorityMultiplier();
	void ClearPriorities();
};


// Class Killstreak.KSAimAssistActor
// 0x2DF000 (0x5B27D000 - 0x5AF9E000)
class AKSAimAssistActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2DF000];                                  // 0x5AF9E000(0x2DF000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimAssistActor");
		return ptr;
	}


	void ResetHealth();
	void OnRep_HealthInfo();
	void OnKilled();
	void ModifyIncomingDamageTaken();
	void IsValidIncomingDamage();
	void GetAAHeadLocation();
	void GetAABodyLocation();
	void CanBeHitByWeapon();
	void AimAssistRightNow();
};


// Class Killstreak.KSAimAssistAnchorComponent
// 0xFFFFFFFFFFFFFF80 (0x5B27CA00 - 0x5B27CA80)
class UKSAimAssistAnchorComponent : public USphereComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimAssistAnchorComponent");
		return ptr;
	}

};


// Class Killstreak.KSAimAssistComponent
// 0xA6CF900 (0x5B27F780 - 0x50BAFE80)
class UKSAimAssistComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA6CF900];                                 // 0x50BAFE80(0xA6CF900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimAssistComponent");
		return ptr;
	}


	void GetScaledProjectionBoundsForActor();
	void GetProjectionSpaceStackBoundary();
	void GetPlayerOwner();
	void GetAssistRingScreenSize();
	void GetActorScreenBoundsForActor();
};


// Class Killstreak.KSAimAssistDataBase
// 0x19B8C0 (0x5B238D00 - 0x5B09D440)
class UKSAimAssistDataBase : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x19B8C0];                                  // 0x5B09D440(0x19B8C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimAssistDataBase");
		return ptr;
	}

};


// Class Killstreak.KSAimAssistTargetInterface
// 0x0000
class UKSAimAssistTargetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimAssistTargetInterface");
		return ptr;
	}


	void UnregisterAsAimAssistTarget();
	void RegisterAsAimAssistTarget();
	void GetHeadLocation();
	void GetBodyLocation();
	void GetAsActor();
	void CanBeConsideredForAimAssistRightNow();
};


// Class Killstreak.KSAimCorrectionData
// 0xFFFFFFFFFFEACD40 (0x5B0E5A40 - 0x5B238D00)
class UKSAimCorrectionData : public UKSAimAssistDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimCorrectionData");
		return ptr;
	}

};


// Class Killstreak.KSAimFrictionData
// 0xFFFFFFFFFFEACB00 (0x5B0E5800 - 0x5B238D00)
class UKSAimFrictionData : public UKSAimAssistDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimFrictionData");
		return ptr;
	}

};


// Class Killstreak.KSAimLockData
// 0xFFFFFFFFFFEAC8C0 (0x5B0E55C0 - 0x5B238D00)
class UKSAimLockData : public UKSAimAssistDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimLockData");
		return ptr;
	}

};


// Class Killstreak.KSAimMagnetismData
// 0xFFFFFFFFA4DC7300 (0x0000 - 0x5B238D00)
class UKSAimMagnetismData : public UKSAimAssistDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimMagnetismData");
		return ptr;
	}

};


// Class Killstreak.KSAimSnapData
// 0xFFFFFFFFFFEAC680 (0x5B0E5380 - 0x5B238D00)
class UKSAimSnapData : public UKSAimAssistDataBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAimSnapData");
		return ptr;
	}

};


// Class Killstreak.KSAIObjectivePriorityComponent
// 0xA6E1200 (0x5B291080 - 0x50BAFE80)
class UKSAIObjectivePriorityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA6E1200];                                 // 0x50BAFE80(0xA6E1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIObjectivePriorityComponent");
		return ptr;
	}


	void UpdatePriority();
	void UpdatePriorities();
	void Setup();
	void InsertPriority();
	void InsertPriorities();
	void GetPriority();
	void ClearPriorities();
	void ApplyPrioritiesFromDifficulty();
};


// Class Killstreak.KSAIPerceptionComponent
// 0xFFFFFFFFA4DC8160 (0x0000 - 0x5B237EA0)
class UKSAIPerceptionComponent : public UAIPerceptionComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAIPerceptionComponent");
		return ptr;
	}


	void GetCurrentlyPerceivedStimuli();
};


// Class Killstreak.KSAISense_MapPoint
// 0xFFFFFFFFFFFA75A0 (0x5B237C20 - 0x5B290680)
class UKSAISense_MapPoint : public UAISense
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISense_MapPoint");
		return ptr;
	}

};


// Class Killstreak.KSAISense_Objective
// 0xFFFFFFFFFFFFFF60 (0x5B23A420 - 0x5B23A4C0)
class UKSAISense_Objective : public UAISense_Hearing
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISense_Objective");
		return ptr;
	}


	void ReportObjectiveEvent();
};


// Class Killstreak.KSAISense_PeripheralSight
// 0xFFFFFFFFA4D6E380 (0x0000 - 0x5B291C80)
class UKSAISense_PeripheralSight : public UAISense_Sight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISense_PeripheralSight");
		return ptr;
	}

};


// Class Killstreak.KSAISense_Player
// 0xFFFFFFFFFFFA9D00 (0x5B23A380 - 0x5B290680)
class UKSAISense_Player : public UAISense
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISense_Player");
		return ptr;
	}

};


// Class Killstreak.KSAISense_Team
// 0xFFFFFFFFFFFA9C60 (0x5B23A2E0 - 0x5B290680)
class UKSAISense_Team : public UAISense
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISense_Team");
		return ptr;
	}

};


// Class Killstreak.KSAISenseConfig_MapPoint
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UKSAISenseConfig_MapPoint : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISenseConfig_MapPoint");
		return ptr;
	}

};


// Class Killstreak.KSAISenseConfig_Player
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UKSAISenseConfig_Player : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISenseConfig_Player");
		return ptr;
	}

};


// Class Killstreak.KSAISenseConfig_Team
// 0xFFFFFFFFA4D6E600 (0x0000 - 0x5B291A00)
class UKSAISenseConfig_Team : public UAISenseConfig
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISenseConfig_Team");
		return ptr;
	}

};


// Class Killstreak.KSAISenseEvent_Objective
// 0x5B291980
class UKSAISenseEvent_Objective : public UAISenseEvent
{
public:
	unsigned char                                      UnknownData00[0x5B291980];                                // 0x0000(0x5B291980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISenseEvent_Objective");
		return ptr;
	}

};


// Class Killstreak.KSAISightTargetInterface
// 0x0000
class UKSAISightTargetInterface : public UAISightTargetInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAISightTargetInterface");
		return ptr;
	}

};


// Class Killstreak.KSAkComponent
// 0xB05C0 (0x5B23A240 - 0x5B189C80)
class UKSAkComponent : public UAkComponent
{
public:
	unsigned char                                      UnknownData00[0xB05C0];                                   // 0x5B189C80(0xB05C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAkComponent");
		return ptr;
	}

};


// Class Killstreak.KSAkAmbientComponent
// 0xFFFFFFFFA4DC5DC0 (0x0000 - 0x5B23A240)
class UKSAkAmbientComponent : public UKSAkComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAkAmbientComponent");
		return ptr;
	}

};


// Class Killstreak.KSAkAmbientSound
// 0x2F5180 (0x5B293180 - 0x5AF9E000)
class AKSAkAmbientSound : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2F5180];                                  // 0x5AF9E000(0x2F5180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAkAmbientSound");
		return ptr;
	}


	void StopAmbientSound();
	void StopAllKSAmbientSounds();
	void StartAmbientSound();
	void StartAllKSAmbientSounds();
};


// Class Killstreak.KSItemDrop
// 0x2F5380 (0x5B293380 - 0x5AF9E000)
class AKSItemDrop : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2F5380];                                  // 0x5AF9E000(0x2F5380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItemDrop");
		return ptr;
	}


	void ShouldShowViewedItemLabel();
	void SetInactiveStencilValue();
	void SetActiveStencilValue();
	void PlayDestroyedEffects();
	void Pickup();
	void OverridePickupFunction();
	void OnRootMeshDetached();
	void OnRep_PendingPickupCharacter();
	void OnRep_ItemAsset();
	void OnRep_DropHidePlayer();
	void GetPickupDelegate();
	void GetPendingPickupCharacter();
	void GetLootSiteSpawnRotation();
	void GetLabelInfoForSecondaryTitle();
	void GetLabelInfoForPrimaryTitle();
	void GetItemAsset();
	void EndOverlap();
	void CanBePickedUpByCharacterInternal();
	void CanBePickedUpByCharacter();
	void CalculateRandomImpulse();
	void BeginOverlap();
	void AsyncItemGiveComplete();
	void ApplyRandomImpulse();
	void AllowPickup();
};


// Class Killstreak.KSAmmoDrop
// 0xFFFFFFFFFFFFFF80 (0x5B293300 - 0x5B293380)
class AKSAmmoDrop : public AKSItemDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAmmoDrop");
		return ptr;
	}

};


// Class Killstreak.KSItem
// 0xEAF40 (0x5B239AC0 - 0x5B14EB80)
class UKSItem : public UPlatformInventoryItem
{
public:
	unsigned char                                      UnknownData00[0xEAF40];                                   // 0x5B14EB80(0xEAF40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItem");
		return ptr;
	}


	void SoftGiveToAsync();
	void SoftCreateDropAsync();
	void InitNewlyCreatedItem();
	void GiveToAsync();
	void GiveTo();
	void GetSpecialItemWidgetClass();
	void GetPurchasePreviewIcon();
	void GetItemPrice();
	void GetItemDropClass();
	void GetItemDisplayStats();
	void GetItemCategoryText();
	void GetColorCode();
	void CreateDropAsync();
	void CreateDrop();
	void CanBePickedUpByCharacter();
	void CanBePickedUpBy();
};


// Class Killstreak.KSAmmoDropAsset
// 0xFFFFFFFFFFFFFEC0 (0x5B239980 - 0x5B239AC0)
class UKSAmmoDropAsset : public UKSItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAmmoDropAsset");
		return ptr;
	}


	void GetAmmoType();
};


// Class Killstreak.KSAnalogStickFilter
// 0x5B2398E0
class UKSAnalogStickFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2398E0];                                // 0x0000(0x5B2398E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnalogStickFilter");
		return ptr;
	}

};


// Class Killstreak.KSAnimationAuditComponent
// 0xA6E5780 (0x5B295600 - 0x50BAFE80)
class UKSAnimationAuditComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA6E5780];                                 // 0x50BAFE80(0xA6E5780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimationAuditComponent");
		return ptr;
	}


	void AnimAuditStop();
	void AnimAuditStart();
	void AnimAuditClear();
};


// Class Killstreak.KSAnimInstance
// 0xC7500 (0x5B297380 - 0x5B1CFE80)
class UKSAnimInstance : public USkinnedAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xC7500];                                   // 0x5B1CFE80(0xC7500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimInstance");
		return ptr;
	}


	void SetLobbyState();
	void Montage_JumpToRandomSection();
};


// Class Killstreak.KSAnimNotify_EmotionDuration
// 0x5B2397A0
class UKSAnimNotify_EmotionDuration : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B2397A0];                                // 0x0000(0x5B2397A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotify_EmotionDuration");
		return ptr;
	}

};


// Class Killstreak.KSAnimNotify_PlayParticleEffect
// 0xCCD80 (0x5B297200 - 0x5B1CA480)
class UKSAnimNotify_PlayParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:
	unsigned char                                      UnknownData00[0xCCD80];                                   // 0x5B1CA480(0xCCD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotify_PlayParticleEffect");
		return ptr;
	}

};


// Class Killstreak.KSAnimNotifyState_Emotion
// 0x5B239700
class UKSAnimNotifyState_Emotion : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5B239700];                                // 0x0000(0x5B239700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotifyState_Emotion");
		return ptr;
	}

};


// Class Killstreak.KSAnimNotifyState_Prop
// 0x5B297000
class UKSAnimNotifyState_Prop : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5B297000];                                // 0x0000(0x5B297000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotifyState_Prop");
		return ptr;
	}

};


// Class Killstreak.KSAnimNotifyState_Trail
// 0xFFFFFFFFFFFFFF80 (0x5B296B00 - 0x5B296B80)
class UKSAnimNotifyState_Trail : public UAnimNotifyState_Trail
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotifyState_Trail");
		return ptr;
	}

};


// Class Killstreak.KSAnimNotifyState_WeaponProp
// 0x5B296800
class UKSAnimNotifyState_WeaponProp : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5B296800];                                // 0x0000(0x5B296800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnimNotifyState_WeaponProp");
		return ptr;
	}

};


// Class Killstreak.KSAnnouncer
// 0x5B299280
class AKSAnnouncer : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B299280];                                // 0x0000(0x5B299280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAnnouncer");
		return ptr;
	}


	void ShouldPlayTimeAnnouncementFromGroup();
	void QueueAnnouncementStruct();
	void QueueAnnouncement();
	void ProcessTimeAnnouncementList();
	void ProcessQueue();
	void OnObjectiveTimerZero();
	void OnMatchTimerUpdate();
	void OnLockoutComplete();
	void OnLocalViewTargetMovementModeChanged();
	void OnLocalViewTargetChanged();
	void OnControlPointTimerUpdate();
	void LocalPlayerControllerDestroyed();
	void GetTeamOverrideForAnnouncementGroup();
	void GetPlayerController();
	void EventQueueInGame();
	void EventLocalPlayerControllerDestroyed();
	void AnnouncePlayerDeath();
};


// Class Killstreak.KSApparelAsset
// 0x5F4C0 (0x5B298F80 - 0x5B239AC0)
class UKSApparelAsset : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x5F4C0];                                   // 0x5B239AC0(0x5F4C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSApparelAsset");
		return ptr;
	}


	void GetSlot();
};


// Class Killstreak.KSApparelAsset_SkinDataTables
// 0xFFFFFFFFFFFA0460 (0x5B2393E0 - 0x5B298F80)
class UKSApparelAsset_SkinDataTables : public UKSApparelAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSApparelAsset_SkinDataTables");
		return ptr;
	}

};


// Class Killstreak.KSApparelAsset_CustomComponent
// 0xFFFFFFFFFFFFFF60 (0x5B239340 - 0x5B2393E0)
class UKSApparelAsset_CustomComponent : public UKSApparelAsset_SkinDataTables
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSApparelAsset_CustomComponent");
		return ptr;
	}

};


// Class Killstreak.KSApparelAsset_SkinnedMesh
// 0xFFFFFFFFFFFFFE20 (0x5B239200 - 0x5B2393E0)
class UKSApparelAsset_SkinnedMesh : public UKSApparelAsset_SkinDataTables
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSApparelAsset_SkinnedMesh");
		return ptr;
	}

};


// Class Killstreak.KSEquipment
// 0x5B29A200
class AKSEquipment : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B29A200];                                // 0x0000(0x5B29A200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEquipment");
		return ptr;
	}


	void Unequip();
	void SetEquipPoint();
	void OnUnequipped();
	void OnRep_EquipPoint();
	void OnRep_EquipmentId();
	void OnEquipped();
	void IsInitialized();
	void IsInAction();
	void IsEquipped();
	void GetKSItem();
	void GetGiveParameters();
	void GetEquipPoint();
	void GetEquipmentId();
	void GetCosmeticComponent();
	void EquipNoPoint();
	void Drop();
};


// Class Killstreak.KSWeapon
// 0x18B00 (0x5B2B2D00 - 0x5B29A200)
class AKSWeapon : public AKSEquipment
{
public:
	unsigned char                                      UnknownData00[0x18B00];                                   // 0x5B29A200(0x18B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon");
		return ptr;
	}


	void UpdateHiddenInteractable();
	void StopFireOnRelease();
	void StopFire();
	void StopDefaultAim();
	void StopAltFire();
	void StopAimOverShoulder();
	void StopAimDownSights();
	void StateRequestTimeoutExpired();
	void StartRetrieving();
	void StartReload();
	void StartHolstering();
	void StartFire();
	void StartDefaultAim();
	void StartAltFire();
	void StartAimOverShoulder();
	void StartAimDownSights();
	void SimulateConsumeAmmo();
	void ShouldStartReloadInterruptSprinting();
	void ShouldStartHolsterInterruptSprinting();
	void ShouldStartFireInterruptSprinting();
	void ShouldStartFireInterruptAimDownSights();
	void ShouldEACRecordAsMeleeAttackNow();
	void ShouldConsumeAmmoDirectlyFromInventory();
	void ShouldBeRemovedWhenExhausted();
	void SetAutoSwapOutWeaponId();
	void ServerRetrieveActiveWeaponCompressed();
	void ServerRetrieveActiveWeapon();
	void ServerRequestStateChangeCompressed();
	void ServerRequestStateChange();
	void ServerPostReloadCompressed();
	void ServerPostReload();
	void ServerCookReleasedCompressed();
	void ServerCookReleased();
	void Reload();
	void ProcessHits();
	void PreLoadAmmo();
	void OwnerIsTransitioningAimState();
	void OwnerIsSwimming();
	void OwnerIsSprinting();
	void OwnerIsReloadingAnyWeapon();
	void OwnerIsMovingOnGround();
	void OwnerIsLocallyViewed();
	void OwnerIsFreeFalling();
	void OwnerIsFiringMeleeWeapon();
	void OwnerIsDowned();
	void OwnerIsAlive();
	void OwnerHasAmmo();
	void OnStartRetrieving();
	void OnStartReloadCooldown();
	void OnStartPreReload();
	void OnStartPreFire();
	void OnStartPostReload();
	void OnStartPostFire();
	void OnStartInactive();
	void OnStartHolstering();
	void OnStartCooldown();
	void OnStartBuildup();
	void OnRep_WeaponState();
	void OnRep_WeaponAsset();
	void OnRep_AuxiliaryWeaponInfo();
	void OnRep_AutoSwapOutWeaponId();
	void OnRep_Ammo();
	void OnPostMantleLockoutEnd();
	void OnOwnerMovementModeChangedNative();
	void OnOwnerMovementModeChanged();
	void OnEndRetrieving();
	void OnEndReloadCooldown();
	void OnEndPreReload();
	void OnEndPreFire();
	void OnEndPostReload();
	void OnEndPostFire();
	void OnEndInactive();
	void OnEndIdleState();
	void OnEndHolstering();
	void OnEndCooldown();
	void OnEndBuildup();
	void OnBeginIdleState();
	void ModifyDamageDealt();
	void IsRetrieving();
	void IsReloading();
	void IsInSprintRecovery();
	void IsInReloadingLoop();
	void IsInFiringLoop();
	void IsInDodgeRollRecovery();
	void IsHolstering();
	void IsFiring();
	void IsExhausted();
	void IsEquippedMelee();
	void IsEquippedMainWeapon();
	void IsEquippedGrenade();
	void IsClipFull();
	void IsClipEmpty();
	void IsActiveWeapon();
	void InstantReload();
	void HasAttachment();
	void HandleExhausted();
	void GetWeaponState();
	void GetWeaponComponent();
	void GetWeaponAsset();
	void GetWalkSpeedModifier();
	void GetReloadCooldownTime();
	void GetPreReloadTime();
	void GetPostReloadTime();
	void GetMovementAccuracyPenalty();
	void GetMaxFiringAccuracyLoss();
	void GetLimbDamageAmount();
	void GetKSPlayerState();
	void GetInAirAccuracyModifier();
	void GetHiddenInteractable();
	void GetHeadDamageAmount();
	void GetDamageInstigator();
	void GetDamageFalloffRangeScaler();
	void GetCrouchAccuracyModifier();
	void GetClipSize();
	void GetCharacterOwner();
	void GetCanUseOffGround();
	void GetBaseDamageAmount();
	void GetBaseAccuracy();
	void GetAttachments();
	void GetAttachmentInstances();
	void GetAttachment();
	void GetAmmoType();
	void GetAmmoInOwnerInventory();
	void GetAmmoInClip();
	void GetAimOverShoulderAccuracyModifier();
	void GetAimDownSightsFOV();
	void GetAccuracyReturnRate();
	void GetAccuracyReturnDelay();
	void GetAccuracyLossPerShot();
	void FireWeapon();
	void EndState();
	void ConsumePendingFire();
	void ConsumeAmmo();
	void ClientStateChangeRejected();
	void ClientStateChangeAccepted();
	void ClientRecoverSeedMisalignment();
	void ClientNotifyRecoveryFinish();
	void ClientForceUpdateAmmoInClip();
	void ClientForceIdleFromFire();
	void ClientFixLastReload();
	void ClientFireWeaponRejected();
	void CheckExhausted();
	void CheckDeathShotForgiveness();
	void CanUseAnAimStateNow();
	void CanToggleOutOfAimDownSightsNow();
	void CanToggleIntoAimDownSightsNow();
	void CanStartReloadNow();
	void CanStartFireNow();
	void CanRetrieveNow();
	void CanReloadNowCommon();
	void CanRefireNow();
	void CanReceiveAttachment();
	void CanInteractWith();
	void CanHolsterNow();
	void CanFireNowCommon();
	void CanEverReload();
	void CanEverAimOverShoulder();
	void CanEverAimDownSights();
	void CanEverAimAlternate();
	void CanDropNow();
	void CanCookNow();
	void CanContinueReloadNow();
	void CancelHolstering();
	void CanBeSwappedTo();
	void CanBeSwappedFrom();
	void CanBeInterruptedNow();
	void CalculateDamageFromHitInfo();
	void CalculateDamageFalloffFromHitResults();
	void CalculateDamageFalloffFromDistance();
	void BeginState();
	void AltFireInitiated();
	void AltFireEnded();
	void AllowZiplineRightNow();
	void AllowSprintingRightNow();
	void AllowDodgeRollRightNow();
	void AimTransitionComplete();
	void AbortReload();
	void AbortFire();
};


// Class Killstreak.KSArmor
// 0xFFFFFFFFFFFFF500 (0x5B2B2200 - 0x5B2B2D00)
class AKSArmor : public AKSWeapon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSArmor");
		return ptr;
	}


	void ShouldDestroyOnBreak();
	void RepairArmor();
	void IsRepairableArmor();
	void IsArmorBeingRepaired();
	void GetMaxDurability();
	void GetDurability();
	void GetArmorAsset();
	void CanArmorBeRepaired();
	void CanAbsorbDamageType();
	void CalcAbsorbRadialDamage();
	void CalcAbsorbPointDamage();
};


// Class Killstreak.KSWeaponAsset
// 0x831C0 (0x5B2BCC80 - 0x5B239AC0)
class UKSWeaponAsset : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x831C0];                                   // 0x5B239AC0(0x831C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset");
		return ptr;
	}


	void TryToEquipToCharacterNoPointGiven();
	void TryToEquipToCharacter();
	void ShouldUseBuildupForCooking();
	void ShouldStartReloadInterruptSprinting();
	void ShouldStartHolsterInterruptSprinting();
	void ShouldStartFireInterruptSprinting();
	void ShouldPreventDodgeRollDuringFire();
	void ShouldPrefireOverlapSkipToFire();
	void ShouldMuteEmptyClipWarnings();
	void ShouldLockonPrefire();
	void ShouldLagCompensateFire();
	void ShouldForceUprightDrops();
	void ShouldDoRadialDamage();
	void ShouldBeRemovedWhenExhausted();
	void RequiresAnEquipPoint();
	void MakeKickbackCurve();
	void LockoutAimStateInCooldown();
	void LimitNumInPlay();
	void IsUnique();
	void IsRadialDamageConical();
	void IsGadget();
	void IsAudible();
	void HasKickback();
	void GetWeaponUpgrade();
	void GetWeaponType();
	void GetWeaponStats();
	void GetWeaponNameAsString();
	void GetWeaponName();
	void GetWeaponDropClass();
	void GetWeaponDescriptionAsString();
	void GetWeaponDescription();
	void GetWeaponComponentClass();
	void GetWeaponClass();
	void GetWeaponAttachmentPoints();
	void GetWeaponAmmoWidgetClass();
	void GetWalkSpeedModifier();
	void GetVibrationEffect();
	void GetValidEquipPoints();
	void GetValidAttachments();
	void GetUseAltFire();
	void GetUnlimitedAmmo();
	void GetThirdPersonFixedRelativeOffset();
	void GetSwapAfterFire();
	void GetSprintRecoveryTime();
	void GetSoftItemRenderImage();
	void GetShotPenetrationCount();
	void GetRoundsPerBurst();
	void GetRetrieveTime();
	void GetReticleType();
	void GetReloadType();
	void GetReloadCooldownTime();
	void GetRadialIgnoreWalls();
	void GetRadialIgnoreSelf();
	void GetRadialIgnoreFriendlies();
	void GetRadialDamageParams();
	void GetRadialConicalHalfAngle();
	void GetPreReloadTime();
	void GetPreFireTime();
	void GetPrefireSkipWindowNum();
	void GetPrefireSkipWindow();
	void GetPrefireOverlapGracePeriod();
	void GetPrefireLockonDistance();
	void GetPrefireLockonAngle();
	void GetPreFireInterruptThreshold();
	void GetPostReloadTime();
	void GetPostFireTime();
	void GetPostFireForgivenessTime();
	void GetOuterRadius();
	void GetMovementAccuracyPenalty();
	void GetMaxNumInPlay();
	void GetMaxFiringAccuracyLoss();
	void GetMaxFalloffDistance();
	void GetMaxCumulativeKickbackVerticalAngle();
	void GetLimbDamageAmount();
	void GetKickbackResetTime();
	void GetKickbackRecoveryRate();
	void GetKickbackRecoveryDelay();
	void GetKickbackRecoveryAcceleration();
	void GetKickbackApplicationOverride();
	void GetInnerRadius();
	void GetInAirAccuracyModifier();
	void GetHolsterTime();
	void GetHeadDamageAmount();
	void GetGamepadKickbackScaling();
	void GetFirstShotPreReloadTime();
	void GetFireModeType();
	void GetDodgeRollRecoveryTime();
	void GetDefaultAmmo();
	void GetDefaultAimTransitionTime();
	void GetDamageTypeClass();
	void GetDamageAmount();
	void GetCrouchAccuracyModifier();
	void GetCooldownDownTime();
	void GetConsumeAmmoDirectlyFromInventory();
	void GetCompatibleAttachments();
	void GetCompatibleAttachmentAssets();
	void GetClipSize();
	void GetCautionRadius();
	void GetCastType();
	void GetCanUseOffGround();
	void GetCanFireWhileInPowerSlide();
	void GetBuildupTime();
	void GetBaseRadialDamage();
	void GetBaseAccuracy();
	void GetAudibleRange();
	void GetAttachmentSlotCount();
	void GetAmmoType();
	void GetAlternativeVibrationEffect();
	void GetAlternativeVibrationAttenuation();
	void GetAlternatePreFireTime();
	void GetAlternatePostFireTime();
	void GetAimOverShoulderTransitionTime();
	void GetAimOverShoulderAccuracyModifier();
	void GetAimDownSightsTransitionTime();
	void GetAimDownSightsFOV();
	void GetAimAlternateTransitionTime();
	void GetADSSpeedModifier();
	void GetADSRollMultiplier();
	void GetADSBumpStartStopMultiplier();
	void GetADSBumpLoopingMultiplier();
	void GetADSBlurValuesInfo();
	void GetAccuracyReturnRate();
	void GetAccuracyReturnDelay();
	void GetAccuracyLossPerShot();
	void DoesScopingAllowAutoReload();
	void DoesRestoreAmmo();
	void DoesIgnoreNoFire();
	void CreateProjectile();
	void CreateAndExplodeProjectile();
	void ConeHalfAngleToAccuracy();
	void CanWeaponStateTransition();
	void CanResetKickback();
	void CanRecoverFromKickback();
	void CanReceiveAttachment();
	void CanModsReplenishAmmo();
	void CanInterruptPreReload();
	void CanEverReload();
	void CanEverFire();
	void CanEverAimOverShoulder();
	void CanEverAimDownSights();
	void CanEverAimAlternate();
	void CanBeDropped();
	void CalculateDamageFromProjectileHit();
	void CalculateDamageFromInstantHit();
	void CalculateDamageFalloffFromProjectileHit();
	void CalculateDamageFalloffFromHitResults();
	void CalculateDamageFalloffFromDistance();
	void AccuracyToConeHalfAngle();
};


// Class Killstreak.KSArmorAsset
// 0x1580 (0x5B2BE200 - 0x5B2BCC80)
class UKSArmorAsset : public UKSWeaponAsset
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5B2BCC80(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSArmorAsset");
		return ptr;
	}


	void ShouldDestroyOnBreak();
	void IsArmorRepairable();
	void GetMaxDurability();
	void GetDisplayLevel();
	void GetDamageAbsorbPercent();
	void DoesAbsorbBreakingHit();
	void CalcAbsorbRadialDamage();
	void CalcAbsorbPointDamage();
};


// Class Killstreak.KSWeaponAssetDrop
// 0x2C380 (0x5B2BF700 - 0x5B293380)
class AKSWeaponAssetDrop : public AKSItemDrop
{
public:
	unsigned char                                      UnknownData00[0x2C380];                                   // 0x5B293380(0x2C380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAssetDrop");
		return ptr;
	}


	void SetBundledAmmoToDefault();
	void OverrideDropAmmo();
	void OnReturnProjectileStopped();
	void OnRep_ReturnProjectile();
	void GetWeaponComponent();
	void GetWeaponAsset();
	void GetReturnProjectile();
	void GetLabelInfoForFireModeType();
	void GetLabelInfoForAmmoType();
	void CanPickupReplenishAmmo();
	void BroadcastPickupFailedInventoryFull();
	void AddAttachment();
};


// Class Killstreak.KSArmorAssetDrop
// 0xFFFFFFFFFFFFFF80 (0x5B2BF680 - 0x5B2BF700)
class AKSArmorAssetDrop : public AKSWeaponAssetDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSArmorAssetDrop");
		return ptr;
	}

};


// Class Killstreak.KSAssetManager
// 0xFFFFFFFFA4EB2900 (0x0000 - 0x5B14D700)
class UKSAssetManager : public UPInv_AssetManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAssetManager");
		return ptr;
	}

};


// Class Killstreak.KSNeutralBombDrop
// 0x0700 (0x5B2BFE00 - 0x5B2BF700)
class AKSNeutralBombDrop : public AKSWeaponAssetDrop
{
public:
	unsigned char                                      UnknownData00[0x700];                                     // 0x5B2BF700(0x0700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNeutralBombDrop");
		return ptr;
	}


	void OnOverlapBegin();
	void OnNeutralBombStateChanged();
	void NotifyBots();
	void IsSpottedByTeam();
	void IsSpottedByPlayer();
	void GetCurrentInteractionProgress();
	void ExplodeCosmetic();
	void Explode();
};


// Class Killstreak.KSAttackBombDrop
// 0xFFFFFFFFA4D40200 (0x0000 - 0x5B2BFE00)
class AKSAttackBombDrop : public AKSNeutralBombDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAttackBombDrop");
		return ptr;
	}

};


// Class Killstreak.KSObjectiveBase
// 0x332400 (0x5B2D0400 - 0x5AF9E000)
class AKSObjectiveBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x332400];                                  // 0x5AF9E000(0x332400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSObjectiveBase");
		return ptr;
	}


	void SetState();
	void ResetState();
	void OnRep_ObjectiveState();
	void OnRep_ObjectiveId();
	void NotifyBots();
	void HandleNewState();
	void GetPreviousState();
	void GetOwningTeamOrPlayer();
	void GetObjectiveMeterProgressTotal();
	void GetObjectiveMeterProgress();
	void GetObjectiveId();
	void GetObjectiveDisplayName();
	void GetObjectiveDisplayLabel();
	void GetCurrentState();
	void CanChangeState();
	void CallOnTeamSidesFlipped();
	void AssignObjectiveId();
	void ActivateObjective();
};


// Class Killstreak.KSExtractionComputer
// 0x1480 (0x5B2D1880 - 0x5B2D0400)
class AKSExtractionComputer : public AKSObjectiveBase
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x5B2D0400(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSExtractionComputer");
		return ptr;
	}


	void LocalHoverStateChanged();
	void InteractionEndOverlap();
	void InteractionComplete();
};


// Class Killstreak.KSAttackExtractionComputer
// 0xFFFFFFFFA4D2E780 (0x0000 - 0x5B2D1880)
class AKSAttackExtractionComputer : public AKSExtractionComputer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAttackExtractionComputer");
		return ptr;
	}

};


// Class Killstreak.KSAudioManager
// 0x5B2D3000
class UKSAudioManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2D3000];                                // 0x0000(0x5B2D3000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAudioManager");
		return ptr;
	}


	void HandleTeamCinematicStarted();
	void HandleSkydiveStarted();
	void HandleSkydiveSkipped();
	void HandleSkydiveEnded();
	void HandleRoundHasEnded();
	void HandlePostSelectionPhaseBeginFadeOut();
	void HandlePhaseChanged();
	void HandleMatchTimerUpdate();
	void HandleLoadingScreenEnded();
	void HandleLoadingScreenBegan();
	void HandleLeavingMap();
	void HandleLastManStanding();
	void HandleKillcamStarted();
	void HandleGameStateEndPlay();
	void HandleGameStateBeginPlay();
	void HandleGameModeReceived();
	void HandleDropshipDoorOpened();
	void HandleControlPointCaptured();
	void HandleBombStateChanged();
};


// Class Killstreak.KSAudioPlayer
// 0x5B0E7900
class AKSAudioPlayer : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B0E7900];                                // 0x0000(0x5B0E7900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAudioPlayer");
		return ptr;
	}


	void ComposeEventNamePriorityArray();
	void ComposeBankNamePriorityArray();
};


// Class Killstreak.KSAudioPlayerEventActionData
// 0x1A00A0 (0x5B23D4E0 - 0x5B09D440)
class UKSAudioPlayerEventActionData : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1A00A0];                                  // 0x5B09D440(0x1A00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAudioPlayerEventActionData");
		return ptr;
	}

};


// Class Killstreak.KSAudioPlayerStateParameterData
// 0x5B2D3480
class UKSAudioPlayerStateParameterData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2D3480];                                // 0x0000(0x5B2D3480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAudioPlayerStateParameterData");
		return ptr;
	}


	void HasActivePlayerCharacter();
	void HasActiveMusicPack();
	void HasActiveMapLevel();
	void HasActiveGameMode();
	void GetPreviousPlayerCharacter();
	void GetPreviousMusicPack();
	void GetPreviousMapLevel();
	void GetPreviousIsSpectating();
	void GetPreviousGameMode();
	void GetIsSpectating();
	void GetActivePlayerCharacter();
	void GetActiveMusicPack();
	void GetActiveMapLevel();
	void GetActiveGameMode();
};


// Class Killstreak.KSAutoPickupComponent
// 0xA725200 (0x5B2D5080 - 0x50BAFE80)
class UKSAutoPickupComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA725200];                                 // 0x50BAFE80(0xA725200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAutoPickupComponent");
		return ptr;
	}


	void OnOwnerPossessionChanged();
	void OnAutoPickupPreferenceChanged();
};


// Class Killstreak.KSAvatar
// 0x9B4C0 (0x5B2D4F80 - 0x5B239AC0)
class UKSAvatar : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x9B4C0];                                   // 0x5B239AC0(0x9B4C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAvatar");
		return ptr;
	}


	void GetSoftLargeAvatarIcon();
};


// Class Killstreak.KSAvenger
// 0xFFFFFFFFFFFCCAC0 (0x5B23D440 - 0x5B270980)
class UKSAvenger : public UKSAccoladeTracker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAvenger");
		return ptr;
	}


	void StoreCombatInfo();
	void RemoveTracker();
	void CheckPlayerTrackers();
};


// Class Killstreak.KSAwardActivity
// 0xFFFFFFFFA4D8EB80 (0x0000 - 0x5B271480)
class UKSAwardActivity : public UKSActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAwardActivity");
		return ptr;
	}

};


// Class Killstreak.KSAwardsManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSAwardsManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSAwardsManager");
		return ptr;
	}


	void GetAchievementActivityInstances();
};


// Class Killstreak.KSBanner
// 0x9AE40 (0x5B2D4900 - 0x5B239AC0)
class UKSBanner : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x9AE40];                                   // 0x5B239AC0(0x9AE40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBanner");
		return ptr;
	}


	void GetSoftSmallBannerIcon();
	void GetSoftLargeBannerIcon();
};


// Class Killstreak.KSBattlePassProgressionActivity
// 0xFFFFFFFFFFFCBE80 (0x5B23D300 - 0x5B271480)
class UKSBattlePassProgressionActivity : public UKSActivity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBattlePassProgressionActivity");
		return ptr;
	}

};


// Class Killstreak.KSBattlePassProgressionManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSBattlePassProgressionManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBattlePassProgressionManager");
		return ptr;
	}


	void ShouldDisplayMiniBattlePass();
	void GetMiniBattlePassXpItemId();
	void GetActivityInstanceByType();
	void FindActivityByType();
};


// Class Killstreak.KSGameRuleComponent
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UKSGameRuleComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameRuleComponent");
		return ptr;
	}


	void OnTeamSidesFlipped();
	void OnTeamChanged();
	void OnLogout();
	void NewPlayerStarting();
	void NewBotStarting();
};


// Class Killstreak.KSBehaviorRuleBaseComponent
// 0x0000
class UKSBehaviorRuleBaseComponent : public UKSGameRuleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBehaviorRuleBaseComponent");
		return ptr;
	}


	void HandleTeamSidesFlipped();
};


// Class Killstreak.KSBehaviorRuleComponent
// 0x0000
class UKSBehaviorRuleComponent : public UKSBehaviorRuleBaseComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBehaviorRuleComponent");
		return ptr;
	}


	void ClearBehaviorChange();
	void ApplyBehaviorChange();
};


// Class Killstreak.KSPlayerBehaviorRuleComponent
// 0x5B2D5F00
class UKSPlayerBehaviorRuleComponent : public UKSBehaviorRuleBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x5B2D5F00];                                // 0x0000(0x5B2D5F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerBehaviorRuleComponent");
		return ptr;
	}


	void SetTeamFilter();
	void SetPlayerFilter();
	void OnPlayerFilterControllerLogout();
	void ClearTeamFilter();
	void ClearPlayerFilter();
	void ClearBehaviorChange();
	void ApplyBehaviorChange();
};


// Class Killstreak.KSBlendableCameraModifier
// 0xFFFFFFFFA4D2AB00 (0x0000 - 0x5B2D5500)
class UKSBlendableCameraModifier : public UCameraModifier
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlendableCameraModifier");
		return ptr;
	}

};


// Class Killstreak.KSFXCurveComponent
// 0xA727000 (0x5B2D6E80 - 0x50BAFE80)
class UKSFXCurveComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA727000];                                 // 0x50BAFE80(0xA727000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFXCurveComponent");
		return ptr;
	}


	void UpdateScalarTrack();
	void UpdateColorTrack();
	void Stop();
	void Reverse();
	void ResetTime();
	void Play();
	void IsPlaying();
	void GetFxID();
	void GetCharacterOwner();
};


// Class Killstreak.KSBloodSplatterComponent
// 0xFFFFFFFFFFFFFE80 (0x5B2D6D00 - 0x5B2D6E80)
class UKSBloodSplatterComponent : public UKSFXCurveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBloodSplatterComponent");
		return ptr;
	}


	void AddDamageInstance();
};


// Class Killstreak.KSBlueprintableInteractable
// 0x339F00 (0x5B2D7F00 - 0x5AF9E000)
class AKSBlueprintableInteractable : public AActor
{
public:
	unsigned char                                      UnknownData00[0x339F00];                                  // 0x5AF9E000(0x339F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlueprintableInteractable");
		return ptr;
	}


	void SetInteractability();
	void InterruptInteraction();
	void InterruptAllInteractions();
	void InternalCanInteractOnPress();
	void InternalCanInteractOnHold();
	void BlueprintInteractionStarted();
	void BlueprintInteractionPoint();
	void BlueprintInteractionEnded();
	void AddOutlinedPrimitiveComponent();
};


// Class Killstreak.KSBlueprintableAmmoRefillCrate
// 0xFFFFFFFFA4D28100 (0x0000 - 0x5B2D7F00)
class AKSBlueprintableAmmoRefillCrate : public AKSBlueprintableInteractable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlueprintableAmmoRefillCrate");
		return ptr;
	}


	void ReloadGrenadeAmmo();
};


// Class Killstreak.KSInteractionState
// 0x5B23F6A0
class UKSInteractionState : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B23F6A0];                                // 0x0000(0x5B23F6A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractionState");
		return ptr;
	}

};


// Class Killstreak.KSHoldOrTapStart
// 0xFFFFFFFFA4DC0960 (0x0000 - 0x5B23F6A0)
class UKSHoldOrTapStart : public UKSInteractionState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHoldOrTapStart");
		return ptr;
	}

};


// Class Killstreak.KSBlueprintStart
// 0x0000
class UKSBlueprintStart : public UKSHoldOrTapStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlueprintStart");
		return ptr;
	}

};


// Class Killstreak.KSWaitingForTimer
// 0xFFFFFFFFA4DC0960 (0x0000 - 0x5B23F6A0)
class UKSWaitingForTimer : public UKSInteractionState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWaitingForTimer");
		return ptr;
	}

};


// Class Killstreak.KSBlueprintWaiting
// 0x0000
class UKSBlueprintWaiting : public UKSWaitingForTimer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlueprintWaiting");
		return ptr;
	}

};


// Class Killstreak.KSBlueprintFunctionLibrary
// 0x0000
class UKSBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBlueprintFunctionLibrary");
		return ptr;
	}


	void TryToStartCarry();
	void SpawnTracerEmitterWithRotation();
	void SpawnTracerEmitter();
	void SpawnMeshTracerWithRotation();
	void SpawnMeshTracer();
	void SpawnImpactDecalAtLocation();
	void SortPlayerEntryStatsByPoints();
	void SortKSPlayerStatesByMoney();
	void SortKSPlayerDataByMoney();
	void SortJobRoles();
	void ShouldDropshipDoorBeOpen();
	void SetupSkeletalMeshLODReductionGroups();
	void SetTracerInitialOffset();
	void ResetRenderTargetBuffer();
	void RemoveRowFromLegacyAssetDataTable();
	void QuickMeshMerge();
	void ProcessTakePointHitDamage();
	void PrintStringInShipping();
	void PostEventKS();
	void PostEvent();
	void PlayWorldCameraShake1P3P();
	void MakeActivityReference();
	void KSConvertRenderTargetToTexture2D();
	void ItemHasToggleRelationship();
	void IsViewportWorld();
	void IsRecurringDamageTypeClass();
	void IsRecurringDamageType();
	void IsRecurringDamageCategory();
	void IsKillCamWorld();
	void IsItemAvailable();
	void IsInViewportWorld();
	void IsInKillCamWorld();
	void IsChunkInstalling();
	void IsChunkAvailable();
	void IsAssetAvailable();
	void IsAnyChunkInstalling();
	void HideOutline();
	void GetTotalRounds();
	void GetTeammatesFor();
	void GetTeamFor();
	void GetSkeletalMeshSettingsLODNum();
	void GetSkeletalMeshLODNum();
	void GetSideForTeam();
	void GetScreenSpaceAccuracyRadius();
	void GetRoundsToWin();
	void GetRandomDecalRotationForNormal();
	void GetOutlineParameters();
	void GetOutlineCustomDepth();
	void GetNumSlotsForCosmeticSlot();
	void GetNumEventAssistantsForCombatEvent();
	void GetNumberOfEmittersInSystem();
	void GetNextEquipPoint();
	void GetMinimapTextureForMap();
	void GetMiniMapAssistant();
	void GetMeshOffsetForSimulatedCharacter();
	void GetLocalPlayerController();
	void GetKSWorldSettings();
	void GetKSGameState_RoundGame();
	void GetKSGameState_NeutralBomb();
	void GetKSGameState_Extraction();
	void GetKSGameState();
	void GetKSGameMode_RoundGame();
	void GetKSGameMode_Modular();
	void GetKSGameMode_Extraction();
	void GetKSGameMode();
	void GetKillCamForPlayer();
	void GetKillCamActorGuidFor();
	void GetGameplayTagByStringAndIndex();
	void GetGameplayTagByNameAndIndex();
	void GetEventAssistantAtIndexForCombatEvent();
	void GetEquipPointIndex();
	void GetEquipPointAsStringWithoutIndex();
	void GetEnemyTeamsFor();
	void GetEnemiesFor();
	void GetEndTraceLocation();
	void GetCurrentFrameTimestamp();
	void GetAnimMontageSectionLength();
	void GetAllWeaponComponents();
	void GetAllItemTableElements();
	void GetAllEquipment();
	void FindSkinForLocalPlayer();
	void FadeOut();
	void FadeIn();
	void ExportCSVData();
	void CreateSphereComponentFor();
	void CreateRadialMenuCosmeticSlots();
	void ApplyOutlineParameters();
	void AddStaticMeshToLegacyAssetDataTable();
	void AddSkeletalMeshToLegacyAssetDataTable();
	void AddRowToLegacyAssetDataTable();
	void AddParticleSystemToLegacyAssetDataTable();
	void AddMaterialInterfaceToLegacyAssetDataTable();
	void AddClassToLegacyAssetDataTable();
	void AddAudioEventToLegacyAssetDataTable();
	void AddAnimationAssetToLegacyAssetDataTable();
};


// Class Killstreak.KSBorder
// 0xA6940 (0x5B2E0400 - 0x5B239AC0)
class UKSBorder : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0xA6940];                                   // 0x5B239AC0(0xA6940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBorder");
		return ptr;
	}


	void GetSoftSmallBorderIcon();
	void GetSoftLargeBorderIcon();
};


// Class Killstreak.KSBotDefinition
// 0x242EC0 (0x5B2E0300 - 0x5B09D440)
class UKSBotDefinition : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x242EC0];                                  // 0x5B09D440(0x242EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBotDefinition");
		return ptr;
	}

};


// Class Killstreak.KSBotDefinitionCollection
// 0x1A1040 (0x5B23E480 - 0x5B09D440)
class UKSBotDefinitionCollection : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x1A1040];                                  // 0x5B09D440(0x1A1040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBotDefinitionCollection");
		return ptr;
	}

};


// Class Killstreak.KSBotEncounter
// 0x2448C0 (0x5B2E1D00 - 0x5B09D440)
class UKSBotEncounter : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2448C0];                                  // 0x5B09D440(0x2448C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBotEncounter");
		return ptr;
	}


	void GetTotalWaveNumber();
	void GetEncounterName();
	void GetCurrentWaveNumber();
	void GetCurrentWave();
	void ChooseNSpawnTableRows();
	void AdvanceWave();
};


// Class Killstreak.KSBotFactory
// 0x346080 (0x5B2E4080 - 0x5AF9E000)
class AKSBotFactory : public AActor
{
public:
	unsigned char                                      UnknownData00[0x346080];                                  // 0x5AF9E000(0x346080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBotFactory");
		return ptr;
	}


	void UnhideSpawnedBots();
	void Spawn();
	void ShuffleSpawnPoints();
	void SetWayPointSet();
	void SetSpawnPoints();
	void SetSideNum();
	void SetShouldReverseWayPointSetDirection();
	void SetBotSpawnCollection();
	void RestartBots();
	void OnSpawnedBotDestroyed();
	void OnRoundStart();
	void OnRoundSetup();
	void OnRelevancyOverlapEnd();
	void OnRelevancyOverlapBegin();
	void OnPhaseChanged();
	void OnExtractionPhaseTimeout();
	void OnAllPlayersFinishedPrePrep();
	void OnAlarmPeriodStart();
	void HideSpawnedBots();
	void GetTeamSize();
};


// Class Killstreak.KSBotJobConfigMap
// 0x4A340 (0x5B0E7780 - 0x5B09D440)
class UKSBotJobConfigMap : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x4A340];                                   // 0x5B09D440(0x4A340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBotJobConfigMap");
		return ptr;
	}

};


// Class Killstreak.KSBoxDeadZoneFilter
// 0xAA5A0 (0x5B2E3E80 - 0x5B2398E0)
class UKSBoxDeadZoneFilter : public UKSAnalogStickFilter
{
public:
	unsigned char                                      UnknownData00[0xAA5A0];                                   // 0x5B2398E0(0xAA5A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBoxDeadZoneFilter");
		return ptr;
	}

};


// Class Killstreak.KSBRC_GiveEquipment
// 0xDE80 (0x5B2E3D80 - 0x5B2D5F00)
class UKSBRC_GiveEquipment : public UKSPlayerBehaviorRuleComponent
{
public:
	unsigned char                                      UnknownData00[0xDE80];                                    // 0x5B2D5F00(0xDE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBRC_GiveEquipment");
		return ptr;
	}

};


// Class Killstreak.KSBTAction
// 0x2468C0 (0x5B2E3D00 - 0x5B09D440)
class UKSBTAction : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2468C0];                                  // 0x5B09D440(0x2468C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTAction");
		return ptr;
	}

};


// Class Killstreak.KSBTD_AbilityState
// 0xFFFFFFFFFFFFFE00 (0x5B2E3980 - 0x5B2E3B80)
class UKSBTD_AbilityState : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_AbilityState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_AnyActorPerceived
// 0xFFFFFFFFFFF5BD20 (0x5B23F920 - 0x5B2E3C00)
class UKSBTD_AnyActorPerceived : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_AnyActorPerceived");
		return ptr;
	}

};


// Class Killstreak.KSBTD_BlackboardPerceived
// 0xFFFFFFFFFFF5BC60 (0x5B23F7E0 - 0x5B2E3B80)
class UKSBTD_BlackboardPerceived : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_BlackboardPerceived");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CanActivateAbility
// 0xFFFFFFFFFFFFFC00 (0x5B2E3800 - 0x5B2E3C00)
class UKSBTD_CanActivateAbility : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CanActivateAbility");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CharacterState
// 0xFFFFFFFFFFFFFC00 (0x5B2E3780 - 0x5B2E3B80)
class UKSBTD_CharacterState : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CharacterState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CheckRole
// 0xD7C0 (0x5B2F13C0 - 0x5B2E3C00)
class UKSBTD_CheckRole : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0xD7C0];                                    // 0x5B2E3C00(0xD7C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CheckRole");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareBetweenBlackboards
// 0xFFFFFFFFFFFFF880 (0x5B2E3480 - 0x5B2E3C00)
class UKSBTD_CompareBetweenBlackboards : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareBetweenBlackboards");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareBlackboardToValue
// 0xFFFFFFFFFFFFF880 (0x5B2E3400 - 0x5B2E3B80)
class UKSBTD_CompareBlackboardToValue : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareBlackboardToValue");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareGrenadeFuseTimeLeft
// 0xFFFFFFFFFFFFF700 (0x5B2E3300 - 0x5B2E3C00)
class UKSBTD_CompareGrenadeFuseTimeLeft : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareGrenadeFuseTimeLeft");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareKeyToObjective
// 0xFFFFFFFFFFFFF700 (0x5B2E3280 - 0x5B2E3B80)
class UKSBTD_CompareKeyToObjective : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareKeyToObjective");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareMatchPhaseTimeLeft
// 0x1680 (0x5B2E5280 - 0x5B2E3C00)
class UKSBTD_CompareMatchPhaseTimeLeft : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x1680];                                    // 0x5B2E3C00(0x1680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareMatchPhaseTimeLeft");
		return ptr;
	}

};


// Class Killstreak.KSBTD_CompareRoundNumber
// 0x1580 (0x5B2E5180 - 0x5B2E3C00)
class UKSBTD_CompareRoundNumber : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5B2E3C00(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_CompareRoundNumber");
		return ptr;
	}

};


// Class Killstreak.KSBTD_DestroyableHazardState
// 0x1580 (0x5B2E5100 - 0x5B2E3B80)
class UKSBTD_DestroyableHazardState : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5B2E3B80(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_DestroyableHazardState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_DestructibleState
// 0x1500 (0x5B2E5080 - 0x5B2E3B80)
class UKSBTD_DestructibleState : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5B2E3B80(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_DestructibleState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_DistanceFromBlackboard
// 0x1400 (0x5B2E4F80 - 0x5B2E3B80)
class UKSBTD_DistanceFromBlackboard : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x1400];                                    // 0x5B2E3B80(0x1400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_DistanceFromBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTD_EquipmentState
// 0x0C80 (0x5B2E4880 - 0x5B2E3C00)
class UKSBTD_EquipmentState : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0xC80];                                     // 0x5B2E3C00(0x0C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_EquipmentState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_GameState
// 0x0A00 (0x5B2E4600 - 0x5B2E3C00)
class UKSBTD_GameState : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0xA00];                                     // 0x5B2E3C00(0x0A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_GameState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_HasAmmo
// 0x0700 (0x5B2E4300 - 0x5B2E3C00)
class UKSBTD_HasAmmo : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x700];                                     // 0x5B2E3C00(0x0700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_HasAmmo");
		return ptr;
	}

};


// Class Killstreak.KSBTD_HasBeenCollected
// 0xFFFFFFFFA4D1C480 (0x0000 - 0x5B2E3B80)
class UKSBTD_HasBeenCollected : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_HasBeenCollected");
		return ptr;
	}

};


// Class Killstreak.KSBTD_HasBeenHitRecently
// 0x0680 (0x5B2E4280 - 0x5B2E3C00)
class UKSBTD_HasBeenHitRecently : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x680];                                     // 0x5B2E3C00(0x0680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_HasBeenHitRecently");
		return ptr;
	}

};


// Class Killstreak.KSBTD_InteractableState
// 0x2780 (0x5B2E6300 - 0x5B2E3B80)
class UKSBTD_InteractableState : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x2780];                                    // 0x5B2E3B80(0x2780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_InteractableState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsActionAllowed
// 0x2680 (0x5B2E6280 - 0x5B2E3C00)
class UKSBTD_IsActionAllowed : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2680];                                    // 0x5B2E3C00(0x2680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsActionAllowed");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsActorPendingKill
// 0xFFFFFFFFA4D1C480 (0x0000 - 0x5B2E3B80)
class UKSBTD_IsActorPendingKill : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsActorPendingKill");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsApproachingDropLocation
// 0x2580 (0x5B2E6180 - 0x5B2E3C00)
class UKSBTD_IsApproachingDropLocation : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2580];                                    // 0x5B2E3C00(0x2580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsApproachingDropLocation");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsApproachingFall
// 0x2480 (0x5B2E6080 - 0x5B2E3C00)
class UKSBTD_IsApproachingFall : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2480];                                    // 0x5B2E3C00(0x2480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsApproachingFall");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsBlackboardSet
// 0xFFFFFFFFA4D1C480 (0x0000 - 0x5B2E3B80)
class UKSBTD_IsBlackboardSet : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsBlackboardSet");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsBlackboardVisible
// 0xFFFFFFFFA4D1C480 (0x0000 - 0x5B2E3B80)
class UKSBTD_IsBlackboardVisible : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsBlackboardVisible");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsFreeFalling
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_IsFreeFalling : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsFreeFalling");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsGameMode
// 0xD540 (0x5B2F1140 - 0x5B2E3C00)
class UKSBTD_IsGameMode : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0xD540];                                    // 0x5B2E3C00(0xD540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsGameMode");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsOnNavMesh
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_IsOnNavMesh : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsOnNavMesh");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsRidingZipline
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_IsRidingZipline : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsRidingZipline");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsSprinting
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_IsSprinting : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsSprinting");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsSwimming
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_IsSwimming : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsSwimming");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsWeaponFiring
// 0x2400 (0x5B2E6000 - 0x5B2E3C00)
class UKSBTD_IsWeaponFiring : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2400];                                    // 0x5B2E3C00(0x2400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsWeaponFiring");
		return ptr;
	}

};


// Class Killstreak.KSBTD_IsWeaponReady
// 0x2380 (0x5B2E5F80 - 0x5B2E3C00)
class UKSBTD_IsWeaponReady : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2380];                                    // 0x5B2E3C00(0x2380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_IsWeaponReady");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ItemDropState
// 0x2380 (0x5B2E5F00 - 0x5B2E3B80)
class UKSBTD_ItemDropState : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x2380];                                    // 0x5B2E3B80(0x2380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ItemDropState");
		return ptr;
	}

};


// Class Killstreak.KSBTD_NearbyEnemyCount
// 0xD4A0 (0x5B2F10A0 - 0x5B2E3C00)
class UKSBTD_NearbyEnemyCount : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0xD4A0];                                    // 0x5B2E3C00(0xD4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_NearbyEnemyCount");
		return ptr;
	}

};


// Class Killstreak.KSBTD_RandomCooldown
// 0x2000 (0x5B2E5C00 - 0x5B2E3C00)
class UKSBTD_RandomCooldown : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x2000];                                    // 0x5B2E3C00(0x2000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_RandomCooldown");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ShouldCrouchAtPoint
// 0x1F80 (0x5B2E5B80 - 0x5B2E3C00)
class UKSBTD_ShouldCrouchAtPoint : public UBTDecorator
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5B2E3C00(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ShouldCrouchAtPoint");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ShouldDodgeRoll
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_ShouldDodgeRoll : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ShouldDodgeRoll");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ShouldStrafe
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_ShouldStrafe : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ShouldStrafe");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ShouldThrowGrenade
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_ShouldThrowGrenade : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ShouldThrowGrenade");
		return ptr;
	}

};


// Class Killstreak.KSBTD_ShouldThrowMelee
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_ShouldThrowMelee : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_ShouldThrowMelee");
		return ptr;
	}

};


// Class Killstreak.KSBTD_TimerComplete
// 0xFFFFFFFFA4D1C480 (0x0000 - 0x5B2E3B80)
class UKSBTD_TimerComplete : public UBTDecorator_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_TimerComplete");
		return ptr;
	}

};


// Class Killstreak.KSBTD_WantsToVaultFromSwimming
// 0xFFFFFFFFA4D1C400 (0x0000 - 0x5B2E3C00)
class UKSBTD_WantsToVaultFromSwimming : public UBTDecorator
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_WantsToVaultFromSwimming");
		return ptr;
	}

};


// Class Killstreak.KSBTD_WillActiveGrenadeHitTarget
// 0x1F80 (0x5B2E5B00 - 0x5B2E3B80)
class UKSBTD_WillActiveGrenadeHitTarget : public UBTDecorator_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5B2E3B80(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTD_WillActiveGrenadeHitTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTDifficulty
// 0x248640 (0x5B2E5A80 - 0x5B09D440)
class UKSBTDifficulty : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x248640];                                  // 0x5B09D440(0x248640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTDifficulty");
		return ptr;
	}

};


// Class Killstreak.KSBTObjective
// 0x248440 (0x5B2E5880 - 0x5B09D440)
class UKSBTObjective : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x248440];                                  // 0x5B09D440(0x248440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTObjective");
		return ptr;
	}

};


// Class Killstreak.KSBTObjective_DestroyHazard
// 0xFFFFFFFFA4D1A780 (0x0000 - 0x5B2E5880)
class UKSBTObjective_DestroyHazard : public UKSBTObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTObjective_DestroyHazard");
		return ptr;
	}

};


// Class Killstreak.KSBTObjective_Patrol
// 0xFFFFFFFFA4D1A780 (0x0000 - 0x5B2E5880)
class UKSBTObjective_Patrol : public UKSBTObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTObjective_Patrol");
		return ptr;
	}

};


// Class Killstreak.KSBTObjective_PickUpItem
// 0xFFFFFFFFA4D1A780 (0x0000 - 0x5B2E5880)
class UKSBTObjective_PickUpItem : public UKSBTObjective
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTObjective_PickUpItem");
		return ptr;
	}

};


// Class Killstreak.KSBTTargetSelector
// 0x2539E0 (0x5B2F0E20 - 0x5B09D440)
class UKSBTTargetSelector : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2539E0];                                  // 0x5B09D440(0x2539E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTargetSelector");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_ActivateAbility
// 0x2472E0 (0x5B2E5580 - 0x5B09E2A0)
class UKSBTTask_ActivateAbility : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x2472E0];                                  // 0x5B09E2A0(0x2472E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_ActivateAbility");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_LookAt
// 0xFFFFFFFFFFFFFE00 (0x5B2E5300 - 0x5B2E5500)
class UKSBTTask_LookAt : public UBTTask_RotateToFaceBBEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_LookAt");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_AimAt
// 0x1F80 (0x5B2E7280 - 0x5B2E5300)
class UKSBTTask_AimAt : public UKSBTTask_LookAt
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5B2E5300(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_AimAt");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_BuyItemFromShop
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_BuyItemFromShop : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_BuyItemFromShop");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_ClearFocus
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_ClearFocus : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_ClearFocus");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_ClearNavigationInteractTarget
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_ClearNavigationInteractTarget : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_ClearNavigationInteractTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_ClearReviverForTarget
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_ClearReviverForTarget : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_ClearReviverForTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_ClearValue
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_ClearValue : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_ClearValue");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_CopyActorLocation
// 0x248EE0 (0x5B2E7180 - 0x5B09E2A0)
class UKSBTTask_CopyActorLocation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248EE0];                                  // 0x5B09E2A0(0x248EE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_CopyActorLocation");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_CopyObjectFacingVector
// 0x248DE0 (0x5B2E7080 - 0x5B09E2A0)
class UKSBTTask_CopyObjectFacingVector : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248DE0];                                  // 0x5B09E2A0(0x248DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_CopyObjectFacingVector");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_CopyReviverToBlackboard
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_CopyReviverToBlackboard : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_CopyReviverToBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_GetNavigationInteractTarget
// 0x248D60 (0x5B2E7000 - 0x5B09E2A0)
class UKSBTTask_GetNavigationInteractTarget : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248D60];                                  // 0x5B09E2A0(0x248D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_GetNavigationInteractTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_GetRotationFromPoint
// 0x248C60 (0x5B2E6F00 - 0x5B09E2A0)
class UKSBTTask_GetRotationFromPoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248C60];                                  // 0x5B09E2A0(0x248C60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_GetRotationFromPoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_HandleChangedCombatTarget
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_HandleChangedCombatTarget : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_HandleChangedCombatTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_InteractWith
// 0x19BD00 (0x5B2E6E80 - 0x5B14B180)
class UKSBTTask_InteractWith : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19BD00];                                  // 0x5B14B180(0x19BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_InteractWith");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_InterruptInteraction
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_InterruptInteraction : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_InterruptInteraction");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_LeaveDefensePoint
// 0x248B60 (0x5B2E6E00 - 0x5B09E2A0)
class UKSBTTask_LeaveDefensePoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248B60];                                  // 0x5B09E2A0(0x248B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_LeaveDefensePoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_LookInDirection
// 0x248A60 (0x5B2E6D00 - 0x5B09E2A0)
class UKSBTTask_LookInDirection : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248A60];                                  // 0x5B09E2A0(0x248A60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_LookInDirection");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_MakeNoiseEvent
// 0x248960 (0x5B2E6C00 - 0x5B09E2A0)
class UKSBTTask_MakeNoiseEvent : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x248960];                                  // 0x5B09E2A0(0x248960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_MakeNoiseEvent");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_MarkAsSeen
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_MarkAsSeen : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_MarkAsSeen");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_MoveToBlackboard
// 0xFFFFFFFFFFFFFD80 (0x5B2E6400 - 0x5B2E6680)
class UKSBTTask_MoveToBlackboard : public UBTTask_MoveTo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_MoveToBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_MoveToward
// 0xFFFFFFFFFFFFFE00 (0x5B2E8180 - 0x5B2E8380)
class UKSBTTask_MoveToward : public UBTTask_MoveDirectlyToward
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_MoveToward");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_PerformPawnAction
// 0xFFFFFFFFA4D17F00 (0x0000 - 0x5B2E8100)
class UKSBTTask_PerformPawnAction : public UBTTask_PushPawnAction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_PerformPawnAction");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_PerformRandomDodgeRoll
// 0x5B2F0BA0
class UKSBTTask_PerformRandomDodgeRoll : public UBTTask_PawnActionBase
{
public:
	unsigned char                                      UnknownData00[0x5B2F0BA0];                                // 0x0000(0x5B2F0BA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_PerformRandomDodgeRoll");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_PlayVO
// 0x249AE0 (0x5B2E7D80 - 0x5B09E2A0)
class UKSBTTask_PlayVO : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x249AE0];                                  // 0x5B09E2A0(0x249AE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_PlayVO");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_RandomizeWayPointDefensePoint
// 0x2499E0 (0x5B2E7C80 - 0x5B09E2A0)
class UKSBTTask_RandomizeWayPointDefensePoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x2499E0];                                  // 0x5B09E2A0(0x2499E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_RandomizeWayPointDefensePoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_RunBehaviorForTarget
// 0x85A0 (0x5B2F01A0 - 0x5B2E7C00)
class UKSBTTask_RunBehaviorForTarget : public UBTTask_RunBehavior
{
public:
	unsigned char                                      UnknownData00[0x85A0];                                    // 0x5B2E7C00(0x85A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_RunBehaviorForTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectBlackboardTarget
// 0x249160 (0x5B2E7400 - 0x5B09E2A0)
class UKSBTTask_SelectBlackboardTarget : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x249160];                                  // 0x5B09E2A0(0x249160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectBlackboardTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectDefensePoint
// 0x24B1E0 (0x5B2E9480 - 0x5B09E2A0)
class UKSBTTask_SelectDefensePoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24B1E0];                                  // 0x5B09E2A0(0x24B1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectDefensePoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectDropLocation
// 0x24AF60 (0x5B2E9200 - 0x5B09E2A0)
class UKSBTTask_SelectDropLocation : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24AF60];                                  // 0x5B09E2A0(0x24AF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectDropLocation");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectEvadePoint
// 0x24ADE0 (0x5B2E9080 - 0x5B09E2A0)
class UKSBTTask_SelectEvadePoint : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24ADE0];                                  // 0x5B09E2A0(0x24ADE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectEvadePoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectObjective
// 0x24AB60 (0x5B2E8E00 - 0x5B09E2A0)
class UKSBTTask_SelectObjective : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24AB60];                                  // 0x5B09E2A0(0x24AB60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectObjective");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectTargetOfTarget
// 0x24AA60 (0x5B2E8D00 - 0x5B09E2A0)
class UKSBTTask_SelectTargetOfTarget : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24AA60];                                  // 0x5B09E2A0(0x24AA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectTargetOfTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectVaultTargetLocation
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_SelectVaultTargetLocation : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectVaultTargetLocation");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SelectWayPoint
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_SelectWayPoint : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SelectWayPoint");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetBehaviorState
// 0x254480 (0x5B2F2720 - 0x5B09E2A0)
class UKSBTTask_SetBehaviorState : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x254480];                                  // 0x5B09E2A0(0x254480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetBehaviorState");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetBetweenBlackboards
// 0x24A7E0 (0x5B2E8A80 - 0x5B09E2A0)
class UKSBTTask_SetBetweenBlackboards : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24A7E0];                                  // 0x5B09E2A0(0x24A7E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetBetweenBlackboards");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetBoolOnBlackboard
// 0x19D880 (0x5B2E8A00 - 0x5B14B180)
class UKSBTTask_SetBoolOnBlackboard : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19D880];                                  // 0x5B14B180(0x19D880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetBoolOnBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetFloatOnBlackboard
// 0x19D800 (0x5B2E8980 - 0x5B14B180)
class UKSBTTask_SetFloatOnBlackboard : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19D800];                                  // 0x5B14B180(0x19D800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetFloatOnBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetObjectiveOnBlackboard
// 0x19D780 (0x5B2E8900 - 0x5B14B180)
class UKSBTTask_SetObjectiveOnBlackboard : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19D780];                                  // 0x5B14B180(0x19D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetObjectiveOnBlackboard");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetReviveTarget
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_SetReviveTarget : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetReviveTarget");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetTimer
// 0x19D680 (0x5B2E8800 - 0x5B14B180)
class UKSBTTask_SetTimer : public UBTTask_BlackboardBase
{
public:
	unsigned char                                      UnknownData00[0x19D680];                                  // 0x5B14B180(0x19D680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetTimer");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SetWaypointDefenseTimer
// 0x24A460 (0x5B2E8700 - 0x5B09E2A0)
class UKSBTTask_SetWaypointDefenseTimer : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24A460];                                  // 0x5B09E2A0(0x24A460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SetWaypointDefenseTimer");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_SkydiveToward
// 0x0400 (0x5B2E8580 - 0x5B2E8180)
class UKSBTTask_SkydiveToward : public UKSBTTask_MoveToward
{
public:
	unsigned char                                      UnknownData00[0x400];                                     // 0x5B2E8180(0x0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_SkydiveToward");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_StopMovement
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_StopMovement : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_StopMovement");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_Strafe
// 0x4000 (0x5B2EA400 - 0x5B2E6400)
class UKSBTTask_Strafe : public UKSBTTask_MoveToBlackboard
{
public:
	unsigned char                                      UnknownData00[0x4000];                                    // 0x5B2E6400(0x4000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_Strafe");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_TryToVault
// 0xFFFFFFFFA4EB4E80 (0x0000 - 0x5B14B180)
class UKSBTTask_TryToVault : public UBTTask_BlackboardBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_TryToVault");
		return ptr;
	}

};


// Class Killstreak.KSBTTask_WaitForADS
// 0xFFFFFFFFA4F61D60 (0x0000 - 0x5B09E2A0)
class UKSBTTask_WaitForADS : public UBTTaskNode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTask_WaitForADS");
		return ptr;
	}

};


// Class Killstreak.KSBTTaskNode_SetCrowdFollowing
// 0x24C0E0 (0x5B2EA380 - 0x5B09E2A0)
class UKSBTTaskNode_SetCrowdFollowing : public UBTTaskNode
{
public:
	unsigned char                                      UnknownData00[0x24C0E0];                                  // 0x5B09E2A0(0x24C0E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBTTaskNode_SetCrowdFollowing");
		return ptr;
	}

};


// Class Killstreak.KSBuild
// 0x75580 (0x5B2EB200 - 0x5B275C80)
class AKSBuild : public AKSLagCompensatedActor
{
public:
	unsigned char                                      UnknownData00[0x75580];                                   // 0x5B275C80(0x75580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBuild");
		return ptr;
	}


	void YieldToRealTimerExpired();
	void SelfDestructAfterDelay();
	void SelfDestruct();
	void OnSelfDestructDelayStart();
	void OnSelfDestruct();
	void OnRep_Health();
	void OnRadialDamageTaken();
	void OnPointDamageTaken();
	void OnKilled();
	void OnHealthChanged();
	void OnBuildComponentDestroyed();
	void KillDestructionTimerComplete();
	void GetRealActorTakeoverDelay();
	void GetPlayerStateOwner();
	void GetOutlineableMeshes();
	void GetCharacterOwner();
	void GetBuildWeaponAsset();
	void DestroyBuildComponent();
	void ComponentTakeDamage();
	void BroadcastSelfDestructStart();
	void BroadcastSelfDestruct();
	void BroadcastDestroyBuildComponent();
};


// Class Killstreak.KSBuild_APS
// 0xFFFFFFFFFFFFFA00 (0x5B2EAC00 - 0x5B2EB200)
class AKSBuild_APS : public AKSBuild
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBuild_APS");
		return ptr;
	}


	void OnRep_Active();
	void OnProjectileIntercepted();
	void OnMarkedProjectileDestroyed();
	void OnDeactivated();
	void OnActorOverlapBegin();
	void OnActivated();
	void BroadcastProjectileIntercept();
};


// Class Killstreak.KSBuildPreview
// 0x34CA80 (0x5B2EAA80 - 0x5AF9E000)
class AKSBuildPreview : public AActor
{
public:
	unsigned char                                      UnknownData00[0x34CA80];                                  // 0x5AF9E000(0x34CA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSBuildPreview");
		return ptr;
	}

};


// Class Killstreak.KSCarriedInterface
// 0x0000
class UKSCarriedInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCarriedInterface");
		return ptr;
	}


	void StopActiveCarry();
	void IsBeingCarriedRightNow();
	void GetHauler();
	void GetAsActor();
	void CanBeCarriedByRightNow();
	void CanBeCarriedBy();
};


// Class Killstreak.KSCash
// 0xB0B40 (0x5B2EA600 - 0x5B239AC0)
class UKSCash : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0xB0B40];                                   // 0x5B239AC0(0xB0B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCash");
		return ptr;
	}

};


// Class Killstreak.KSCashDrop
// 0x57200 (0x5B2EA580 - 0x5B293380)
class AKSCashDrop : public AKSItemDrop
{
public:
	unsigned char                                      UnknownData00[0x57200];                                   // 0x5B293380(0x57200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCashDrop");
		return ptr;
	}

};


// Class Killstreak.KSCashExtractionPoint
// 0x1B780 (0x5B2EBB80 - 0x5B2D0400)
class AKSCashExtractionPoint : public AKSObjectiveBase
{
public:
	unsigned char                                      UnknownData00[0x1B780];                                   // 0x5B2D0400(0x1B780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCashExtractionPoint");
		return ptr;
	}


	void StateTimerExpired();
	void ShouldShowLabel();
	void OnRep_ContainedCash();
	void HideCashPoint();
	void GetRemainingTimeInState();
	void ActivateCashPoint();
};


// Class Killstreak.KSCharacterBase
// 0x1E7000 (0x5B322580 - 0x5B13B580)
class AKSCharacterBase : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x1E7000];                                  // 0x5B13B580(0x1E7000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterBase");
		return ptr;
	}


	void UpdateDebugHealthVisibility();
	void UnSubmerge();
	void Submerge();
	void StopSprint();
	void StopRegenerationTimers();
	void StartSprint();
	void StartCameraShake();
	void ShowDebugLocation();
	void SetRevealed();
	void SetHealth();
	void RevealToWholeTeam();
	void RevealForDuration();
	void Reveal();
	void ResetHealthRegeneration();
	void ResetHealthRegenDelay();
	void ResetFreeFallState();
	void RemoveCameraShake();
	void OverhealDecayTick();
	void Overheal();
	void OnTeamUpdated();
	void OnStopDefaultAim();
	void OnStopAimOverShoulder();
	void OnStopAimDownSights();
	void OnStopAimAlternate();
	void OnStartDefaultAim();
	void OnStartAimOverShoulder();
	void OnStartAimDownSights();
	void OnStartAimAlternate();
	void OnRep_Sprint();
	void OnRep_Silhouette();
	void OnRep_ReplicatedStun();
	void OnRep_ReplicatedAimState();
	void OnRep_ReplicatedAbilityMovement();
	void OnRep_PowerSlide();
	void OnRep_MantleInfo();
	void OnRep_LungeInfo();
	void OnRep_IsSubmerged();
	void OnRep_DeathState();
	void OnRep_CurrentOverheal();
	void OnRep_CurrentLungCapacity();
	void OnRep_BackupPlayerState();
	void OnLeaveTeam();
	void OnJoinTeam();
	void OnEndPowerSlide();
	void OnBeginPowerSlide();
	void LockoutMovement();
	void IsUnderwater();
	void IsThermalDetectable();
	void IsStunned();
	void IsSprinting();
	void IsRevealPermanent();
	void IsRevealedToLocalPlayer();
	void IsRevealed();
	void IsPlayingEmote();
	void IsLunging();
	void IsLocallyViewed();
	void IsLaunched();
	void IsInPowerSlide();
	void IsInHardLandLockout();
	void IsInAimTransition();
	void IsDeadOrDestroyed();
	void IsBot();
	void IsAimingOverShoulder();
	void IsAimingDownSights();
	void IsAimingAlternate();
	void IsAiming();
	void IsAbilityMoving();
	void HealthRegenerationTick();
	void HealthRegenerationStopped();
	void HealthRegenerationStarted();
	void HealthRegenDelayTimerTick();
	void HealthRegenDelayTimerComplete();
	void HealthRegenDelayTimerActive();
	void Heal();
	void HasCharacterSocket();
	void GetZiplineAdjustHeight();
	void GetStartSpot();
	void GetReplicatedAimState();
	void GetPowerSlideProgress();
	void GetPowerSlideAngle();
	void GetMeleeThrowTransform();
	void GetMeleeThrowLocation();
	void GetMaximumLungCapacity();
	void GetMaxHealth();
	void GetLungRecoveryTime();
	void GetLastReplicatedAimState();
	void GetKSPlayerState();
	void GetKSMovementComponent();
	void GetKSCharacterAnimInst();
	void GetKSCharacter();
	void GetKSBestPlayerState();
	void GetKSAnimInstance();
	void GetInteractionState();
	void GetImmediateDeathRagdoll();
	void GetHealthRegenDelayTime();
	void GetHealthPct();
	void GetHealth();
	void GetGrenadeThrowTransform();
	void GetGrenadeThrowLocation();
	void GetDeathState();
	void GetCurrentOverheal();
	void GetCurrentLungCapacity();
	void GetCurrentDesiredMovementDirection();
	void GetCurrentAimState();
	void GetCurrentAccelDirection();
	void GetCharacterSocketTransform();
	void GetCharacterSocketRotator();
	void GetCharacterSocketLocation();
	void GetBestPlayerState();
	void GetBackupPlayerState();
	void ForceStartHealthRegeneration();
	void ForceSilhouette();
	void EndAbilityMovement();
	void DoStun();
	void DoHardLandAvoid();
	void DoHardLand();
	void CanViewDebugHealth();
	void BroadcastInstantInteraction();
	void BroadcastHealthRegenerationStopped();
	void BroadcastHardLandAvoid();
	void BlueprintOnStopSwimming();
	void BlueprintOnStopSubmerged();
	void BlueprintOnStartSwimming();
	void BlueprintOnStartSubmerged();
	void BeginDodgeRoll();
	void BeginAbilityMovement();
	void AllowSprintingRightNow();
	void AllowPowerSlideRightNow();
};


// Class Killstreak.KSCharacter
// 0x2CA00 (0x5B34EF80 - 0x5B322580)
class AKSCharacter : public AKSCharacterBase
{
public:
	unsigned char                                      UnknownData00[0x2CA00];                                   // 0x5B322580(0x2CA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacter");
		return ptr;
	}


	void ViewedPawnTakeDamage();
	void ViewedPawnNoLongerRevealed();
	void ViewedPawnInstigatedHeadshot();
	void ViewedPawnInstigatedDamage();
	void ViewedPawnHasBeenRevealed();
	void VehicleStateChanged();
	void UpdateNavModification();
	void UpdateMantleHands();
	void UpdateHoveredInteractable();
	void UpdateAmmo();
	void UpdateAimStatus();
	void UnSelectToRevive();
	void UnregisterFootstepOverride();
	void UnlockShoulderSwap();
	void UnhideZiplinePulley();
	void UnhideUplineDevice();
	void UnHideADSMaterials();
	void TryToStopRagdoll();
	void TryToStopAiming();
	void TryToAimOverShoulder();
	void TryToAimDownSights();
	void TryToAimAlternate();
	void ToggleSprint();
	void ToggleScopeZoomIndexUp();
	void ToggleScopeZoomIndexLoop();
	void ToggleScopeZoomIndexDown();
	void ToggleCrouch();
	void ToggleCarry();
	void ThrowGrenadeReleased();
	void ThrowGrenadePressed();
	void TagForDownAssist();
	void SwapWeapon();
	void SwapToSecondary();
	void SwapToPrimary();
	void SwapToPreviousWeaponWithLoadedClip();
	void SwapToPreviousWeaponWithAmmo();
	void SwapToPreviousWeapon();
	void SwapToNextWeaponWithLoadedClip();
	void SwapToNextWeaponWithAmmo();
	void SwapToNextWeapon();
	void SwapToNextGrenade();
	void SwapToMelee();
	void SwapToMacGuffin();
	void SwapSeatsTimerComplete();
	void SwapSeatsReleased();
	void SwapSeatsPressed();
	void SwapGrenade();
	void SwapActiveGrenade();
	void StopRevealedToLocalPlayer();
	void StopReveal();
	void StopKSEffect();
	void StopFire();
	void StopAnimEvent();
	void StopAimDownSights();
	void StopActiveHaul();
	void StartRevealedToLocalPlayer();
	void StartLockoutCamera();
	void StartKSSpecialEffect();
	void StartHacking();
	void StartFire();
	void SprintImpulseTimelineProgress();
	void SetupChords();
	void SetSelfDestruct();
	void SetPrimaryHeatSource();
	void SetOnFire();
	void SetNoFire();
	void SetInteractionFacesRotation();
	void SetInteractionCameraTransition();
	void SetGodMode();
	void SetActorTargetingMeForRevive();
	void SetActiveCameraSimple();
	void SetActiveCamera();
	void ServerTryToCarry();
	void ServerSwapToNextGrenade();
	void ServerStopGiveUpTimer();
	void ServerStopCarryChecked();
	void ServerStopCarry();
	void ServerStartGiveUpTimer();
	void ServerSetActiveWeaponToNone();
	void ServerRequestActivateAbilityRelease();
	void ServerRequestActivateAbility();
	void ServerGetInNextEmptySeat();
	void ServerGetInDriverSeat();
	void ServerExitVehicle();
	void ServerDropWeapon();
	void ServerChangeShoulderCamera();
	void SelectToRevive();
	void RotateToFace();
	void ReviveOverlapStopped();
	void ReverseKSEffect();
	void RevealToWholeTeamWithInfo();
	void ResetKSEffectTime();
	void ReportFootstepNoise();
	void ReportFireNoise();
	void ReportDamageEvent();
	void ReportDamagedNoise();
	void ReplicateSpecialAmmoEvent();
	void RemoveWeaponFromInventory();
	void RemoveSkinTag();
	void RemoveParticleEffects();
	void RemoveOutOfRangePickup();
	void RemoveMod();
	void RemoveEffectCurve();
	void RemoveBlendable();
	void RemoveBackpack();
	void RemoveActionRestriction();
	void RemotePlayerPickupItem();
	void RemotePlayerInteractStart();
	void RemotePlayerInteractEnd();
	void RemoteClientNotifyLand();
	void Reload();
	void ReleaseGiveUp();
	void ReleaseCrouch();
	void ReleaseAllActiveInputs();
	void ReleaseActiveInputsOfType();
	void ReleaseActiveInputs();
	void RegisterFootstepOverride();
	void ReevaluateNoFire();
	void QuickMeleeHoldTimerComplete();
	void QueryModsForAnimEvent();
	void PrimaryWeaponFOVChanged();
	void PrimarySprayDecalExpired();
	void PressGiveUp();
	void PlayVO();
	void PlayHitFromRadialDamage();
	void PlayHitFromPointDamage();
	void PlayActionCameraSequence();
	void OutOfBoundsWarningEnd();
	void OutOfBoundsOverlapEnd();
	void OutOfBoundsOverlapBegin();
	void OnWeaponSwapSuccessful();
	void OnWeaponSwapFailed();
	void OnUnhovered();
	void OnStopAimDownSightsCheckpoint();
	void OnStartAimDownSightsCheckpoint();
	void OnReviveStart();
	void OnReviveInterrupt();
	void OnReviveComplete();
	void OnRep_VehicleState();
	void OnRep_StartingActiveWeaponEquipPoint();
	void OnRep_SelfDestruct();
	void OnRep_Scrambled();
	void OnRep_ReviveInfo();
	void OnRep_RevealedStatus();
	void OnRep_OutOfBoundsInfo();
	void OnRep_OnFire();
	void OnRep_IsInInteraction();
	void OnRep_Health();
	void OnRep_HaulingInfo();
	void OnRep_GiveUpTimer();
	void OnRep_Gender();
	void OnRep_EMPLockout();
	void OnRep_Emotion();
	void OnRep_Downed();
	void OnRep_CurrentBehaviorState();
	void OnRep_CarriedInfo();
	void OnRep_CameraShoulder();
	void OnRep_CameraPivotTargetActor();
	void OnRep_bRepairableArmorEquipped();
	void OnRep_Bot();
	void OnRep_bCanRepairArmor();
	void OnRep_ApparelAssets();
	void OnRep_AllowGiveUp();
	void OnRep_ActiveEquipmentId();
	void OnImmuneStart();
	void OnImmuneEnd();
	void OnHovered();
	void OnGrenadeClassLoaded();
	void OnGadgetSwapped();
	void OnFieldOfViewModChange();
	void OnEndOutOfBounds();
	void OnDeathDestroy();
	void OnDeathCleanup();
	void OnBeginOutOfBounds();
	void OnArmorRegenerationStart();
	void OnArmorRegenerationInterrupt();
	void OnArmorRegenerationComplete();
	void OnArmorInteractStart();
	void OnArmorInteractInterrupt();
	void OnArmorInteractComplete();
	void OnApparelTimeoutExpire();
	void NoseDiveCameraTransition();
	void NativeJumpToSwingMontage();
	void MoveRight();
	void MoveForward();
	void MeleeReleased();
	void MeleePressed();
	void MedPackReleased();
	void MedPackPressed();
	void LogShotgunHitData();
	void LockShoulderSwap();
	void KillIfDowned();
	void JumpToSwingMontage();
	void IsZipLining();
	void IsShoulderSwapLocked();
	void IsRevivingAnotherPlayer();
	void IsRevealable();
	void IsRepairableArmorEquipped();
	void IsPerformingAnInteraction();
	void IsOutOfRangePickup();
	void IsOutOfBounds();
	void IsOnFire();
	void IsLocallyHovered();
	void IsLobby();
	void IsInVehicle();
	void IsInRagdoll();
	void IsInLockoutCameraCooldown();
	void IsInLockoutCamera();
	void IsHaulingRightNow();
	void IsDowned();
	void IsCrosshairHidden();
	void IsBlinded();
	void IsBeingRevived();
	void IsAnyEquippedWeaponTakingAction();
	void IsAimLocked();
	void IsActiveWeapon();
	void InvalidateAllRevealOfMe();
	void InterruptNonCharacterRevive();
	void InterruptAimDownSightsToggle();
	void InterruptAimAlternateToggle();
	void InstantRevive();
	void InputStopSprint();
	void InputStartSprint();
	void InputStartFire();
	void InitRagdoll();
	void HideZiplinePulley();
	void HideUplineDevice();
	void HideADSMaterials();
	void HasModAny();
	void HasMod();
	void HasEquipPoint();
	void HandleDownEvent();
	void GiveUpTimerTick();
	void GiveUpTimerComplete();
	void GiveUpTimerActive();
	void GiveModInstance();
	void GiveMod();
	void GetWeaponByAsset();
	void GetWeaponAtEquipPoint();
	void GetVOComponent();
	void GetValidWeaponPoints();
	void GetUsedEquipPoints();
	void GetSpecialties();
	void GetSeatAimCameraTag();
	void GetReviver();
	void GetReviveeOverrideMontage();
	void GetPrimaryHeatSource();
	void GetPickupSphere();
	void GetOverrideByLocation();
	void GetMostRecentInteractionType();
	void GetModInstances();
	void GetMaxHealthBonus();
	void GetLeftArmVisibility();
	void GetInteractionTarget();
	void GetHitPawnEffectOverride();
	void GetHitHeadAudioEventOverride();
	void GetHitByAudioEventOverride();
	void GetHitBodyAudioEventOverride();
	void GetGiveUpTime();
	void GetGender();
	void GetFXCurveComponentByFXID();
	void GetFlashBangEffectDurationFromDistance();
	void GetFieldOfViewFromMods();
	void GetEquipmentManagerComponent();
	void GetEquipmentAtEquipPoint();
	void GetDownedTransitionMontage();
	void GetDownedImmuneTime();
	void GetCurrentVehicleSeat();
	void GetCurrentVehicle();
	void GetCurrentReviveDuration();
	void GetCurrentCharacterEmotionAsName();
	void GetCurrentCameraShoulder();
	void GetCurrentAbilityIndex();
	void GetCompatibleEquipPoints();
	void GetCharacterAkComponent();
	void GetCarriedObject();
	void GetCameraShoulderSwapProgress();
	void GetBodyApparelSkinObject();
	void GetBehaviorState();
	void GetBasePickupRange();
	void GetAvailableEquipPoints();
	void GetArmorDurability();
	void GetApparelSkinObjectByName();
	void GetAmmoCount();
	void GetAllEquippedWeapons();
	void GetActiveWeaponComponentForSubType();
	void GetActiveWeaponComponentAtIndex();
	void GetActiveWeaponComponent();
	void GetActiveWeapon();
	void GetActiveTemporary();
	void GetActiveMods();
	void GetActiveMelee();
	void GetActiveMedPack();
	void GetActiveMainWeapon();
	void GetActiveKSWeaponAnimInst();
	void GetActiveGrenade();
	void GetActiveGadgetPoints();
	void GetActiveEquipPoints();
	void GetActiveCameraTag();
	void GetActiveCamera();
	void GetActiveAimedWeapon();
	void GetActivatableMods();
	void GetAbilityMovementMod();
	void GamepadToggleSprint();
	void GamepadSwapPressed();
	void GamepadSwapMeleePressed();
	void GamepadSwapMacGuffinPressed();
	void GamepadLookUp();
	void GamepadLookRight();
	void ForceToShoulder();
	void ForceMainCameraBoomUpdate();
	void FinishHacking();
	void FindTierOfEquipPoint();
	void FindAllTiersOfEquipPoint();
	void ExtinguishFire();
	void ExitVehiclePressed();
	void EventSetupCamerasForSpectator();
	void EvaluateCameraProximityFade();
	void EndOutOfBounds();
	void EndLockoutCamera();
	void DrownDamageTick();
	void DropButtonReleased();
	void DropButtonPressed();
	void DropActiveWeapon();
	void DropActiveGrenade();
	void DownPlayer();
	void DoSetOnFire();
	void DoExtinguishFire();
	void DoesTransitionSupportFocalPoint();
	void DetachViewTargetOnlyBPComponents();
	void DestructibleSpeedGateOverlappedEvent();
	void DamageRecordReset();
	void CreditEliminationAssist();
	void CreditDownAssist();
	void ContextualPingRepeat();
	void ContextualPingPressed();
	void ContextualPingHoldRelease();
	void ContextualPingHold();
	void ContextualButtonReleased();
	void ContextualButtonPressed();
	void ContextualButtonHeldReleased();
	void ContextualButtonHeld();
	void CompleteNonCharacterRevive();
	void CloneCharacterMesh();
	void ClientSwapTo();
	void ClientSwapFrom();
	void ClientStopInteractAcknowledge();
	void ClientNotifyStuck();
	void ClientInteractAcknowledge();
	void ClientBroadcastModEvent();
	void ClearMaxHealthBonus();
	void ClearAllApparel();
	void ClearActorTargetingMeForRevive();
	void ChangeShoulderCamera();
	void CanInteractWithTest();
	void CanInteractWith();
	void CanGiveUp();
	void CanFireRightNow();
	void CanFireGrenadeNow();
	void CancelBleed();
	void CanCarryDownedAllies();
	void CanBeRevivedBy();
	void CanAimOverShoulderNow();
	void CanAimDownSightsNow();
	void CanAimAlternateNow();
	void CanActiveWeaponCanToggleOutOfAimDownSightsNow();
	void CanActiveWeaponCanToggleIntoAimDownSightsNow();
	void CanActivateAbilityNow();
	void CacheLatestHit();
	void BroadcastWeaponComponentStateChange();
	void BroadcastWeaponComponentPostReload();
	void BroadcastWeaponComponentFiredFull();
	void BroadcastWeaponComponentFiredAmmo();
	void BroadcastWeaponComponentFiredAimAndAmmo();
	void BroadcastWeaponComponentFired();
	void BroadcastWeaponComponentEmptyFire();
	void BroadcastWeaponComponentAmmoChange();
	void BroadcastTakeRadialDamage();
	void BroadcastTakePointDamage();
	void BroadcastSpecialAmmoEvent();
	void BroadcastSkydiveSkipped();
	void BroadcastReviveStart();
	void BroadcastReviveInterrupt();
	void BroadcastReviveComplete();
	void BroadcastReliableWeaponComponentStateChange();
	void BroadcastReliableWeaponComponentPostReload();
	void BroadcastReliableWeaponComponentFiredFull();
	void BroadcastReliableWeaponComponentFiredAmmo();
	void BroadcastReliableWeaponComponentFiredAimAndAmmo();
	void BroadcastReliableWeaponComponentFired();
	void BroadcastReliableWeaponComponentEmptyFire();
	void BroadcastReliableWeaponComponentAmmoChange();
	void BroadcastModEvent();
	void BroadcastGrenadeExplodeInHand();
	void BroadcastArmorRegenerationInterrupt();
	void BroadcastArmorRegenerationComplete();
	void BroadcastArmorInteractStart();
	void BroadcastArmorInteractInterrupt();
	void BroadcastArmorInteractComplete();
	void BlueprintHandleDeath();
	void BeginOutOfBounds();
	void BeginNonCharacterRevive();
	void BeginInstantRevive();
	void AutoSprintTimerComplete();
	void AttachViewTargetOnlyBPComponents();
	void ApplyMaxHealthBonus();
	void ApplyLastHitImpulse();
	void ApplyFlinchFromPointDamage();
	void ApplyCameraProximityFade();
	void ApplyApparelAsset();
	void AnyActivatableModsActive();
	void AnimAuditStop();
	void AnimAuditStart();
	void AnimAuditResume();
	void AnimAuditClear();
	void AimDownSightsToggle();
	void AimDownSightsReleased();
	void AimDownSightsPressed();
	void AddSkinTag();
	void AddParticleEffects();
	void AddOutOfRangePickup();
	void AddOrUpdateBlendable();
	void AddActionRestrictionForDuration();
	void AddActionRestriction();
	void ActivatableModAtIndexActive();
	void AbortFireAllWeapons();
	void AbilityChargeUpdated();
	void AbilityActivated();
};


// Class Killstreak.KSCharacterAnimInst
// 0x26D9480 (0x5D970800 - 0x5B297380)
class UKSCharacterAnimInst : public UKSAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x26D9480];                                 // 0x5B297380(0x26D9480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterAnimInst");
		return ptr;
	}


	void UpdateTestCombatState();
	void UpdatePostMirrorRotateValues();
	void UpdateCombatState();
	void UpdateCachedPivotLocation();
	void UnplantRightHand();
	void UnplantLeftHand();
	void UnhideWeapon();
	void UnhideMag();
	void UnhideGadget();
	void TryToTriggerTurnInPlaceAnimation();
	void TryGetKSCharacterBase();
	void TriggerDisableAims();
	void TriggerCustomPivot();
	void SwitchWeaponNative();
	void SwitchWeaponIKNative();
	void StopFire();
	void StopEmote();
	void StartRevivee();
	void StartFire();
	void ShoulderCharge();
	void SetMaxSpeedValues();
	void ReviveMesh();
	void RetrieveEnd();
	void RetrieveBegin();
	void RequestNewCombatState();
	void RequestLeftHandIKForceOff();
	void ReleaseWorldRotationLock();
	void PopLeftHandIKForceOffRequest();
	void PlayRecoilProfile();
	void OnTestCombatStateCooldown();
	void OnShoulderChanged();
	void OnMovementDirectionChanged();
	void OnCombatStateCooldown();
	void LocomotionStop();
	void LocomotionStart();
	void LocomotionPrePivot();
	void LocomotionPivotCheckpoint();
	void LocomotionPivot();
	void LocomotionJumpStart();
	void LocomotionJumpLand();
	void LockToCurrentInWorldRotation();
	void IsLeftHandIKForcedOff();
	void HideWeapon();
	void HideMag();
	void HideGadget();
	void GetUnpairedMirrorBones();
	void GetPairedMirrorBones();
	void GetMovementDirectionFromLocalAcceleration();
	void FloatSpringInterp();
	void EventStopSwimming();
	void EventStopSubmerge();
	void EventStartSwimming();
	void EventStartSubmerge();
	void EventStartInteraction();
	void EventPlayHitReactionAnimation();
	void EventPlayFireAnimation();
	void EventPlayDeathAnimation();
	void EventEndZipLineEnding();
	void EventEndZipLineBrace();
	void EventEndZipLine();
	void EventEndVault();
	void EventEndStun();
	void EventEndPowerSlide();
	void EventEndInteraction();
	void EventEndHardLand();
	void EventEndActivatingMod();
	void EventEndAbilityMovement();
	void EventDoZipLineEnding();
	void EventDoZipLineBrace();
	void EventDoZipLine();
	void EventDoVault();
	void EventDoStun();
	void EventDoPowerSlide();
	void EventDoHardLandAvoid();
	void EventDoHardLand();
	void EventDoGoDown();
	void EventDoDodgeRoll();
	void EventDoActivatingMod();
	void EventDoAbilityMovement();
	void EventActivatedModExpired();
	void EndRevivee();
	void EnableAims();
	void EmoteMontageLostAllLocalWeight();
	void EmoteMontageLostAllGlobalWeight();
	void DoResetCustomPivot();
	void DodgeRollExpire();
	void DisableAims();
	void CheckCanSpray();
	void CheckCanEmote();
	void CanUseCombatState();
	void CancelDownedCosmetic();
	void BroadcastOnGoDown();
	void BroadcastAnimationEvent();
	void BlinkEyes();
	void AttemptTestCombatStateCooldown();
	void AttemptCombatStateCooldown();
};


// Class Killstreak.KSCharacterCameraShake
// 0xFFFFFFFFFFFFFD80 (0x5D971A00 - 0x5D971C80)
class UKSCharacterCameraShake : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterCameraShake");
		return ptr;
	}


	void StopShakeOnViewTargetChanged();
	void StopShakeOnActorDestroyed();
	void StopShakeDynamic();
	void OnAimStateChanged();
};


// Class Killstreak.KSCharacterCapsuleComponent
// 0xFFFFFFFFFFFFFF00 (0x5D972E00 - 0x5D972F00)
class UKSCharacterCapsuleComponent : public UCapsuleComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterCapsuleComponent");
		return ptr;
	}

};


// Class Killstreak.KSCharacterMovementComponent
// 0x2F31D80 (0x5D978E80 - 0x5AA47100)
class UKSCharacterMovementComponent : public UCharacterMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x2F31D80];                                 // 0x5AA47100(0x2F31D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterMovementComponent");
		return ptr;
	}


	void ResetPostFireSprintLockout();
	void IsZipLining();
	void IsStandingStill();
	void IsSprintingWithVelocity();
	void IsSprinting();
	void IsInPowerSlide();
	void IsFlightRecovery();
	void IsDowned();
	void IsDodgeRolling();
	void IsAimingOverShoulder();
	void IsAimingDownSights();
	void IsAimingAlternate();
	void IsAiming();
	void GetWantsToSprint();
	void GetWantsToPowerSlide();
	void GetProratedMaxSpeed();
	void FindPointAboveWater();
	void ClientAdjustPositionVault();
	void ClientAdjustPositionDodgeRoll();
};


// Class Killstreak.KSSkeletalMeshComponent
// 0x27E3B60 (0x5D978A80 - 0x5B194F20)
class UKSSkeletalMeshComponent : public USkinnableMergedMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x27E3B60];                                 // 0x5B194F20(0x27E3B60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSkeletalMeshComponent");
		return ptr;
	}


	void SetTeleportDistanceDeltaThreshold();
	void SetForceTextureResidentFlag();
	void GetTeleportDistanceDeltaThreshold();
	void GetForceTextureResidentFlag();
};


// Class Killstreak.KSCharacterSkeletalMeshComponent
// 0xFFFFFFFFFD76E100 (0x5B0E6B80 - 0x5D978A80)
class UKSCharacterSkeletalMeshComponent : public UKSSkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterSkeletalMeshComponent");
		return ptr;
	}

};


// Class Killstreak.KSCharacterSocketComponent
// 0xCCDFE00 (0x5D978580 - 0x50C98780)
class UKSCharacterSocketComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCCDFE00];                                 // 0x50C98780(0xCCDFE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCharacterSocketComponent");
		return ptr;
	}

};


// Class Killstreak.KSCheatComponent
// 0x5D97B780
class UKSCheatComponent : public UPGame_CheatComponent
{
public:
	unsigned char                                      UnknownData00[0x5D97B780];                                // 0x0000(0x5D97B780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCheatComponent");
		return ptr;
	}


	void WarpZ();
	void WarpToSpawn();
	void Warp();
	void ToggleWeaponDebug();
	void ToggleHud();
	void ToggleGamepadAimDebug();
	void ToggleBotsPaused();
	void TestPreviewActor();
	void TakeDamage();
	void Suicide();
	void Spectate();
	void Spawn();
	void ShowWeaponStats();
	void ShowLocation();
	void ShowKillCamWorld();
	void ShowHealth();
	void ShowDifficulties();
	void ShowBots();
	void SetTimeLeft();
	void SetTeam();
	void SetGroundSpeed();
	void SetDifficulty();
	void SetBotsPaused();
	void ServerWarpZ();
	void ServerWarpToSpawn();
	void ServerWarp();
	void ServerToggleHud();
	void ServerTakeDamage();
	void ServerSuicide();
	void ServerSpectate();
	void ServerSpawn();
	void ServerShowLocation();
	void ServerShowHealth();
	void ServerShowDifficulties();
	void ServerShowBots();
	void ServerSetTimeLeft();
	void ServerSetTeam();
	void ServerSetGroundSpeed();
	void ServerSetDifficulty();
	void ServerSetBotsPaused();
	void ServerRemoveFromLoadout();
	void ServerRemoveAllMods();
	void ServerQuickEndGame();
	void ServerInvisMe();
	void ServerInstantReplay();
	void ServerInfiniteAmmo();
	void ServerGod();
	void ServerGiveKSPoints();
	void ServerGiveAsync();
	void ServerGiveAllKSPoints();
	void ServerGive();
	void ServerEnableTeamSurrender();
	void ServerEnableKillCam();
	void ServerDrop();
	void ServerDisableAFKTimer();
	void ServerCharReset();
	void ServerChangeCash();
	void ServerBotGodMode();
	void ServerAttach();
	void ServerAdjustDifficulty();
	void ServerAddToLoadout();
	void ServerAddAttachmentToLoadout();
	void RemoveFromLoadout();
	void RemoveAllMods();
	void QuickEndGame();
	void QEG();
	void OnRep_HudVisible();
	void OnRep_CanViewLocation();
	void OnRep_CanViewDebugHealth();
	void NextPerfCaptureCamera();
	void InvisMe();
	void InstantReplay();
	void InfiniteAmmo();
	void God();
	void GiveSkin();
	void GiveKSPoints();
	void GiveAsync();
	void GiveAllKSPoints();
	void Give();
	void EnableTeamSurrender();
	void EnableSound();
	void EnableKillCam();
	void Drop();
	void DownSelf();
	void DisableSound();
	void DisableAFKTimer();
	void DebugThreatLevels();
	void Communicate();
	void CharReset();
	void ChangeCash();
	void BotGodMode();
	void Attach();
	void AdjustDifficulty();
	void AddToLoadout();
	void AddAttachmentToLoadout();
};


// Class Killstreak.KSCircleDeadZoneFilter
// 0x2741DA0 (0x5D97B680 - 0x5B2398E0)
class UKSCircleDeadZoneFilter : public UKSAnalogStickFilter
{
public:
	unsigned char                                      UnknownData00[0x2741DA0];                                 // 0x5B2398E0(0x2741DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCircleDeadZoneFilter");
		return ptr;
	}

};


// Class Killstreak.KSCombatLogVisualizer
// 0xFFFFFFFFFFFAC040 (0x5B0E6AC0 - 0x5B13AA80)
class AKSCombatLogVisualizer : public APGame_CombatLogVisualizer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCombatLogVisualizer");
		return ptr;
	}

};


// Class Killstreak.KSRadialMenuItem
// 0xBF100 (0x5B2F8BC0 - 0x5B239AC0)
class UKSRadialMenuItem : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0xBF100];                                   // 0x5B239AC0(0xBF100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRadialMenuItem");
		return ptr;
	}


	void ShouldPreventPlay();
	void ShouldInterrupt();
	void IsJobAllowed();
	void IsAllowedForAllJobs();
	void GetRadialMenuItemInstanceClass();
	void GetLockPawnRotationWhilePlaying();
	void GetGameplayTagBase();
	void GetEmotionToApply();
	void GetCosmeticSlotString();
	void GetCosmeticSlot();
	void GetAllowedJobs();
};


// Class Killstreak.KSCommunication
// 0xFFFFFFFFFFFFFEC0 (0x5B2F8A80 - 0x5B2F8BC0)
class UKSCommunication : public UKSRadialMenuItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCommunication");
		return ptr;
	}

};


// Class Killstreak.KSRadialMenuItemInstance
// 0x26E2480 (0x5D97C680 - 0x5B29A200)
class AKSRadialMenuItemInstance : public AKSEquipment
{
public:
	unsigned char                                      UnknownData00[0x26E2480];                                 // 0x5B29A200(0x26E2480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRadialMenuItemInstance");
		return ptr;
	}


	void ServerPlayRadialMenuItem();
	void ServerForceStopRadialMenuItem();
	void PlayRadialMenuItem();
	void OnRep_RadialMenuItemAsset();
	void IsManagingRadialMenuItemLocally();
	void GetRadialMenuItemAsset();
	void GetActiveCharacterOwner();
	void ForceStopRadialMenuItem();
	void DoRadialMenuItem();
	void CanPlayRadialMenuItemNow();
};


// Class Killstreak.KSCommunicationInstance
// 0xFFFFFFFFA2683980 (0x0000 - 0x5D97C680)
class AKSCommunicationInstance : public AKSRadialMenuItemInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCommunicationInstance");
		return ptr;
	}

};


// Class Killstreak.KSControllerInterface
// 0x0000
class UKSControllerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSControllerInterface");
		return ptr;
	}


	void RecordDamageDealt();
	void GetSkinLevel();
	void GetSkinId();
	void GetKSPlayerState();
	void GetKSCharacter();
	void GetController();
	void GetCheatComponent();
	void GetBotId();
};


// Class Killstreak.KSControlPoint
// 0x26AF100 (0x5D97F500 - 0x5B2D0400)
class AKSControlPoint : public AKSObjectiveBase
{
public:
	unsigned char                                      UnknownData00[0x26AF100];                                 // 0x5B2D0400(0x26AF100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSControlPoint");
		return ptr;
	}


	void RemovePrimitiveToPawnOverlapCheck();
	void OnRep_OwningTeam();
	void OnRep_CapturingTeam();
	void OnOwningTeamChanged();
	void OnEndOverlap();
	void OnCapturingTeamChanged();
	void OnBeginOverlap();
	void GetOwningTeam();
	void GetCapturingTeam();
	void AddPrimitiveToPawnOverlapCheck();
};


// Class Killstreak.KSCurrency
// 0x2745540 (0x5D97F000 - 0x5B239AC0)
class UKSCurrency : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x2745540];                                 // 0x5B239AC0(0x2745540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCurrency");
		return ptr;
	}


	void GetSoftFullSplashImage();
	void GetSoftCurrencySmallIcon();
	void GetCurrencyDataForQuantity();
};


// Class Killstreak.KSCustomApparelComponent
// 0xCDCEE00 (0x5D97EC80 - 0x50BAFE80)
class UKSCustomApparelComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCDCEE00];                                 // 0x50BAFE80(0xCDCEE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSCustomApparelComponent");
		return ptr;
	}


	void GetSkinObject();
	void GetCharacterOwner();
	void GetApparelAsset();
	void BlueprintFinishedInitialization();
};


// Class Killstreak.KSDamageable
// 0x0000
class UKSDamageable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageable");
		return ptr;
	}


	void ReportDamageByInstigator();
	void GetHitLocationTypeFromBoneName();
	void DoesBoneAllowHeadshotPassthrough();
};


// Class Killstreak.KSDamageTypeBase
// 0xFFFFFFFFFD978680 (0x5B2F8580 - 0x5D97FF00)
class UKSDamageTypeBase : public UDamageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeBase");
		return ptr;
	}


	void PreProcessDamageEffects();
	void PostProcessDamageEffects();
	void GetDefaultObjectPropertiesFromDamageType();
};


// Class Killstreak.KSDamageTypeEMP
// 0x2687D80 (0x5D980300 - 0x5B2F8580)
class UKSDamageTypeEMP : public UKSDamageTypeBase
{
public:
	unsigned char                                      UnknownData00[0x2687D80];                                 // 0x5B2F8580(0x2687D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeEMP");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeFire
// 0x2687D00 (0x5D980280 - 0x5B2F8580)
class UKSDamageTypeFire : public UKSDamageTypeBase
{
public:
	unsigned char                                      UnknownData00[0x2687D00];                                 // 0x5B2F8580(0x2687D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeFire");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeFlashBang
// 0x2687C80 (0x5D980200 - 0x5B2F8580)
class UKSDamageTypeFlashBang : public UKSDamageTypeBase
{
public:
	unsigned char                                      UnknownData00[0x2687C80];                                 // 0x5B2F8580(0x2687C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeFlashBang");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeMaxHealth
// 0xFFFFFFFFA4D07A80 (0x0000 - 0x5B2F8580)
class UKSDamageTypeMaxHealth : public UKSDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeMaxHealth");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeReverseFriendly
// 0xFFFFFFFFA4D07A80 (0x0000 - 0x5B2F8580)
class UKSDamageTypeReverseFriendly : public UKSDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeReverseFriendly");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeSonar
// 0x2687B80 (0x5D980100 - 0x5B2F8580)
class UKSDamageTypeSonar : public UKSDamageTypeBase
{
public:
	unsigned char                                      UnknownData00[0x2687B80];                                 // 0x5B2F8580(0x2687B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeSonar");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeStuck
// 0xFFFFFFFFA4D07A80 (0x0000 - 0x5B2F8580)
class UKSDamageTypeStuck : public UKSDamageTypeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeStuck");
		return ptr;
	}

};


// Class Killstreak.KSDamageTypeStun
// 0x2687B00 (0x5D980080 - 0x5B2F8580)
class UKSDamageTypeStun : public UKSDamageTypeBase
{
public:
	unsigned char                                      UnknownData00[0x2687B00];                                 // 0x5B2F8580(0x2687B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDamageTypeStun");
		return ptr;
	}

};


// Class Killstreak.KSWeaponTargetingModule
// 0x5D981C00
class UKSWeaponTargetingModule : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D981C00];                                // 0x0000(0x5D981C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponTargetingModule");
		return ptr;
	}


	void UpdateCachedHoveredActor();
	void TickTargeting();
	void LookForHoveredActors();
	void IsTargetingModeEnabled();
	void IsAimedAtFriendly();
	void IsAimedAtEnemy();
	void GetWeaponComponent();
	void GetOwningCharacter();
	void ExitTargetingMode();
	void EnterTargetingMode();
};


// Class Killstreak.KSDefaultAimTargetingModule
// 0xFFFFFFFFFFFFFB00 (0x5D981700 - 0x5D981C00)
class UKSDefaultAimTargetingModule : public UKSWeaponTargetingModule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDefaultAimTargetingModule");
		return ptr;
	}


	void IsWallMarkerActive();
	void IsCurrentlyBlocked();
};


// Class Killstreak.KSMapPoint
// 0x29E5180 (0x5D983180 - 0x5AF9E000)
class AKSMapPoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29E5180];                                 // 0x5AF9E000(0x29E5180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMapPoint");
		return ptr;
	}


	void ShouldCrouch();
	void MatchesTags();
	void MatchesTag();
	void IsFriendly();
	void IsAvailable();
	void IsActive();
};


// Class Killstreak.KSDefensePoint
// 0xFFFFFFFFFFFFFE00 (0x5D982F80 - 0x5D983180)
class AKSDefensePoint : public AKSMapPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDefensePoint");
		return ptr;
	}


	void RelevantObjectiveUpdated();
	void GetTargetDefensePoint();
};


// Class Killstreak.KSDeployable
// 0x0000
class UKSDeployable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDeployable");
		return ptr;
	}


	void ShouldSetFriendlyOutlineOnRegister();
	void ShouldNotAffectTargetingReticle();
	void ShouldDisablePingTargeting();
	void ShouldDisablePingOutline();
	void SetOutlineColor();
};


// Class Killstreak.KSDestroyableHazard
// 0x0000
class UKSDestroyableHazard : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDestroyableHazard");
		return ptr;
	}

};


// Class Killstreak.KSDestroyableHazardComponent
// 0xCDD2980 (0x5D982800 - 0x50BAFE80)
class UKSDestroyableHazardComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCDD2980];                                 // 0x50BAFE80(0xCDD2980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDestroyableHazardComponent");
		return ptr;
	}


	void ShouldFireAt();
	void ShouldEMP();
};


// Class Killstreak.KSDestructibleBase
// 0x29E6D00 (0x5D984D00 - 0x5AF9E000)
class AKSDestructibleBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29E6D00];                                 // 0x5AF9E000(0x29E6D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDestructibleBase");
		return ptr;
	}


	void UndoBadDestroy();
	void SpeedGateOverlap();
	void SetupPreBroken();
	void ResetDestructible();
	void PostDestructionEvent();
	void OnRoundChange();
	void OnRep_Health();
	void OnDestructionChange();
	void OnDamageEvent();
	void GetMaxHealth();
	void GetCurrentHealth();
	void BlueprintPrepareKillCamPlayback();
};


// Class Killstreak.KSDistanceOptimizationComponent
// 0x9D76400 (0x5A926280 - 0x50BAFE80)
class UKSDistanceOptimizationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x9D76400];                                 // 0x50BAFE80(0x9D76400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDistanceOptimizationComponent");
		return ptr;
	}


	void IsCloseEnough();
	void DistanceOptimizationChangedDelegate__DelegateSignature();
	void AddComponents();
	void AddComponent();
	void AddActor();
};


// Class Killstreak.KSDropLocation
// 0x1480 (0x5D984600 - 0x5D983180)
class AKSDropLocation : public AKSMapPoint
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x5D983180(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDropLocation");
		return ptr;
	}


	void ShouldReverseWayPointSetDirection();
	void IncrementSelectionCount();
	void HandleRoundSetup();
	void GetWayPointSet();
	void GetValidSides();
	void GetTargetDropLocation();
	void GetNumTimesSelected();
	void GetFreefallXYDistance();
	void GetFreefallHeight();
	void GetFlightDistanceModifier();
};


// Class Killstreak.KSDropOffZone
// 0x26B5B80 (0x5D985F80 - 0x5B2D0400)
class AKSDropOffZone : public AKSObjectiveBase
{
public:
	unsigned char                                      UnknownData00[0x26B5B80];                                 // 0x5B2D0400(0x26B5B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDropOffZone");
		return ptr;
	}


	void TeamUpdated();
	void OnRep_Team();
	void OnRep_Activated();
	void Activated();
};


// Class Killstreak.KSDropShipExitVolume
// 0xFFFFFFFFFFFFFF80 (0x5D985C80 - 0x5D985D00)
class AKSDropShipExitVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDropShipExitVolume");
		return ptr;
	}

};


// Class Killstreak.KSDropShipExitZone
// 0x29E7B00 (0x5D985B00 - 0x5AF9E000)
class AKSDropShipExitZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29E7B00];                                 // 0x5AF9E000(0x29E7B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDropShipExitZone");
		return ptr;
	}


	void ActorLeavingZone();
	void ActorEnteredZone();
};


// Class Killstreak.KSDropShipLocation
// 0x359FE0 (0x5B2F7FE0 - 0x5AF9E000)
class AKSDropShipLocation : public AActor
{
public:
	unsigned char                                      UnknownData00[0x359FE0];                                  // 0x5AF9E000(0x359FE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDropShipLocation");
		return ptr;
	}


	void OnDropShipSpawned();
};


// Class Killstreak.KSDynamicMaskComponent
// 0xCDD7380 (0x5D987200 - 0x50BAFE80)
class UKSDynamicMaskComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCDD7380];                                 // 0x50BAFE80(0xCDD7380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSDynamicMaskComponent");
		return ptr;
	}


	void Wipe();
	void GetColorAtPosition();
	void DrawDodecagon();
	void DrawBox();
	void ConvertToTargetFromWorld();
};


// Class Killstreak.KSEasyAntiCheatSettings
// 0x5D987000
class UKSEasyAntiCheatSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5D987000];                                // 0x0000(0x5D987000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEasyAntiCheatSettings");
		return ptr;
	}

};


// Class Killstreak.KSEmote
// 0x268E340 (0x5D986F00 - 0x5B2F8BC0)
class UKSEmote : public UKSRadialMenuItem
{
public:
	unsigned char                                      UnknownData00[0x268E340];                                 // 0x5B2F8BC0(0x268E340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmote");
		return ptr;
	}


	void GetEmoteCosmeticClass();
};


// Class Killstreak.KSEquipmentCosmeticComponent
// 0xCDD6800 (0x5D986680 - 0x50BAFE80)
class UKSEquipmentCosmeticComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCDD6800];                                 // 0x50BAFE80(0xCDD6800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEquipmentCosmeticComponent");
		return ptr;
	}


	void OnRep_EquipPoint();
	void OnRep_EquipmentId();
	void IsOwnerDeadOrDestroyed();
	void IsLocallyViewed();
	void IsLocallyManaged();
	void IsInAction();
	void IsAPropSpawner();
	void GetEquipPoint();
	void GetCharAnimInstance();
	void GetCharacterOwner();
	void GetCharacterMesh();
	void BlueprintOwnerSkinTagContainerChanged();
};


// Class Killstreak.KSEmoteCosmeticComponent
// 0x1880 (0x5D987F00 - 0x5D986680)
class UKSEmoteCosmeticComponent : public UKSEquipmentCosmeticComponent
{
public:
	unsigned char                                      UnknownData00[0x1880];                                    // 0x5D986680(0x1880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteCosmeticComponent");
		return ptr;
	}


	void OnRep_PlayTicker();
	void OnRep_EmoteAsset();
	void OnInitialize();
	void MarkStopped();
	void MarkPlaying();
	void IsPlaying();
	void IsInitialized();
	void GetSkinObject();
	void GetEmoteAsset();
	void BlueprintPlayEmote();
	void BlueprintInterruptEmote();
	void AddEmoteCosmeticSubInstance();
};


// Class Killstreak.KSEmoteCosmeticComponent_Spray
// 0xFFFFFFFFA2678100 (0x0000 - 0x5D987F00)
class UKSEmoteCosmeticComponent_Spray : public UKSEmoteCosmeticComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteCosmeticComponent_Spray");
		return ptr;
	}


	void NetMulticastPlaySpray();
	void BlueprintPlaySpray();
};


// Class Killstreak.KSEmoteCosmeticSubInstance
// 0x0000
class UKSEmoteCosmeticSubInstance : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteCosmeticSubInstance");
		return ptr;
	}


	void MarkOwnerStopped();
	void IsOwnerDeadOrDestroyed();
	void IsLocallyViewed();
	void IsLocallyManaged();
	void GetSkinObject();
	void GetOwningEmoteCosmeticComponent();
	void GetCharAnimInstance();
	void GetCharacterOwner();
	void GetCharacterMesh();
	void BlueprintStopped();
	void BlueprintOnUnregister();
	void BlueprintOnRegister();
	void BlueprintInterrupt();
};


// Class Killstreak.KSEmoteCosmeticSubInstance_Play
// 0x0000
class UKSEmoteCosmeticSubInstance_Play : public UKSEmoteCosmeticSubInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteCosmeticSubInstance_Play");
		return ptr;
	}


	void BlueprintPlayEmote();
};


// Class Killstreak.KSEmoteCosmeticSubInstance_Spray
// 0x0000
class UKSEmoteCosmeticSubInstance_Spray : public UKSEmoteCosmeticSubInstance_Play
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteCosmeticSubInstance_Spray");
		return ptr;
	}


	void SetPrimarySprayDecalForOwner();
	void BlueprintPlaySpray();
};


// Class Killstreak.KSEmoteInstance
// 0xFFFFFFFFA2683980 (0x0000 - 0x5D97C680)
class AKSEmoteInstance : public AKSRadialMenuItemInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteInstance");
		return ptr;
	}


	void GetEmoteCosmeticComponent();
};


// Class Killstreak.KSEmoteMusicManager
// 0x29EB480 (0x5D989480 - 0x5AF9E000)
class AKSEmoteMusicManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29EB480];                                 // 0x5AF9E000(0x29EB480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmoteMusicManager");
		return ptr;
	}


	void RemovePlayingMusic();
	void AddPlayingMusic();
};


// Class Killstreak.KSEmotionComponentOwner
// 0x0000
class UKSEmotionComponentOwner : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmotionComponentOwner");
		return ptr;
	}


	void GetEmotionFloat();
	void GetEmotion();
};


// Class Killstreak.KSEmotionComponent
// 0xCDD8700 (0x5D988580 - 0x50BAFE80)
class UKSEmotionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCDD8700];                                 // 0x50BAFE80(0xCDD8700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEmotionComponent");
		return ptr;
	}


	void RemoveEmotionById();
	void RemoveEmotion();
	void GetEmotionComponentOwner();
	void GetCurrentEmotion();
	void AddEmotionInternal();
	void AddEmotionForDuration();
	void AddEmotion();
	void AddAndRemoveEmotion();
};


// Class Killstreak.KSEncounterManager
// 0x35BAC0 (0x5B2F9AC0 - 0x5AF9E000)
class AKSEncounterManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x35BAC0];                                  // 0x5AF9E000(0x35BAC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEncounterManager");
		return ptr;
	}


	void SpawnQueuedBots();
	void RemoveQueuedBots();
	void PerformAutomaticSpawns();
	void OnSpawnedBotDestroyed();
	void OnSpawnedBotDeath();
	void IsPlayerStartUnseen();
	void IsBotQueueEmpty();
	void IncreaseCurrentAutoSpawnScore();
	void GetWaveActiveBotCount();
	void GetNumHumanPlayers();
	void GetNextBotSpawnCost();
	void GetHumanPlayers();
	void GetEncounterActiveBotCount();
	void GetActiveBotCount();
	void FindEncounter();
	void EnqueueEncounterWave();
	void EnableAutoSpawn();
	void DisableAutoSpawn();
	void ClearQueuedBots();
	void CanSpawnNextBot();
	void CanSpawnBotNow();
	void AdvanceWave();
};


// Class Killstreak.KSEncounterWave
// 0x28ED940 (0x5D98AD80 - 0x5B09D440)
class UKSEncounterWave : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x28ED940];                                 // 0x5B09D440(0x28ED940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEncounterWave");
		return ptr;
	}


	void GetCostToSpawn();
	void ChooseNSpawnTableRows();
};


// Class Killstreak.KSEnforcedEquipmentRuleComponent
// 0x5B0E64C0
class UKSEnforcedEquipmentRuleComponent : public UKSGameRuleComponent
{
public:
	unsigned char                                      UnknownData00[0x5B0E64C0];                                // 0x0000(0x5B0E64C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnforcedEquipmentRuleComponent");
		return ptr;
	}

};


// Class Killstreak.KSEnforcedEquipmentState
// 0x5B2F9840
class AKSEnforcedEquipmentState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5B2F9840];                                // 0x0000(0x5B2F9840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnforcedEquipmentState");
		return ptr;
	}


	void OnRep_EnforcedItems();
};


// Class Killstreak.KSEnvironmentVolumeActor
// 0x29EC780 (0x5D98A780 - 0x5AF9E000)
class AKSEnvironmentVolumeActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29EC780];                                 // 0x5AF9E000(0x29EC780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnvironmentVolumeActor");
		return ptr;
	}


	void UpdateEnvironmentTag();
};


// Class Killstreak.KSEnvQueryContext_Character
// 0x5D98A700
class UKSEnvQueryContext_Character : public UEnvQueryContext
{
public:
	unsigned char                                      UnknownData00[0x5D98A700];                                // 0x0000(0x5D98A700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnvQueryContext_Character");
		return ptr;
	}

};


// Class Killstreak.KSEnvQueryContext_Teammates
// 0x0000
class UKSEnvQueryContext_Teammates : public UEnvQueryContext
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnvQueryContext_Teammates");
		return ptr;
	}

};


// Class Killstreak.KSEnvQueryTest_CharacterTrace
// 0xFFFFFFFFFFFFFE00 (0x5D98BC00 - 0x5D98BE00)
class UKSEnvQueryTest_CharacterTrace : public UEnvQueryTest
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEnvQueryTest_CharacterTrace");
		return ptr;
	}

};


// Class Killstreak.KSEquipmentContainerOwner
// 0x0000
class UKSEquipmentContainerOwner : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEquipmentContainerOwner");
		return ptr;
	}

};


// Class Killstreak.KSEquipmentManagerComponent
// 0xA536580 (0x5B0E6400 - 0x50BAFE80)
class UKSEquipmentManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA536580];                                 // 0x50BAFE80(0xA536580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEquipmentManagerComponent");
		return ptr;
	}


	void SetEquipmentContainerOwner();
	void OnItemDropped();
	void GetEquipmentByEquipPoint();
};


// Class Killstreak.KSEquipmentManagerOwner
// 0x0000
class UKSEquipmentManagerOwner : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEquipmentManagerOwner");
		return ptr;
	}

};


// Class Killstreak.KSEscapePoint
// 0x29EEE00 (0x5D98CE00 - 0x5AF9E000)
class AKSEscapePoint : public AActor
{
public:
	unsigned char                                      UnknownData00[0x29EEE00];                                 // 0x5AF9E000(0x29EEE00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEscapePoint");
		return ptr;
	}


	void OnEscapeOverlapEnd();
	void OnEscapeOverlapBegin();
	void NotifyBots();
};


// Class Killstreak.KSEventTracker
// 0x5D98C700
class UKSEventTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D98C700];                                // 0x0000(0x5D98C700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSEventTracker");
		return ptr;
	}


	void TriggerEvent();
	void TickTracker();
	void HandleTrackerInitialized();
	void HandleLostPlayerController();
	void GetWorldSettings();
	void GetGameState();
	void GetGameMode();
	void GetGameInstance();
};


// Class Killstreak.KSExponentialHeightFog
// 0x5D98E700
class AKSExponentialHeightFog : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5D98E700];                                // 0x0000(0x5D98E700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSExponentialHeightFog");
		return ptr;
	}

};


// Class Killstreak.KSExtinguisher
// 0x0000
class UKSExtinguisher : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSExtinguisher");
		return ptr;
	}


	void ShouldExtinguishRightNow();
};


// Class Killstreak.KSExtractionPickup
// 0x26BDF80 (0x5D98E380 - 0x5B2D0400)
class AKSExtractionPickup : public AKSObjectiveBase
{
public:
	unsigned char                                      UnknownData00[0x26BDF80];                                 // 0x5B2D0400(0x26BDF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSExtractionPickup");
		return ptr;
	}


	void IsPickupUsed();
	void IsPickupEnabled();
	void DeactivatePickup();
	void ActivatePickup();
};


// Class Killstreak.KSFaceAnimInst
// 0xFFFFFFFFA268F800 (0x0000 - 0x5D970800)
class UKSFaceAnimInst : public UKSCharacterAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFaceAnimInst");
		return ptr;
	}

};


// Class Killstreak.KSFinalBlowTracker
// 0xFFFFFFFFA4D8F680 (0x0000 - 0x5B270980)
class UKSFinalBlowTracker : public UKSAccoladeTracker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFinalBlowTracker");
		return ptr;
	}


	void HandleOnLastPlayer();
	void CheckLastPlayer();
};


// Class Killstreak.KSFirstBloodTracker
// 0x271D780 (0x5D98E100 - 0x5B270980)
class UKSFirstBloodTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x271D780];                                 // 0x5B270980(0x271D780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFirstBloodTracker");
		return ptr;
	}


	void HandleTrackerAccolade();
};


// Class Killstreak.KSFlightPoint
// 0x5D98DF80
class AKSFlightPoint : public ATargetPoint
{
public:
	unsigned char                                      UnknownData00[0x5D98DF80];                                // 0x0000(0x5D98DF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFlightPoint");
		return ptr;
	}

};


// Class Killstreak.KSFlightRecoveryVolume
// 0x0000
class AKSFlightRecoveryVolume : public ATriggerVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFlightRecoveryVolume");
		return ptr;
	}


	void OnOverlapEnd();
	void OnOverlapBegin();
};


// Class Killstreak.KSFootstepOverrideInterface
// 0x0000
class UKSFootstepOverrideInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFootstepOverrideInterface");
		return ptr;
	}


	void GetPriorityLevel();
	void GetOverrideByLocation();
};


// Class Killstreak.KSFootstepOverrideVolume
// 0x5D98DA80
class AKSFootstepOverrideVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x5D98DA80];                                // 0x0000(0x5D98DA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFootstepOverrideVolume");
		return ptr;
	}

};


// Class Killstreak.KSVelocityCameraShake
// 0x1BF80 (0x5D98D980 - 0x5D971A00)
class UKSVelocityCameraShake : public UKSCharacterCameraShake
{
public:
	unsigned char                                      UnknownData00[0x1BF80];                                   // 0x5D971A00(0x1BF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVelocityCameraShake");
		return ptr;
	}

};


// Class Killstreak.KSFreeFallCameraShake
// 0xFFFFFFFFA2672680 (0x0000 - 0x5D98D980)
class UKSFreeFallCameraShake : public UKSVelocityCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSFreeFallCameraShake");
		return ptr;
	}

};


// Class Killstreak.KSGadgetAssetDrop
// 0xFFFFFFFFA4D40900 (0x0000 - 0x5B2BF700)
class AKSGadgetAssetDrop : public AKSWeaponAssetDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGadgetAssetDrop");
		return ptr;
	}


	void GetLabelInfoForGadgetDescription();
};


// Class Killstreak.KSGameEngine
// 0x2889300 (0x5D98F700 - 0x5B106400)
class UKSGameEngine : public UPComGameEngine
{
public:
	unsigned char                                      UnknownData00[0x2889300];                                 // 0x5B106400(0x2889300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameEngine");
		return ptr;
	}


	void SetGoPlayMapTravelDelayed();
	void SetGoPlayMapDelayTimeoutLimit();
	void QuickGoPlayCachedMap();
	void OnTriggerGoPlayMap();
	void GetGoPlayMapTravelDelayed();
	void GetGoPlayMapDelayTimeoutLimit();
	void FinishGoPlayMap();
	void CancelDelayedGoPlayMap();
};


// Class Killstreak.KSGameInstance
// 0x2865480 (0x5D9A0E80 - 0x5B13BA00)
class UKSGameInstance : public UPGame_GameInstance
{
public:
	unsigned char                                      UnknownData00[0x2865480];                                 // 0x5B13BA00(0x2865480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameInstance");
		return ptr;
	}


	void UpdateRecordedAnimStats();
	void HandleAppResume();
	void HandleAppReactivated();
	void GetWeaponMasteryManager();
	void GetStoreItemHelper();
	void GetRankedManager();
	void GetPunishmentManager();
	void GetPlayerStatsManager();
	void GetPlayerInventoryHelper();
	void GetPlayerChallengesManager();
	void GetNPETrackManager();
	void GetMercMasteryManager();
	void GetLoadingScreenImage();
	void GetGeneralProgressionManager();
	void GetBattlePassProgressionManager();
	void GetAwardsManager();
	void GetAudioManager();
	void ExportAnimAudit();
	void EndLoading();
	void ClaimTutorialAward();
	void BeginLoading();
};


// Class Killstreak.KSGameMode
// 0x2868E80 (0x5D9A4500 - 0x5B13B680)
class AKSGameMode : public APGame_GameMode
{
public:
	unsigned char                                      UnknownData00[0x2868E80];                                 // 0x5B13B680(0x2868E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode");
		return ptr;
	}


	void UsePlayerLoadouts();
	void StartPreSelectionPhase();
	void SetMatchPhase();
	void SetInfiniteAmmo();
	void SelectAWinner();
	void PopulateLootSites();
	void PopulateInteractiveObjects();
	void PlayerCanEnterPlay();
	void OnWaitForPlayersExpired();
	void OnTeamEliminated();
	void OnPlayerEliminated();
	void OnPlayerDownStateChanged();
	void OnKSCharacterRevived();
	void OnKSCharacterRadialMenuItemUsed();
	void OnKSCharacterDowned();
	void OnKSCharacterDownAssist();
	void OnKSCharacterCombatSummary();
	void OnKSCharacterCombatEvent();
	void OnKSCharacterBaseDied();
	void K2_OnMatchPhaseSet();
	void IsAWinner();
	void HandleAllPlayersFinishedPrePrep();
	void GetStartingTeamNum();
	void GetShotListener();
	void GetRewardsCalculatorClass();
	void GetPerSecondChargePercent();
	void GetPerSecondChargeMode();
	void GetMatchTimeElapsed();
	void GetMatchPhase();
	void GetGamePhase();
	void GetGameModeHUDSettings();
	void GetDefaultPlayerMods();
	void GetCachedInteractiveObjects();
	void EventOnTeamCreated();
	void DoesClearObjectivesMarkedUsedOnSidesFlipped();
	void DestroyDynamicZipLines();
	void DestroyActive();
	void ClearLootSites();
	void ClearInteractiveObjects();
	void CanUsePlayerStart();
	void CanSpawnBotsNow();
	void AllPlayersLockedInForComponent();
	void AllowDamageNow();
	void AddInteractiveObject();
};


// Class Killstreak.KSGameMode_RoundGame
// 0x2A00 (0x5D9A6F00 - 0x5D9A4500)
class AKSGameMode_RoundGame : public AKSGameMode
{
public:
	unsigned char                                      UnknownData00[0x2A00];                                    // 0x5D9A4500(0x2A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_RoundGame");
		return ptr;
	}


	void StartRound();
	void ReadyToStartNextRound();
	void ReadyToPrepareNextRound();
	void PrepareForNextRound();
	void K2_OnSetRoundState();
	void IsRoundSetupComplete();
	void IsRoundInProgress();
	void HasRoundStarted();
	void HasRoundEnded();
	void HasPreparedNextRound();
	void GetRoundState();
	void GetRoundStartTime();
	void GetRoundNumber();
	void EndRoundKillCam();
	void EndRound();
	void CanPlayerKeepInventoryBetweenRounds();
};


// Class Killstreak.KSGameMode_Extraction
// 0xFFFFFFFFFFFFF880 (0x5D9A6780 - 0x5D9A6F00)
class AKSGameMode_Extraction : public AKSGameMode_RoundGame
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Extraction");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_AttackExtraction
// 0xFFFFFFFFA2659880 (0x0000 - 0x5D9A6780)
class AKSGameMode_AttackExtraction : public AKSGameMode_Extraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_AttackExtraction");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_Control
// 0x0B80 (0x5D9A7A80 - 0x5D9A6F00)
class AKSGameMode_Control : public AKSGameMode_RoundGame
{
public:
	unsigned char                                      UnknownData00[0xB80];                                     // 0x5D9A6F00(0x0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Control");
		return ptr;
	}


	void OnTeamScored();
	void GetUpdateRateForControlPoint();
	void GetTimeUntilScoreForPoint();
	void GetScoreUpdatePeriodForPoint();
	void BreakTie();
};


// Class Killstreak.KSGameMode_NeutralBomb
// 0x2300 (0x5D9A9200 - 0x5D9A6F00)
class AKSGameMode_NeutralBomb : public AKSGameMode_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x2300];                                    // 0x5D9A6F00(0x2300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_NeutralBomb");
		return ptr;
	}


	void ResetBombIfInSpawnedState();
	void ResetBomb();
};


// Class Killstreak.KSGameMode_Demolition
// 0xFFFFFFFFFFFFFF00 (0x5D9A9100 - 0x5D9A9200)
class AKSGameMode_Demolition : public AKSGameMode_NeutralBomb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Demolition");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_ExtInterface
// 0x0000
class UKSGameMode_ExtInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_ExtInterface");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_ExtractionCoop
// 0x2400 (0x5D9A8B80 - 0x5D9A6780)
class AKSGameMode_ExtractionCoop : public AKSGameMode_Extraction
{
public:
	unsigned char                                      UnknownData00[0x2400];                                    // 0x5D9A6780(0x2400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_ExtractionCoop");
		return ptr;
	}


	void BroadcastAlarm();
};


// Class Killstreak.KSGameMode_RoyaleBase
// 0xFFFFFFFFFD9584A0 (0x5B2FC9A0 - 0x5D9A4500)
class AKSGameMode_RoyaleBase : public AKSGameMode
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_RoyaleBase");
		return ptr;
	}


	void TickZoneDamage();
	void GetMustContainActor();
};


// Class Killstreak.KSGameMode_ExtractionRoyale
// 0x26ABB60 (0x5D9A8500 - 0x5B2FC9A0)
class AKSGameMode_ExtractionRoyale : public AKSGameMode_RoyaleBase
{
public:
	unsigned char                                      UnknownData00[0x26ABB60];                                 // 0x5B2FC9A0(0x26ABB60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_ExtractionRoyale");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_Heist
// 0x5E00 (0x5D9AA300 - 0x5D9A4500)
class AKSGameMode_Heist : public AKSGameMode
{
public:
	unsigned char                                      UnknownData00[0x5E00];                                    // 0x5D9A4500(0x5E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Heist");
		return ptr;
	}

};


// Class Killstreak.KSGameMode_Incursion
// 0xFFFFFFFFA2659880 (0x0000 - 0x5D9A6780)
class AKSGameMode_Incursion : public AKSGameMode_Extraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Incursion");
		return ptr;
	}


	void HackDefenseSuccessful();
};


// Class Killstreak.KSGameMode_Modular
// 0x4280 (0x5D9AB180 - 0x5D9A6F00)
class AKSGameMode_Modular : public AKSGameMode_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x4280];                                    // 0x5D9A6F00(0x4280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Modular");
		return ptr;
	}


	void SetDefendingTeam();
	void SetAttackingTeam();
	void PushNewRespawnConfigToTeams();
	void PushModeDefaultRespawnConfigToTeams();
	void OnRoundStart();
	void OnRoundPrepare();
	void FilterRandomTeamObjective();
	void FilterRandomObjectiveForTeam();
	void FilterRandomObjectiveAgainstTeam();
	void FilterNeutralObjectives();
	void EndRoundPrepare();
	void ChooseRandomObjective();
	void ChangePlayerTeam();
};


// Class Killstreak.KSGameMode_Sabotage
// 0x3B80 (0x5D9AAA80 - 0x5D9A6F00)
class AKSGameMode_Sabotage : public AKSGameMode_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x3B80];                                    // 0x5D9A6F00(0x3B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_Sabotage");
		return ptr;
	}


	void OnHackComplete();
	void HasDefendingTeamWon();
	void HasAttackingTeamWon();
};


// Class Killstreak.KSGameMode_StrikeOutControl
// 0x2D00 (0x5D9AA780 - 0x5D9A7A80)
class AKSGameMode_StrikeOutControl : public AKSGameMode_Control
{
public:
	unsigned char                                      UnknownData00[0x2D00];                                    // 0x5D9A7A80(0x2D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameMode_StrikeOutControl");
		return ptr;
	}


	void OnTeamRemainingRespawnsChanged();
	void OnObjectiveUpdate();
};


// Class Killstreak.KSGamepadLookSpeedManager
// 0x5D9AA700
class UKSGamepadLookSpeedManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9AA700];                                // 0x0000(0x5D9AA700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGamepadLookSpeedManager");
		return ptr;
	}

};


// Class Killstreak.KSGamepadCurvedLookSpeedManager
// 0x1600 (0x5D9ABD00 - 0x5D9AA700)
class UKSGamepadCurvedLookSpeedManager : public UKSGamepadLookSpeedManager
{
public:
	unsigned char                                      UnknownData00[0x1600];                                    // 0x5D9AA700(0x1600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGamepadCurvedLookSpeedManager");
		return ptr;
	}


	void SetOuterDeadZone();
	void SetBoostMultiplier();
	void SetBoostAcceleration();
	void SetBaseVelocityCurve();
	void PrintLookSpeedParameters();
};


// Class Killstreak.KSGamePhaseProxyBase
// 0x0000
class UKSGamePhaseProxyBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGamePhaseProxyBase");
		return ptr;
	}


	void Activate();
};


// Class Killstreak.KSGameState
// 0x1469C0 (0x5B0E8A40 - 0x5AFA2080)
class AKSGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x1469C0];                                  // 0x5AFA2080(0x1469C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState");
		return ptr;
	}


	void WasLastPhasePrepare();
	void TriggerPostSelectionPhaseBeginFadeOutDel();
	void TriggerOnTeamCinematicSequenceBeginDel();
	void TrackedPlayerStateDestroyed();
	void StopWaveRespawnTimer();
	void StartWaveRespawnTimer();
	void ShouldDestroyDeployableOnInstigatorDeath();
	void SetSideForTeam();
	void RemoveGameDisplayInfoForActor();
	void RemoveGameDisplayInfoById();
	void RemoveDeployable();
	void ReceivedKillCamStatus();
	void OnRep_WaveRespawnTimer();
	void OnRep_MatchPhase();
	void OnRep_LootRarityTimerPairs();
	void OnRep_InfiniteAmmo();
	void OnRep_DisplayCash();
	void NotifyDropshipDoorOpened();
	void LootRespawnTimerTick();
	void LootRespawnTimerComplete();
	void LootRespawnTimerActive();
	void IsRoyaleMode();
	void IsKillCamRecording();
	void IsInSetup();
	void IsInSelection();
	void GetWorldDeployables();
	void GetWinningTeamNum();
	void GetUIMatchTime();
	void GetTrackedWorldDrops();
	void GetTrackedProjectiles();
	void GetTeams();
	void GetTeamConst();
	void GetSideForTeam();
	void GetRegisteredHeatSources();
	void GetPersistentPlayerDataById();
	void GetMiniMapAssistant();
	void GetMatchTimerState();
	void GetMatchTimer();
	void GetMatchPhase();
	void GetKillCamSecondaryFocusPawn();
	void GetKillCamFocusSpecial();
	void GetKillCamFocusPawn();
	void GetKillCamActor();
	void GetFirstTeamForSide();
	void GetAttackingTeam();
	void GetAllPersistentPlayerData();
	void FlipTeamSides();
	void EndGameInSurrender();
	void ClientsNotifyWinnerSet();
	void ClientsNotifyLastManStanding();
	void CharacterBodiesPersistAfterDeath();
	void CalculateCashForAssist();
	void BroadcastTeamSidesFlipped();
	void BroadcastKillCamParameters();
	void BlueprintIsMatchInProgress();
	void BlueprintHasMatchEnded();
	void AddGameDisplayInfo();
	void AddDeployable();
};


// Class Killstreak.KSGameState_RoundGame
// 0x28D9840 (0x5D9C2280 - 0x5B0E8A40)
class AKSGameState_RoundGame : public AKSGameState
{
public:
	unsigned char                                      UnknownData00[0x28D9840];                                 // 0x5B0E8A40(0x28D9840) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_RoundGame");
		return ptr;
	}


	void TryToReplayLastKill();
	void RoundHasStarted();
	void RoundHasEnded();
	void PreparingForNextRound();
	void OnRep_TotalRounds();
	void OnRep_RoundsToWin();
	void OnRep_RoundResult();
	void OnRep_RoundInitState();
	void OnRep_RoundInfo();
	void OnMatchTimerUpdate();
	void IsTieBreakerRound();
	void IsTeamAtMatchPoint();
	void IsRoundInProgress();
	void HasTriggeredRoundStart();
	void HasTriggeredRoundSetup();
	void HasTriggeredRoundOver();
	void GetTotalRounds();
	void GetRoundWinner();
	void GetRoundTimerState();
	void GetRoundTimer();
	void GetRoundsToWin();
	void GetRoundState();
	void GetRoundStartTime();
	void GetRoundNumber();
	void GetAllRoundResults();
};


// Class Killstreak.KSGameState_Control
// 0x1C80 (0x5D9C3F00 - 0x5D9C2280)
class AKSGameState_Control : public AKSGameState_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x1C80];                                    // 0x5D9C2280(0x1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_Control");
		return ptr;
	}


	void GetAllControlPoints();
	void GetActiveControlPoints();
	void BroadcastTeamScored();
	void BroadcastControlCaptured();
};


// Class Killstreak.KSGameState_NeutralBomb
// 0x1500 (0x5D9C3780 - 0x5D9C2280)
class AKSGameState_NeutralBomb : public AKSGameState_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5D9C2280(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_NeutralBomb");
		return ptr;
	}


	void OnRep_BombStateTimer();
	void OnRep_BombState();
	void GetBombState();
	void BombStateTimerTick();
	void BombStateTimerComplete();
	void BombStateTimerActive();
};


// Class Killstreak.KSGameState_Demolition
// 0xFFFFFFFFFFFFFF80 (0x5D9C3700 - 0x5D9C3780)
class AKSGameState_Demolition : public AKSGameState_NeutralBomb
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_Demolition");
		return ptr;
	}


	void OnRep_AttackingTeam();
};


// Class Killstreak.KSGameState_ExtInterface
// 0x0000
class UKSGameState_ExtInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_ExtInterface");
		return ptr;
	}

};


// Class Killstreak.KSGameState_Extraction
// 0x2A00 (0x5D9C4C80 - 0x5D9C2280)
class AKSGameState_Extraction : public AKSGameState_RoundGame
{
public:
	unsigned char                                      UnknownData00[0x2A00];                                    // 0x5D9C2280(0x2A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_Extraction");
		return ptr;
	}


	void OnRep_HackingObjectiveState();
	void OnRep_AttackingTeam();
	void IsAComputerHacked();
	void GetComputers();
	void CreditHacker();
	void CreditDehacker();
	void ComputersUnlocked();
};


// Class Killstreak.KSGameState_ExtractionCoop
// 0xFFFFFFFFFD938220 (0x5B2FCEA0 - 0x5D9C4C80)
class AKSGameState_ExtractionCoop : public AKSGameState_Extraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_ExtractionCoop");
		return ptr;
	}


	void OnRep_AlarmState();
	void BroadcastPhaseTimeout();
	void BroadcastExtractionPickupChanged();
	void BroadcastEscapePointChanged();
};


// Class Killstreak.KSGameState_RoyaleBase
// 0x28DBA40 (0x5D9C4480 - 0x5B0E8A40)
class AKSGameState_RoyaleBase : public AKSGameState
{
public:
	unsigned char                                      UnknownData00[0x28DBA40];                                 // 0x5B0E8A40(0x28DBA40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_RoyaleBase");
		return ptr;
	}


	void ZoneWaitStart();
	void ZoneShrinkStart();
};


// Class Killstreak.KSGameState_ExtractionRoyale
// 0x1680 (0x5D9C5B00 - 0x5D9C4480)
class AKSGameState_ExtractionRoyale : public AKSGameState_RoyaleBase
{
public:
	unsigned char                                      UnknownData00[0x1680];                                    // 0x5D9C4480(0x1680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_ExtractionRoyale");
		return ptr;
	}


	void OnRep_HackingObjectiveState();
	void OnRep_AttackingTeam();
	void IsAComputerHacked();
	void GetComputers();
	void CreditHacker();
	void CreditDehacker();
	void ComputersUnlocked();
};


// Class Killstreak.KSGameState_Heist
// 0x216BC0 (0x5B2FF600 - 0x5B0E8A40)
class AKSGameState_Heist : public AKSGameState
{
public:
	unsigned char                                      UnknownData00[0x216BC0];                                  // 0x5B0E8A40(0x216BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_Heist");
		return ptr;
	}


	void OnRep_TeamCash();
	void OnRep_Refreshes();
	void GetTeamCash();
	void GetRefreshes();
};


// Class Killstreak.KSGameState_Sabotage
// 0xFFFFFFFFA263B380 (0x0000 - 0x5D9C4C80)
class AKSGameState_Sabotage : public AKSGameState_Extraction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_Sabotage");
		return ptr;
	}

};


// Class Killstreak.KSGameState_StrikeOutControl
// 0xFFFFFFFFA263C100 (0x0000 - 0x5D9C3F00)
class AKSGameState_StrikeOutControl : public AKSGameState_Control
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameState_StrikeOutControl");
		return ptr;
	}

};


// Class Killstreak.KSSettingsSaveGame
// 0x5B0E8980
class UKSSettingsSaveGame : public USaveGame
{
public:
	unsigned char                                      UnknownData00[0x5B0E8980];                                // 0x0000(0x5B0E8980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSettingsSaveGame");
		return ptr;
	}

};


// Class Killstreak.KSGameUserSettingsDefault
// 0x5B2FF4C0
class UKSGameUserSettingsDefault : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B2FF4C0];                                // 0x0000(0x5B2FF4C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameUserSettingsDefault");
		return ptr;
	}

};


// Class Killstreak.KSGameUserSettings
// 0x1980 (0x5D9C9F00 - 0x5D9C8580)
class UKSGameUserSettings : public UGameUserSettings
{
public:
	unsigned char                                      UnknownData00[0x1980];                                    // 0x5D9C8580(0x1980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameUserSettings");
		return ptr;
	}


	void SaveLocalAction();
	void GetTextChatEnabled();
	void GetSafeFrameScale();
};


// Class Killstreak.KSGameViewportClient
// 0x5D9C9E80
class UKSGameViewportClient : public UPUMG_GameViewportClient
{
public:
	unsigned char                                      UnknownData00[0x5D9C9E80];                                // 0x0000(0x5D9C9E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGameViewportClient");
		return ptr;
	}

};


// Class Killstreak.KSGeneralProgressionManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSGeneralProgressionManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGeneralProgressionManager");
		return ptr;
	}

};


// Class Killstreak.KSGlobalShotListener
// 0x2A2BD80 (0x5D9C9D80 - 0x5AF9E000)
class AKSGlobalShotListener : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A2BD80];                                 // 0x5AF9E000(0x2A2BD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGlobalShotListener");
		return ptr;
	}


	void ShotNotify();
};


// Class Killstreak.KSGrenadeTargetingModule
// 0x48F80 (0x5D9CAB80 - 0x5D981C00)
class UKSGrenadeTargetingModule : public UKSWeaponTargetingModule
{
public:
	unsigned char                                      UnknownData00[0x48F80];                                   // 0x5D981C00(0x48F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGrenadeTargetingModule");
		return ptr;
	}


	void ShouldShowPathGivenState();
	void GetWeaponAsset_WithProjectile();
	void GetWeaponAsset_Grenade();
	void GetTraceStartLocation();
};


// Class Killstreak.KSGroupedActivityEventTracker
// 0x3E300 (0x5D9CAA00 - 0x5D98C700)
class UKSGroupedActivityEventTracker : public UKSEventTracker
{
public:
	unsigned char                                      UnknownData00[0x3E300];                                   // 0x5D98C700(0x3E300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGroupedActivityEventTracker");
		return ptr;
	}


	void OnChildActivityFinished();
};


// Class Killstreak.KSGyroControlledPawn
// 0x0000
class UKSGyroControlledPawn : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGyroControlledPawn");
		return ptr;
	}

};


// Class Killstreak.KSHairSkeletalMeshComponent
// 0x28E3E00 (0x5D9CA980 - 0x5B0E6B80)
class UKSHairSkeletalMeshComponent : public UKSCharacterSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x28E3E00];                                 // 0x5B0E6B80(0x28E3E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHairSkeletalMeshComponent");
		return ptr;
	}

};


// Class Killstreak.KSHeadShotTracker
// 0xFFFFFFFFA4D8F680 (0x0000 - 0x5B270980)
class UKSHeadShotTracker : public UKSAccoladeTracker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHeadShotTracker");
		return ptr;
	}


	void HandleTrackerAccolade();
};


// Class Killstreak.KSPlayerHealthMeterBase
// 0xFFFFFFFFA540FD80 (0x0000 - 0x5ABF0280)
class UKSPlayerHealthMeterBase : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerHealthMeterBase");
		return ptr;
	}


	void SetHealthMeterState();
	void GetMeterLargestValue();
};


// Class Killstreak.KSHeatSourceComponent
// 0xCE1BE80 (0x5D9CBD00 - 0x50BAFE80)
class UKSHeatSourceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE1BE80];                                 // 0x50BAFE80(0xCE1BE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHeatSourceComponent");
		return ptr;
	}


	void UnregisterWithoutHeatVisibilityBlocker();
	void UnregisterHeatOnlyVisibilityBlocker();
	void TransitionToTemperature();
	void SetTemperatureScalarModifier();
	void SetTemperature();
	void RegisterWithoutHeatVisibilityBlocker();
	void RegisterHeatOnlyVisibilityBlocker();
	void OnThermalVisionStateChanged();
	void OnOwnerInfoUpdateNotify();
	void NotifyThermalVisionStateChanged();
	void GetUnmodifiedTemperature();
	void GetTemperature();
};


// Class Killstreak.KSHUDAnnouncementComponent
// 0xCE1BC00 (0x5D9CBA80 - 0x50BAFE80)
class UKSHUDAnnouncementComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE1BC00];                                 // 0x50BAFE80(0xCE1BC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHUDAnnouncementComponent");
		return ptr;
	}


	void GetPlayerController();
};


// Class Killstreak.KSHUDInterface
// 0x0000
class UKSHUDInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHUDInterface");
		return ptr;
	}


	void SetSafeFrameScale();
	void SetHUDVisible();
	void RemoveDataTables();
	void RemoveDataTable();
	void OnToggleHUD();
	void OnLoadRoute();
	void HandleOpenTextChat();
	void GetSkinObject();
	void CreateGameRuleWidget();
	void BroadcastWidgetMessage();
	void BindEventToWidgetMessages();
	void BindEventToDataTableKeywordUpdate();
	void AddDataTables();
	void AddDataTable();
};


// Class Killstreak.KSImpactDecalComponent
// 0xFFFFFFFFA4E1EC80 (0x0000 - 0x5B1E1380)
class UKSImpactDecalComponent : public UPoolableDecalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSImpactDecalComponent");
		return ptr;
	}

};


// Class Killstreak.KSImpactEffect
// 0x2A2F200 (0x5D9CD200 - 0x5AF9E000)
class AKSImpactEffect : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A2F200];                                 // 0x5AF9E000(0x2A2F200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSImpactEffect");
		return ptr;
	}

};


// Class Killstreak.KSInMatchStore
// 0xCE1CB80 (0x5D9CCA00 - 0x50BAFE80)
class UKSInMatchStore : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE1CB80];                                 // 0x50BAFE80(0xCE1CB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInMatchStore");
		return ptr;
	}


	void ServerRequestPurchase();
	void RequestPurchase();
	void GetStorePages();
	void GetStoreInventory();
	void GetStockInCategory();
	void ClientPurchaseSuccess();
	void ClientPurchaseError();
};


// Class Killstreak.KSInputComponent
// 0xFFFFFFFFA4F63AC0 (0x0000 - 0x5B09C540)
class UKSInputComponent : public UInputComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInputComponent");
		return ptr;
	}

};


// Class Killstreak.KSInputFunctionLibrary
// 0x0000
class UKSInputFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInputFunctionLibrary");
		return ptr;
	}


	void GetGamepadIconSet();
};


// Class Killstreak.KSInspectableMusicManagerActor
// 0x2A30200 (0x5D9CE200 - 0x5AF9E000)
class AKSInspectableMusicManagerActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A30200];                                 // 0x5AF9E000(0x2A30200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInspectableMusicManagerActor");
		return ptr;
	}


	void StartMusic();
	void HandleQueryResults();
	void GetSwitchQueryResultValue();
	void GetRtpcQueryResultValue();
};


// Class Killstreak.KSInteractable
// 0x0000
class UKSInteractable : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractable");
		return ptr;
	}


	void UsePickupRangeForInteraction();
	void ShouldDisplayPrompt();
	void ShouldDisplayProgress();
	void RemoveInteractionBlocker();
	void MustCrouchWhileInteracting();
	void IsInteracting();
	void IsHiddenInteraction();
	void IsAutomaticInteraction();
	void GetRelativeHeight();
	void GetInteractionType();
	void GetInteractionPromptText();
	void GetInteractionProgressText();
	void GetInteractionPriority();
	void GetInteractionMode();
	void GetInteractableGroup();
	void GetCurrentInteractors();
	void GetCurrentInteractNum();
	void GetCameraTransition();
	void GetBestInteractionPoint();
	void FacesInteractable();
	void ConstructPrompt();
	void CanInteractWhileVaulting();
	void CanInteractWhileSkydiving();
	void CanInteractWhileMoving();
	void CanInteractWhileDown();
	void CanInteractFromBehind();
	void CanInteract();
	void AllowsMultipleInteraction();
	void AddInteractionBlocker();
};


// Class Killstreak.KSInteractionBlockerManager
// 0xCE1EC80 (0x5D9CEB00 - 0x50BAFE80)
class UKSInteractionBlockerManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE1EC80];                                 // 0x50BAFE80(0xCE1EC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractionBlockerManager");
		return ptr;
	}

};


// Class Killstreak.KSLootSiteBase
// 0x2A32700 (0x5D9D0700 - 0x5AF9E000)
class AKSLootSiteBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A32700];                                 // 0x5AF9E000(0x2A32700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLootSiteBase");
		return ptr;
	}


	void WeightedSiteShuffle();
	void SpawnSpecificLoot();
	void SpawnSpecificItemDrop();
	void SpawnItemDropInternal();
	void SpawnItemDrop();
	void SpawnedDropDestroyed();
	void SetSiteActive();
	void Reset();
	void OnRep_RarityTag();
	void OnRep_LootSiteState();
	void OnRep_CosmeticVisible();
	void OnCosmeticVisibilityChanged();
	void IsLooted();
	void IsActive();
	void GetLootSiteState();
	void FindBestDropLocation();
	void ChoostLoot();
	void ChooseRandomLoot();
	void ChooseItemAsset();
};


// Class Killstreak.KSInteractableLootSite
// 0xFFFFFFFFFFFFF980 (0x5D9D0080 - 0x5D9D0700)
class AKSInteractableLootSite : public AKSLootSiteBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractableLootSite");
		return ptr;
	}


	void PickLoot();
	void OnSuccessfulInteraction();
	void OnRep_ChosenLoot();
	void OnRep_bLooted();
	void GetInteractionTime();
	void ClientBroadcastSpawned();
};


// Class Killstreak.KSHoldOnlyStart
// 0xFFFFFFFFA4DC0960 (0x0000 - 0x5B23F6A0)
class UKSHoldOnlyStart : public UKSInteractionState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHoldOnlyStart");
		return ptr;
	}

};


// Class Killstreak.KSHoldOrTapNoRelease
// 0x0000
class UKSHoldOrTapNoRelease : public UKSHoldOrTapStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSHoldOrTapNoRelease");
		return ptr;
	}

};


// Class Killstreak.KSTimerNoRelease
// 0x0000
class UKSTimerNoRelease : public UKSWaitingForTimer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTimerNoRelease");
		return ptr;
	}

};


// Class Killstreak.KSInteractionManager
// 0xCE21B00 (0x5D9D1980 - 0x50BAFE80)
class UKSInteractionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE21B00];                                 // 0x50BAFE80(0xCE21B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractionManager");
		return ptr;
	}


	void ServerTap();
	void ServerStartNew();
	void ServerHoldRelease();
	void ServerHold();
	void ServerCancel();
	void ClientInteractionStopped();
	void ClientInteractionStarted();
};


// Class Killstreak.KSInteractionType
// 0x5D9D2180
class UKSInteractionType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9D2180];                                // 0x0000(0x5D9D2180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSInteractionType");
		return ptr;
	}


	void PlayInteractionAnimation();
	void MakeInteractableEffect();
	void MakeCharacterEffect();
	void GetInteractableEffect();
	void GetCharacterEffect();
};


// Class Killstreak.KSItem_Gender
// 0x27A7360 (0x5D9E0E20 - 0x5B239AC0)
class UKSItem_Gender : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x27A7360];                                 // 0x5B239AC0(0x27A7360) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItem_Gender");
		return ptr;
	}


	void GetGender();
};


// Class Killstreak.KSItemBundle
// 0x27A7220 (0x5D9E0CE0 - 0x5B239AC0)
class UKSItemBundle : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x27A7220];                                 // 0x5B239AC0(0x27A7220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItemBundle");
		return ptr;
	}


	void GetSortedBundledItems();
};


// Class Killstreak.KSItemDataTable
// 0xCD00 (0x5D9E0B00 - 0x5D9D3E00)
class UKSItemDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0xCD00];                                    // 0x5D9D3E00(0xCD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItemDataTable");
		return ptr;
	}

};


// Class Killstreak.ItemDropWidgetInterface
// 0x0000
class UItemDropWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ItemDropWidgetInterface");
		return ptr;
	}


	void ShowLabel();
	void SetOwningWidgetComponent();
	void SetLabel();
	void HideLabel();
};


// Class Killstreak.KSItemStimuliSourceComponent
// 0xFFFFFFFFA262C400 (0x0000 - 0x5D9D3C00)
class UKSItemStimuliSourceComponent : public UAIPerceptionStimuliSourceComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSItemStimuliSourceComponent");
		return ptr;
	}

};


// Class Killstreak.KSJobItem
// 0x279D8C0 (0x5D9D7380 - 0x5B239AC0)
class UKSJobItem : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x279D8C0];                                 // 0x5B239AC0(0x279D8C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobItem");
		return ptr;
	}


	void IsValidJobItem();
	void GetSoftSmallJobIcon();
	void GetSoftJobSquarePortrait();
	void GetSoftJobPortrait();
	void GetSoftJobDiamondPortrait();
	void GetSmallJobIcon();
	void GetQuickMeleeWeapon();
	void GetPerks();
	void GetMeleeWeapon();
	void GetJobRole();
	void GetJobMasteryActivityInstance();
	void GetFirstPassive();
	void GetDefaultSprays();
	void GetDefaultSkin();
	void GetDefaultSecondaryWeapon();
	void GetDefaultRadialMenuItems();
	void GetDefaultQuips();
	void GetDefaultPrimaryWeapon();
	void GetDefaultPerks();
	void GetDefaultGadget();
	void GetDefaultEmotes();
	void GetDefaultCommunications();
	void GetAlternativeSecondaryWeapon();
	void GetAlternativePrimaryWeapon();
	void GetAlternativeGadget();
};


// Class Killstreak.JobLoadout
// 0x5D9D6A80
class UJobLoadout : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9D6A80];                                // 0x0000(0x5D9D6A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.JobLoadout");
		return ptr;
	}


	void ValidateAttachmentForWeapon();
	void SetToJobDefaults();
	void SetSlot();
	void GetSlot();
	void GetAsMap();
	void CleanJobLoadoutItems();
};


// Class Killstreak.KSJobSelectionComponent
// 0xCE28500 (0x5D9D8380 - 0x50BAFE80)
class UKSJobSelectionComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE28500];                                 // 0x50BAFE80(0xCE28500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobSelectionComponent");
		return ptr;
	}


	void OnRep_EntryCount();
	void OnRep_AllowUnownedJobs();
	void OnPhaseChange();
	void NewPlayerStarting();
	void NewBotStarting();
	void IsReady();
	void InitializeJobSelectionList();
	void GetJobSelectionEntries();
};


// Class Killstreak.KSJobSelectionManager
// 0xCE27C00 (0x5D9D7A80 - 0x50BAFE80)
class UKSJobSelectionManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE27C00];                                 // 0x50BAFE80(0xCE27C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobSelectionManager");
		return ptr;
	}


	void ServerRequestSelectionState();
	void RequestSelectionState();
	void PlayerTeamSet();
	void PlayerStateSet();
	void JobSelectionComponentReady();
	void IsReady();
	void GetJobSelectionComponent();
	void ClientAcknowledgeStateSelection();
};


// Class Killstreak.KSJobSelectPreviewActor
// 0x5D9D8800
class AKSJobSelectPreviewActor : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5D9D8800];                                // 0x0000(0x5D9D8800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobSelectPreviewActor");
		return ptr;
	}


	void SetOwningPlayerName();
	void SetModelViewerDelay();
	void SetJobToQueuedId();
	void SetJobAndSkin();
	void SetJob();
	void SetHoveredJob();
	void PreLobbyCharacterDestroy();
	void PostLobbyCharacterSpawned();
	void IsLockedIn();
	void HasQueuedJob();
	void GetSkinBundle();
	void GetPreviewLoadState();
	void GetPositionIndex();
	void GetOwningPlayerName();
	void GetLobbyCharacter();
	void GetJobItem();
	void GetCharacterName();
	void GetCharacterFriendlySearchName();
	void BlueprintStateChanged();
};


// Class Killstreak.KSJobSelectPreviewActor_InMatch
// 0xFFFFFFFFA2627800 (0x0000 - 0x5D9D8800)
class AKSJobSelectPreviewActor_InMatch : public AKSJobSelectPreviewActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJobSelectPreviewActor_InMatch");
		return ptr;
	}

};


// Class Killstreak.KSJsonDataFactory
// 0x5B0E7FC0
class UKSJsonDataFactory : public UPUMG_JsonDataFactory
{
public:
	unsigned char                                      UnknownData00[0x5B0E7FC0];                                // 0x0000(0x5B0E7FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSJsonDataFactory");
		return ptr;
	}

};


// Class Killstreak.KSKillCam
// 0x5D9E1DC0
class UKSKillCam : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9E1DC0];                                // 0x0000(0x5D9E1DC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSKillCam");
		return ptr;
	}


	void KillCamStop();
	void DestroySpectatorController();
};


// Class Killstreak.KSPlayerController
// 0x29839C0 (0x5DA20180 - 0x5B09C7C0)
class AKSPlayerController : public APGame_PlayerController
{
public:
	unsigned char                                      UnknownData00[0x29839C0];                                 // 0x5B09C7C0(0x29839C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerController");
		return ptr;
	}


	void ViewedPawnTakeDamage();
	void ViewedPawnTakeArmorDamage();
	void ViewedPawnInstigatedDamageNotify();
	void ViewedPawnInstigatedDamage();
	void TriggerInputAction();
	void ToggleTouch();
	void ShouldVoteBlockMenu();
	void ShouldThermalVisionSkipTeammates();
	void SetVoteShouldBlockMenu();
	void SetSkipTeammatesForThermalVision();
	void SetIsTeamLoadedInLobby();
	void SetGamepadTurnRateScale();
	void SetGamepadLookUpRateScale();
	void SetForceThermalVision();
	void SetAutoPickupEnabled();
	void ServerUpdatePing();
	void ServerSetIsTeamLoadedInLobby();
	void ServerSetAutoPickupPreference();
	void ServerReportQuitFromMenu();
	void ServerPushInputTypeUse();
	void ServerPushFrameRateData();
	void ServerPushClientContext();
	void ServerNotifyClientSimpleSimulation();
	void ServerLagCompensationVisualization();
	void ServerChangeSpectateTarget();
	void ServerBouncePing();
	void ReportWeaponsEquipped();
	void ReportTimeRevealedCharacter();
	void ReportSetRevealCharacter();
	void ReportKillcamWorldReady();
	void ReportApparelApplied();
	void ReportAllReadyConditionsMet();
	void RadialMenuUseLastSelection();
	void RadialMenuReleased();
	void RadialMenuPressed();
	void RadialMenuForceClosed();
	void OnSpectateViewTargetDestroyed();
	void OnSpectateViewedCharacterKilledTimerElapsed();
	void OnSpectateViewedCharacterKilled();
	void OnSpectateControllerDestroyed();
	void OnPrimaryPawnDestroyed();
	void OnKillcamWorldReady();
	void OnCurrentSpectateTargetDestroyed();
	void OnCharacterWeaponsEquipped();
	void OnCharacterApparelApplied();
	void LocalStopAimDownSights();
	void LocalStartAimDownSights();
	void IsThermalVisionForced();
	void IsRadialMenuOpen();
	void IsInShownWorld();
	void IsAutoPickupEnabled();
	void HasUIBlockingRightStickLookInput();
	void GetValidSpectateTargetCount();
	void GetUIPawn();
	void GetUIKSCharacter();
	void GetTelemetrySettings();
	void GetShotListener();
	void GetRadialItemNameByEquipPoint();
	void GetPrimaryPawn();
	void GetPingManager();
	void GetPing();
	void GetOutgoingPacketInfo();
	void GetJobSelectionManager();
	void GetIsTeamLoadedInLobby();
	void GetIncomingPacketInfo();
	void GetHUDAnnouncmentComponent();
	void GetGamepadLookSpeedManager();
	void GetFPS();
	void GetEquipmentManagerComponent();
	void GetAimAssistComponent();
	void FlushVoteInput();
	void FinalizeAutoPickupPreferenceChange();
	void FillInClientContext();
	void EventViewedPawnTakeDamage();
	void EventViewedPawnTakeArmorDamage();
	void EventViewedPawnInstigatedDamageNotify();
	void EventViewedPawnInstigatedDamage();
	void EnablePreventFlushPressedKeys();
	void ControllerChangedForPickupLabeling();
	void CompVis();
	void ClientViewedPawnTakeDamage();
	void ClientViewedPawnTakeArmorDamage();
	void ClientViewedPawnInstigatedDamageNotify();
	void ClientUpdateActivityProgressCount();
	void ClientSpectateTeam();
	void ClientSignalEndOfMatch();
	void ClientReturnPing();
	void ClientPlayInstantReplay();
	void ClientOnPollStateChanged();
	void ClientOnPollCompleted();
	void ClientDrawDebugSphere();
	void ClientDrawDebugLine();
	void ClientDrawDebugCapsule();
	void ClientDrawDebugBox();
	void ClearActiveInteractableUI();
	void CachePostMatchScoreboard();
	void CachePostMatchInfo();
	void ApplyKickback();
	void AimStateChangedForPickupLabeling();
	void AddTimePlayed();
	void ActivateRadialItemByEquipPoint();
};


// Class Killstreak.KSKillCamController
// 0xFFFFFFFFFFFFFF80 (0x5DA20100 - 0x5DA20180)
class AKSKillCamController : public AKSPlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSKillCamController");
		return ptr;
	}

};


// Class Killstreak.KSKillCamObjectCamera
// 0x2A84080 (0x5DA22080 - 0x5AF9E000)
class AKSKillCamObjectCamera : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A84080];                                 // 0x5AF9E000(0x2A84080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSKillCamObjectCamera");
		return ptr;
	}

};


// Class Killstreak.KSKillLeaderTracker
// 0x27B1200 (0x5DA21B80 - 0x5B270980)
class UKSKillLeaderTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x27B1200];                                 // 0x5B270980(0x27B1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSKillLeaderTracker");
		return ptr;
	}


	void ProcessElimEntry();
	void HandleTrackerAccolade();
	void FindPlayerEntry();
	void CheckKillLeader();
};


// Class Killstreak.KSLoadoutBundle
// 0x42420 (0x5DA23100 - 0x5D9E0CE0)
class UKSLoadoutBundle : public UKSItemBundle
{
public:
	unsigned char                                      UnknownData00[0x42420];                                   // 0x5D9E0CE0(0x42420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLoadoutBundle");
		return ptr;
	}


	void GetWeapons();
	void GetWeaponItemIds();
	void GetPerks();
	void GetPerkItemIds();
	void GetBundlePerks();
	void GetBundleAbilities();
	void GetAttachments();
	void GetAttachmentItemIds();
	void GetAbilityItemIds();
	void GetAbilities();
};


// Class Killstreak.KSLoadoutClass
// 0x27E8FC0 (0x5DA22A80 - 0x5B239AC0)
class UKSLoadoutClass : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x27E8FC0];                                 // 0x5B239AC0(0x27E8FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLoadoutClass");
		return ptr;
	}


	void GetDynamicPoseImage();
};


// Class Killstreak.KSLoadoutDataFactory
// 0xFFFFFFFFA4E97900 (0x0000 - 0x5B168700)
class UKSLoadoutDataFactory : public UPUMG_LoadoutDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLoadoutDataFactory");
		return ptr;
	}


	void IsAccountItemEquippedInSlot();
	void GetEquippedAccountItem();
	void GetDefaultCosmeticItem();
	void EquipAccountItemToSlot();
};


// Class Killstreak.KSLoadoutRuleComponent
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UKSLoadoutRuleComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLoadoutRuleComponent");
		return ptr;
	}


	void AllowItem();
};


// Class Killstreak.KSLobbyCharacter
// 0x26D5900 (0x5DA24880 - 0x5B34EF80)
class AKSLobbyCharacter : public AKSCharacter
{
public:
	unsigned char                                      UnknownData00[0x26D5900];                                 // 0x5B34EF80(0x26D5900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLobbyCharacter");
		return ptr;
	}


	void VisibilityChanged();
	void UpdateHiddenInGame();
	void UnsetCharacter();
	void StopLobbyCharacterMontage();
	void StopCurrentEmote();
	void ShowLobbyNameplate();
	void SetUpStaticLobbyProp();
	void SetUpSkeletalLobbyProp();
	void SetupLobbyCharacter();
	void SetShouldHideInGame();
	void SetLobbyNameplate();
	void SetLobbyCharacterAnimState();
	void SetCharacterSkin();
	void SetCharacterEmote();
	void PlayLobbyCharacterMontage();
	void OnLobbyPresenceStateChange();
	void IsSet();
	void IsLobbyCharacter();
	void InitializeLobbyCharacterAnimation();
	void HideLobbyNameplate();
	void GetCurrentMontagePosition();
	void GetCurrentAnimState();
	void GetCharacterIndex();
	void EmoteCosmeticComponentCreated();
	void EmoteActionStateChanged();
	void DeattachStaticLobbyProp();
	void DeattachSkeletalLobbyProp();
	void DeattachAllLobbyProps();
	void ClearAllLobbyPropInfo();
	void AttachAllActiveLobbyProps();
};


// Class Killstreak.KSLobbyCameraActor
// 0xFFFFFFFFFFFFFF80 (0x5DA24280 - 0x5DA24300)
class AKSLobbyCameraActor : public ACineCameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLobbyCameraActor");
		return ptr;
	}

};


// Class Killstreak.KSLobbyLevelSequenceActor
// 0x29F2D00 (0x5DA26300 - 0x5B033600)
class AKSLobbyLevelSequenceActor : public ALevelSequenceActor
{
public:
	unsigned char                                      UnknownData00[0x29F2D00];                                 // 0x5B033600(0x29F2D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLobbyLevelSequenceActor");
		return ptr;
	}

};


// Class Killstreak.KSLobbyPropManagerComponent
// 0xCE32D00 (0x5D9E2B80 - 0x50BAFE80)
class UKSLobbyPropManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE32D00];                                 // 0x50BAFE80(0xCE32D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLobbyPropManagerComponent");
		return ptr;
	}

};


// Class Killstreak.KSLocalPlayer
// 0x5DA25D80
class UKSLocalPlayer : public UPCom_LocalPlayer
{
public:
	unsigned char                                      UnknownData00[0x5DA25D80];                                // 0x0000(0x5DA25D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLocalPlayer");
		return ptr;
	}


	void IsKillCamReplayActive();
	void GetRealWorld();
	void GetKillCam();
};


// Class Killstreak.KSLocomotionAnimInst
// 0xFFFFFFFFA268F800 (0x0000 - 0x5D970800)
class UKSLocomotionAnimInst : public UKSCharacterAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLocomotionAnimInst");
		return ptr;
	}

};


// Class Killstreak.KSLongShot
// 0x27B5300 (0x5DA25C80 - 0x5B270980)
class UKSLongShot : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x27B5300];                                 // 0x5B270980(0x27B5300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLongShot");
		return ptr;
	}


	void HandleTrackerAccolade();
};


// Class Killstreak.KSLootSitePowerUp
// 0x12340 (0x5D9E2A40 - 0x5D9D0700)
class AKSLootSitePowerUp : public AKSLootSiteBase
{
public:
	unsigned char                                      UnknownData00[0x12340];                                   // 0x5D9D0700(0x12340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSLootSitePowerUp");
		return ptr;
	}

};


// Class Killstreak.KSMapDifficultyManager
// 0x2A46DE0 (0x5D9E4DE0 - 0x5AF9E000)
class AKSMapDifficultyManager : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A46DE0];                                 // 0x5AF9E000(0x2A46DE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMapDifficultyManager");
		return ptr;
	}


	void HandleTeamCreated();
	void HandleRoundStart();
	void HandleRoundSetup();
	void HandlePhaseChange();
	void HandleObjectiveClaimed();
	void HandleCharacterOnTeamKilled();
};


// Class Killstreak.KSPrimaryAssetLabel
// 0xFFFFFFFFA25D9200 (0x0000 - 0x5DA26E00)
class UKSPrimaryAssetLabel : public UPrimaryAssetLabel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPrimaryAssetLabel");
		return ptr;
	}

};


// Class Killstreak.KSMapLabel
// 0x5DA26B00
class UKSMapLabel : public UKSPrimaryAssetLabel
{
public:
	unsigned char                                      UnknownData00[0x5DA26B00];                                // 0x0000(0x5DA26B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMapLabel");
		return ptr;
	}

};


// Class Killstreak.KSMatchDataRecorder
// 0x5DA26780
class UKSMatchDataRecorder : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DA26780];                                // 0x0000(0x5DA26780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMatchDataRecorder");
		return ptr;
	}


	void OnPlayerLogout();
	void OnPlayerLogin();
};


// Class Killstreak.KSMath
// 0x0000
class UKSMath : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMath");
		return ptr;
	}


	void ShiftLocationBetweenTransforms();
	void ScaleInterpCurveVector2D();
	void ScaleInterpCurveFloatInput();
	void RInterpConstantToDirectional();
	void GetRotationFromNormals();
	void GetLineSphereIntersectionPoints();
	void GetLineRectangleIntersectionPoints();
	void GetLineCircleIntersectionPoints();
	void FloatInterpCurveIntegralTrapezoid();
	void FInterpRadiansTo();
	void FInterpEaseOutViewStyle();
	void FInterpEaseOutInverse();
	void FInterpEaseInViewStyle();
	void FInterpDegreesTo();
	void ClampVector2D();
};


// Class Killstreak.KSMedPack
// 0x2777800 (0x5DA2A500 - 0x5B2B2D00)
class AKSMedPack : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2777800];                                 // 0x5B2B2D00(0x2777800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMedPack");
		return ptr;
	}


	void GetBuildupTime();
};


// Class Killstreak.KSMeleeTargetingModule
// 0x5F780 (0x5DA2A300 - 0x5D9CAB80)
class UKSMeleeTargetingModule : public UKSGrenadeTargetingModule
{
public:
	unsigned char                                      UnknownData00[0x5F780];                                   // 0x5D9CAB80(0x5F780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMeleeTargetingModule");
		return ptr;
	}

};


// Class Killstreak.KSMeleeWeaponAssetDrop
// 0xFFFFFFFFA4D40900 (0x0000 - 0x5B2BF700)
class AKSMeleeWeaponAssetDrop : public AKSWeaponAssetDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMeleeWeaponAssetDrop");
		return ptr;
	}

};


// Class Killstreak.KSMercMasteryActivity
// 0x2773760 (0x5D9E4B60 - 0x5B271400)
class UKSMercMasteryActivity : public UKSJobActivity
{
public:
	unsigned char                                      UnknownData00[0x2773760];                                 // 0x5B271400(0x2773760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMercMasteryActivity");
		return ptr;
	}

};


// Class Killstreak.KSMercMasteryManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSMercMasteryManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMercMasteryManager");
		return ptr;
	}


	void GetWinPercentForJob();
	void GetLowestJobForActivityType();
	void GetHighestJobForActivityType();
	void GetActivityInstancesWithType();
	void GetActivityInstancesWithJob();
	void GetActivityInstanceByJobAndType();
	void FindActivityByJobAndType();
};


// Class Killstreak.KSMiniMapAssistant
// 0x0000
class AKSMiniMapAssistant : public AInfo
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMiniMapAssistant");
		return ptr;
	}


	void GetRelativeMinimapHeightToLocalPlayer();
};


// Class Killstreak.KSMinimapRendererBase
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AKSMinimapRendererBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMinimapRendererBase");
		return ptr;
	}


	void GetMinimapWidth();
};


// Class Killstreak.KSPlayerModInstance
// 0xCE7BE80 (0x5DA2BD00 - 0x50BAFE80)
class UKSPlayerModInstance : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE7BE80];                                 // 0x50BAFE80(0xCE7BE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerModInstance");
		return ptr;
	}


	void StopAnimationFromEvent();
	void ReactsToAnimationEvent();
	void PlayAnimationFromEvent();
	void OwnerIsLocal();
	void OwnerHasAuthority();
	void OverrideInteraction();
	void OnRep_OwnerCharacter();
	void OnRep_ModAsset();
	void OnRep_InstanceCount();
	void OnOwnerDied();
	void OnNewCharacter();
	void OnModInitialized();
	void OnCharacterOwnerDeath();
	void ModifyDamageDealt();
	void ModEventReceived();
	void InitializeMod();
	void GetPlayerStateOwner();
	void GetModType();
	void GetModInstigator();
	void GetModAsset();
	void GetInstanceCount();
	void GetDuration();
	void GetCharacterOwner();
	void BroadcastModTriggeredInternal();
	void BroadcastModTriggered();
};


// Class Killstreak.KSModInst_Activated
// 0x1C80 (0x5DA2D980 - 0x5DA2BD00)
class UKSModInst_Activated : public UKSPlayerModInstance
{
public:
	unsigned char                                      UnknownData00[0x1C80];                                    // 0x5DA2BD00(0x1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_Activated");
		return ptr;
	}


	void UpdateChargeDirect();
	void UpdateCharge();
	void TryToCancel();
	void TryToActivate();
	void SetAbilityMovementMode();
	void SetAbilityMovementDisabled();
	void RefundCharge();
	void Recharge();
	void OnSetupComplete();
	void OnSetupActive();
	void OnSetup();
	void OnRep_SetupTimer();
	void OnRep_LockoutTimer();
	void OnRep_Locked();
	void OnRep_CurrentlyHeldId();
	void OnRep_CurrentCharge();
	void OnOwnerDownStateChanged();
	void OnLockoutTimerTick();
	void OnLockoutTimerActive();
	void OnFullyCharged();
	void OnEndRecovery();
	void OnEndActivationWarning();
	void OnEndActivation();
	void OnActivation();
	void OnAbilityReleased();
	void IsUIActivateableNow();
	void IsLocked();
	void IsInSetup();
	void IsActivated();
	void IsAbilityMovementDisabled();
	void HandleSetupTimerComplete();
	void HandleSetupTimerActive();
	void HandleCharacterOwnerTakeDamage();
	void GetStateMachine();
	void GetSetupActionRestrictor();
	void GetRequiredCharge();
	void GetRecoveryActionRestrictor();
	void GetMaximumCharge();
	void GetLockoutTimeRemaining();
	void GetDefaultCharge();
	void GetCurrentCharge();
	void GetActivatedModAsset();
	void GetAbilitySetupDuration();
	void GetAbilityRecoveryDuration();
	void GetAbilityDuration();
	void EndActivation();
	void ConsumeChargeAmount();
	void ConsumeCharge();
	void ClientModFailedToActivate();
	void CanActivateWhileDowned();
	void CanActivateNow();
	void BroadcastModActivated();
	void BroadcastEndRecovery();
	void BroadcastEndActivationWarning();
	void BeginActivation();
	void AbilityActivationRequestTimeout();
};


// Class Killstreak.KSModInst_ActivatedStateMachine
// 0xFFFFFFFFFD6BD1C0 (0x5B0EAB40 - 0x5DA2D980)
class UKSModInst_ActivatedStateMachine : public UKSModInst_Activated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ActivatedStateMachine");
		return ptr;
	}


	void TryToSetAsActiveMod();
	void RemoveFromStateStorage();
	void OnRep_StateStorage();
	void OnRep_CurrentActiveMod();
	void OnActiveModFailedToActivate();
	void OnActiveModChargeChanged();
	void GetStoredPlayerStates();
	void GetStateStorage();
	void ClearStateStorage();
	void AddToStateStorage();
	void AddPlayerStateToStateStorage();
};


// Class Killstreak.KSModInst_ActivatedTarget
// 0x1200 (0x5DA2EB80 - 0x5DA2D980)
class UKSModInst_ActivatedTarget : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x1200];                                    // 0x5DA2D980(0x1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ActivatedTarget");
		return ptr;
	}


	void GetCachedTarget();
	void BroadcastTarget();
	void AssignTarget();
};


// Class Killstreak.KSModInst_ActivatedViewMode
// 0x1100 (0x5DA2EA80 - 0x5DA2D980)
class UKSModInst_ActivatedViewMode : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x1100];                                    // 0x5DA2D980(0x1100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ActivatedViewMode");
		return ptr;
	}

};


// Class Killstreak.KSModInst_OnDamageOther
// 0x3C80 (0x5DA2F980 - 0x5DA2BD00)
class UKSModInst_OnDamageOther : public UKSPlayerModInstance
{
public:
	unsigned char                                      UnknownData00[0x3C80];                                    // 0x5DA2BD00(0x3C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnDamageOther");
		return ptr;
	}


	void OnMatchingDamageDealt();
	void OnInstigatedDamageNotify();
	void OnInstigatedDamage();
	void DoesDamageMatch();
};


// Class Killstreak.KSModInst_ApplyDebuffOnDamage
// 0xFFFFFFFFFFFB6AE0 (0x5D9E6460 - 0x5DA2F980)
class UKSModInst_ApplyDebuffOnDamage : public UKSModInst_OnDamageOther
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ApplyDebuffOnDamage");
		return ptr;
	}

};


// Class Killstreak.KSModInst_GiveItemOnActivation
// 0x13300 (0x5DA40C80 - 0x5DA2D980)
class UKSModInst_GiveItemOnActivation : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x13300];                                   // 0x5DA2D980(0x13300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_GiveItemOnActivation");
		return ptr;
	}


	void TryToRemoveItem();
	void TryToGiveItem();
	void OnRep_GivenItem();
	void OnNewGivenItem();
	void OnItemRemoved();
	void GetOnNewCharacterItemIndex();
	void AsyncItemGiveComplete();
};


// Class Killstreak.KSModInst_GiveWeaponOnActivation
// 0x1300 (0x5DA41F80 - 0x5DA40C80)
class UKSModInst_GiveWeaponOnActivation : public UKSModInst_GiveItemOnActivation
{
public:
	unsigned char                                      UnknownData00[0x1300];                                    // 0x5DA40C80(0x1300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_GiveWeaponOnActivation");
		return ptr;
	}


	void TryToSwapBackToWeapon();
	void SwapFromRetry();
	void RegisterDeployable();
	void OnWeaponStateChanged();
	void OnGivenWeaponInstigatedDamage();
	void OnDeployableDestroyed();
	void HandleWeaponExhausted();
	void GivenWeaponInstigatedDamage();
	void EndsActivationOnHolster();
	void EndsActivationOnEmptyClip();
	void BroadcastGivenWeaponInstigatedDamage();
};


// Class Killstreak.KSModInst_BuffWeaponOnActivation
// 0xFFFFFFFFFFFA4260 (0x5D9E61E0 - 0x5DA41F80)
class UKSModInst_BuffWeaponOnActivation : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_BuffWeaponOnActivation");
		return ptr;
	}


	void OnRep_BaseWeapon();
	void OnBaseWeaponDestroyed();
};


// Class Killstreak.KSModInst_DamageDealt
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_DamageDealt : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_DamageDealt");
		return ptr;
	}

};


// Class Killstreak.KSModInst_OverTimeEffect
// 0x15A80 (0x5DA41780 - 0x5DA2BD00)
class UKSModInst_OverTimeEffect : public UKSPlayerModInstance
{
public:
	unsigned char                                      UnknownData00[0x15A80];                                   // 0x5DA2BD00(0x15A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OverTimeEffect");
		return ptr;
	}


	void OnRep_EffectTimer();
	void GetEffectTickPeriod();
	void EffectTick();
};


// Class Killstreak.KSModInst_DamageOverTime
// 0xFFFFFFFFFFFFFF00 (0x5DA41680 - 0x5DA41780)
class UKSModInst_DamageOverTime : public UKSModInst_OverTimeEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_DamageOverTime");
		return ptr;
	}

};


// Class Killstreak.KSModInst_DetectEnemy
// 0x15780 (0x5DA41480 - 0x5DA2BD00)
class UKSModInst_DetectEnemy : public UKSPlayerModInstance
{
public:
	unsigned char                                      UnknownData00[0x15780];                                   // 0x5DA2BD00(0x15780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_DetectEnemy");
		return ptr;
	}


	void OnRep_EnemyDetected();
	void IsDetectingEnemy();
	void GetWidgetClass();
	void DetectEnemy();
};


// Class Killstreak.KSModInst_FireWeaponOnActivation
// 0xFFFFFFFFA25BE080 (0x0000 - 0x5DA41F80)
class UKSModInst_FireWeaponOnActivation : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_FireWeaponOnActivation");
		return ptr;
	}


	void HandleIdle();
	void HandleCooldown();
	void HandleBuildup();
};


// Class Killstreak.KSModInst_DirectTargetWeapon
// 0x5DA43180
class UKSModInst_DirectTargetWeapon : public UKSModInst_FireWeaponOnActivation
{
public:
	unsigned char                                      UnknownData00[0x5DA43180];                                // 0x0000(0x5DA43180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_DirectTargetWeapon");
		return ptr;
	}

};


// Class Killstreak.KSModInst_GiveBuildOnActivation
// 0x0F00 (0x5DA42E80 - 0x5DA41F80)
class UKSModInst_GiveBuildOnActivation : public UKSModInst_GiveWeaponOnActivation
{
public:
	unsigned char                                      UnknownData00[0xF00];                                     // 0x5DA41F80(0x0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_GiveBuildOnActivation");
		return ptr;
	}


	void BuildSucceeded();
	void BuildSpawned();
	void BuildReclaimed();
	void BuildFailed();
};


// Class Killstreak.KSModInst_GiveEquipPoints
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_GiveEquipPoints : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_GiveEquipPoints");
		return ptr;
	}

};


// Class Killstreak.KSModInst_HoldToTarget
// 0x15380 (0x5DA42D00 - 0x5DA2D980)
class UKSModInst_HoldToTarget : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x15380];                                   // 0x5DA2D980(0x15380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_HoldToTarget");
		return ptr;
	}


	void OnRep_CurrentTarget();
};


// Class Killstreak.KSModInst_MainCameraFov
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_MainCameraFov : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_MainCameraFov");
		return ptr;
	}

};


// Class Killstreak.KSModInst_MartialArtist
// 0xFFFFFFFFFFFB6F80 (0x5D9E5B00 - 0x5DA2EB80)
class UKSModInst_MartialArtist : public UKSModInst_ActivatedTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_MartialArtist");
		return ptr;
	}


	void GetThrowDistance();
	void GetThrowDirection();
	void GetCardinalThrowDirection();
	void BroadcastTargetInfo();
};


// Class Killstreak.KSModInst_MovementAbility
// 0x14D80 (0x5DA42700 - 0x5DA2D980)
class UKSModInst_MovementAbility : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x14D80];                                   // 0x5DA2D980(0x14D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_MovementAbility");
		return ptr;
	}


	void GetDistance();
};


// Class Killstreak.KSModInst_OnDodgeRoll
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_OnDodgeRoll : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnDodgeRoll");
		return ptr;
	}


	void Triggered();
	void OnDodgeRoll();
};


// Class Killstreak.KSModInst_OnDownOrRevive
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_OnDownOrRevive : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnDownOrRevive");
		return ptr;
	}


	void OnReviveComplete();
};


// Class Killstreak.KSModInst_OnDownOther
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_OnDownOther : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnDownOther");
		return ptr;
	}


	void OnDownOther();
	void DownTriggered();
};


// Class Killstreak.KSModInst_OnPickupItem
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_OnPickupItem : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnPickupItem");
		return ptr;
	}


	void OnItemPickedUp();
	void ItemPickedUp();
};


// Class Killstreak.KSModInst_OnReviveOther
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_OnReviveOther : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnReviveOther");
		return ptr;
	}


	void Triggered();
	void OnReviveOther();
};


// Class Killstreak.KSModInst_OnTakeDamage
// 0x17A00 (0x5DA43700 - 0x5DA2BD00)
class UKSModInst_OnTakeDamage : public UKSPlayerModInstance
{
public:
	unsigned char                                      UnknownData00[0x17A00];                                   // 0x5DA2BD00(0x17A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_OnTakeDamage");
		return ptr;
	}


	void TakeDamageTimerComplete();
	void StopTakeDamageTimer();
	void StartTakeDamageTimer();
	void ReviveCompleted();
	void OnTakeDamage();
	void OnReviveCompleted();
	void OnRep_TakeDamageTimer();
	void MatchingDamageTaken();
};


// Class Killstreak.KSModInst_PhysAbilityMovement
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_PhysAbilityMovement : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_PhysAbilityMovement");
		return ptr;
	}

};


// Class Killstreak.KSModInst_PickupRange
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_PickupRange : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_PickupRange");
		return ptr;
	}

};


// Class Killstreak.KSModInst_PingOnOtherDowned
// 0xFFFFFFFFFFFB9C20 (0x5D9E5920 - 0x5DA2BD00)
class UKSModInst_PingOnOtherDowned : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_PingOnOtherDowned");
		return ptr;
	}


	void PingFromDownedEnemy();
	void OnPlayerDowned();
	void OnCharacterPinged();
	void BroadcastSpawnPingEmitter();
	void BroadcastPingedCharacter();
};


// Class Killstreak.KSModInst_RevealAreaToTeam
// 0x5DA45280
class UKSModInst_RevealAreaToTeam : public UKSModInst_FireWeaponOnActivation
{
public:
	unsigned char                                      UnknownData00[0x5DA45280];                                // 0x0000(0x5DA45280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_RevealAreaToTeam");
		return ptr;
	}

};


// Class Killstreak.KSModInst_RevealOnMinimap
// 0xFFFFFFFFFFFB9B80 (0x5D9E5880 - 0x5DA2BD00)
class UKSModInst_RevealOnMinimap : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_RevealOnMinimap");
		return ptr;
	}


	void IsValidReveal();
};


// Class Killstreak.KSModInst_ReviveDrone
// 0x1A00 (0x5DA44B80 - 0x5DA43180)
class UKSModInst_ReviveDrone : public UKSModInst_DirectTargetWeapon
{
public:
	unsigned char                                      UnknownData00[0x1A00];                                    // 0x5DA43180(0x1A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ReviveDrone");
		return ptr;
	}


	void ResetToAvailability();
	void OnReviveDroneEvent();
	void OnRep_ReviveDroneAbilityState();
	void OnDroneTargetRevive();
	void OnDroneSpawned();
	void OnDroneReviveComplete();
	void OnDroneReviveBegin();
	void OnDroneHealthUpdate();
	void OnDroneDestroyed();
	void OnDroneAbort();
	void GetReviveProgress();
	void GetReviveDroneAbilityState();
	void BroadcastReviveDroneEvent();
};


// Class Killstreak.KSModInst_ReviveSelfOnActivation
// 0x16D80 (0x5DA44700 - 0x5DA2D980)
class UKSModInst_ReviveSelfOnActivation : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x16D80];                                   // 0x5DA2D980(0x16D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ReviveSelfOnActivation");
		return ptr;
	}

};


// Class Killstreak.KSModInst_ReviveTarget
// 0x16B00 (0x5DA44480 - 0x5DA2D980)
class UKSModInst_ReviveTarget : public UKSModInst_Activated
{
public:
	unsigned char                                      UnknownData00[0x16B00];                                   // 0x5DA2D980(0x16B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_ReviveTarget");
		return ptr;
	}


	void TargetKilled();
	void ReviveEnd();
	void GetTargetCharacter();
};


// Class Killstreak.KSModInst_StartingEquipment
// 0xFFFFFFFFA25D4300 (0x0000 - 0x5DA2BD00)
class UKSModInst_StartingEquipment : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_StartingEquipment");
		return ptr;
	}


	void GiveEquipment();
};


// Class Killstreak.KSModInst_WeaponSkinOverride
// 0xFFFFFFFFFD6BECC0 (0x5B0EA9C0 - 0x5DA2BD00)
class UKSModInst_WeaponSkinOverride : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModInst_WeaponSkinOverride");
		return ptr;
	}


	void OnActiveWeaponChanged();
};


// Class Killstreak.KSModZone
// 0x2A472E0 (0x5D9E52E0 - 0x5AF9E000)
class AKSModZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A472E0];                                 // 0x5AF9E000(0x2A472E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSModZone");
		return ptr;
	}


	void OnCharacterPossessedOutsideZone();
	void OnCharacterPossessedInsideZone();
};


// Class Killstreak.KSMultiDownsTracker
// 0x2777160 (0x5D9E7AE0 - 0x5B270980)
class UKSMultiDownsTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x2777160];                                 // 0x5B270980(0x2777160) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMultiDownsTracker");
		return ptr;
	}


	void RemoveTrackerByPlayerState();
	void RemoveTracker();
	void HandleTrackerAccolade();
	void GetTrackPlayer();
};


// Class Killstreak.KSMultiElimTracker
// 0x2777020 (0x5D9E79A0 - 0x5B270980)
class UKSMultiElimTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x2777020];                                 // 0x5B270980(0x2777020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSMultiElimTracker");
		return ptr;
	}


	void RemoveTrackerByPlayerState();
	void HandleTrackerAccolade();
	void GetTrackPlayer();
};


// Class Killstreak.KSNamedLocation
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AKSNamedLocation : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNamedLocation");
		return ptr;
	}

};


// Class Killstreak.KSNamedObject
// 0x0000
class UKSNamedObject : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNamedObject");
		return ptr;
	}


	void GetKSName();
};


// Class Killstreak.KSNavAgentInterface
// 0x0000
class UKSNavAgentInterface : public UNavAgentInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavAgentInterface");
		return ptr;
	}

};


// Class Killstreak.KSNavArea
// 0xFFFFFFFFFFFA0D00 (0x5D9E7900 - 0x5DA46C00)
class UKSNavArea : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavArea");
		return ptr;
	}

};


// Class Killstreak.KSNavigationQueryFilter
// 0xFFFFFFFFFFFFFD80 (0x5D9E75E0 - 0x5D9E7860)
class UKSNavigationQueryFilter : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavigationQueryFilter");
		return ptr;
	}

};


// Class Killstreak.KSNavLinkProxy
// 0xFFFFFFFFA2618B60 (0x0000 - 0x5D9E74A0)
class AKSNavLinkProxy : public ANavLinkProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavLinkProxy");
		return ptr;
	}

};


// Class Killstreak.KSNavModifierComponent
// 0x60EA0 (0x5DA48200 - 0x5D9E7360)
class UKSNavModifierComponent : public UNavModifierComponent
{
public:
	unsigned char                                      UnknownData00[0x60EA0];                                   // 0x5D9E7360(0x60EA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavModifierComponent");
		return ptr;
	}


	void UpdateNavigationMesh();
	void UpdateCachedBounds();
	void SetAreaClassAndCacheBounds();
};


// Class Killstreak.KSNavModifierVolume
// 0xFFFFFFFFA2618E80 (0x0000 - 0x5D9E7180)
class AKSNavModifierVolume : public ANavModifierVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNavModifierVolume");
		return ptr;
	}

};


// Class Killstreak.KSNearMissComponent
// 0xFFFFFFFFA4D29180 (0x0000 - 0x5B2D6E80)
class UKSNearMissComponent : public UKSFXCurveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNearMissComponent");
		return ptr;
	}

};


// Class Killstreak.KSNeutralBombSpawner
// 0x77980 (0x5DA48080 - 0x5D9D0700)
class AKSNeutralBombSpawner : public AKSLootSiteBase
{
public:
	unsigned char                                      UnknownData00[0x77980];                                   // 0x5D9D0700(0x77980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNeutralBombSpawner");
		return ptr;
	}

};


// Class Killstreak.KSNeutralBombZone
// 0xC1C80 (0x5DA47C00 - 0x5D985F80)
class AKSNeutralBombZone : public AKSDropOffZone
{
public:
	unsigned char                                      UnknownData00[0xC1C80];                                   // 0x5D985F80(0xC1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNeutralBombZone");
		return ptr;
	}

};


// Class Killstreak.KSStaticMeshComponent
// 0xFFFFFFFFA25B7500 (0x0000 - 0x5DA48B00)
class UKSStaticMeshComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSStaticMeshComponent");
		return ptr;
	}

};


// Class Killstreak.KSNoCollisionStaticMeshComponent
// 0x0000
class UKSNoCollisionStaticMeshComponent : public UKSStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNoCollisionStaticMeshComponent");
		return ptr;
	}

};


// Class Killstreak.KSNoFlyZoneTracker
// 0x27D7F00 (0x5DA48880 - 0x5B270980)
class UKSNoFlyZoneTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x27D7F00];                                 // 0x5B270980(0x27D7F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNoFlyZoneTracker");
		return ptr;
	}


	void UpdatePlayerTrackers();
	void HandleTrackerAccolade();
};


// Class Killstreak.KSNPEActivity
// 0x2775A80 (0x5D9E6F00 - 0x5B271480)
class UKSNPEActivity : public UKSActivity
{
public:
	unsigned char                                      UnknownData00[0x2775A80];                                 // 0x5B271480(0x2775A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNPEActivity");
		return ptr;
	}

};


// Class Killstreak.KSNPETrackManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSNPETrackManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSNPETrackManager");
		return ptr;
	}


	void GetActivityInstanceByType();
	void FindActivityByType();
	void CompleteNPEActivityByType();
};


// Class Killstreak.KSObjectHelper
// 0x0000
class UKSObjectHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSObjectHelper");
		return ptr;
	}

};


// Class Killstreak.KSOutOfBoundsManager
// 0xCE99980 (0x5DA49800 - 0x50BAFE80)
class UKSOutOfBoundsManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE99980];                                 // 0x50BAFE80(0xCE99980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSOutOfBoundsManager");
		return ptr;
	}


	void TickDamage();
	void OnOutOfBoundsWarningExpired();
	void OnCharacterOutOfWorld();
	void OnActorOverlapZoneEnd();
	void OnActorOverlapZoneBegin();
	void OnActorOverlapVolumeEnd();
	void OnActorOverlapVolumeBegin();
	void ExpireTimeSpentGroundedTimer();
};


// Class Killstreak.KSOutOfBoundsManager_RoundGame
// 0xFFFFFFFFFFFFFE80 (0x5DA49680 - 0x5DA49800)
class UKSOutOfBoundsManager_RoundGame : public UKSOutOfBoundsManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSOutOfBoundsManager_RoundGame");
		return ptr;
	}


	void OnRoundStarted();
	void OnFreezeEnd();
};


// Class Killstreak.KSOutOfBoundsRecoveryPoint
// 0xFFFFFFFFFFFFFF80 (0x5DA4B500 - 0x5DA4B580)
class AKSOutOfBoundsRecoveryPoint : public ANavigationObjectBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSOutOfBoundsRecoveryPoint");
		return ptr;
	}

};


// Class Killstreak.KSOutOfBoundsZone
// 0x2AAD280 (0x5DA4B280 - 0x5AF9E000)
class AKSOutOfBoundsZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2AAD280];                                 // 0x5AF9E000(0x2AAD280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSOutOfBoundsZone");
		return ptr;
	}


	void TurnOnDropBoundary();
	void TurnOffDropBoundary();
	void TurnOffCollision();
};


// Class Killstreak.KSOutOfBoundsVolume
// 0x5DA4B080
class AKSOutOfBoundsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DA4B080];                                // 0x0000(0x5DA4B080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSOutOfBoundsVolume");
		return ptr;
	}


	void TurnOnCollision();
	void TurnOffCollision();
};


// Class Killstreak.KSPathFollowingComponent
// 0xFFFFFFFFA25B5580 (0x0000 - 0x5DA4AA80)
class UKSPathFollowingComponent : public UCrowdFollowingComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPathFollowingComponent");
		return ptr;
	}

};


// Class Killstreak.KSPawnActionBase
// 0x5DA4C100
class UKSPawnActionBase : public UPawnAction_BlueprintBase
{
public:
	unsigned char                                      UnknownData00[0x5DA4C100];                                // 0x0000(0x5DA4C100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnActionBase");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_Crouch
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_Crouch : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_Crouch");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_DodgeRoll
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_DodgeRoll : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_DodgeRoll");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_FreeFall
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_FreeFall : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_FreeFall");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_Jump
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_Jump : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_Jump");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_QuickMelee
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_QuickMelee : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_QuickMelee");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_Reload
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_Reload : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_Reload");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StartADS
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_StartADS : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StartADS");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StartAimAlternate
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_StartAimAlternate : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StartAimAlternate");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StartFire
// 0xFFFFFFFFFFFFFE80 (0x5DA4BF80 - 0x5DA4C100)
class UKSPawnAction_StartFire : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StartFire");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StartSprint
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_StartSprint : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StartSprint");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StopADS
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_StopADS : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StopADS");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StopFire
// 0xFFFFFFFFFFFFFE00 (0x5DA4BF00 - 0x5DA4C100)
class UKSPawnAction_StopFire : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StopFire");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_StopSprint
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_StopSprint : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_StopSprint");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_SwapWeapon
// 0xFFFFFFFFFFFFFD80 (0x5DA4BE80 - 0x5DA4C100)
class UKSPawnAction_SwapWeapon : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_SwapWeapon");
		return ptr;
	}

};


// Class Killstreak.KSPawnAction_Uncrouch
// 0xFFFFFFFFA25B3F00 (0x0000 - 0x5DA4C100)
class UKSPawnAction_Uncrouch : public UKSPawnActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnAction_Uncrouch");
		return ptr;
	}

};


// Class Killstreak.KSPawnCommonInterface
// 0x0000
class UKSPawnCommonInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPawnCommonInterface");
		return ptr;
	}


	void PrepareForNextRound();
};


// Class Killstreak.KSPayBackTracker
// 0x2776120 (0x5D9E6AA0 - 0x5B270980)
class UKSPayBackTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x2776120];                                 // 0x5B270980(0x2776120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPayBackTracker");
		return ptr;
	}


	void IsVictimStored();
	void HandleTrackerAccolade();
	void CheckLastInstigator();
};


// Class Killstreak.KSPerformanceCaptureCamera
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AKSPerformanceCaptureCamera : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPerformanceCaptureCamera");
		return ptr;
	}


	void GetNextCamera();
};


// Class Killstreak.KSPersistentPlayerData
// 0x5DA4CA00
class UKSPersistentPlayerData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DA4CA00];                                // 0x0000(0x5DA4CA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPersistentPlayerData");
		return ptr;
	}


	void IsAbandoned();
	void GetTotalCashEarned();
	void GetTeamNum();
	void GetRevives();
	void GetPlayerState();
	void GetPlayerName();
	void GetMoney();
	void GetJob();
	void GetEliminations();
	void GetDowns();
	void GetDeaths();
	void GetAssists();
	void BoundPlayerStateDestroyed();
};


// Class Killstreak.KSPhaseRuleComponent
// 0x5DA4E400
class UKSPhaseRuleComponent : public UKSGameRuleComponent
{
public:
	unsigned char                                      UnknownData00[0x5DA4E400];                                // 0x0000(0x5DA4E400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPhaseRuleComponent");
		return ptr;
	}


	void SetGameModePhaseTime();
	void SetGameModePhaseNameAndTimer();
	void SetGameModePhaseName();
	void PhaseTimerExpired();
	void OnPhaseStarted();
	void HandleTeamSidesFlipped();
	void HandlePhaseStarted();
	void HandlePhaseInterrupted();
	void GetGameModeModular();
	void GetCurrentGamePhase();
	void CompletePhase();
};


// Class Killstreak.KSPhysicsAssetUtilities
// 0x0000
class UKSPhysicsAssetUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPhysicsAssetUtilities");
		return ptr;
	}


	void RemovePhysicsAsset();
	void AppendPhysicsAsset();
};


// Class Killstreak.KSPingBeaconBase
// 0x2AAFB80 (0x5DA4DB80 - 0x5AF9E000)
class AKSPingBeaconBase : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2AAFB80];                                 // 0x5AF9E000(0x2AAFB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPingBeaconBase");
		return ptr;
	}


	void SetupBeaconDisplay();
	void PingRemoved();
	void GetPingColorForBeacon();
	void FindRowByType();
};


// Class Killstreak.KSPingManager
// 0xCEB1B00 (0x5DA61980 - 0x50BAFE80)
class UKSPingManager : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCEB1B00];                                 // 0x50BAFE80(0xCEB1B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPingManager");
		return ptr;
	}


	void UpdateCachedHoveredActor();
	void ThrottleDetectionPeriodExpired();
	void ShowOutline();
	void ServerSendVoiceLineOnly();
	void ServerRemovePing();
	void ServerPingRequest();
	void ServerChangePing();
	void ResetCachedHoveredActor();
	void RemovePing();
	void RemoveInternalPingInfo();
	void RemoveHoveredPing();
	void OnPingExpired();
	void IsSelfPing();
	void IsInvisiblePingType();
	void HideOutline();
	void GetPingTypesToCheck();
	void GetPingLifetimes();
	void GetPingInfoByIdAndPlayer();
	void GetPingIdForDisplayId();
	void GetDisplayIdForPingId();
	void GameRoundOver();
	void DoesWorldSelfPingFollowPlayer();
	void ClientPingRejected();
	void ClearPingsOfType();
	void ClearAllPingsForPlayer();
	void CheckIfFriendlyCharacter();
	void CheckIfEnemyCharacter();
	void CheckIfDeployable();
	void ChangePing();
	void AttemptRemovePing();
	void AttemptPing2D();
	void AttemptManualPing();
	void AttemptContextualPing();
	void AttemptCommunicationPing();
	void AddPing();
	void AddInternalPingInfo();
	void AddHoveredPing();
};


// Class Killstreak.KSPlayerCameraManager
// 0xFFFFFFFFFFFFFF80 (0x5DA64D80 - 0x5DA64E00)
class AKSPlayerCameraManager : public APlayerCameraManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerCameraManager");
		return ptr;
	}

};


// Class Killstreak.KSChallengeActivityInstance
// 0xFFFFFFFFA4D8C380 (0x0000 - 0x5B273C80)
class UKSChallengeActivityInstance : public UKSActivityInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSChallengeActivityInstance");
		return ptr;
	}


	void RerollChallenge();
	void PromptRerollChallenge();
	void IsChallengeActive();
	void GetDisplayProgess();
	void GetDisplayCompletionProgress();
	void CanRerollChallenge();
};


// Class Killstreak.KSChallengeActivity
// 0x27F3180 (0x5DA64600 - 0x5B271480)
class UKSChallengeActivity : public UKSActivity
{
public:
	unsigned char                                      UnknownData00[0x27F3180];                                 // 0x5B271480(0x27F3180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSChallengeActivity");
		return ptr;
	}


	void IsDailyChallenge();
	void InitNewlyCreatedChallengeActivity();
	void GetRerollLootId();
};


// Class Killstreak.KSPlayerChallengesManager
// 0x27F1C00 (0x5DA66200 - 0x5B274600)
class UKSPlayerChallengesManager : public UKSActivityManagerBase
{
public:
	unsigned char                                      UnknownData00[0x27F1C00];                                 // 0x5B274600(0x27F1C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerChallengesManager");
		return ptr;
	}


	void RequestNewChallenge();
	void OnDailyChallengeTimerRefresh();
	void OnChallengeProgressUpdated();
	void GetSecondsTillNewDailyChallenge();
	void GetActiveDailyChallenges();
};


// Class Killstreak.KSPlayerInputDefault
// 0x5D9EA100
class UKSPlayerInputDefault : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9EA100];                                // 0x0000(0x5D9EA100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerInputDefault");
		return ptr;
	}

};


// Class Killstreak.KSPlayerInput
// 0xFFFFFFFFFFFA2700 (0x5B0EA300 - 0x5B147C00)
class UKSPlayerInput : public UPGame_PlayerInput
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerInput");
		return ptr;
	}


	void DoesInputTypeSupportChords();
};


// Class Killstreak.KSPlayerInventoryHelper
// 0x5B0EA180
class UKSPlayerInventoryHelper : public UPUMG_PlayerInventoryHelper
{
public:
	unsigned char                                      UnknownData00[0x5B0EA180];                                // 0x0000(0x5B0EA180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerInventoryHelper");
		return ptr;
	}


	void RemoveAllItemUpdatedCallbacks();
	void RemoveAllItemTypeUpdatedCallbacks();
	void GetCountByType();
	void GetCount();
	void GetAcquiredTime();
	void AddItemUpdatedCallback();
	void AddItemTypeUpdatedCallback();
};


// Class Killstreak.KSPlayerMod
// 0x282E740 (0x5DA68200 - 0x5B239AC0)
class UKSPlayerMod : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x282E740];                                 // 0x5B239AC0(0x282E740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod");
		return ptr;
	}


	void IsSingleInstanceStack();
	void IsPerk();
	void IsModTemporary();
	void IsInstanceReplicated();
	void GetTriggerEvents();
	void GetPerkCategory();
	void GetModUnlockTier();
	void GetModType();
	void GetModInteraction();
	void GetFunctionalClass();
	void GetEffectCategories();
};


// Class Killstreak.KSPlayerMod_Accuracy
// 0xFFFFFFFFFFFFFF80 (0x5DA68180 - 0x5DA68200)
class UKSPlayerMod_Accuracy : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Accuracy");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Activated
// 0x1080 (0x5DA69280 - 0x5DA68200)
class UKSPlayerMod_Activated : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1080];                                    // 0x5DA68200(0x1080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Activated");
		return ptr;
	}


	void GetRequiredCharge();
	void GetRefundFactor();
	void GetMaximumCharge();
	void GetDefaultCharge();
	void GetBuffs();
	void GetAbilitySetupDuration();
	void GetAbilityRecoveryDuration();
	void GetAbilityEndWarningTime();
	void GetAbilityDuration();
};


// Class Killstreak.KSPlayerMod_ActivatedTarget
// 0xFFFFFFFFFFF803E0 (0x5D9E9660 - 0x5DA69280)
class UKSPlayerMod_ActivatedTarget : public UKSPlayerMod_Activated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ActivatedTarget");
		return ptr;
	}


	void GetTargetBuffs();
};


// Class Killstreak.KSPlayerMod_ActivationConfig
// 0xFFFFFFFFA2596D80 (0x0000 - 0x5DA69280)
class UKSPlayerMod_ActivationConfig : public UKSPlayerMod_Activated
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ActivationConfig");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_AdsMoveSpeed
// 0x0F00 (0x5DA69100 - 0x5DA68200)
class UKSPlayerMod_AdsMoveSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0xF00];                                     // 0x5DA68200(0x0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_AdsMoveSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Aim
// 0x0D80 (0x5DA68F80 - 0x5DA68200)
class UKSPlayerMod_Aim : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0xD80];                                     // 0x5DA68200(0x0D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Aim");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_AngleConfig
// 0x2280 (0x5DA6A480 - 0x5DA68200)
class UKSPlayerMod_AngleConfig : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2280];                                    // 0x5DA68200(0x2280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_AngleConfig");
		return ptr;
	}


	void CheckDistanceAndAngleFromEnemies();
	void CheckDistanceAndAngle();
	void CheckAngle();
};


// Class Killstreak.KSPlayerMod_ApplyModOnEvent
// 0x2000 (0x5DA6A200 - 0x5DA68200)
class UKSPlayerMod_ApplyModOnEvent : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2000];                                    // 0x5DA68200(0x2000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ApplyModOnEvent");
		return ptr;
	}


	void RemoveMod();
	void GetModDuration();
	void ApplyMod();
};


// Class Killstreak.KSPlayerMod_Blind
// 0x1F80 (0x5DA6A180 - 0x5DA68200)
class UKSPlayerMod_Blind : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1F80];                                    // 0x5DA68200(0x1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Blind");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_CarryDownedAllies
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_CarryDownedAllies : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_CarryDownedAllies");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Charge
// 0x1D80 (0x5DA69F80 - 0x5DA68200)
class UKSPlayerMod_Charge : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1D80];                                    // 0x5DA68200(0x1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Charge");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_DamageDealt
// 0x1C00 (0x5DA69E00 - 0x5DA68200)
class UKSPlayerMod_DamageDealt : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1C00];                                    // 0x5DA68200(0x1C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DamageDealt");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_DamageTaken
// 0xFFFFFFFFFFF81140 (0x5D9E9340 - 0x5DA68200)
class UKSPlayerMod_DamageTaken : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DamageTaken");
		return ptr;
	}


	void GetAffectedDamageCategories();
};


// Class Killstreak.KSPlayerMod_DodgeRollDamageTaken
// 0xFFFFFFFFA2616CC0 (0x0000 - 0x5D9E9340)
class UKSPlayerMod_DodgeRollDamageTaken : public UKSPlayerMod_DamageTaken
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DodgeRollDamageTaken");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_DodgeRollLockout
// 0x1680 (0x5DA69880 - 0x5DA68200)
class UKSPlayerMod_DodgeRollLockout : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1680];                                    // 0x5DA68200(0x1680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DodgeRollLockout");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_DownedHack
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_DownedHack : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DownedHack");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_DownedRoll
// 0x1480 (0x5DA69680 - 0x5DA68200)
class UKSPlayerMod_DownedRoll : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1480];                                    // 0x5DA68200(0x1480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_DownedRoll");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_EffectImmunity
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_EffectImmunity : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_EffectImmunity");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_FullSpeedADS
// 0x1400 (0x5DA69600 - 0x5DA68200)
class UKSPlayerMod_FullSpeedADS : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x1400];                                    // 0x5DA68200(0x1400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_FullSpeedADS");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Gadget
// 0x3300 (0x5DA6B500 - 0x5DA68200)
class UKSPlayerMod_Gadget : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3300];                                    // 0x5DA68200(0x3300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Gadget");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_GiveEquipPoints
// 0x3280 (0x5DA6B480 - 0x5DA68200)
class UKSPlayerMod_GiveEquipPoints : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3280];                                    // 0x5DA68200(0x3280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_GiveEquipPoints");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_GiveItemOnActivation
// 0x2000 (0x5DA6B280 - 0x5DA69280)
class UKSPlayerMod_GiveItemOnActivation : public UKSPlayerMod_Activated
{
public:
	unsigned char                                      UnknownData00[0x2000];                                    // 0x5DA69280(0x2000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_GiveItemOnActivation");
		return ptr;
	}


	void GetGivenItem();
};


// Class Killstreak.KSPlayerMod_GiveItemOnEvent
// 0x2E80 (0x5DA6B080 - 0x5DA68200)
class UKSPlayerMod_GiveItemOnEvent : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2E80];                                    // 0x5DA68200(0x2E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_GiveItemOnEvent");
		return ptr;
	}


	void GiveItem();
	void GetItemToGive();
};


// Class Killstreak.KSPlayerMod_GiveWeaponConfig
// 0xFFFFFFFFFFFFFA00 (0x5DA6AC80 - 0x5DA6B280)
class UKSPlayerMod_GiveWeaponConfig : public UKSPlayerMod_GiveItemOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_GiveWeaponConfig");
		return ptr;
	}


	void GetReclaimCharge();
	void GetRadius();
	void GetAllowedActiveDeployableCount();
	void CanActivateInAir();
};


// Class Killstreak.KSPlayerMod_GlobalMoveSpeed
// 0x2600 (0x5DA6A800 - 0x5DA68200)
class UKSPlayerMod_GlobalMoveSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2600];                                    // 0x5DA68200(0x2600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_GlobalMoveSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Hacking
// 0x2500 (0x5DA6A700 - 0x5DA68200)
class UKSPlayerMod_Hacking : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2500];                                    // 0x5DA68200(0x2500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Hacking");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_HardLandAvoid
// 0x2480 (0x5DA6A680 - 0x5DA68200)
class UKSPlayerMod_HardLandAvoid : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x2480];                                    // 0x5DA68200(0x2480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HardLandAvoid");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_HealOnEvent
// 0x3B80 (0x5DA6BD80 - 0x5DA68200)
class UKSPlayerMod_HealOnEvent : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3B80];                                    // 0x5DA68200(0x3B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HealOnEvent");
		return ptr;
	}


	void GetHealUpTo();
	void GetHealTickCount();
	void GetHealthPercentage();
	void GetHealthAmount();
	void GetHealPeriod();
	void GetHealDelay();
	void GetHealAsPercentage();
	void GetFirstTickImmediately();
	void ApplyOverheal();
	void ApplyHeal();
};


// Class Killstreak.KSPlayerMod_HealthRegeneration
// 0x3A80 (0x5DA6BC80 - 0x5DA68200)
class UKSPlayerMod_HealthRegeneration : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3A80];                                    // 0x5DA68200(0x3A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HealthRegeneration");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_HideFromTeam
// 0x3980 (0x5DA6BB80 - 0x5DA68200)
class UKSPlayerMod_HideFromTeam : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3980];                                    // 0x5DA68200(0x3980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HideFromTeam");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_HideTarget
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_HideTarget : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HideTarget");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_HipfireSprint
// 0x3880 (0x5DA6BA80 - 0x5DA68200)
class UKSPlayerMod_HipfireSprint : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3880];                                    // 0x5DA68200(0x3880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_HipfireSprint");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_InteractDamageTaken
// 0xFFFFFFFFA2616CC0 (0x0000 - 0x5D9E9340)
class UKSPlayerMod_InteractDamageTaken : public UKSPlayerMod_DamageTaken
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_InteractDamageTaken");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_KeepTeamAlive
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_KeepTeamAlive : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_KeepTeamAlive");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_MainCameraFov
// 0x3680 (0x5DA6B880 - 0x5DA68200)
class UKSPlayerMod_MainCameraFov : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3680];                                    // 0x5DA68200(0x3680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_MainCameraFov");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_MedPackSpeed
// 0x3600 (0x5DA6B800 - 0x5DA68200)
class UKSPlayerMod_MedPackSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3600];                                    // 0x5DA68200(0x3600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_MedPackSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_MedPackWhileMoving
// 0xFFFFFFFFA2597E00 (0x0000 - 0x5DA68200)
class UKSPlayerMod_MedPackWhileMoving : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_MedPackWhileMoving");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_MeleeAttackSpeed
// 0x3580 (0x5DA6B780 - 0x5DA68200)
class UKSPlayerMod_MeleeAttackSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3580];                                    // 0x5DA68200(0x3580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_MeleeAttackSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_MeleeMoveSpeed
// 0x3500 (0x5DA6B700 - 0x5DA68200)
class UKSPlayerMod_MeleeMoveSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x3500];                                    // 0x5DA68200(0x3500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_MeleeMoveSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_OnDownOtherEvent
// 0xFFFFFFFFFD681D40 (0x5B0E9F40 - 0x5DA68200)
class UKSPlayerMod_OnDownOtherEvent : public UKSPlayerMod
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_OnDownOtherEvent");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_PickupRange
// 0x5200 (0x5DA6D400 - 0x5DA68200)
class UKSPlayerMod_PickupRange : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x5200];                                    // 0x5DA68200(0x5200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_PickupRange");
		return ptr;
	}


	void GetPickupRadius();
};


// Class Killstreak.KSPlayerMod_PingOnOtherDowned
// 0x4D00 (0x5DA6CF00 - 0x5DA68200)
class UKSPlayerMod_PingOnOtherDowned : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4D00];                                    // 0x5DA68200(0x4D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_PingOnOtherDowned");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_ReloadAndRetrieve
// 0x4C00 (0x5DA6CE00 - 0x5DA68200)
class UKSPlayerMod_ReloadAndRetrieve : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4C00];                                    // 0x5DA68200(0x4C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ReloadAndRetrieve");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_ReloadTime
// 0x4B80 (0x5DA6CD80 - 0x5DA68200)
class UKSPlayerMod_ReloadTime : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4B80];                                    // 0x5DA68200(0x4B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ReloadTime");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_RetrieveTime
// 0x4B00 (0x5DA6CD00 - 0x5DA68200)
class UKSPlayerMod_RetrieveTime : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4B00];                                    // 0x5DA68200(0x4B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_RetrieveTime");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Revive
// 0x4880 (0x5DA6CA80 - 0x5DA68200)
class UKSPlayerMod_Revive : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4880];                                    // 0x5DA68200(0x4880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Revive");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_ReviverDamageTaken
// 0x836C0 (0x5DA6CA00 - 0x5D9E9340)
class UKSPlayerMod_ReviverDamageTaken : public UKSPlayerMod_DamageTaken
{
public:
	unsigned char                                      UnknownData00[0x836C0];                                   // 0x5D9E9340(0x836C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ReviverDamageTaken");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_ShowTeamHovers
// 0x4600 (0x5DA6C800 - 0x5DA68200)
class UKSPlayerMod_ShowTeamHovers : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4600];                                    // 0x5DA68200(0x4600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_ShowTeamHovers");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_SprintSpeed
// 0x4580 (0x5DA6C780 - 0x5DA68200)
class UKSPlayerMod_SprintSpeed : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4580];                                    // 0x5DA68200(0x4580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_SprintSpeed");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_StartingEquipment
// 0x4500 (0x5DA6C700 - 0x5DA68200)
class UKSPlayerMod_StartingEquipment : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x4500];                                    // 0x5DA68200(0x4500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_StartingEquipment");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_StartEquipNoFlinch
// 0xFFFFFFFFA2593900 (0x0000 - 0x5DA6C700)
class UKSPlayerMod_StartEquipNoFlinch : public UKSPlayerMod_StartingEquipment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_StartEquipNoFlinch");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_Undetectable
// 0x6380 (0x5DA6E580 - 0x5DA68200)
class UKSPlayerMod_Undetectable : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x6380];                                    // 0x5DA68200(0x6380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_Undetectable");
		return ptr;
	}

};


// Class Killstreak.KSPlayerMod_VaultHeight
// 0x6280 (0x5DA6E480 - 0x5DA68200)
class UKSPlayerMod_VaultHeight : public UKSPlayerMod
{
public:
	unsigned char                                      UnknownData00[0x6280];                                    // 0x5DA68200(0x6280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMod_VaultHeight");
		return ptr;
	}

};


// Class Killstreak.KSPlayerModInst_WeaponAttachment
// 0xFFFFFFFFFFFBF8A0 (0x5D9EB5A0 - 0x5DA2BD00)
class UKSPlayerModInst_WeaponAttachment : public UKSPlayerModInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerModInst_WeaponAttachment");
		return ptr;
	}


	void WeaponAddedToOwnerInventory();
	void OnAttachmentRemoved();
	void OnAttachmentGivenSuccess();
	void OnAttachmentGiven();
};


// Class Killstreak.KSWidgetInfoActor
// 0x5D9EB500
class AKSWidgetInfoActor : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5D9EB500];                                // 0x0000(0x5D9EB500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWidgetInfoActor");
		return ptr;
	}


	void OnHUDSetup();
};


// Class Killstreak.KSPlayerShop
// 0x84580 (0x5DA6FA80 - 0x5D9EB500)
class AKSPlayerShop : public AKSWidgetInfoActor
{
public:
	unsigned char                                      UnknownData00[0x84580];                                   // 0x5D9EB500(0x84580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerShop");
		return ptr;
	}


	void ZoneLeftByPlayer();
	void ZoneEnteredByPlayer();
	void Undo();
	void TryToSetItemActive();
	void TryToPurchaseItem();
	void ToggleShop();
	void ServerSetItemActive();
	void ServerAttemptRefund();
	void ServerAttemptPurchase();
	void OpenShop();
	void OnRep_bAvailable();
	void OnPlayerScoreChanged();
	void OnPlayerJobChanged();
	void OnOwnerDestroyed();
	void NotifyShopItemRefunded();
	void NotifyShopItemPurchased();
	void NotifyShopItemChanged();
	void InitializeShopItems();
	void GetShopItemByType();
	void GetShopAvailability();
	void GetPriceOfItem();
	void CloseShop();
	void ClientRefundAcknowledge();
	void ClientPurchaseAcknowledge();
	void CanRefundItemNow();
	void CanPurchaseItemNow();
};


// Class Killstreak.KSPlayerShopHistoryComponent
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UKSPlayerShopHistoryComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerShopHistoryComponent");
		return ptr;
	}


	void ClearTransactionHistory();
};


// Class Killstreak.KSPlayerShopZone
// 0x2AD1800 (0x5DA6F800 - 0x5AF9E000)
class AKSPlayerShopZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2AD1800];                                 // 0x5AF9E000(0x2AD1800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerShopZone");
		return ptr;
	}


	void ZoneLeftByPlayer();
	void ZoneEnteredByPlayer();
	void OnPlayerStateDestroyed();
};


// Class Killstreak.KSPlayerShotListener
// 0xCEF1080 (0x5DAA0F00 - 0x50BAFE80)
class UKSPlayerShotListener : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCEF1080];                                 // 0x50BAFE80(0xCEF1080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerShotListener");
		return ptr;
	}


	void OnKSGameStateDestroyed();
	void ClientRecieveShotInfo();
	void Authority_ProcessShotInfo();
};


// Class Killstreak.KSPlayerStart
// 0xFFFFFFFFFFFFF880 (0x5DAA0700 - 0x5DAA0E80)
class AKSPlayerStart : public APlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerStart");
		return ptr;
	}


	void SetSideNum();
	void Init();
	void GetSideNum();
	void CharacterLoadoutRestored();
};


// Class Killstreak.KSPlayerStart_Extraction
// 0xFFFFFFFFA255F900 (0x0000 - 0x5DAA0700)
class AKSPlayerStart_Extraction : public AKSPlayerStart
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerStart_Extraction");
		return ptr;
	}

};


// Class Killstreak.KSPlayerState
// 0x5800 (0x5DAA7780 - 0x5DAA1F80)
class AKSPlayerState : public APlayerState
{
public:
	unsigned char                                      UnknownData00[0x5800];                                    // 0x5DAA1F80(0x5800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerState");
		return ptr;
	}


	void UpdatePollVotes();
	void TryToBroadCastUIRelevantInfoHasChanged();
	void SpendCash();
	void SpawnedDropDestroyed();
	void SetMoney();
	void ServerPlayerProposePoll();
	void ServerPlayerCastVote();
	void SelectActiveMod();
	void RespawnTimerTick();
	void RespawnTimerComplete();
	void RespawnTimerActive();
	void ResetElimination();
	void RemoveMod();
	void PollEnded();
	void PlayerProposePoll();
	void PlayerCastVote();
	void OnTeamUpdated();
	void OnReverseFriendlyFireEnabled();
	void OnRep_TotalCashEarned();
	void OnRep_Specialties();
	void OnRep_SkinItem();
	void OnRep_RespawnTimer();
	void OnRep_RespawnTickets();
	void OnRep_PlayerType();
	void OnRep_Money();
	void OnRep_MctsNetId();
	void OnRep_LoadoutClass();
	void OnRep_JobMasteryXpLevel();
	void OnRep_JobItem();
	void OnRep_HasVoted();
	void OnRep_Gender();
	void OnRep_Eliminated();
	void OnRep_Downed();
	void OnRep_DisallowGiveUpTimer();
	void OnRep_CurrentPollType();
	void OnRep_Cash();
	void OnRep_CachedPollData();
	void OnJobMasteryInventoryUpdated();
	void OnDeathDrop();
	void NotifyScoreChange();
	void NotifyCashChange();
	void LoadoutSetSkin();
	void IsWaitingForGiveUp();
	void IsUIRelevant();
	void IsReverseFriendlyFireEnabled();
	void IsRespawning();
	void IsPremiumBoosted();
	void IsPollInProgress();
	void IsPlayer();
	void IsLossPreventionEnabled();
	void IsInPlay();
	void IsInParty();
	void IsEliminated();
	void IsDowned();
	void HasRole();
	void HasModAny();
	void HasMod();
	void HasHideTarget();
	void GiveModInstance();
	void GiveMod();
	void GetTotalCashEarned();
	void GetTimeUntilGiveUpAllowed();
	void GetSpecialties();
	void GetSkinItem();
	void GetScore();
	void GetRevives();
	void GetRespawnTickets();
	void GetRemainingRespawnTime();
	void GetRankedXpWinBaseValue();
	void GetRankedXpMinBonusClamp();
	void GetRankedXpMaxBonusClamp();
	void GetRankedXpLossBaseValue();
	void GetRankDifferenceMultiplier();
	void GetPlayerInfo();
	void GetPlayerId();
	void GetPartySize();
	void GetModTierProgress();
	void GetModOptionsOfTier();
	void GetModInstancesOfType();
	void GetModInstances();
	void GetMmrZoneRankedLevel();
	void GetMctsPlayerId();
	void GetLoadoutClass();
	void GetKills();
	void GetJobMasteryLevel();
	void GetJob();
	void GetItemsDroppedOnDeath();
	void GetHacks();
	void GetEliminations();
	void GetEliminatedState();
	void GetDownSpree();
	void GetDowns();
	void GetDistanceSprinted();
	void GetDehacks();
	void GetDeaths();
	void GetCurrentTimePlayed();
	void GetCurrentRankedLevel();
	void GetCurrentModTier();
	void GetCurrentCash();
	void GetCharacterOwner();
	void GetBonusProgressionMultiplier();
	void GetBestCharacterOwner();
	void GetBackupCharacterOwner();
	void GetAssists();
	void GetActiveMods();
	void GetActivatableMods();
	void FriendlyFirePenalty();
	void EnterPlay();
	void EliminatePlayer();
	void EarnCash();
	void DisallowGiveUpTimerTick();
	void DisallowGiveUpTimerComplete();
	void DisallowGiveUpTimerActive();
	void ClientPollProposalFailed();
	void ClientNotifyFriendlyFireDamageApplied();
	void ClientNotifyExceededReverseFriendlyFireThreshold();
	void ChangeMoney();
	void AnyActivatableModsActive();
	void AddScore();
	void AddRevive();
	void AddPerSecondCharge();
	void AddKill();
	void AddHack();
	void AddElimination();
	void AddDown();
	void AddDehack();
	void AddDeath();
	void AddAssist();
	void ActivatableModAtIndexActive();
};


// Class Killstreak.KSPlayerState_Control
// 0xFFFFFFFFA2558880 (0x0000 - 0x5DAA7780)
class AKSPlayerState_Control : public AKSPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerState_Control");
		return ptr;
	}

};


// Class Killstreak.KSPlayerState_Heist
// 0xFFFFFFFFFFFFFE00 (0x5DAA7580 - 0x5DAA7780)
class AKSPlayerState_Heist : public AKSPlayerState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerState_Heist");
		return ptr;
	}


	void GetSoftCash();
	void GetHardCash();
};


// Class Killstreak.KSPlayerStatsActivity
// 0x277B020 (0x5D9EC4A0 - 0x5B271480)
class UKSPlayerStatsActivity : public UKSActivity
{
public:
	unsigned char                                      UnknownData00[0x277B020];                                 // 0x5B271480(0x277B020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerStatsActivity");
		return ptr;
	}

};


// Class Killstreak.KSPlayerStatsManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSPlayerStatsManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerStatsManager");
		return ptr;
	}


	void GetActivityInstanceByType();
	void FindActivityByType();
};


// Class Killstreak.KSPollBase
// 0x5D9EC2C0
class UKSPollBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9EC2C0];                                // 0x0000(0x5D9EC2C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPollBase");
		return ptr;
	}


	void OnPollStarted();
	void OnPollPassed();
	void OnPollFailed();
	void GetNumberOfVotesToEnd();
	void CanPlayerProposeThisPoll();
	void CanGameProposeThisPoll();
};


// Class Killstreak.KSPowerUp
// 0x27B2760 (0x5D9EC220 - 0x5B239AC0)
class UKSPowerUp : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x27B2760];                                 // 0x5B239AC0(0x27B2760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPowerUp");
		return ptr;
	}

};


// Class Killstreak.KSPowerUpDrop
// 0xFFFFFFFFA4D6CC80 (0x0000 - 0x5B293380)
class AKSPowerUpDrop : public AKSItemDrop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPowerUpDrop");
		return ptr;
	}

};


// Class Killstreak.KSProjectile
// 0x2837100 (0x5DAACD80 - 0x5B275C80)
class AKSProjectile : public AKSLagCompensatedActor
{
public:
	unsigned char                                      UnknownData00[0x2837100];                                 // 0x5B275C80(0x2837100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile");
		return ptr;
	}


	void UpdateSpinRotation();
	void TriggerExplosionFromHitResult();
	void TriggerExplosion();
	void TakeoverDelayComplete();
	void SpawnSpang();
	void SimulateExplosion();
	void ShouldBounceOff();
	void SetWeaponAsset();
	void SetHorizontalThrowSpeed();
	void SetFumbled();
	void SetDamageOverrideWeaponAsset();
	void ServerProcessPredictedHits();
	void RecordPredictedHits();
	void RecordPredictedHit();
	void PlayFizzle();
	void PlayExplosion();
	void OnRootComponentDetached();
	void OnRep_WeaponAsset();
	void OnRep_StoppingHit();
	void OnRep_ProjectileHit();
	void OnRep_CurrentHealth();
	void OnProjectileStopped();
	void OnProjectileBounced();
	void OnKilled();
	void NativeOnProjectileStopped();
	void NativeOnProjectileBounced();
	void ModifyDamageDealt();
	void IsActive();
	void GetWeaponAsset();
	void GetSpawnRotation();
	void GetSpawnLocation();
	void GetSpawningWeapon();
	void GetProjectileUpdatedComponent();
	void GetOutlineableMeshes();
	void GetMovementComponent();
	void GetHorizontalThrowSpeed();
	void GetDamageWeaponAsset();
	void GetDamageInstigator();
	void GetDamageFalloffRangeScaler();
	void GetComponentToRotate();
	void GetClusterComponent();
	void DoRadialDamageDefault();
	void DetermineIgnoredActors();
	void Deactivate();
	void CreateClusterSegmentsFromStoppingHit();
	void ComponentTakeDamage();
	void BroadcastExplosion();
	void AffectsActor();
};


// Class Killstreak.KSProjectile_Grenade
// 0xFFFFFFFFFFF41340 (0x5D9EE0C0 - 0x5DAACD80)
class AKSProjectile_Grenade : public AKSProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_Grenade");
		return ptr;
	}


	void UnregisterTouchEvent();
	void ShouldExplodeOnBounce();
	void SetFuseTime();
	void RegisterTouchEvent();
	void OnRep_FuseTimeRemaining();
	void IsInProximityOfLocalCharacter();
	void IsFuseActive();
	void GetCurrentFuseTime();
	void FuseTimeExpired();
	void CanSeeProximityWarning();
	void CallOnLocalViewTargetChanged();
};


// Class Killstreak.KSSpreadProjectile
// 0x2837E80 (0x5DAADB00 - 0x5B275C80)
class AKSSpreadProjectile : public AKSLagCompensatedActor
{
public:
	unsigned char                                      UnknownData00[0x2837E80];                                 // 0x5B275C80(0x2837E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpreadProjectile");
		return ptr;
	}


	void OnProjectileStopped();
	void OnProjectileBounced();
	void NativeOnProjectileStopped();
	void NativeOnProjectileBounced();
};


// Class Killstreak.KSGrenadeSpreadRule
// 0x0000
class UKSGrenadeSpreadRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGrenadeSpreadRule");
		return ptr;
	}


	void GetSpread();
};


// Class Killstreak.KSSpikeBallSpreadRule
// 0x0000
class UKSSpikeBallSpreadRule : public UKSGrenadeSpreadRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpikeBallSpreadRule");
		return ptr;
	}

};


// Class Killstreak.KSGroundSpreadRule
// 0x5D9EDF80
class UKSGroundSpreadRule : public UKSGrenadeSpreadRule
{
public:
	unsigned char                                      UnknownData00[0x5D9EDF80];                                // 0x0000(0x5D9EDF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSGroundSpreadRule");
		return ptr;
	}

};


// Class Killstreak.KSClusterSpreadRule
// 0x0000
class UKSClusterSpreadRule : public UKSGrenadeSpreadRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSClusterSpreadRule");
		return ptr;
	}

};


// Class Killstreak.KSProjectile_GrenadeSpread
// 0xC1A40 (0x5DAAFB00 - 0x5D9EE0C0)
class AKSProjectile_GrenadeSpread : public AKSProjectile_Grenade
{
public:
	unsigned char                                      UnknownData00[0xC1A40];                                   // 0x5D9EE0C0(0xC1A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_GrenadeSpread");
		return ptr;
	}


	void ProcessNextSpreadTransform();
	void OnSpreadTransformRemoved();
	void OnSpreadTransformAdded();
	void OnSpreadTick();
	void OnSpreadProjectileStopped();
	void OnLingerEnd();
	void OnDamageTick();
	void OnBeginLingering();
	void OnAllSpreadTransformsRemoved();
	void OnAffectedDestroyed();
	void OnActorUnaffected();
	void OnActorDamaged();
	void OnActorAffected();
	void ConfigureSpreadTransformParticleSystem();
	void CleanupParticleSystemComponents();
	void CleanupMeshComponents();
	void BeginLingering();
};


// Class Killstreak.KSProjectile_MacGuffin
// 0x2D00 (0x5DAAFA80 - 0x5DAACD80)
class AKSProjectile_MacGuffin : public AKSProjectile
{
public:
	unsigned char                                      UnknownData00[0x2D00];                                    // 0x5DAACD80(0x2D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_MacGuffin");
		return ptr;
	}

};


// Class Killstreak.KSProjectile_Melee
// 0xFFFFFFFFFFF40940 (0x5D9ED6C0 - 0x5DAACD80)
class AKSProjectile_Melee : public AKSProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_Melee");
		return ptr;
	}


	void PredictDamage();
	void LookAheadHit();
	void FlushHitIgnoreActors();
	void AllowFutureHitOnActor();
};


// Class Killstreak.KSProjectile_Pierce
// 0x14000 (0x5DAC0D80 - 0x5DAACD80)
class AKSProjectile_Pierce : public AKSProjectile
{
public:
	unsigned char                                      UnknownData00[0x14000];                                   // 0x5DAACD80(0x14000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_Pierce");
		return ptr;
	}

};


// Class Killstreak.KSProjectile_ProximityGrenade
// 0xD2940 (0x5DAC0A00 - 0x5D9EE0C0)
class AKSProjectile_ProximityGrenade : public AKSProjectile_Grenade
{
public:
	unsigned char                                      UnknownData00[0xD2940];                                   // 0x5D9EE0C0(0xD2940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_ProximityGrenade");
		return ptr;
	}


	void ProximityActorUpdated();
	void GetProximityTraceRelativeLocation();
	void GetProximityComponent();
};


// Class Killstreak.KSProjectile_RemoteTrigger
// 0xD2540 (0x5DAC0600 - 0x5D9EE0C0)
class AKSProjectile_RemoteTrigger : public AKSProjectile_Grenade
{
public:
	unsigned char                                      UnknownData00[0xD2540];                                   // 0x5D9EE0C0(0xD2540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_RemoteTrigger");
		return ptr;
	}


	void ReportOwningClientLoaded();
	void OnRealActorStopped();
	void IsDetonatable();
};


// Class Killstreak.KSProjectile_ReviveDart
// 0x13500 (0x5DAC0280 - 0x5DAACD80)
class AKSProjectile_ReviveDart : public AKSProjectile
{
public:
	unsigned char                                      UnknownData00[0x13500];                                   // 0x5DAACD80(0x13500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_ReviveDart");
		return ptr;
	}


	void OnReviveEnd();
};


// Class Killstreak.KSProjectile_ZiplineAnchor
// 0x13480 (0x5DAC0200 - 0x5DAACD80)
class AKSProjectile_ZiplineAnchor : public AKSProjectile
{
public:
	unsigned char                                      UnknownData00[0x13480];                                   // 0x5DAACD80(0x13480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectile_ZiplineAnchor");
		return ptr;
	}

};


// Class Killstreak.KSProjectileClusterComponent
// 0xCF11D00 (0x5DAC1B80 - 0x50BAFE80)
class UKSProjectileClusterComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF11D00];                                 // 0x50BAFE80(0xCF11D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectileClusterComponent");
		return ptr;
	}


	void OnSegmentKilled();
	void GetSpawnedSegments();
	void GetClusterTransform();
	void CreateClusterSegments();
};


// Class Killstreak.KSProjectileMovementComponent
// 0xCEBBD80 (0x5DAC1A80 - 0x50C05D00)
class UKSProjectileMovementComponent : public UProjectileMovementComponent
{
public:
	unsigned char                                      UnknownData00[0xCEBBD80];                                 // 0x50C05D00(0xCEBBD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjectileMovementComponent");
		return ptr;
	}

};


// Class Killstreak.KSProjWeaponTargetingModule
// 0x140280 (0x5DAC1980 - 0x5D981700)
class UKSProjWeaponTargetingModule : public UKSDefaultAimTargetingModule
{
public:
	unsigned char                                      UnknownData00[0x140280];                                  // 0x5D981700(0x140280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProjWeaponTargetingModule");
		return ptr;
	}

};


// Class Killstreak.KSProximityComponent
// 0xCF13000 (0x5DAC2E80 - 0x50BAFE80)
class UKSProximityComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF13000];                                 // 0x50BAFE80(0xCF13000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSProximityComponent");
		return ptr;
	}


	void UnregisterOverlapShape();
	void ShouldTrackActor();
	void SetProximityTraceOffset();
	void SetProximityCheckingEnabled();
	void RegisterOverlapShape();
	void ProximityOverlapStart();
	void ProximityOverlapEnd();
	void OnProximityActorDestroyed();
};


// Class Killstreak.KSPunishmentConfig
// 0x294FD80 (0x5D9ED1C0 - 0x5B09D440)
class UKSPunishmentConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x294FD80];                                 // 0x5B09D440(0x294FD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPunishmentConfig");
		return ptr;
	}

};


// Class Killstreak.KSPunishmentManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSPunishmentManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPunishmentManager");
		return ptr;
	}

};


// Class Killstreak.KSPunishmentRuleComponent
// 0x5D9ED120
class UKSPunishmentRuleComponent : public UKSGameRuleComponent
{
public:
	unsigned char                                      UnknownData00[0x5D9ED120];                                // 0x0000(0x5D9ED120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPunishmentRuleComponent");
		return ptr;
	}

};


// Class Killstreak.KSQueuesSettingsDefault
// 0x5D9EF6A0
class UKSQueuesSettingsDefault : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9EF6A0];                                // 0x0000(0x5D9EF6A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSQueuesSettingsDefault");
		return ptr;
	}

};


// Class Killstreak.KSQuip
// 0x27C9B40 (0x5DAC2700 - 0x5B2F8BC0)
class UKSQuip : public UKSRadialMenuItem
{
public:
	unsigned char                                      UnknownData00[0x27C9B40];                                 // 0x5B2F8BC0(0x27C9B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSQuip");
		return ptr;
	}

};


// Class Killstreak.KSQuipInstance
// 0x72F80 (0x5D9EF600 - 0x5D97C680)
class AKSQuipInstance : public AKSRadialMenuItemInstance
{
public:
	unsigned char                                      UnknownData00[0x72F80];                                   // 0x5D97C680(0x72F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSQuipInstance");
		return ptr;
	}

};


// Class Killstreak.KSRankedManager
// 0xFFFFFFFFA4D8BA00 (0x0000 - 0x5B274600)
class UKSRankedManager : public UKSActivityManagerBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRankedManager");
		return ptr;
	}

};


// Class Killstreak.KSRemoteReviverInterface
// 0x0000
class UKSRemoteReviverInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRemoteReviverInterface");
		return ptr;
	}

};


// Class Killstreak.KsReverbVolume
// 0xFFFFFFFFA4E5C000 (0x0000 - 0x5B1A4000)
class AKsReverbVolume : public AAkReverbVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KsReverbVolume");
		return ptr;
	}

};


// Class Killstreak.KSReverseTracker
// 0x277EBE0 (0x5D9EF560 - 0x5B270980)
class UKSReverseTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x277EBE0];                                 // 0x5B270980(0x277EBE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSReverseTracker");
		return ptr;
	}


	void StoreDamageTakenEvent();
	void HandleTrackerAccolade();
	void CheckVictimDamageInstigator();
};


// Class Killstreak.KSRewardsCalculator
// 0x0000
class UKSRewardsCalculator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRewardsCalculator");
		return ptr;
	}


	void GetStatsOrdering();
	void GetRewardsFromStat();
	void CalcPlayerRewards();
};


// Class Killstreak.KSSpectatorPawn
// 0x0000
class AKSSpectatorPawn : public ASpectatorPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpectatorPawn");
		return ptr;
	}


	void GamepadLookUp();
	void GamepadLookRight();
};


// Class Killstreak.KSRideAlongSpectatorPawn
// 0x0000
class AKSRideAlongSpectatorPawn : public AKSSpectatorPawn
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRideAlongSpectatorPawn");
		return ptr;
	}

};


// Class Killstreak.KSRocket
// 0x2989A00 (0x5DAC4F80 - 0x5B13B580)
class AKSRocket : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x2989A00];                                 // 0x5B13B580(0x2989A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRocket");
		return ptr;
	}


	void OnRep_FlightDurationTimer();
	void OnIgnitionKickoff();
	void NativeOnProjectileStopped();
	void NativeOnIgnitionKickoff();
	void NativeDetonate();
	void GetWeaponAsset();
	void GetFlightDuration();
	void GamepadLookUp();
	void GamepadLookRight();
	void FlightDurationTimerTick();
	void FlightDurationTimerComplete();
	void FlightDurationTimerActive();
	void EnableCameraControl();
	void Detonate();
	void BroadcastDetonate();
};


// Class Killstreak.KSRocketMovementComponent
// 0xFFFFFFFFFFFFFB80 (0x5AA46C80 - 0x5AA47100)
class UKSRocketMovementComponent : public UCharacterMovementComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRocketMovementComponent");
		return ptr;
	}


	void StopSimulating();
	void OnRocketStopDelegate__DelegateSignature();
	void OnIgnitionKickoffDelegate__DelegateSignature();
};


// Class Killstreak.KSRoundBasedObject
// 0x2B26800 (0x5DAC4800 - 0x5AF9E000)
class AKSRoundBasedObject : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B26800];                                 // 0x5AF9E000(0x2B26800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRoundBasedObject");
		return ptr;
	}


	void ReceiveGameSetup();
	void OnSkyDiveStarted();
	void OnSkyDiveSkipped();
	void OnSkyDiveEnded();
	void OnRoundStarted();
	void OnRoundEnded();
	void OnGameSetup();
	void IsSkyDivingActive();
	void CheckPlayerForMatchingTeam();
	void CheckLocalPlayerForMatchingTeam();
	void CheckCharacterForMatchingTeam();
};


// Class Killstreak.KSRoundedSquareDeadZoneFilter
// 0x288AE20 (0x5DAC4700 - 0x5B2398E0)
class UKSRoundedSquareDeadZoneFilter : public UKSAnalogStickFilter
{
public:
	unsigned char                                      UnknownData00[0x288AE20];                                 // 0x5B2398E0(0x288AE20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRoundedSquareDeadZoneFilter");
		return ptr;
	}

};


// Class Killstreak.KSRoyaleSafeZone
// 0x2B27D80 (0x5DAC5D80 - 0x5AF9E000)
class AKSRoyaleSafeZone : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B27D80];                                 // 0x5AF9E000(0x2B27D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRoyaleSafeZone");
		return ptr;
	}


	void TryToDamage();
	void StartShrink();
	void SetNewZoneParams();
	void OnZoneActivated();
	void OnRep_ZoneActive();
	void OnRep_NewParams();
	void OnCircleUpdate();
	void IsZoneActive();
};


// Class Killstreak.KSRuleBasedPhaseProxy
// 0x5DAC5900
class UKSRuleBasedPhaseProxy : public UKSGamePhaseProxyBase
{
public:
	unsigned char                                      UnknownData00[0x5DAC5900];                                // 0x0000(0x5DAC5900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSRuleBasedPhaseProxy");
		return ptr;
	}


	void StartRuleBasedPhase();
	void OnCompletedWithLeadingTeam();
	void OnCompleted();
};


// Class Killstreak.KSSafeZone
// 0x7A500 (0x5DAC5780 - 0x5DA4B280)
class AKSSafeZone : public AKSOutOfBoundsZone
{
public:
	unsigned char                                      UnknownData00[0x7A500];                                   // 0x5DA4B280(0x7A500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSafeZone");
		return ptr;
	}


	void RevealOverlappedCharacter();
};


// Class Killstreak.KSSceneComponentPoolStatics
// 0x0000
class UKSSceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSceneComponentPoolStatics");
		return ptr;
	}


	void SpawnTracerEmitterWithRotation();
	void SpawnTracerEmitter();
	void SpawnMeshTracerWithRotation();
	void SpawnMeshTracer();
	void SpawnAkComponentAtLocation();
	void SetSwitchOnNextAkComponentInPool();
	void SetRTPCValueOnNextAkComponentInPool();
};


// Class Killstreak.KSShield
// 0x2B29C80 (0x5DAC7C80 - 0x5AF9E000)
class AKSShield : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B29C80];                                 // 0x5AF9E000(0x2B29C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSShield");
		return ptr;
	}


	void SetShieldEnabled();
	void OnRep_ShieldEnabled();
	void OnRep_Health();
};


// Class Killstreak.KSShopRuleComponent
// 0x5DAC7800
class UKSShopRuleComponent : public UKSGameRuleComponent
{
public:
	unsigned char                                      UnknownData00[0x5DAC7800];                                // 0x0000(0x5DAC7800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSShopRuleComponent");
		return ptr;
	}


	void OnGamePhaseChanged();
	void GetShopForPlayer();
};


// Class Killstreak.KSSkinBundle
// 0xE2E0 (0x5D9EEFC0 - 0x5D9E0CE0)
class UKSSkinBundle : public UKSItemBundle
{
public:
	unsigned char                                      UnknownData00[0xE2E0];                                    // 0x5D9E0CE0(0xE2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSkinBundle");
		return ptr;
	}


	void IsStarterSkin();
	void GetSkinImage();
};


// Class Killstreak.KSSkyDiveListener
// 0x0000
class UKSSkyDiveListener : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSkyDiveListener");
		return ptr;
	}

};


// Class Killstreak.KSSmoothingComponent
// 0xCE30C00 (0x5DAC9380 - 0x50C98780)
class UKSSmoothingComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCE30C00];                                 // 0x50C98780(0xCE30C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSmoothingComponent");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule
// 0x0000
class UKSSpawnRule : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule");
		return ptr;
	}


	void Initialize();
	void GetScoreForSpawn();
	void GetGameModePropertyInt();
	void GetGameModePropertyFloat();
	void GetGameModePropertyBool();
};


// Class Killstreak.KSSpawnRule_Bot
// 0x0000
class UKSSpawnRule_Bot : public UKSSpawnRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_Bot");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_Proximity
// 0x5DAC8A00
class UKSSpawnRule_Proximity : public UKSSpawnRule
{
public:
	unsigned char                                      UnknownData00[0x5DAC8A00];                                // 0x0000(0x5DAC8A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_Proximity");
		return ptr;
	}


	void GetScoreForDistance();
};


// Class Killstreak.KSSpawnRule_ObjectiveProximity
// 0xFFFFFFFFA2537600 (0x0000 - 0x5DAC8A00)
class UKSSpawnRule_ObjectiveProximity : public UKSSpawnRule_Proximity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_ObjectiveProximity");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_PIE
// 0x0000
class UKSSpawnRule_PIE : public UKSSpawnRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_PIE");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_PlayerEventProximity
// 0xFFFFFFFFFFFFFC80 (0x5DAC8680 - 0x5DAC8A00)
class UKSSpawnRule_PlayerEventProximity : public UKSSpawnRule_Proximity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_PlayerEventProximity");
		return ptr;
	}


	void OnPlayerEventRecordExpire();
	void OnPlayerEvent();
	void BindToEvent();
};


// Class Killstreak.KSSpawnRule_PlayerProximity
// 0xFFFFFFFFFFFFFB00 (0x5DAC8500 - 0x5DAC8A00)
class UKSSpawnRule_PlayerProximity : public UKSSpawnRule_Proximity
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_PlayerProximity");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_Respawn
// 0x0000
class UKSSpawnRule_Respawn : public UKSSpawnRule
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_Respawn");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_Side
// 0x5DACA500
class UKSSpawnRule_Side : public UKSSpawnRule
{
public:
	unsigned char                                      UnknownData00[0x5DACA500];                                // 0x0000(0x5DACA500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_Side");
		return ptr;
	}

};


// Class Killstreak.KSSpawnRule_Vacant
// 0x5DACA480
class UKSSpawnRule_Vacant : public UKSSpawnRule
{
public:
	unsigned char                                      UnknownData00[0x5DACA480];                                // 0x0000(0x5DACA480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnRule_Vacant");
		return ptr;
	}

};


// Class Killstreak.KSSpawnSelectorComponent
// 0xCE3EF60 (0x5D9EEDE0 - 0x50BAFE80)
class UKSSpawnSelectorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE3EF60];                                 // 0x50BAFE80(0xCE3EF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpawnSelectorComponent");
		return ptr;
	}

};


// Class Killstreak.KSSpecialty
// 0x288FFC0 (0x5DAC9A80 - 0x5B239AC0)
class UKSSpecialty : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x288FFC0];                                 // 0x5B239AC0(0x288FFC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpecialty");
		return ptr;
	}


	void GetDynamicPoseImage();
};


// Class Killstreak.KSSpray
// 0xFFFFFFFFA2679100 (0x0000 - 0x5D986F00)
class UKSSpray : public UKSEmote
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpray");
		return ptr;
	}

};


// Class Killstreak.KSSprayInstance
// 0x5DAC9600
class AKSSprayInstance : public AKSEmoteInstance
{
public:
	unsigned char                                      UnknownData00[0x5DAC9600];                                // 0x0000(0x5DAC9600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSprayInstance");
		return ptr;
	}


	void ServerPlaySpray();
};


// Class Killstreak.KSSpringArmComponent
// 0xFFFFFFFFFFFFFD00 (0x5DACA980 - 0x5DACAC80)
class UKSSpringArmComponent : public USpringArmComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSpringArmComponent");
		return ptr;
	}

};


// Class Killstreak.KSSprintCameraShake
// 0xFFFFFFFFA2672680 (0x0000 - 0x5D98D980)
class UKSSprintCameraShake : public UKSVelocityCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSprintCameraShake");
		return ptr;
	}


	void StopShakeOnStopSprint();
};


// Class Killstreak.KSPlayerMatchStats
// 0x5B0E9AC0
class UKSPlayerMatchStats : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E9AC0];                                // 0x0000(0x5B0E9AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSPlayerMatchStats");
		return ptr;
	}


	void GetStat();
};


// Class Killstreak.KSStoreItem
// 0xFFFFFFFFA4E7E580 (0x0000 - 0x5B181A80)
class UKSStoreItem : public UPUMG_StoreItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSStoreItem");
		return ptr;
	}

};


// Class Killstreak.KSStoreItemHelper
// 0x2949F80 (0x5DACC200 - 0x5B182280)
class UKSStoreItemHelper : public UPUMG_StoreItemHelper
{
public:
	unsigned char                                      UnknownData00[0x2949F80];                                 // 0x5B182280(0x2949F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSStoreItemHelper");
		return ptr;
	}


	void RedeemDLCVoucher();
	void HasUnseenItems();
	void HasRecentlySeenItem();
	void HasPortalOffers();
};


// Class Killstreak.KSSwapHandlerProfile
// 0x5D9EE700
class UKSSwapHandlerProfile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9EE700];                                // 0x0000(0x5D9EE700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSwapHandlerProfile");
		return ptr;
	}

};


// Class Killstreak.KSSwimmingAnimInst
// 0xFFFFFFFFA268F800 (0x0000 - 0x5D970800)
class UKSSwimmingAnimInst : public UKSCharacterAnimInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSwimmingAnimInst");
		return ptr;
	}


	void SwimNotifyTransitionStateLock();
	void SwimNotifyTransitionEnd();
};


// Class Killstreak.KSSwimmingPhysicsVolume
// 0xFFFFFFFFA267A300 (0x0000 - 0x5D985D00)
class AKSSwimmingPhysicsVolume : public APhysicsVolume
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSSwimmingPhysicsVolume");
		return ptr;
	}

};


// Class Killstreak.KSTabletAnimInstance
// 0x2834B00 (0x5DACBE80 - 0x5B297380)
class UKSTabletAnimInstance : public UKSAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2834B00];                                 // 0x5B297380(0x2834B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTabletAnimInstance");
		return ptr;
	}


	void OpenTablet();
	void FullyOpened();
	void FullyClosed();
	void CloseTablet();
	void CheckFullyOpened();
	void CheckFullyClosed();
};


// Class Killstreak.KSTabletMeshComponent
// 0xFFFFFFFFA2687580 (0x0000 - 0x5D978A80)
class UKSTabletMeshComponent : public UKSSkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTabletMeshComponent");
		return ptr;
	}


	void OpenTablet();
	void OnOpenComplete();
	void OnCloseComplete();
	void CloseTablet();
};


// Class Killstreak.KSTargeter
// 0x0000
class UKSTargeter : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTargeter");
		return ptr;
	}


	void GetCurrentTarget();
};


// Class Killstreak.KSTargetingDetailsWidget
// 0x2EDBA80 (0x5DACBD00 - 0x5ABF0280)
class UKSTargetingDetailsWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2EDBA80];                                 // 0x5ABF0280(0x2EDBA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTargetingDetailsWidget");
		return ptr;
	}


	void OnCurrentDistanceChanged();
};


// Class Killstreak.KSTeamCreator
// 0x0000
class UKSTeamCreator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTeamCreator");
		return ptr;
	}

};


// Class Killstreak.KSTeamKillTracker
// 0x277DCE0 (0x5D9EE660 - 0x5B270980)
class UKSTeamKillTracker : public UKSAccoladeTracker
{
public:
	unsigned char                                      UnknownData00[0x277DCE0];                                 // 0x5B270980(0x277DCE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTeamKillTracker");
		return ptr;
	}


	void StoreCombatInfo();
	void HasEliminateVictim();
	void ContainsPlayer();
	void CheckRequirements();
};


// Class Killstreak.KSTeamState
// 0x5DACD900
class AKSTeamState : public AInfo
{
public:
	unsigned char                                      UnknownData00[0x5DACD900];                                // 0x0000(0x5DACD900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTeamState");
		return ptr;
	}


	void SubtractTickets();
	void ShouldKeepTeamAlive();
	void ResetTeamElimination();
	void OnTeamUpdated();
	void OnTeamMemberRemoved();
	void OnTeamMemberEliminated();
	void OnTeamMemberDowned();
	void OnTeamMemberAdded();
	void OnSurrenderPollStarted();
	void OnSurrenderPollFailed();
	void OnRep_TeamEliminatedOrDowned();
	void OnRep_TeamEliminated();
	void OnRep_TeamCanProposeSurrender();
	void OnRep_Score();
	void OnRep_Respawns();
	void OnRep_JobSelectionComponent();
	void OnPlayerLogout();
	void NewPingRequest();
	void NewPingRemoveRequest();
	void NewPingChangeRequest();
	void IsEliminated();
	void IsDefending();
	void IsAttacking();
	void GetTeamType();
	void GetRespawnConfig();
	void GetRemainingRespawns();
	void GetPlayersRemaining();
	void GetNumberOfPlayers();
	void GetLivesRemaining();
	void GetExpectedTeamSize();
	void GetAllPersistentTeamMembers();
	void GetAllMembers();
	void EliminateTeam();
	void AllPlayersEliminatedOrDowned();
};


// Class Killstreak.KSTeamState_Control
// 0xFFFFFFFFFFFFFF80 (0x5DACD880 - 0x5DACD900)
class AKSTeamState_Control : public AKSTeamState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTeamState_Control");
		return ptr;
	}

};


// Class Killstreak.KSThreatComponent
// 0xCF1E980 (0x5DACE800 - 0x50BAFE80)
class UKSThreatComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF1E980];                                 // 0x50BAFE80(0xCF1E980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSThreatComponent");
		return ptr;
	}


	void DebugThreatLevels();
};


// Class Killstreak.KSTimerComponent
// 0xCF1FD00 (0x5DACFB80 - 0x50BAFE80)
class UKSTimerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF1FD00];                                 // 0x50BAFE80(0xCF1FD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTimerComponent");
		return ptr;
	}


	void StopTimer();
	void StartTimer();
	void OnRep_TimerState();
	void IsTimerComplete();
	void IsTimerActive();
	void GetTimeRemaining();
	void GetInitialTime();
};


// Class Killstreak.KSTitle
// 0x2896040 (0x5DACFB00 - 0x5B239AC0)
class UKSTitle : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x2896040];                                 // 0x5B239AC0(0x2896040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSTitle");
		return ptr;
	}

};


// Class Killstreak.KSUISessionManager
// 0x5DACFA00
class UKSUISessionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DACFA00];                                // 0x0000(0x5DACFA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSUISessionManager");
		return ptr;
	}

};


// Class Killstreak.KSVehicle
// 0x28E3080 (0x5DAE2580 - 0x5B1FF500)
class AKSVehicle : public AWheeledVehicle
{
public:
	unsigned char                                      UnknownData00[0x28E3080];                                 // 0x5B1FF500(0x28E3080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVehicle");
		return ptr;
	}


	void VehicleHit();
	void VehicleFeatureReleased();
	void VehicleFeaturePressed();
	void VehicleFeature();
	void UseReleased();
	void UsePressed();
	void TurnCameraY();
	void TurnCameraX();
	void SwapReleased();
	void SwapPressed();
	void StopParachute();
	void Steer();
	void StartParachute();
	void ServerVehicleFeature();
	void ServerUpdateRotation();
	void ServerHorn();
	void ServerGetOut();
	void ServerGetInNextEmptySeat();
	void ServerAirSpeed();
	void RiderDestroyed();
	void ResetVehicle();
	void ResetInput();
	void ResetCameraRotations();
	void PlayHealthStageChange();
	void OnRep_Riders();
	void OnRep_Driver();
	void OnRep_Destroyed();
	void OnRep_CurrentHealthStage();
	void OnRep_CurrentHealth();
	void MoveForward();
	void HornReleased();
	void HornPressed();
	void Horn();
	void HideParachute();
	void GetInHighestPriorityEmptySeat();
	void GetDriver();
	void Explode();
	void ExitPressed();
	void Deteriorate();
	void BroadcastVehicleFeature();
	void BroadcastHorn();
	void Brake();
	void AirSpeed();
};


// Class Killstreak.KSVehicle_Remote
// 0x1A00 (0x5DAE3F80 - 0x5DAE2580)
class AKSVehicle_Remote : public AKSVehicle
{
public:
	unsigned char                                      UnknownData00[0x1A00];                                    // 0x5DAE2580(0x1A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVehicle_Remote");
		return ptr;
	}


	void SetOwningCharacter();
	void OnRep_OwningCharacter();
	void Jump();
	void GetRemainingBattery();
	void ExecuteReveal();
};


// Class Killstreak.KSVehicleMovementComponent4W
// 0x28E4400 (0x5DAE3680 - 0x5B1FF280)
class UKSVehicleMovementComponent4W : public UWheeledVehicleMovementComponent4W
{
public:
	unsigned char                                      UnknownData00[0x28E4400];                                 // 0x5B1FF280(0x28E4400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVehicleMovementComponent4W");
		return ptr;
	}


	void StopParachute();
	void StartParachute();
	void OnRep_ParachuteDeployed();
	void OnRep_ManualDetachmentAllowed();
	void AttemptManualDetachment();
};


// Class Killstreak.KSVehicleSeatComponent
// 0xCE4AA80 (0x5DAE3200 - 0x50C98780)
class UKSVehicleSeatComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCE4AA80];                                 // 0x50C98780(0xCE4AA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVehicleSeatComponent");
		return ptr;
	}


	void GetSeatSpringArm();
};


// Class Killstreak.KSVehicleWheel
// 0xFFFFFFFFFFEEA1C0 (0x5B0E97C0 - 0x5B1FF600)
class UKSVehicleWheel : public UVehicleWheel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVehicleWheel");
		return ptr;
	}

};


// Class Killstreak.KSViewModel
// 0x2B46C00 (0x5DAE4C00 - 0x5AF9E000)
class AKSViewModel : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B46C00];                                 // 0x5AF9E000(0x2B46C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSViewModel");
		return ptr;
	}


	void BeginRotationReset();
};


// Class Killstreak.KSViewModelInterface
// 0x0000
class UKSViewModelInterface : public UKSEquipmentContainerOwner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSViewModelInterface");
		return ptr;
	}


	void GetViewModelName();
};


// Class Killstreak.KSVOComponent
// 0xCF36200 (0x5DAE6080 - 0x50BAFE80)
class UKSVOComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF36200];                                 // 0x50BAFE80(0xCF36200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSVOComponent");
		return ptr;
	}


	void TeamStateChanged();
	void ServerPostVO();
	void PostVOToServer();
	void PostVO();
	void PlayVO();
	void PlayerStateChanged();
	void OwnerPossessedBy();
	void OnReadyToPlay();
	void ForcePlayVO();
	void ConditionalPlayVO();
	void BindToTeamStateEvents();
	void BindToPlayerStateEvents();
	void BindToPlayerControllerEvents();
	void BindToPingManagerEvents();
	void BindToGameStateEvents();
	void BindToEvents();
	void BindToCharacterEvents();
	void BindToActivatableModEvents();
	void AnnounceBombSpotted();
};


// Class Killstreak.KSWaterFXVolume
// 0x5DAE5980
class AKSWaterFXVolume : public ATriggerVolume
{
public:
	unsigned char                                      UnknownData00[0x5DAE5980];                                // 0x0000(0x5DAE5980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWaterFXVolume");
		return ptr;
	}


	void OnWaterFXTriggered();
	void OnWaterExited();
	void OnWaterEntered();
};


// Class Killstreak.KSWeaponAttachmentCosmeticInst
// 0x160B80 (0x5DAE7200 - 0x5D986680)
class UKSWeaponAttachmentCosmeticInst : public UKSEquipmentCosmeticComponent
{
public:
	unsigned char                                      UnknownData00[0x160B80];                                  // 0x5D986680(0x160B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachmentCosmeticInst");
		return ptr;
	}


	void OnRep_ParentEquipmentId();
	void OnRep_AttachPoint();
	void OnRep_AttachmentAsset();
	void IsInitialized();
	void GetParentComponent();
	void GetLoadedMeshAnimAnimOverrideData();
	void GetAttachPoint();
	void GetAttachmentAsset();
	void GetAccumulatedMeshAndAnimOverrideData();
};


// Class Killstreak.KSWAttachmentCosmetic_VarScope
// 0xFFFFFFFFFFFFFF00 (0x5DAE7100 - 0x5DAE7200)
class UKSWAttachmentCosmetic_VarScope : public UKSWeaponAttachmentCosmeticInst
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWAttachmentCosmetic_VarScope");
		return ptr;
	}


	void OnRep_ScopeZoomIndex();
};


// Class Killstreak.KSWayPoint
// 0xFFFFFFFFFD766400 (0x5B0E9580 - 0x5D983180)
class AKSWayPoint : public AKSMapPoint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWayPoint");
		return ptr;
	}


	void GetNextWayPoints();
};


// Class Killstreak.KSWayPointSet
// 0x2B48800 (0x5DAE6800 - 0x5AF9E000)
class AKSWayPointSet : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B48800];                                 // 0x5AF9E000(0x2B48800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWayPointSet");
		return ptr;
	}


	void UpdateWayPointVisuals();
	void ShouldSideReverseOnThisWaypointSet();
	void LinkWayPoints();
	void CanSideUseThisWaypointSet();
};


// Class Killstreak.KSWeapon_Aimed
// 0x2835800 (0x5DAE8500 - 0x5B2B2D00)
class AKSWeapon_Aimed : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2835800];                                 // 0x5B2B2D00(0x2835800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Aimed");
		return ptr;
	}


	void ValidateReceivedAimData();
	void ValidateHitWithAimData();
	void StaticDefaultGetAim();
	void ServerSetAimOverShoulder();
	void ServerReFireWeaponAimed();
	void ServerProcessHits();
	void ServerFireWeaponAimedCompressed();
	void ServerFireWeaponAimed();
	void IsInOrTransitioningToAOS();
	void IsInOrTransitioningToAlternate();
	void IsInOrTransitioningToADS();
	void IsAimingOverShoulder();
	void IsAimingDownSights();
	void IsAimingAlternate();
	void IsAiming();
	void InternalGetActorsToIgnore();
	void GetRange();
	void GetOwnerAimMode();
	void GetHeadAimCorrectionRange();
	void GetHeadAimCorrectionOffset();
	void GetFullFireRepData();
	void GetCurrentAccuracy();
	void GetCachedAim();
	void GetAim();
	void GetActorsToIgnore();
	void ApplyView();
	void ApplyAimAssist();
	void ApplyAccuracy();
	void AllowAimCorrection();
};


// Class Killstreak.KSWeapon_Build
// 0x1C80 (0x5DAEA180 - 0x5DAE8500)
class AKSWeapon_Build : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x1C80];                                    // 0x5DAE8500(0x1C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Build");
		return ptr;
	}


	void OnRep_BuildState();
	void GetDesiredBuildLocationAndRotation();
	void GetBuildPreviewActorClass();
	void GetBuildActorClass();
};


// Class Killstreak.KSWeapon_DirectTarget
// 0x2837100 (0x5DAE9E00 - 0x5B2B2D00)
class AKSWeapon_DirectTarget : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2837100];                                 // 0x5B2B2D00(0x2837100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_DirectTarget");
		return ptr;
	}


	void SubmitTargetSelection();
	void PopulateValidTargets();
	void OnActiveTargetDestroyed();
	void IsTargetValid();
	void ClientRejectTargetSelection();
};


// Class Killstreak.KSWeapon_GrenadeThrow
// 0x1800 (0x5DAE9D00 - 0x5DAE8500)
class AKSWeapon_GrenadeThrow : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x1800];                                    // 0x5DAE8500(0x1800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_GrenadeThrow");
		return ptr;
	}


	void OnFuseTimerExpired();
	void DoFumble();
};


// Class Killstreak.KSWeapon_MacGuffin
// 0x1600 (0x5DAE9B00 - 0x5DAE8500)
class AKSWeapon_MacGuffin : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x1600];                                    // 0x5DAE8500(0x1600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_MacGuffin");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_Melee
// 0x1000 (0x5DAE9500 - 0x5DAE8500)
class AKSWeapon_Melee : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x1000];                                    // 0x5DAE8500(0x1000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Melee");
		return ptr;
	}


	void OnRep_Projectile();
	void OnProjectileReclaimed();
	void OnOwnerAimStateChanged();
	void OnLungingChanged();
	void JumpToFire();
	void IncPrefireSkipWindow();
	void GetProjectile();
};


// Class Killstreak.KSWeapon_Proximity
// 0x283D860 (0x5DAF0560 - 0x5B2B2D00)
class AKSWeapon_Proximity : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x283D860];                                 // 0x5B2B2D00(0x283D860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Proximity");
		return ptr;
	}


	void ProximityActorUpdated();
	void OnCachedProximityActorsUpdated();
	void GetProximityTraceRelativeLocation();
	void GetProximityComponent();
	void GetCachedProximityActors();
};


// Class Killstreak.KSWeapon_RemoteRocket
// 0x2837C80 (0x5DAEA980 - 0x5B2B2D00)
class AKSWeapon_RemoteRocket : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2837C80];                                 // 0x5B2B2D00(0x2837C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_RemoteRocket");
		return ptr;
	}


	void OnRocketDestroyed();
	void OnPostDestroyDelayComplete();
	void GetSpawnedRocket();
	void GetRocketSpawnWorldTransform();
};


// Class Killstreak.KSWeapon_RemoteThrow
// 0x0A00 (0x5DAEA700 - 0x5DAE9D00)
class AKSWeapon_RemoteThrow : public AKSWeapon_GrenadeThrow
{
public:
	unsigned char                                      UnknownData00[0xA00];                                     // 0x5DAE9D00(0x0A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_RemoteThrow");
		return ptr;
	}


	void SwapToDetonator();
	void OnProjectileReleased();
	void OnAttachedChargeDestroyed();
	void GetAttachedCharges();
};


// Class Killstreak.KSWeapon_RemoteThrowAndTrigger
// 0xFFFFFFFFFFFFFF00 (0x5DAEA600 - 0x5DAEA700)
class AKSWeapon_RemoteThrowAndTrigger : public AKSWeapon_RemoteThrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_RemoteThrowAndTrigger");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_RemoteTrigger
// 0x2839600 (0x5DAEC300 - 0x5B2B2D00)
class AKSWeapon_RemoteTrigger : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2839600];                                 // 0x5B2B2D00(0x2839600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_RemoteTrigger");
		return ptr;
	}


	void SwapOffDetonator();
	void OnAttachedChargeKilled();
	void OnAttachedChargeDestroyed();
	void GetAttachedCharges();
	void Detonate();
};


// Class Killstreak.KSWeapon_RemoteVehicle
// 0x283D540 (0x5DAF0240 - 0x5B2B2D00)
class AKSWeapon_RemoteVehicle : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x283D540];                                 // 0x5B2B2D00(0x283D540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_RemoteVehicle");
		return ptr;
	}


	void VehicleDestroyed();
};


// Class Killstreak.KSWeapon_ReviveDirect
// 0xFFFFFFFFA2516200 (0x0000 - 0x5DAE9E00)
class AKSWeapon_ReviveDirect : public AKSWeapon_DirectTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_ReviveDirect");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_ReviveDartDirect
// 0x5DAEC080
class AKSWeapon_ReviveDartDirect : public AKSWeapon_ReviveDirect
{
public:
	unsigned char                                      UnknownData00[0x5DAEC080];                                // 0x0000(0x5DAEC080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_ReviveDartDirect");
		return ptr;
	}


	void OnReviveSucceed();
	void OnReviveFailed();
};


// Class Killstreak.KSWeapon_Targeted
// 0x2838F00 (0x5DAEBC00 - 0x5B2B2D00)
class AKSWeapon_Targeted : public AKSWeapon
{
public:
	unsigned char                                      UnknownData00[0x2838F00];                                 // 0x5B2B2D00(0x2838F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Targeted");
		return ptr;
	}


	void TargetCurrentlyValid();
	void SubmitTargetedActor();
	void ConfirmTargetSelection();
	void CancelTargetSelection();
};


// Class Killstreak.KSWeapon_ReviveDrone
// 0x4500 (0x5DAF0100 - 0x5DAEBC00)
class AKSWeapon_ReviveDrone : public AKSWeapon_Targeted
{
public:
	unsigned char                                      UnknownData00[0x4500];                                    // 0x5DAEBC00(0x4500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_ReviveDrone");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_ReviveDroneDirect
// 0x5DAEB680
class AKSWeapon_ReviveDroneDirect : public AKSWeapon_ReviveDirect
{
public:
	unsigned char                                      UnknownData00[0x5DAEB680];                                // 0x0000(0x5DAEB680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_ReviveDroneDirect");
		return ptr;
	}


	void OnRep_DroneActor();
	void OnDroneDestroy();
	void OnDroneAborted();
	void GetDesiredSpawnLocationAndRotation();
};


// Class Killstreak.KSWeapon_Shotgun
// 0xA400 (0x5DAF2900 - 0x5DAE8500)
class AKSWeapon_Shotgun : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0xA400];                                    // 0x5DAE8500(0xA400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Shotgun");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_TargetFriendly
// 0xFFFFFFFFA2516200 (0x0000 - 0x5DAE9E00)
class AKSWeapon_TargetFriendly : public AKSWeapon_DirectTarget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_TargetFriendly");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_TargetSurface
// 0x5080 (0x5DAED580 - 0x5DAE8500)
class AKSWeapon_TargetSurface : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x5080];                                    // 0x5DAE8500(0x5080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_TargetSurface");
		return ptr;
	}

};


// Class Killstreak.KSWeapon_Zipline
// 0x4D80 (0x5DAED280 - 0x5DAE8500)
class AKSWeapon_Zipline : public AKSWeapon_Aimed
{
public:
	unsigned char                                      UnknownData00[0x4D80];                                    // 0x5DAE8500(0x4D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeapon_Zipline");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAnimInstance
// 0x2857380 (0x5DAEE700 - 0x5B297380)
class UKSWeaponAnimInstance : public UKSAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2857380];                                 // 0x5B297380(0x2857380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAnimInstance");
		return ptr;
	}


	void PlayFireAnimationBP();
};


// Class Killstreak.KSWeaponAsset_Build
// 0x2835960 (0x5DAF25E0 - 0x5B2BCC80)
class UKSWeaponAsset_Build : public UKSWeaponAsset
{
public:
	unsigned char                                      UnknownData00[0x2835960];                                 // 0x5B2BCC80(0x2835960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_Build");
		return ptr;
	}


	void GetSoftBuildPreviewActorClass();
	void GetSoftBuildActorClass();
	void GetBuildActivationDelay();
};


// Class Killstreak.KSWeaponAsset_WithProjectile
// 0x2835820 (0x5DAF24A0 - 0x5B2BCC80)
class UKSWeaponAsset_WithProjectile : public UKSWeaponAsset
{
public:
	unsigned char                                      UnknownData00[0x2835820];                                 // 0x5B2BCC80(0x2835820) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_WithProjectile");
		return ptr;
	}


	void GetRadialDamageOriginOffsetDistance();
	void GetProjectileWeaponAsset();
	void GetProjectileRadius();
	void GetProjectileMaxSimulationTimeStep();
	void GetProjectileMaxSimulationIterations();
	void GetProjectileInitialSpeed();
	void GetProjectileGravityScale();
	void GetProjectileClass();
};


// Class Killstreak.KSWeaponAsset_Grenade
// 0xFFFFFFFFFFFFB760 (0x5DAEDC00 - 0x5DAF24A0)
class UKSWeaponAsset_Grenade : public UKSWeaponAsset_WithProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_Grenade");
		return ptr;
	}


	void GetMinimumCookTime();
	void GetMinHandRemainingFuse();
	void GetFuseTime();
	void GetFuseTicksInHand();
	void AllowCooking();
};


// Class Killstreak.KSWeaponAsset_Melee
// 0xFFFFFFFFFFFFD0E0 (0x5DAEF580 - 0x5DAF24A0)
class UKSWeaponAsset_Melee : public UKSWeaponAsset_WithProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_Melee");
		return ptr;
	}


	void GetOverlapObjectTypes();
	void GetMeleeTraceChannel();
	void GetMeleeSphereRadius();
	void GetMeleeSphereOffset();
	void GetMaxLungeDuration();
	void GetMaxLungeDistance();
	void GetLungeConeHalfAngle();
};


// Class Killstreak.KSWeaponAsset_Pierce
// 0xFFFFFFFFFFFFCFE0 (0x5DAEF480 - 0x5DAF24A0)
class UKSWeaponAsset_Pierce : public UKSWeaponAsset_WithProjectile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_Pierce");
		return ptr;
	}


	void GetDamageScalarAfterWalls();
};


// Class Killstreak.KSWeaponAsset_Shotgun
// 0x2832300 (0x5DAEEF80 - 0x5B2BCC80)
class UKSWeaponAsset_Shotgun : public UKSWeaponAsset
{
public:
	unsigned char                                      UnknownData00[0x2832300];                                 // 0x5B2BCC80(0x2832300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAsset_Shotgun");
		return ptr;
	}


	void GetSpreadPattern();
	void GetPelletsPerShot();
	void GetHitPercentageForHeadshot();
	void GetAimDownSightsAccuracy();
	void DoesUseSpreadPattern();
};


// Class Killstreak.KSWeaponAttachment
// 0x28B83A0 (0x5DAF1E60 - 0x5B239AC0)
class UKSWeaponAttachment : public UKSItem
{
public:
	unsigned char                                      UnknownData00[0x28B83A0];                                 // 0x5B239AC0(0x28B83A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment");
		return ptr;
	}


	void GetValidAttachPoints();
	void GetFunctionalClass();
	void GetCosmeticClass();
	void GetCompatibleWeaponTypes();
	void CanAttachToWeaponType();
	void CanAttachTo();
};


// Class Killstreak.KSWeaponAttachment_AccuracyKick
// 0xFFFFFFFFFFFFE0A0 (0x5DAEFF00 - 0x5DAF1E60)
class UKSWeaponAttachment_AccuracyKick : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_AccuracyKick");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAttachment_DefaultAmmo
// 0xFFFFFFFFFFFFE020 (0x5DAEFE80 - 0x5DAF1E60)
class UKSWeaponAttachment_DefaultAmmo : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_DefaultAmmo");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAttachment_ExtMagazine
// 0xFFFFFFFFFFFFDF20 (0x5DAEFD80 - 0x5DAF1E60)
class UKSWeaponAttachment_ExtMagazine : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_ExtMagazine");
		return ptr;
	}


	void GetClipSize();
};


// Class Killstreak.KSWeaponAttachment_ExtMagPercent
// 0xFFFFFFFFFFFFDE20 (0x5DAEFC80 - 0x5DAF1E60)
class UKSWeaponAttachment_ExtMagPercent : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_ExtMagPercent");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAttachment_LongBarrel
// 0xFFFFFFFFFFFFDDA0 (0x5DAEFC00 - 0x5DAF1E60)
class UKSWeaponAttachment_LongBarrel : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_LongBarrel");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAttachment_QuickMag
// 0xFFFFFFFFFFFFDCA0 (0x5DAEFB00 - 0x5DAF1E60)
class UKSWeaponAttachment_QuickMag : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_QuickMag");
		return ptr;
	}


	void GetReloadPeriodMultiplier();
};


// Class Killstreak.KSWeaponAttachment_Scope
// 0xFFFFFFFFA250E1A0 (0x0000 - 0x5DAF1E60)
class UKSWeaponAttachment_Scope : public UKSWeaponAttachment
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_Scope");
		return ptr;
	}

};


// Class Killstreak.KSWeaponAttachment_ScopeFixedFOV
// 0x5DAEFA00
class UKSWeaponAttachment_ScopeFixedFOV : public UKSWeaponAttachment_Scope
{
public:
	unsigned char                                      UnknownData00[0x5DAEFA00];                                // 0x0000(0x5DAEFA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_ScopeFixedFOV");
		return ptr;
	}


	void GetAimDownSightsFieldOfView();
};


// Class Killstreak.KSWeaponAttachment_ScopeMultiply
// 0x5DAEF900
class UKSWeaponAttachment_ScopeMultiply : public UKSWeaponAttachment_Scope
{
public:
	unsigned char                                      UnknownData00[0x5DAEF900];                                // 0x0000(0x5DAEF900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_ScopeMultiply");
		return ptr;
	}


	void GetScopeMultiplier();
};


// Class Killstreak.KSWeaponAttachment_Silencer
// 0x1F1A0 (0x5DB11000 - 0x5DAF1E60)
class UKSWeaponAttachment_Silencer : public UKSWeaponAttachment
{
public:
	unsigned char                                      UnknownData00[0x1F1A0];                                   // 0x5DAF1E60(0x1F1A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_Silencer");
		return ptr;
	}


	void GetAudibleRange();
};


// Class Killstreak.KSWeaponAttachment_VarScope
// 0x5DAF1BE0
class UKSWeaponAttachment_VarScope : public UKSWeaponAttachment_Scope
{
public:
	unsigned char                                      UnknownData00[0x5DAF1BE0];                                // 0x0000(0x5DAF1BE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachment_VarScope");
		return ptr;
	}


	void GetScopeFOVOptions();
	void GetScopeFOV();
	void GetNumScopeOptions();
};


// Class Killstreak.KSWeaponAttachmentInstance
// 0xCF60800 (0x5DB10680 - 0x50BAFE80)
class UKSWeaponAttachmentInstance : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF60800];                                 // 0x50BAFE80(0xCF60800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachmentInstance");
		return ptr;
	}


	void SetPersistsOnWeaponDrop();
	void OnUnattached();
	void OnRep_AttachPoint();
	void OnRep_AttachmentAsset();
	void OnAttached();
	void IsAttached();
	void GetPersistsOnWeaponDrop();
	void GetOwningWeapon();
	void GetAttachPoint();
	void GetAttachmentAsset();
};


// Class Killstreak.KSWeaponAttachmentInst_VarScope
// 0xFFFFFFFFFFFFFE80 (0x5DB10500 - 0x5DB10680)
class UKSWeaponAttachmentInst_VarScope : public UKSWeaponAttachmentInstance
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachmentInst_VarScope");
		return ptr;
	}


	void ServerSetScopeZoomIndex();
};


// Class Killstreak.KSWeaponAttachmentSkinDetails
// 0x5DB10400
class UKSWeaponAttachmentSkinDetails : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5DB10400];                                // 0x0000(0x5DB10400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponAttachmentSkinDetails");
		return ptr;
	}

};


// Class Killstreak.KSWeaponComponent
// 0x16CE60 (0x5DAF34E0 - 0x5D986680)
class UKSWeaponComponent : public UKSEquipmentCosmeticComponent
{
public:
	unsigned char                                      UnknownData00[0x16CE60];                                  // 0x5D986680(0x16CE60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponComponent");
		return ptr;
	}


	void UpdateOwnerLocallyViewed();
	void UpdateAimDownSightsBlurValues();
	void TriggerEngagement();
	void TriggerCombat();
	void TickViewerAim();
	void TickNonViewerAim();
	void StopDefaultAim();
	void StopAimOverShoulder();
	void StopAimDownSights();
	void StopAimAlternate();
	void StartDefaultAim();
	void StartAimOverShoulder();
	void StartAimDownSights();
	void StartAimAlternate();
	void ShouldBroadcastWeaponStateChange();
	void SetWeaponVisibility();
	void ReportNewWeaponLowerAlpha();
	void PostCreateWeaponSkeletalMeshComponent();
	void OnWeaponStateChanged();
	void OnUnsetAsActivePrimaryWeapon();
	void OnSkyDiveStarted();
	void OnSkyDiveSkipped();
	void OnSkyDiveEnded();
	void OnSetAsActivePrimaryWeapon();
	void OnRep_WeaponState();
	void OnRep_WeaponAsset();
	void OnRep_InitialState();
	void OnRep_AmmoInClip();
	void OnInvalidFire();
	void OnInitialize();
	void OnFireWeaponFull();
	void OnFireWeapon();
	void OnEmptyFire();
	void OnActiveMaterialsApplied();
	void NotifyStopFireReceived();
	void IsWeaponSilenced();
	void IsWeaponPendingFireWithValidAmmo();
	void IsReloading();
	void IsPrimaryActiveWeapon();
	void IsModelViewer();
	void IsClipEmpty();
	void IsAimingOverShoulder();
	void IsAimingDownSights();
	void IsAimingAlternate();
	void IsAiming();
	void IsAimedAtFriendly();
	void IsAimedAtEnemy();
	void IsActiveWeapon();
	void GetWeaponState();
	void GetWeaponSkeletalMeshComponents();
	void GetWeaponSkeletalMeshComponentNew();
	void GetWeaponSkeletalMeshComponent();
	void GetWeaponAsset();
	void GetWeaponAnimInstance();
	void GetWalkSpeedModifier();
	void GetViewModelScale();
	void GetViewModelRotation();
	void GetViewModelLocationOffet();
	void GetVibrationEffect();
	void GetVFXSpangKeyword();
	void GetTargetingModuleInstance();
	void GetScopeSocketName();
	void GetRetrieveTime();
	void GetReloadTime();
	void GetMuzzleSocketName();
	void GetMovementAccuracyPenalty();
	void GetMaxFiringAccuracyLoss();
	void GetMagnifierValue();
	void GetLoadedAccumulatedAttachmentOverrideData();
	void GetInAirAccuracyModifier();
	void GetGrenadeTargetingModuleInstance();
	void GetFiringTime();
	void GetDuplicateSkeletalMeshComponentNew();
	void GetDuplicateSkeletalMeshComponent();
	void GetDecalSpangKeyword();
	void GetCurrentAccuracy();
	void GetCrouchAccuracyModifier();
	void GetClipSize();
	void GetBaseRetrieveTime();
	void GetBaseReloadTime();
	void GetBaseFiringTime();
	void GetBaseAccuracy();
	void GetAttachments();
	void GetAttachmentCosmeticInstances();
	void GetAncillaryMeshes();
	void GetAmmoInOwnerInventory();
	void GetAmmoInClip();
	void GetAlternativeVibrationEffect();
	void GetAlternativeVibrationAttenuation();
	void GetAimOverShoulderAccuracyModifier();
	void GetAimMode();
	void GetAdjustedRetrieveRate();
	void GetAdjustedReloadRate();
	void GetAdjustedFiringRate();
	void GetActiveIndex();
	void GetAccuracyReturnRate();
	void GetAccuracyReturnDelay();
	void GetAccuracyLossPerShot();
	void GenerateSurfaceBasedKeyword();
	void ForceRetrieveWeapon();
	void ForceHolsterWeapon();
	void ForceAimUpdate();
	void EventUpdateOwnerLocallyViewed();
	void EvaluateWeaponLowering();
	void DropMagazine();
	void DetatchWeaponSkeletalMeshComponentAttachedChildren();
	void CanUseCombatState();
	void CanReceiveAttachment();
	void CanLowerWeaponNow();
	void CancelReloadCosmetic();
	void CalcAmmoToBeReloaded();
	void BroadcastWeaponStateChange();
	void BroadcastReliableWeaponStateChange();
	void BroadcastReliablePostReload();
	void BroadcastReliablePostFireWithAmmo();
	void BroadcastReliableEmptyFire();
	void BroadcastReliableAmmoChange();
	void BroadcastReliableAimedPostFireWithAmmo();
	void BroadcastReliableAimedPostFireFull();
	void BroadcastReliableAimedPostFire();
	void BroadcastPostReload();
	void BroadcastPostFireWithAmmo();
	void BroadcastEmptyFire();
	void BroadcastAmmoChange();
	void BroadcastAimedPostFireWithAmmo();
	void BroadcastAimedPostFireFull();
	void BroadcastAimedPostFire();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintPersistentCosmeticsUpdate();
	void BlueprintFinishKillCamPlayback();
	void BlueprintFillLegacyDataTable();
	void AimDownSightsCheckpoint();
};


// Class Killstreak.KSWeaponFunctionLibrary
// 0x0000
class UKSWeaponFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponFunctionLibrary");
		return ptr;
	}


	void OnTraceReactionDelay__DelegateSignature();
	void MultiLineWeaponTraceByObjectType();
	void MultiLineWeaponTraceByChannel();
	void MeleeSphereOverlapComponents();
	void MeleeSphereOverlapActors();
	void MeleeBoxOverlapComponents();
	void MeleeBoxOverlapActors();
	void GetGadgetThrowSpeedMultiplier();
	void GetGadgetOuterRadiusMultiplier();
	void GetGadgetInnerRadiusMultiplier();
	void GetGadgetFXSizeMultiplier();
	void GenerateShotgunSpreadAimDataV2Exact();
	void GenerateShotgunSpreadAimDataV2();
	void GenerateShotgunSpreadAimData();
	void FrameDelayForTrace();
	void FindShotgunPelletHitData();
	void EventSingleShotgunLineTraceByChannelV2();
	void EventSingleShotgunLineTraceByChannel();
	void EventMultiShotgunLineTraceByChannelV3();
	void EventMultiShotgunLineTraceByChannelV2();
	void EventMultiShotgunLineTraceByChannel();
	void DoRadialDamageWithPreventionChannel();
	void DoRadialDamage();
	void DoPointDamage();
	void CongregateShotgunHits();
};


// Class Killstreak.KSWeaponMasteryActivity
// 0x28A7380 (0x5DB18800 - 0x5B271480)
class UKSWeaponMasteryActivity : public UKSActivity
{
public:
	unsigned char                                      UnknownData00[0x28A7380];                                 // 0x5B271480(0x28A7380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponMasteryActivity");
		return ptr;
	}

};


// Class Killstreak.KSWeaponMasteryManager
// 0x287EA80 (0x5DAF3080 - 0x5B274600)
class UKSWeaponMasteryManager : public UKSActivityManagerBase
{
public:
	unsigned char                                      UnknownData00[0x287EA80];                                 // 0x5B274600(0x287EA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponMasteryManager");
		return ptr;
	}


	void GetKDAForWeapon();
	void GetActivityInstancesWithWeapon();
	void GetActivityInstancesWithType();
	void GetAccuracyForWeapon();
	void FindActivityByWeaponAndType();
};


// Class Killstreak.KSWeaponSkeletalMeshComponent
// 0x1A1180 (0x5DB19C00 - 0x5D978A80)
class UKSWeaponSkeletalMeshComponent : public UKSSkeletalMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1A1180];                                  // 0x5D978A80(0x1A1180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWeaponSkeletalMeshComponent");
		return ptr;
	}

};


// Class Killstreak.KSWorldSettings
// 0x2A7F880 (0x5DB1B500 - 0x5B09BC80)
class AKSWorldSettings : public APGame_WorldSettings
{
public:
	unsigned char                                      UnknownData00[0x2A7F880];                                 // 0x5B09BC80(0x2A7F880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSWorldSettings");
		return ptr;
	}


	void LevelActorDestroyed();
};


// Class Killstreak.KSZipLineStart
// 0xFFFFFFFFA4DC0960 (0x0000 - 0x5B23F6A0)
class UKSZipLineStart : public UKSInteractionState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSZipLineStart");
		return ptr;
	}

};


// Class Killstreak.KSZipLine
// 0x2B54D60 (0x5DAF2D60 - 0x5AF9E000)
class AKSZipLine : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B54D60];                                 // 0x5AF9E000(0x2B54D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSZipLine");
		return ptr;
	}


	void SetReadyToRide();
	void OnPlayerZiplineCooldownEnd();
	void OnPlayerStopZiplining();
	void OnPlayerStartZiplining();
	void IsUpline();
	void GetAutoReleaseDistance();
	void ComputeAutoReleaseVelocity();
};


// Class Killstreak.KSZipLine_Dynamic
// 0xFFFFFFFFA250D2A0 (0x0000 - 0x5DAF2D60)
class AKSZipLine_Dynamic : public AKSZipLine
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSZipLine_Dynamic");
		return ptr;
	}


	void SetDynamicAnchors();
};


// Class Killstreak.KSZiplineAnimInst
// 0x1ABC00 (0x5DB1C400 - 0x5D970800)
class UKSZiplineAnimInst : public UKSCharacterAnimInst
{
public:
	unsigned char                                      UnknownData00[0x1ABC00];                                  // 0x5D970800(0x1ABC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSZiplineAnimInst");
		return ptr;
	}

};


// Class Killstreak.KSZiplineMeshComponent
// 0xFFFFFFFFA2687580 (0x0000 - 0x5D978A80)
class UKSZiplineMeshComponent : public UKSSkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.KSZiplineMeshComponent");
		return ptr;
	}


	void StartZiplining();
	void EndZiplining();
};


// Class Killstreak.LoadingScreenImageManager
// 0x2A7EF40 (0x5DB1C380 - 0x5B09D440)
class ULoadingScreenImageManager : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2A7EF40];                                 // 0x5B09D440(0x2A7EF40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.LoadingScreenImageManager");
		return ptr;
	}

};


// Class Killstreak.LoadoutClassCollection
// 0x28CDC00 (0x5DB1C280 - 0x5B24E680)
class ULoadoutClassCollection : public UItemCollection
{
public:
	unsigned char                                      UnknownData00[0x28CDC00];                                 // 0x5B24E680(0x28CDC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.LoadoutClassCollection");
		return ptr;
	}

};


// Class Killstreak.LobbyPlayerController
// 0x2A56500 (0x5DAF2CC0 - 0x5B09C7C0)
class ALobbyPlayerController : public APGame_PlayerController
{
public:
	unsigned char                                      UnknownData00[0x2A56500];                                 // 0x5B09C7C0(0x2A56500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.LobbyPlayerController");
		return ptr;
	}


	void UIX_FlushPressedKeys();
	void LoadRoute();
	void ClearDeserterPenalty();
};


// Class Killstreak.ParticleSystemChannelComponent
// 0xFFFFFFFFA24E1280 (0x0000 - 0x5DB1ED80)
class UParticleSystemChannelComponent : public UParticleSystemComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ParticleSystemChannelComponent");
		return ptr;
	}


	void UpdateChannels();
};


// Class Killstreak.PerkCategory
// 0x28D0400 (0x5DB1EA80 - 0x5B24E680)
class UPerkCategory : public UItemCollection
{
public:
	unsigned char                                      UnknownData00[0x28D0400];                                 // 0x5B24E680(0x28D0400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.PerkCategory");
		return ptr;
	}


	void GetSoftCategoryIcon();
};


// Class Killstreak.PreviewActorLoadoutComponent
// 0xCF6EB80 (0x5DB1EA00 - 0x50BAFE80)
class UPreviewActorLoadoutComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF6EB80];                                 // 0x50BAFE80(0xCF6EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.PreviewActorLoadoutComponent");
		return ptr;
	}

};


// Class Killstreak.PreviewActorLoadoutComponentDirect
// 0xFFFFFFFFFFFFFE00 (0x5DB1E800 - 0x5DB1EA00)
class UPreviewActorLoadoutComponentDirect : public UPreviewActorLoadoutComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.PreviewActorLoadoutComponentDirect");
		return ptr;
	}

};


// Class Killstreak.SafeToCookAssetLabel
// 0xFFFFFFFFA25D9200 (0x0000 - 0x5DA26E00)
class USafeToCookAssetLabel : public UPrimaryAssetLabel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.SafeToCookAssetLabel");
		return ptr;
	}

};


// Class Killstreak.SkinBundleCollection
// 0x28D1900 (0x5DB1FF80 - 0x5B24E680)
class USkinBundleCollection : public UItemCollection
{
public:
	unsigned char                                      UnknownData00[0x28D1900];                                 // 0x5B24E680(0x28D1900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.SkinBundleCollection");
		return ptr;
	}

};


// Class Killstreak.SmoothRepTimelineActor
// 0x2B81E00 (0x5DB1FE00 - 0x5AF9E000)
class ASmoothRepTimelineActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2B81E00];                                 // 0x5AF9E000(0x2B81E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.SmoothRepTimelineActor");
		return ptr;
	}


	void SetTimelineComponentToSimulate();
	void OnRep_SmoothTimeline();
};


// Class Killstreak.SplineMovementComponent
// 0x9D23700 (0x5A926680 - 0x50C02F80)
class USplineMovementComponent : public UMovementComponent
{
public:
	unsigned char                                      UnknownData00[0x9D23700];                                 // 0x50C02F80(0x9D23700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.SplineMovementComponent");
		return ptr;
	}


	void StopSimulating();
	void SetInitialOffsetOnSpline();
	void RestartMovement();
	void OnSplineWaitEndDelegate__DelegateSignature();
	void OnSplineWaitBeginDelegate__DelegateSignature();
	void OnSplineStopDelegate__DelegateSignature();
	void OnSplineReverseDelegate__DelegateSignature();
	void OnSplineResetDelegate__DelegateSignature();
	void GoToTime();
	void GetAlpha();
};


// Class Killstreak.ThermalScopeManagerComponent
// 0xCF45000 (0x5DAF4E80 - 0x50BAFE80)
class UThermalScopeManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF45000];                                 // 0x50BAFE80(0xCF45000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ThermalScopeManagerComponent");
		return ptr;
	}


	void CreateThermalManagerComponent();
};


// Class Killstreak.ThermalScopePPComponent
// 0xCF6FB00 (0x5DB1F980 - 0x50BAFE80)
class UThermalScopePPComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCF6FB00];                                 // 0x50BAFE80(0xCF6FB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ThermalScopePPComponent");
		return ptr;
	}

};


// Class Killstreak.TracerParticlePoolComponent
// 0xFFFFFFFFA4E6BF40 (0x0000 - 0x5B1940C0)
class UTracerParticlePoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.TracerParticlePoolComponent");
		return ptr;
	}


	void OnTracerDestinationReached();
};


// Class Killstreak.TracerParticleSystemComponent
// 0x22100 (0x5DB40E80 - 0x5DB1ED80)
class UTracerParticleSystemComponent : public UParticleSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x22100];                                   // 0x5DB1ED80(0x22100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.TracerParticleSystemComponent");
		return ptr;
	}

};


// Class Killstreak.TracerStaticMeshComponent
// 0xF8080 (0x5DB40B80 - 0x5DA48B00)
class UTracerStaticMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xF8080];                                   // 0x5DA48B00(0xF8080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.TracerStaticMeshComponent");
		return ptr;
	}

};


// Class Killstreak.TracerStaticMeshPoolComponent
// 0x29149A0 (0x5DAF4CA0 - 0x5B1E0300)
class UTracerStaticMeshPoolComponent : public UBasePoolComponent
{
public:
	unsigned char                                      UnknownData00[0x29149A0];                                 // 0x5B1E0300(0x29149A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.TracerStaticMeshPoolComponent");
		return ptr;
	}


	void OnTracerDestinationReached();
};


// Class Killstreak.ViewDependentRules_1PCamera
// 0x0000
class UViewDependentRules_1PCamera : public UViewDependentAkEventRules
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.ViewDependentRules_1PCamera");
		return ptr;
	}

};


// Class Killstreak.WeaponCollection
// 0x28F2200 (0x5DB40880 - 0x5B24E680)
class UWeaponCollection : public UItemCollection
{
public:
	unsigned char                                      UnknownData00[0x28F2200];                                 // 0x5B24E680(0x28F2200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Killstreak.WeaponCollection");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
