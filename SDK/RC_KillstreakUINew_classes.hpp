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

// Class KillstreakUINew.GuidedMenuCalloutData
// 0x5DB40780
class UGuidedMenuCalloutData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB40780];                                // 0x0000(0x5DB40780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.GuidedMenuCalloutData");
		return ptr;
	}

};


// Class KillstreakUINew.GuidedMenuCalloutsViewRedirector
// 0x5DB40580
class UGuidedMenuCalloutsViewRedirector : public UPUMG_ViewRedirecter
{
public:
	unsigned char                                      UnknownData00[0x5DB40580];                                // 0x0000(0x5DB40580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.GuidedMenuCalloutsViewRedirector");
		return ptr;
	}


	void SetNPEGuidedCalloutSeen();
	void HasSeenNPEGuidedCallout();
};


// Class KillstreakUINew.KSWidget
// 0x1080 (0x5ABF4980 - 0x5ABF3900)
class UKSWidget : public UPUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0x1080];                                    // 0x5ABF3900(0x1080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWidget");
		return ptr;
	}


	void UnbindFromViewportSizeChange();
	void TriggerGlobalInvalidate();
	void StopTickAnimation();
	void SkipToEndTickAnimation();
	void SetAllAnimationsPlaybackSpeed();
	void ResumeTickAnimation();
	void RemoveTickAnimation();
	void PlayTickAnimation();
	void PauseTickAnimation();
	void IsInKillCamPlayback();
	void InitializeTickAnimations();
	void GetTickAnimationInfo();
	void GetNormalOwningPlayer();
	void GetKillCamSpectatorController();
	void GetActivePlayerController();
	void BlueprintPrepareKillCamPlayback();
	void BlueprintFinishKillCamPlayback();
	void BindToViewportSizeChange();
	void AddTickAnimation();
};


// Class KillstreakUINew.KSAccoladeQueueWidget
// 0x2F4B800 (0x5DB40180 - 0x5ABF4980)
class UKSAccoladeQueueWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F4B800];                                 // 0x5ABF4980(0x2F4B800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAccoladeQueueWidget");
		return ptr;
	}


	void Queue();
	void OnAccoladeRemovedFromScreen();
	void GetNext();
	void ClearAccoladeQueue();
};


// Class KillstreakUINew.KSAcquisitionModal
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSAcquisitionModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAcquisitionModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowAcquisitionModal();
	void GetAcquisitionManager();
};


// Class KillstreakUINew.KSPawnWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPawnWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnWidget");
		return ptr;
	}


	void SetPlayerStateUIRelevanceChanged();
	void SetPawn();
	void PreClearPlayerState();
	void PreClearPawn();
	void PostSetPlayerState();
	void PostSetPawn();
	void OnBoundPlayerStateDestroyed();
	void OnBoundPawnDestroyed();
	void GetPlayerState();
	void GetPawnBase();
	void GetPawn();
};


// Class KillstreakUINew.KSPawnInventoryWidget
// 0x5B0EC340
class UKSPawnInventoryWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x5B0EC340];                                // 0x0000(0x5B0EC340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPawnInventoryWidget");
		return ptr;
	}


	void RemoveWidgetFor();
	void GetWidgetForWeaponComponent();
	void EquipmentRemoved();
	void EquipmentEndActive();
	void EquipmentBecomeActive();
	void EquipmentAdded();
	void CreateWeaponComponentWidgetFor();
};


// Class KillstreakUINew.KSActiveWeaponComponentWidget
// 0x2A551C0 (0x5DB41500 - 0x5B0EC340)
class UKSActiveWeaponComponentWidget : public UKSPawnInventoryWidget
{
public:
	unsigned char                                      UnknownData00[0x2A551C0];                                 // 0x5B0EC340(0x2A551C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSActiveWeaponComponentWidget");
		return ptr;
	}


	void PreClearActiveWeaponComponent();
	void PostSetActiveWeaponComponent();
	void GetActiveWeaponComponent();
};


// Class KillstreakUINew.KSActivity_ViewRedirector
// 0x5DAF48E0
class UKSActivity_ViewRedirector : public UPUMG_ViewRedirecter
{
public:
	unsigned char                                      UnknownData00[0x5DAF48E0];                                // 0x0000(0x5DAF48E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSActivity_ViewRedirector");
		return ptr;
	}


	void GetRelevantActivityManager();
};


// Class KillstreakUINew.KSAimAssistDebugWidget
// 0x2F52F00 (0x5DB43180 - 0x5ABF0280)
class UKSAimAssistDebugWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2F52F00];                                 // 0x5ABF0280(0x2F52F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAimAssistDebugWidget");
		return ptr;
	}


	void GetOwningKSPlayer();
	void GetAimAssistComponent();
};


// Class KillstreakUINew.KSMapIconWidgetBase
// 0x2F53980 (0x5DB43C00 - 0x5ABF0280)
class UKSMapIconWidgetBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2F53980];                                 // 0x5ABF0280(0x2F53980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapIconWidgetBase");
		return ptr;
	}


	void UpdateScreenRegion();
	void UpdateMetersAway();
	void UpdateMeetsHeightThreshold();
	void Update();
	void ShouldUpdateHover();
	void ShouldUpdate();
	void SetScreenRegion();
	void SetLifeSpan();
	void SetArrowAngle();
	void OnUnhoverTimerComplete();
	void OnHoverTimerComplete();
	void OnHoverStateChanged();
	void OnAssociatedActorDestroyed();
	void IsScreenRegion();
	void IsInCenteredScreenRect();
	void IsHovering();
	void GetWorldYaw();
	void GetWorldPosition();
	void GetHoverState();
	void GetEdgeArrowAngleBase();
	void GetDistanceToIcon();
	void GetArrowPosition();
};


// Class KillstreakUINew.KSAllyMarkerWidget
// 0x0980 (0x5DB44580 - 0x5DB43C00)
class UKSAllyMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x980];                                     // 0x5DB43C00(0x0980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAllyMarkerWidget");
		return ptr;
	}


	void View_SetSelfPingIcon();
	void View_SetRevivePercent();
	void View_SetNameText();
	void View_SetMode();
	void View_SetJob();
	void View_SetHealthPercent();
	void View_AcknowledgeSelfPing();
	void SetPlayerName();
	void IsOwningPlayer();
	void HandleUIRelevantChanged();
	void HandleRemoveSelfPing();
	void HandlePlayerDown();
	void HandlePlayerDeath();
	void HandleOnJobChanged();
	void HandleChangeSelfPing();
	void HandleBombStateChanged();
	void HandleAddSelfPing();
	void GetPingIconByType();
	void GetPingIconByMessage();
	void GetPingColorByType();
	void GetArrowPositionFromAngleBlueprint();
	void FindRowByType();
	void FindRowByMessage();
	void ChangeOwnerContentVisibility();
};


// Class KillstreakUINew.KSAlphaDisclaimer
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSAlphaDisclaimer : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAlphaDisclaimer");
		return ptr;
	}


	void LoadAlphaDisclaimerText();
};


// Class KillstreakUINew.KSWeaponWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSWeaponWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponWidget");
		return ptr;
	}


	void SetOwningWeapon();
	void PreClearWeapon();
	void PostSetWeapon();
	void OtherWeaponUpdate();
	void OnOwningWeaponDestroyed();
	void GetOwningWeapon();
};


// Class KillstreakUINew.KSAmmoWidget
// 0x5DB45F00
class UKSAmmoWidget : public UKSWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x5DB45F00];                                // 0x0000(0x5DB45F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged();
};


// Class KillstreakUINew.KSAnnouncementQueuedMessageWidget
// 0x2F51480 (0x5DB45E00 - 0x5ABF4980)
class UKSAnnouncementQueuedMessageWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F51480];                                 // 0x5ABF4980(0x2F51480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueuedMessageWidget");
		return ptr;
	}


	void DisplayAnnouncement();
};


// Class KillstreakUINew.KSAnnouncementQueueWidget
// 0x2F51200 (0x5DB45B80 - 0x5ABF4980)
class UKSAnnouncementQueueWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F51200];                                 // 0x5ABF4980(0x2F51200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAnnouncementQueueWidget");
		return ptr;
	}


	void Queue();
	void GetNext();
	void ClearAnnoucementQueue();
};


// Class KillstreakUINew.KSAsyncImage
// 0x29E4C00 (0x5DB45780 - 0x5B160B80)
class UKSAsyncImage : public UPUMG_AsyncImage
{
public:
	unsigned char                                      UnknownData00[0x29E4C00];                                 // 0x5B160B80(0x29E4C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSAsyncImage");
		return ptr;
	}


	void SetMaterialToUse();
	void SetBrushFromTextureOnItem();
	void SetBrushFromItemIcon();
};


// Class KillstreakUINew.KSChatDataFactory
// 0xFFFFFFFFA4E9DC00 (0x0000 - 0x5B162400)
class UKSChatDataFactory : public UPUMG_ChatDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSChatDataFactory");
		return ptr;
	}

};


// Class KillstreakUINew.KSComponentReticleWidgetBase
// 0x5C00 (0x5DB47100 - 0x5DB41500)
class UKSComponentReticleWidgetBase : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData00[0x5C00];                                    // 0x5DB41500(0x5C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSComponentReticleWidgetBase");
		return ptr;
	}


	void ViewedPawnInstigatedDamageNotify();
	void UpdateReticleOffset();
	void UpdateBlockedShotIcon();
	void CalculateReticleOffset();
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.ContextActionData
// 0x5DB46F80
class UContextActionData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB46F80];                                // 0x0000(0x5DB46F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.ContextActionData");
		return ptr;
	}


	void TriggerContextAction();
};


// Class KillstreakUINew.KSContextBarWidget
// 0x2F51B00 (0x5DB46480 - 0x5ABF4980)
class UKSContextBarWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F51B00];                                 // 0x5ABF4980(0x2F51B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextBarWidget");
		return ptr;
	}


	void UpdateContextActions();
	void SetPrompts();
	void SetPromptAction();
	void SetPrompt();
	void SetOverrideRoute();
	void SetActiveRoute();
	void RefreshContextBar();
	void OverrideKeyButtons();
	void GetCurrentContextRoute();
	void ClearPromptByKey();
	void ClearPrompt();
	void ClearOverrideRoute();
	void ClearAllPrompts();
};


// Class KillstreakUINew.KSContextualPingMarkerWidget
// 0x3800 (0x5DB47400 - 0x5DB43C00)
class UKSContextualPingMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x3800];                                    // 0x5DB43C00(0x3800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSContextualPingMarkerWidget");
		return ptr;
	}


	void SetupPingOnReady();
	void SetPingInfo();
	void OnPingUnhovered();
	void OnPingHovered();
	void OnInitializePing();
	void IsInvisiblePingType();
	void HandleOnContextualPingRemoved();
	void HandleOnContextualPingChanged();
	void GetPingLifeSpan();
	void GetPingIconByType();
	void GetPingIconByMessage();
	void GetPingColorByType();
	void FindRowByType();
	void FindRowByMessage();
};


// Class KillstreakUINew.KSCustomizationSelection
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSCustomizationSelection : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSCustomizationSelection");
		return ptr;
	}


	void SetWingSuitAsset();
	void OnVendorLoaded();
	void GetWingSuitItems();
	void GetWingSuitAsset();
	void GetWeaponSlotItems();
	void GetWeaponItem();
	void GetSkinItemsForJobItem();
	void GetRadialMenuItems();
	void GetItemsForSlot();
	void GetItemHelper();
};


// Class KillstreakUINew.KSDataSocialCategory
// 0x5DB4A180
class UKSDataSocialCategory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB4A180];                                // 0x0000(0x5DB4A180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataSocialCategory");
		return ptr;
	}


	void TryConsumeOpenOnUpdate();
	void SetOpenOnUpdate();
	void SetMessageText();
	void SetHeaderText();
	void Num();
	void IsProcessing();
	void GetPlayerList();
	void GetMessageText();
	void GetHeaderText();
	void BP_GetSectionValue();
};


// Class KillstreakUINew.KSDataSocialPlayer
// 0x5AB7A000
class UKSDataSocialPlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5AB7A000];                                // 0x0000(0x5AB7A000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataSocialPlayer");
		return ptr;
	}


	void KSSocialPlayerUpdate__DelegateSignature();
	void IsValid();
	void GetPlayerInfo();
};


// Class KillstreakUINew.KSDebugMenu
// 0x2F00FA0 (0x5DAF5920 - 0x5ABF4980)
class UKSDebugMenu : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F00FA0];                                 // 0x5ABF4980(0x2F00FA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDebugMenu");
		return ptr;
	}


	void GetSubmenu();
	void GetSortedBaseDebugCommands();
	void GetParamTypeForSubCommand();
};


// Class KillstreakUINew.KSEditableTextBox
// 0x84780 (0x5ABF5B80 - 0x5AB71400)
class UKSEditableTextBox : public UEditableTextBox
{
public:
	unsigned char                                      UnknownData00[0x84780];                                   // 0x5AB71400(0x84780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEditableTextBox");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedPawnWidget
// 0x0000
class UKSViewedPawnWidget : public UKSPawnWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSEliminationMessageWidget
// 0x0000
class UKSEliminationMessageWidget : public UKSViewedPawnWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEliminationMessageWidget");
		return ptr;
	}


	void ShowKillCardForTakenDown();
	void ShowKillCardForTakedown();
	void ShowAssistMessage();
	void OnPlayerDownReceived();
	void OnPlayerDeathReceived();
	void OnPlayerAssistReceived();
	void ClearMessages();
};


// Class KillstreakUINew.KSEMODataFactory
// 0x30CAA00 (0x5DB4AD00 - 0x5AA80300)
class UKSEMODataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x30CAA00];                                 // 0x5AA80300(0x30CAA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSEMODataFactory");
		return ptr;
	}


	void SetupTestData();
	void IsLocalPlayer();
	void HandlePlayerRewards();
	void HandleEOMDetail();
	void GetScoreboardStats();
	void GetPlayerRewardsSummary();
	void GetLastMatchQueueId();
	void FindRankedProgressionActivity();
	void FindPlayerProgressionActivity();
	void FindMiniBattlePassProgressionActivity();
	void ComputeEOMResults();
	void CalcPlayerProgression();
};


// Class KillstreakUINew.KSExpDisplayWidget
// 0x5DB4AB00
class UKSExpDisplayWidget : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x5DB4AB00];                                // 0x0000(0x5DB4AB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSExpDisplayWidget");
		return ptr;
	}


	void QueueExpDisplays();
	void NativeHandleDisplayExpInfo();
	void GetNextExpDisplay();
	void DisplayExpInfo();
};


// Class KillstreakUINew.KSFloatTickLerpWidgetBase
// 0x2F5A400 (0x5DB4A680 - 0x5ABF0280)
class UKSFloatTickLerpWidgetBase : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2F5A400];                                 // 0x5ABF0280(0x2F5A400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFloatTickLerpWidgetBase");
		return ptr;
	}


	void SetTargetValue();
	void SetLerpTime();
	void SetLerpPower();
	void IsLerping();
	void GetCurrentValue();
	void ForceCurrentValue();
	void DisplayForValue();
};


// Class KillstreakUINew.KSFriendDataFactory
// 0x1B80 (0x5AA82F00 - 0x5AA81380)
class UKSFriendDataFactory : public UPUMG_FriendDataFactory
{
public:
	unsigned char                                      UnknownData00[0x1B80];                                    // 0x5AA81380(0x1B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFriendDataFactory");
		return ptr;
	}


	void UIX_ShowExternalProfile();
	void OnEOMRewardsReceived();
	void KSUpdateRecentlyPlayedPlayers__DelegateSignature();
	void GetSuggestedFriends_Info();
	void GetPlayersPlayedWithThisClientSession_Info();
	void GetPendingFriends_Info();
	void GetOnlineFriends_Info();
	void GetFriends_Info();
	void GetFriendRequests_Info();
};


// Class KillstreakUINew.KSMapWidgetBase
// 0x2F00DC0 (0x5DAF5740 - 0x5ABF4980)
class UKSMapWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F00DC0];                                 // 0x5ABF4980(0x2F00DC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMapWidgetBase");
		return ptr;
	}


	void UpdateIcon();
	void ToIconRenderCoords();
	void ToIconRenderAngle();
	void TickCachedTransform();
	void SetScrambleState();
	void OnScrambleStateChanged();
	void OnReceiveDisplayWidgetInfo();
	void OnGameStateSet();
	void IsOnMap();
	void GetDistanceToIcon();
	void GetCachedViewedPawn();
	void GetCachedTransform();
	void CreateNewIconWidget();
};


// Class KillstreakUINew.KSFullMapWidget
// 0x56040 (0x5DB4B780 - 0x5DAF5740)
class UKSFullMapWidget : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x56040];                                   // 0x5DAF5740(0x56040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSFullMapWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSHUDCommon
// 0x29E4D00 (0x5DB4DE00 - 0x5B169100)
class AKSHUDCommon : public APUMG_HUD
{
public:
	unsigned char                                      UnknownData00[0x29E4D00];                                 // 0x5B169100(0x29E4D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHUDCommon");
		return ptr;
	}


	void TestChallengeNotification();
	void ShowErrorPopup();
	void ShouldShowCrossplayIconForPlayerState();
	void ShouldShowCrossplayIconForPlayer();
	void SetPreferredSiteId();
	void PrintToLog();
	void OpenTextChatToPlayer();
	void LogErrorMessage();
	void IsSamePortalAsLocalPlayer();
	void HandleOpenTextChat();
	void HandleControllerDisconnect();
	void GetUISessionManager();
	void GetSiteList();
	void GetSettingsDataFactory();
	void GetPreferredSiteId();
	void GetPlayerDataFactory();
	void GetPartyDataFactory();
	void GetNPEDataFactory();
	void GetMercManager();
	void GetLoginDataFactory();
	void GetLoadoutDataFactory();
	void GetItemHelper();
	void GetFont();
	void GetFocusableWidgetContainers();
	void GetContextBarWidget();
	void GetColor();
	void GetChatDataFactory();
	void GetAcquisitionManager();
	void DisplayWatermark();
	void ApplySafeFrameScale();
};


// Class KillstreakUINew.KSGameHUDNew
// 0xFFFFFFFFFFFA7620 (0x5DAF5420 - 0x5DB4DE00)
class AKSGameHUDNew : public AKSHUDCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameHUDNew");
		return ptr;
	}


	void UIX_ReturnLobby();
	void UIX_MutePlayer();
	void ToggleAimAssistDebug();
	void SetHUDVisible();
	void ReturnToHome();
	void OnViewedPlayerStateModRemoved();
	void OnViewedPlayerStateModAdded();
	void OnViewedPawnChanged();
	void OnToggleHUD();
	void OnAssetDataTableManagerChanged();
	void NetworkLagStateChanged();
	void IsPlayerMuted();
	void HandleLoginStateChange();
	void HandleFubar();
	void GetHUDStateTracker();
};


// Class KillstreakUINew.KSGameInfoOverlayBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSGameInfoOverlayBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGameInfoOverlayBase");
		return ptr;
	}


	void HandlePlayerStateReady();
};


// Class KillstreakUINew.KSGamepadPromptWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSGamepadPromptWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGamepadPromptWidget");
		return ptr;
	}


	void SetContext();
	void PushContext();
	void PopContext();
	void ClearAllContext();
	void ApplyContext();
};


// Class KillstreakUINew.KSHealthWidget
// 0x5DB4FE80
class UKSHealthWidget : public UKSPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x5DB4FE80];                                // 0x0000(0x5DB4FE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHealthWidget");
		return ptr;
	}


	void OverhealChangeFromChar();
	void OnOverhealChanged();
	void OnHealthChanged();
	void OnArmorChanged();
	void HealthChangeFromChar();
	void HandlePawnOverhealChange();
	void HandlePawnHealthChange();
};


// Class KillstreakUINew.KSHUDStateTracker
// 0x5DB4FB80
class UKSHUDStateTracker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB4FB80];                                // 0x0000(0x5DB4FB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSHUDStateTracker");
		return ptr;
	}


	void PollMatchPhase();
	void HandleUpdatedMatchPhase();
	void HandleGameStateBeginPlay();
};


// Class KillstreakUINew.KSInfoActorWidgetInterface
// 0x0000
class UKSInfoActorWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInfoActorWidgetInterface");
		return ptr;
	}


	void SetInfoActor();
};


// Class KillstreakUINew.KSInputManager
// 0xFFFFFFFFA4F1BAC0 (0x0000 - 0x5B0E4540)
class UKSInputManager : public UPUMG_InputManager
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInputManager");
		return ptr;
	}

};


// Class KillstreakUINew.KSInspectPlayerInterface
// 0x0000
class UKSInspectPlayerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSInspectPlayerInterface");
		return ptr;
	}


	void UnbindEventFromInspectPlayerChanged();
	void GetInspectPlayerState();
	void BindEventToInspectPlayerChanged();
};


// Class KillstreakUINew.KSJobSelectionWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSJobSelectionWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSJobSelectionWidget");
		return ptr;
	}


	void RefreshJobItems();
	void OnJobVendorLoaded();
	void GetJobStoreItems();
	void GetItemHelper();
};


// Class KillstreakUINew.KSKevinTest
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSKevinTest : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSKevinTest");
		return ptr;
	}


	void RequestJobItems();
	void GetJobStoreItems();
	void GetItemHelper();
};


// Class KillstreakUINew.KSKillCardWidget
// 0x2F6C300 (0x5DB60C80 - 0x5ABF4980)
class UKSKillCardWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F6C300];                                 // 0x5ABF4980(0x2F6C300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSKillCardWidget");
		return ptr;
	}


	void ShowPlayerAndMessage();
	void ClearMessage();
};


// Class KillstreakUINew.KSLobbyHUDNew
// 0x15100 (0x5DB62F00 - 0x5DB4DE00)
class AKSLobbyHUDNew : public AKSHUDCommon
{
public:
	unsigned char                                      UnknownData00[0x15100];                                   // 0x5DB4DE00(0x15100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyHUDNew");
		return ptr;
	}


	void UpdateLobbySkinToEquippedSkin();
	void UIX_MutePlayer();
	void TransitionCamera();
	void ToggleDisablePartyLobbyCharacters();
	void TestPostMatchLobby();
	void ShowPopupConfirmation();
	void SetNewLobbyAnimState();
	void ResetLobbyCharactersByIndex();
	void ResetLobbyCharacters();
	void PlayLoopingLevelSequence();
	void OnStoreVendorsLoaded();
	void OnNotEnoughCurreny();
	void NotifyViewStateChange();
	void IsPlayerMuted();
	void HandleSpecificPartyIdDataUpdated();
	void HandleSpecificPartyDataUpdated();
	void HandleSpecificPartyDataAdded();
	void HandleReturnFromBattleLevelSeqStopped();
	void HandlePlayerLoadoutsUpdated();
	void HandlePartyMemberDataUpdated();
	void HandlePartyDataUpdated();
	void HandleMatchStatusUpdated();
	void HandleLoginUserChange();
	void HandleLoginStateChange();
	void HandleExitToGameLevelSeqStopped();
	void HandleDenyPartyInvitation();
	void HandleAcceptPartyInvitation();
	void GetPlayerWhoDataFactory();
	void GetPlayerQueryDataFactory();
	void GetLobbyWidget();
	void GetLobbyCharacterByPosition();
	void GetKSQueueDataFactory();
	void GetJsonDataFactory();
	void GetFriendDataFactory();
	void GetEMODataFactory();
	void GetDefaultPlayerAccountItem();
	void ForceEulaAccept();
	void CreateInitialPlayerLoadout();
	void CheckForVoucherRedemption();
	void CheckForExistingPenaltyTime();
	void CancelExitToGameLevelAnimStoppedHandling();
};


// Class KillstreakUINew.KSLobbyWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSLobbyWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLobbyWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginExistingBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSLoginExistingBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginExistingBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheckViewRedirector
// 0x0000
class UKSLoginInventoryCheckViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginInventoryCheckViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginInventoryCheck
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSLoginInventoryCheck : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginInventoryCheck");
		return ptr;
	}


	void CancelLogin();
};


// Class KillstreakUINew.KSLoginProcessRewardsViewRedirector
// 0x0000
class UKSLoginProcessRewardsViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginProcessRewardsViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSLoginProcessRewards
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSLoginProcessRewards : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLoginProcessRewards");
		return ptr;
	}


	void ProcessAccountRewards();
};


// Class KillstreakUINew.KSLootSiteIconWidget
// 0x1F280 (0x5DB62E80 - 0x5DB43C00)
class UKSLootSiteIconWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x1F280];                                   // 0x5DB43C00(0x1F280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteIconWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLootSiteMarkerWidget
// 0x1F080 (0x5DB62C80 - 0x5DB43C00)
class UKSLootSiteMarkerWidget : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x1F080];                                   // 0x5DB43C00(0x1F080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLootSiteMarkerWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSLowAmmoAlertWidget
// 0x21500 (0x5DB62A00 - 0x5DB41500)
class UKSLowAmmoAlertWidget : public UKSActiveWeaponComponentWidget
{
public:
	unsigned char                                      UnknownData00[0x21500];                                   // 0x5DB41500(0x21500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSLowAmmoAlertWidget");
		return ptr;
	}


	void GetAmmoState();
	void CalcAmmoState();
	void AmmoStateChanged();
};


// Class KillstreakUINew.KSMarkerDisplayBase
// 0xFFFFFFFFA250A8C0 (0x0000 - 0x5DAF5740)
class UKSMarkerDisplayBase : public UKSMapWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMarkerDisplayBase");
		return ptr;
	}


	void GetScreenPositionForMarker();
};


// Class KillstreakUINew.KSDataMassInviteBase
// 0x5AB79580
class UKSDataMassInviteBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5AB79580];                                // 0x0000(0x5AB79580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataMassInviteBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSDataIndividualInviteSetup
// 0x1B80 (0x5AB7B100 - 0x5AB79580)
class UKSDataIndividualInviteSetup : public UKSDataMassInviteBase
{
public:
	unsigned char                                      UnknownData00[0x1B80];                                    // 0x5AB79580(0x1B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataIndividualInviteSetup");
		return ptr;
	}


	void SetCallbacks();
	void KSInviteSelect__DelegateSignature();
	void KSInviteGetIsSelected__DelegateSignature();
};


// Class KillstreakUINew.KSDataBatchInviteSetup
// 0x1880 (0x5AB7AE00 - 0x5AB79580)
class UKSDataBatchInviteSetup : public UKSDataMassInviteBase
{
public:
	unsigned char                                      UnknownData00[0x1880];                                    // 0x5AB79580(0x1880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSDataBatchInviteSetup");
		return ptr;
	}


	void SetCallbacks();
	void KSBatchSelect__DelegateSignature();
};


// Class KillstreakUINew.KSMassInviteModal
// 0xFFFFFFFFF6049880 (0x50C3E200 - 0x5ABF4980)
class UKSMassInviteModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMassInviteModal");
		return ptr;
	}


	void UpdateRouteData();
	void SelectPlayer();
	void RequestFriends();
	void KSInviteReceivePlayers__DelegateSignature();
	void GetShouldSelect();
	void CloseScreen();
};


// Class KillstreakUINew.KSMatchInvitationModal
// 0x2F6D880 (0x5DB62200 - 0x5ABF4980)
class UKSMatchInvitationModal : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F6D880];                                 // 0x5ABF4980(0x2F6D880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMatchInvitationModal");
		return ptr;
	}


	void ShowInvitation();
	void ShowError();
	void OnInvitationExpired();
	void HandleReceivePlayerName();
	void GetQueueDataFactory();
	void GetInvitationTotalTimeToExpire();
	void GetInvitationTimeRemaining();
	void DeclineInvite();
	void CloseScreen();
	void AcceptInvite();
};


// Class KillstreakUINew.KSMatchResult
// 0x2F6F180 (0x5DB63B00 - 0x5ABF4980)
class UKSMatchResult : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F6F180];                                 // 0x5ABF4980(0x2F6F180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMatchResult");
		return ptr;
	}


	void UpdateRoundBaseScore();
	void UpdateResultStatus();
	void ProcessResultAnnoucement();
	void HandleResultReceived();
	void HandleEndOfMatch();
	void GetTeamNames();
	void GetSurrenderText();
};


// Class KillstreakUINew.KSMediaPlayerWidget
// 0x2F6EE80 (0x5DB63800 - 0x5ABF4980)
class UKSMediaPlayerWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F6EE80];                                 // 0x5ABF4980(0x2F6EE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMediaPlayerWidget");
		return ptr;
	}


	void UIX_SkipEntry();
	void OnShouldShowPromptChanged();
	void OnReadyForPlayback();
	void OnEndLoadingPlaylist();
	void OnBeginLoadingPlaylist();
	void IsCurrentEntrySkippable();
};


// Class KillstreakUINew.KSMercManager
// 0x5DB64B80
class UKSMercManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB64B80];                                // 0x0000(0x5DB64B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMercManager");
		return ptr;
	}


	void Uninitialize();
	void IsItemEquippedInSlot();
	void IsItemEquippedInAnySlot();
	void Initialize();
	void GetLoadoutDataFactory();
	void GetEquippedCosmeticItemBySlot();
	void EquipCosmeticItemToSlot();
	void ClearCosmeticItemOnSlot();
};


// Class KillstreakUINew.KSMinimapWidgetBase
// 0x6F040 (0x5DB64780 - 0x5DAF5740)
class UKSMinimapWidgetBase : public UKSMapWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x6F040];                                   // 0x5DAF5740(0x6F040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSMinimapWidgetBase");
		return ptr;
	}


	void UpdateMapMaterialTransform();
};


// Class KillstreakUINew.KSModelViewer
// 0x0000
class UKSModelViewer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModelViewer");
		return ptr;
	}


	void ViewModelByName();
	void ViewModelAttachment();
	void ViewModel();
	void UnbindControllerFromSpawner();
	void UnbindAllControllersFromSpawners();
	void SetAnimation();
	void HideModelAttachment();
	void ClearModelAttachments();
	void ClearModel();
	void BindDelForWeaponModelSet();
	void BindControllerToSpawner();
};


// Class KillstreakUINew.KSModWidget_DetectEnemy
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSModWidget_DetectEnemy : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidget_DetectEnemy");
		return ptr;
	}


	void OnDetectChanged();
	void GetIconBox();
};


// Class KillstreakUINew.KSModWidgetInterface
// 0x0000
class UKSModWidgetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSModWidgetInterface");
		return ptr;
	}


	void RemoveModInstance();
	void AddModInstance();
};


// Class KillstreakUINew.KSNewsRotatorData
// 0x5DB67380
class UKSNewsRotatorData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB67380];                                // 0x0000(0x5DB67380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorData");
		return ptr;
	}

};


// Class KillstreakUINew.KSNewsRotatorWidget
// 0x2F72800 (0x5DB67180 - 0x5ABF4980)
class UKSNewsRotatorWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F72800];                                 // 0x5ABF4980(0x2F72800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNewsRotatorWidget");
		return ptr;
	}


	void OnJsonChanged();
	void GetPanelData();
	void GetJsonDataFactory();
};


// Class KillstreakUINew.KSNPEDataFactory
// 0xFFFFFFFFA557FD00 (0x0000 - 0x5AA80300)
class UKSNPEDataFactory : public UPUMG_DataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSNPEDataFactory");
		return ptr;
	}


	void UIX_ClaimTutorialActivity();
	void UIX_ClaimRegionSelectedActivity();
	void SkipTutorial();
	void QueueTutorial();
	void HasClaimedActivity();
	void GetQueueDataFactory();
	void ClaimActivity();
};


// Class KillstreakUINew.KSPartyDataFactory
// 0xFFFFFFFFA4E94480 (0x0000 - 0x5B16BB80)
class UKSPartyDataFactory : public UPUMG_PartyDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyDataFactory");
		return ptr;
	}


	void GetPartyMinimumLevel();
	void BroadcastPartyInvitationError();
};


// Class KillstreakUINew.KSPartyManagerWidgetBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPartyManagerWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPartyManagerWidgetBase");
		return ptr;
	}


	void RefreshFromPartyData();
	void HandlePartyMemberUpdateByName();
	void HandlePartyMemberUpdateByInfo();
	void HandlePartyMemberUpdateById();
	void HandlePartyMemberDataUpdated();
	void GetSuggestedInvite();
	void GetPartyDataFactory();
	void ApplyPartyData();
};


// Class KillstreakUINew.KSPerkTreeBase
// 0x2F73880 (0x5DB68200 - 0x5ABF4980)
class UKSPerkTreeBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F73880];                                 // 0x5ABF4980(0x2F73880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeBase");
		return ptr;
	}


	void SetCursorLerping();
	void RefreshEdge();
	void InitializeNodes();
	void HandleTreeNodeSelected();
	void HandleTreeNodeHovered();
	void GetHoverCursor();
	void GetDefaultFocusNode();
	void BindNode();
};


// Class KillstreakUINew.KSPerkTreeEdgeBase
// 0x2F73580 (0x5DB67F00 - 0x5ABF4980)
class UKSPerkTreeEdgeBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F73580];                                 // 0x5ABF4980(0x2F73580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeEdgeBase");
		return ptr;
	}


	void SetViewByState();
};


// Class KillstreakUINew.KSPerkTreeNodeBase
// 0x2F73180 (0x5DB67B00 - 0x5ABF4980)
class UKSPerkTreeNodeBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F73180];                                 // 0x5ABF4980(0x2F73180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPerkTreeNodeBase");
		return ptr;
	}


	void SetNodeState();
	void RefreshView();
	void GetNodeState();
};


// Class KillstreakUINew.KSViewedActiveWeaponWidget
// 0x0000
class UKSViewedActiveWeaponWidget : public UKSWeaponWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerAmmoLoaderWidget
// 0x5DAF8DA0
class UKSPlayerAmmoLoaderWidget : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x5DAF8DA0];                                // 0x0000(0x5DAF8DA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerAmmoLoaderWidget");
		return ptr;
	}


	void SetActiveAmmoWidget();
	void GetActiveAmmoWidget();
	void ClearActiveAmmoWidget();
};


// Class KillstreakUINew.KSPlayerCardModuleBase
// 0x2F72B80 (0x5DB67500 - 0x5ABF4980)
class UKSPlayerCardModuleBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F72B80];                                 // 0x5ABF4980(0x2F72B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerCardModuleBase");
		return ptr;
	}


	void View_SetPlayer();
	void OnPlayerUpdate();
	void HandlePlayerDataUpdated();
};


// Class KillstreakUINew.KSPlayerCosmeticWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPlayerCosmeticWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerCosmeticWidget");
		return ptr;
	}


	void GetTitleItems();
	void GetItemsForSlot();
	void GetItemHelper();
	void GetBorderItems();
	void GetBannerItems();
	void GetAvatarItems();
};


// Class KillstreakUINew.KSPlayerDataFactory
// 0x29FB300 (0x5DB68680 - 0x5B16D380)
class UKSPlayerDataFactory : public UPUMG_PlayerDataFactory
{
public:
	unsigned char                                      UnknownData00[0x29FB300];                                 // 0x5B16D380(0x29FB300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerDataFactory");
		return ptr;
	}


	void ShouldDisplayRankedLevel();
	void HandlePlayerRankIncremented();
	void HandlePlayerRankChanged();
	void HandlePlayerLevelIncremented();
	void HandlePlayerLevelChanged();
	void GetRogueBucksCount();
	void GetReputationCount();
	void GetRankedLevel();
	void GetPlayerLevelPercent();
	void GetPlayerLevel();
	void GetPlayerId();
	void GetPlayerBannerIndex();
};


// Class KillstreakUINew.KSPlayerHealthSegmentBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPlayerHealthSegmentBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthSegmentBase");
		return ptr;
	}


	void View_SetResidualValue();
	void View_SetResidualColor();
	void View_SetMainValue();
	void View_SetMainColor();
	void View_PlayEmptiedPulse();
	void View_PlayDamagePulse();
};


// Class KillstreakUINew.KSViewedTargetHealthWidget
// 0xFFFFFFFFA24B0180 (0x0000 - 0x5DB4FE80)
class UKSViewedTargetHealthWidget : public UKSHealthWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedTargetHealthWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSPlayerHealthWidgetBase
// 0x5DB69E80
class UKSPlayerHealthWidgetBase : public UKSViewedTargetHealthWidget
{
public:
	unsigned char                                      UnknownData00[0x5DB69E80];                                // 0x0000(0x5DB69E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerHealthWidgetBase");
		return ptr;
	}


	void View_SetResidualPercent();
	void View_SetResidualMode();
	void View_SetResidualAlpha();
	void View_SetHealthTextValue();
	void View_SetHealthPercent();
	void View_SetHealthMode();
	void View_PlayDamagePulse();
	void View_OnDeathStateChanged();
	void OnJobChanged();
	void OnHealthMeterStateChanged();
	void OnHealthDecreased();
	void HandlePlayerDownedChanged();
	void HandleJobChanged();
	void HandleDeathStateChanged();
};


// Class KillstreakUINew.KSPlayerInfo
// 0x29FDB00 (0x5DB6AB00 - 0x5B16D000)
class UKSPlayerInfo : public UPUMG_PlayerInfo
{
public:
	unsigned char                                      UnknownData00[0x29FDB00];                                 // 0x5B16D000(0x29FDB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerInfo");
		return ptr;
	}


	void ViewExternalProfile();
	void ToggleDND();
	void ShouldShowViewGamercardForPlayer();
	void ShouldShowViewExternalProfile();
	void ShouldShowInviteToPartyForPlayer();
	void ShouldShowCrossplayIconForPlayer();
	void IsSuggestedFriend();
	void IsSamePortalAsLocalPlayer();
	void IsRoCoFriend();
	void IsRequestingFriend();
	void IsPendingFriend();
	void IsOnline();
	void IsMuted();
	void IsInQueue();
	void IsInMatch();
	void IsInLocalParty();
	void IsInLobby();
	void IsFriend();
	void IsDND();
	void InviteToParty();
	void HasPortalRelationship();
	void HasPortalInfoForClientPortal();
	void HasHRRelationship();
	void GetStatusMessage();
	void GetRichPresenceText();
	void GetPlayerSelectedInputType();
	void GetPlayersDisplayedSkin();
	void GetPlayerPlatformType();
	void GetPlayerOnlineStatus();
	void GetPlayerLevel();
	void GetPlayerAliases();
	void GetEquippedAccountItem();
	void CanBeSpectated();
	void CanBeChallenged();
};


// Class KillstreakUINew.JobSelectionEntryDetails
// 0x5DB6A780
class UJobSelectionEntryDetails : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB6A780];                                // 0x0000(0x5DB6A780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.JobSelectionEntryDetails");
		return ptr;
	}


	void IsSelf();
	void IsOwned();
	void GetJobName();
	void GetJobItem();
};


// Class KillstreakUINew.KSPlayerJobSelectWidgetBase
// 0x2F77200 (0x5DB6BB80 - 0x5ABF4980)
class UKSPlayerJobSelectWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F77200];                                 // 0x5ABF4980(0x2F77200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerJobSelectWidgetBase");
		return ptr;
	}


	void UIX_RequestJobSelect();
	void OnResetSelection();
	void OnPlayerSelectionStateChanged();
	void OnJobEntryChanged();
	void OnJobEntriesReady();
	void HandleJobSelectionManagerReady();
	void HandleJobSelectionInitialized();
	void HandleJobEntryStateChangedForEnemies();
	void HandleJobEntryStateChanged();
	void HandleJobEntryAddedForEnemies();
	void HandleJobEntryAdded();
	void HandleJobEntryAcknowledge();
	void GetJobSelectionComponent();
	void GetJobItemById();
	void BindListenersForTeam();
};


// Class KillstreakUINew.KSPlayerQueryDataFactory
// 0x30ED280 (0x5DB6D580 - 0x5AA80300)
class UKSPlayerQueryDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x30ED280];                                 // 0x5AA80300(0x30ED280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerQueryDataFactory");
		return ptr;
	}


	void QueryPlayersByNameWithProfiles();
	void QueryPlayersByName();
	void OnTimeoutCheck();
	void GetQueriedName();
	void GetPlayerQueryErrorMessage();
	void CancelQuery();
};


// Class KillstreakUINew.KSPlayerShopWidgetBase
// 0x2F78580 (0x5DB6CF00 - 0x5ABF4980)
class UKSPlayerShopWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F78580];                                 // 0x5ABF4980(0x2F78580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerShopWidgetBase");
		return ptr;
	}


	void TriggerDisplayUpdate();
	void ShopItemChanged();
	void SetShopState();
	void SetShopContent();
	void SetPromptShow();
	void SetCashValue();
	void PurchaseAcknowledge();
	void HandleTeamsFlipped();
	void HandleShopOpened();
	void HandleShopItemChanged();
	void HandleShopClosed();
	void HandleShopAvailabilityChanged();
	void HandlePurchaseAcknowledged();
	void HandleCashChanged();
	void CheckForValidPlayerState();
};


// Class KillstreakUINew.KSPlayerWhoDataFactory
// 0xFFFFFFFFA4E93280 (0x0000 - 0x5B16CD80)
class UKSPlayerWhoDataFactory : public UPUMG_PlayerWhoDataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPlayerWhoDataFactory");
		return ptr;
	}


	void ClearSearchResults();
};


// Class KillstreakUINew.KSPointObjectiveMarkerWidget
// 0xFFFFFFFFA24BC400 (0x0000 - 0x5DB43C00)
class UKSPointObjectiveMarkerWidget : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPointObjectiveMarkerWidget");
		return ptr;
	}


	void ViewSetCaptureProgress();
	void ViewApplyTimerValue();
	void ShouldHideObjectiveIcon();
	void SetView();
	void SetTeamColorsForState();
	void SetTeamColorForState();
	void OnControlTeamScoreUpdated();
	void IsInTimerState();
	void IsInProgressState();
	void IsInMatchTimerState();
	void IsInLockedState();
	void IsInCountdownState();
	void IsInContestedState();
	void IsInCapturedState();
	void HandlePhaseChanged();
	void HandleControlTeamScoreUpdated();
	void HandleBombStateChanged();
	void GetTeamColorForState();
	void GetCurrentViewState();
	void GetAssociatedObjective();
	void DoesAttackingTeamExist();
	void ControlPointStateUpdated();
};


// Class KillstreakUINew.KSPortalOffersWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPortalOffersWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPortalOffersWidget");
		return ptr;
	}


	void GetPortalOfferItems();
	void GetItemHelper();
};


// Class KillstreakUINew.KSPurchaseConfirmationWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPurchaseConfirmationWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPurchaseConfirmationWidget");
		return ptr;
	}


	void PromptAlreadyPurchasing();
	void GetStoreItemHelper();
	void GetBundleContents();
};


// Class KillstreakUINew.KSPurchaseModal
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSPurchaseModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSPurchaseModal");
		return ptr;
	}


	void SetupBindings();
	void HandleShowPurchaseModal();
	void GetStoreItemHelper();
};


// Class KillstreakUINew.KSQueueDataFactory
// 0x2A12380 (0x5DB81080 - 0x5B16ED00)
class UKSQueueDataFactory : public UPUMG_QueueDataFactory
{
public:
	unsigned char                                      UnknownData00[0x2A12380];                                 // 0x5B16ED00(0x2A12380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueDataFactory");
		return ptr;
	}


	void SetSelectedQueueId();
	void SetPreviousCustomMatchMemberIds();
	void SetPendingMapForCustomQueue();
	void RetryQueuingForSheltered();
	void OnPartyMemberUpdate();
	void OnPartyMemberEvent();
	void OnPartyEvent();
	void OnInputStateChanged();
	void JoinSelectedQueue();
	void IsTutorialQueue();
	void HandleShelteredMMTimeout();
	void HandleShelteredMMSwitchFinish();
	void HandleShelteredMMQueueSwitch();
	void GetSelectedShelteredQueueId();
	void GetSelectedQueueId();
	void GetQueueInfoById();
	void GetPendingCustomMatchMapId();
	void GetPenaltyTime();
	void GetMapRotationsByQueueId();
	void GetMapInfoById();
	void GetCustomQueues();
	void GetCurrentCustomMatchInfo();
	void FormatQueueJoinErrorMessage();
	void DetermineQueueIdForShelteredMM();
	void CheckQueueJoinableById();
	void CheckQueueJoinable();
};


// Class KillstreakUINew.KSQueuedMessageWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSQueuedMessageWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueuedMessageWidget");
		return ptr;
	}


	void QueueMessage();
	void GetNextMessage();
};


// Class KillstreakUINew.KSQueueWidgetBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSQueueWidgetBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueWidgetBase");
		return ptr;
	}


	void UpdateQueuePermissions();
	void UIX_AttemptRejoinMatch();
	void UIX_AttemptLeaveMatch();
	void UIX_AttemptJoinSelectedQueue();
	void UIX_AttemptCancelQueue();
	void SetupReadyForQueueing();
	void SetupBindings();
	void SetCurrentlySelectedQueue();
	void ReceiveMatchStatusUpdate();
	void OnSelectedQueueUpdate();
	void OnQueueStateUpdate();
	void OnQueuePermissionUpdate();
	void OnControlQueuePermissionUpdate();
	void IsValidQueue();
	void HandleSelectedQueueIdSet();
	void HandlePartyMemberRemoved();
	void HandlePartyMemberDataUpdated();
	void HandleMatchStatusUpdate();
	void HandleConfirmLeaveQueue();
	void GetQueueSections();
	void GetQueues();
	void GetQueuePermissions();
	void GetQueueInfoById();
	void GetQueueDataFactory();
	void GetPartyDataFactory();
	void GetCurrentlySelectedQueue();
};


// Class KillstreakUINew.KSQueueTimerWidgetBase
// 0x0000
class UKSQueueTimerWidgetBase : public UKSQueueWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQueueTimerWidgetBase");
		return ptr;
	}


	void OnUpdateQueueTimerState();
	void OnUpdateQueueTime();
	void GetQueueTime_TotalSecs();
	void GetQueueTime_PartSecs();
	void GetQueueTime_PartMins();
	void GetQueueTime_PartHours();
	void GetCurrentTimerState();
};


// Class KillstreakUINew.KSQuickPlay
// 0x2F8E300 (0x5DB82C80 - 0x5ABF4980)
class UKSQuickPlay : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F8E300];                                 // 0x5ABF4980(0x2F8E300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQuickPlay");
		return ptr;
	}


	void UpdateQueuePermissions();
	void UIX_AttemptJoinSelectedQueue();
	void UIX_AttemptCancelQueue();
	void SortQueues();
	void SetupReadyForQueueing();
	void SetupBindings();
	void SetDefaultSelectedQueue();
	void SetCurrentlySelectedQueue();
	void ReceiveMatchStatusUpdate();
	void OnQueuePermissionChanged();
	void OnControlQueuePermissionChanged();
	void IsValidQueue();
	void HandlePartyMemberDataUpdated();
	void GetQueueSections();
	void GetQueues();
	void GetQueueInfoById();
	void GetQueueDataFactory();
	void GetPartyDataFactory();
	void GetDefaultSelectedQueueId();
	void GetCurrentlySelectedQueue();
	void CheckForDirtyQueues();
	void CheckForCustomQueues();
};


// Class KillstreakUINew.KSQuickPlayWidget
// 0x0000
class UKSQuickPlayWidget : public UKSQueueWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSQuickPlayWidget");
		return ptr;
	}


	void UpdateState();
	void SetIsPendingQueueUpdate();
	void OnUpdateQuickPlayState();
	void OnUpdateQuickPlayCanPlay();
	void OnUpdateQueueTimeElapsed();
	void OnUpdatePenaltyTimeLeft();
	void IsPendingQueueUpdate();
	void GetSelectedQueueState();
	void GetGameModeDisplayName();
	void GetCurrentQuickPlayState();
};


// Class KillstreakUINew.KSRadialSelectionWidgetBase
// 0x2F06720 (0x5DAFB0A0 - 0x5ABF4980)
class UKSRadialSelectionWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F06720];                                 // 0x5ABF4980(0x2F06720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRadialSelectionWidgetBase");
		return ptr;
	}


	void UpdateLastSelectedIndex();
	void UpdateLastHoveredIndex();
	void TraceSelectionCursor();
	void ShowSelector();
	void SetupForRadialWheelMode();
	void RadialOptionUnhover();
	void RadialOptionSelected();
	void RadialOptionHovered();
	void OpenSpecifiedRadialMenu();
	void OnRadialMenuUseLastSelection();
	void OnRadialMenuReleased();
	void OnRadialMenuPressed();
	void OnRadialMenuForceClosed();
	void OnCycleMenusRight();
	void OnCycleMenusLeft();
	void OnCycledMenus();
	void IsSelectorVisible();
	void IsSelectorActive();
	void IsCycleBetweenMenusEnabled();
	void InitializeTracking();
	void HideSelector();
	void HandleInputStateChanged();
	void GetWheelSize();
	void GetPingIconByType();
	void GetPingIconByMessage();
	void GetPingColorByType();
	void GetOptionsCount();
	void GetLastSelectedIndexForCosmeticSlot();
	void GetLastHoveredIndex();
	void GetInitialRadialMenu();
	void GetGameplayTagsForCosmeticSlot();
	void GetDeadZone();
	void GetContiguousCosmeticSlotMenu();
	void GetActiveCosmeticSlotMenu();
	void FindRowByType();
	void FindRowByMessage();
	void DummyFunction();
	void ChangeToNewRadialMenu();
	void ButtonClicked();
	void BackPressed();
	void ActivateRadialMenuItem();
};


// Class KillstreakUINew.KSRankedUnlockedViewRedirector
// 0x0000
class UKSRankedUnlockedViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRankedUnlockedViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSRedeemCodeScreenBase
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSRedeemCodeScreenBase : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRedeemCodeScreenBase");
		return ptr;
	}


	void RedeemCode();
	void OnRedeemCodeSubmit();
	void OnRedeemCodeResult();
	void IsPendingServerReply();
};


// Class KillstreakUINew.KSRegionSelectModalViewRedirector
// 0x0000
class UKSRegionSelectModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRegionSelectModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSRegionSelectModal
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSRegionSelectModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRegionSelectModal");
		return ptr;
	}

};


// Class KillstreakUINew.KSReticleWidgetBase
// 0x5DB84300
class UKSReticleWidgetBase : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x5DB84300];                                // 0x0000(0x5DB84300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSReticleWidgetBase");
		return ptr;
	}


	void UpdateReticleOffset();
	void UpdateBlockedShotIcon();
	void CalculateReticleOffset();
	void CalculateBlockedShotIcon();
};


// Class KillstreakUINew.KSRogueDetailsWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSRogueDetailsWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSRogueDetailsWidget");
		return ptr;
	}


	void GetStoreItemForJob();
	void GetItemHelper();
};


// Class KillstreakUINew.KSScreenLogWidget
// 0x2F91800 (0x5DB86180 - 0x5ABF4980)
class UKSScreenLogWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F91800];                                 // 0x5ABF4980(0x2F91800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScreenLogWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSScreenMarkerWidgetBase
// 0x42480 (0x5DB86080 - 0x5DB43C00)
class UKSScreenMarkerWidgetBase : public UKSMapIconWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x42480];                                   // 0x5DB43C00(0x42480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScreenMarkerWidgetBase");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollBox
// 0xFFFFFFFFA2479080 (0x0000 - 0x5DB86F80)
class UKSScrollBox : public UScrollBox
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScrollBox");
		return ptr;
	}


	void GetViewFraction();
};


// Class KillstreakUINew.KSSettingsContainer
// 0x2F06180 (0x5DAFAB00 - 0x5ABF4980)
class UKSSettingsContainer : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F06180];                                 // 0x5ABF4980(0x2F06180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsContainer");
		return ptr;
	}


	void OnShowSettingsWidget();
	void OnHideSettingsWidget();
	void OnContainerConfigSet();
	void GetWidgetContainerTitle();
	void GetWidgetContainerDescription();
	void GetSettingsWidgets();
	void AddSettingsWidget();
};


// Class KillstreakUINew.KSSettingsMenuConfigAsset
// 0x2A5D620 (0x5DAFAA60 - 0x5B09D440)
class UKSSettingsMenuConfigAsset : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2A5D620];                                 // 0x5B09D440(0x2A5D620) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenuConfigAsset");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsDataFactory
// 0x2A1A380 (0x5DB88C00 - 0x5B16E880)
class UKSSettingsDataFactory : public UPUMG_SettingsDataFactory
{
public:
	unsigned char                                      UnknownData00[0x2A1A380];                                 // 0x5B16E880(0x2A1A380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsDataFactory");
		return ptr;
	}


	void SetSelectedRegion();
	void SaveSettings();
	void SaveSettingAsInt();
	void SaveSettingAsFloat();
	void SaveSettingAsBool();
	void SaveScreenResolution();
	void SaveLanguage();
	void SaveKeyBindings();
	void RevertScreenResolution();
	void RevertPlayerPreferences();
	void RevertLanguageToDefault();
	void RevertKeyBindings();
	void IsUserLoggedIn();
	void GetSettingAsInt();
	void GetSettingAsFloat();
	void GetSettingAsBool();
	void GetSelectedRegion();
	void GetScreenResolution();
	void GetKSPlayerInput();
	void GetDefaultKSInputActionKeys();
	void GetDefaultInputAxisKeys();
	void GetDefaultInputActionKeys();
	void GetCustomKSInputActionKeys();
	void GetCustomInputAxisKeys();
	void GetCustomInputActionKeys();
	void GetCurrentLanguage();
	void GetAvailableLanguages();
	void BindSettingCallbacks();
	void ApplySettingAsInt();
	void ApplySettingAsFloat();
	void ApplySettingAsBool();
	void ApplyScreenResolution();
	void ApplyLanguage();
};


// Class KillstreakUINew.KSSettingsGroup
// 0x2F07E40 (0x5DAFC7C0 - 0x5ABF4980)
class UKSSettingsGroup : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F07E40];                                 // 0x5ABF4980(0x2F07E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsGroup");
		return ptr;
	}


	void OnShowContainer();
	void OnHideContainer();
	void OnGroupConfigSet();
	void GetSettingsContainers();
	void AddSubSettingsContainerWidget();
	void AddMainSettingsContainerWidget();
};


// Class KillstreakUINew.KSSettingsInfoBase
// 0x5DB8C180
class UKSSettingsInfoBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DB8C180];                                // 0x0000(0x5DB8C180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfoBase");
		return ptr;
	}


	void UpdateTextOptions();
	void SetDesiredValueKeyBind();
	void SetDesiredValueInt();
	void SetDesiredValueFloat();
	void SetDesiredValueBool();
	void SaveKeyBindValue();
	void SaveIntValue();
	void SaveFloatValue();
	void SaveBoolValue();
	void Save();
	void RoundToNearestValueFloat();
	void RevertSettingToDefault();
	void Revert();
	void OnValueKeyBindSaved();
	void OnValueKeyBindApplied();
	void OnValueIntSaved();
	void OnValueIntApplied();
	void OnValueFloatSaved();
	void OnValueFloatApplied();
	void OnValueBoolSaved();
	void OnValueBoolApplied();
	void IsValidValueKeyBind();
	void IsValidValueInt();
	void IsValidValueFloat();
	void IsValidValueBool();
	void IsDirty();
	void InitializeValue();
	void GetValueKeyBind();
	void GetValueInt();
	void GetValueFloat();
	void GetValueBool();
	void GetTextOptions();
	void GetTextOption();
	void GetStep();
	void GetSettingType();
	void GetRoundToNearest();
	void GetRound();
	void GetNumTextOptions();
	void GetMin();
	void GetMax();
	void GetKSHUD();
	void GetIsPercent();
	void GetDirtyValueKeyBind();
	void GetDirtyValueInt();
	void GetDirtyValueFloat();
	void GetDirtyValueBool();
	void FixupInvalidKeyBind();
	void FixupInvalidInt();
	void FixupInvalidFloat();
	void FixupInvalidBool();
	void CanRevert();
	void ApplyKeyBindValue();
	void ApplyIntValue();
	void ApplyFloatValue();
	void ApplyBoolValue();
	void Apply();
};


// Class KillstreakUINew.KSSettingsInfo_Binding
// 0xFFFFFFFFFFFFFE00 (0x5DB8BF80 - 0x5DB8C180)
class UKSSettingsInfo_Binding : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Binding");
		return ptr;
	}


	void OnSettingsReceivedFromPlayerAccount();
	void OnKeyBindingsSaved();
	void OnKeyBindingsApplied();
};


// Class KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode
// 0xFFFFFFFFA2473E80 (0x0000 - 0x5DB8C180)
class UKSSettingsInfo_ConsolePerformanceMode : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_ConsolePerformanceMode");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	void GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_Generic
// 0xFFFFFFFFFFF70320 (0x5DAFC4A0 - 0x5DB8C180)
class UKSSettingsInfo_Generic : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Generic");
		return ptr;
	}


	void OnSettingSaved();
	void OnSettingApplied();
	void GetKSSettingsDataFactory();
};


// Class KillstreakUINew.KSSettingsInfo_MuteAudio
// 0xFFFFFFFFA2473E80 (0x0000 - 0x5DB8C180)
class UKSSettingsInfo_MuteAudio : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_MuteAudio");
		return ptr;
	}

};


// Class KillstreakUINew.KSSettingsInfo_Region
// 0xFFFFFFFFA2473E80 (0x0000 - 0x5DB8C180)
class UKSSettingsInfo_Region : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Region");
		return ptr;
	}


	void OnPreferredSiteUpdated();
};


// Class KillstreakUINew.KSSettingsInfo_Resolution
// 0xFFFFFFFFA2473E80 (0x0000 - 0x5DB8C180)
class UKSSettingsInfo_Resolution : public UKSSettingsInfoBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsInfo_Resolution");
		return ptr;
	}


	void OnScreenResolutionSaved();
	void OnScreenResolutionApplied();
};


// Class KillstreakUINew.KSSettingsMenu
// 0x2F07940 (0x5DAFC2C0 - 0x5ABF4980)
class UKSSettingsMenu : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F07940];                                 // 0x5ABF4980(0x2F07940) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsMenu");
		return ptr;
	}


	void RebuildNavigation();
	void OnShowPage();
	void OnSaveSettings();
	void OnRevertSettings();
	void OnMenuConfigSet();
	void OnHidePage();
	void OnConfirmExit();
	void GetSettingsPages();
	void CheckSavePendingChanges();
	void AddSettingsPageWidget();
};


// Class KillstreakUINew.KSSettingsPage
// 0x2F07760 (0x5DAFC0E0 - 0x5ABF4980)
class UKSSettingsPage : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F07760];                                 // 0x5ABF4980(0x2F07760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsPage");
		return ptr;
	}


	void OnShowSection();
	void OnPageConfigSet();
	void OnHideSection();
	void GetSettingsSections();
	void GetScrollBox();
	void AddSettingsSectionWidget();
};


// Class KillstreakUINew.KSSettingsSection
// 0x2F07580 (0x5DAFBF00 - 0x5ABF4980)
class UKSSettingsSection : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F07580];                                 // 0x5ABF4980(0x2F07580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsSection");
		return ptr;
	}


	void OnShowGroup();
	void OnSectionConfigSet();
	void OnHideGroup();
	void GetSettingsGroups();
	void AddSettingsGroupWidget();
};


// Class KillstreakUINew.KSSettingsWidget
// 0x2F98500 (0x5DB8CE80 - 0x5ABF4980)
class UKSSettingsWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F98500];                                 // 0x5ABF4980(0x2F98500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSettingsWidget");
		return ptr;
	}


	void SaveSetting();
	void RevertSetting();
	void OnWidgetSettingsInfoSet();
	void OnWidgetContainerTitleSet();
	void OnWidgetContainerDescriptionSet();
	void OnWidgetConfigSet();
	void OnSettingsInfoValueChanged();
	void OnInputAttached();
	void IsSaved();
	void IsApplied();
	void CanGamepadNavigate();
	void ApplySetting();
};


// Class KillstreakUINew.KSShopItemButtonBase
// 0x2F98180 (0x5DB8CB00 - 0x5ABF4980)
class UKSShopItemButtonBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F98180];                                 // 0x5ABF4980(0x2F98180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopItemButtonBase");
		return ptr;
	}


	void GetHitTarget();
	void DisplayShopItem();
	void ButtonUnhovered();
	void ButtonReleased();
	void ButtonPressed();
	void ButtonHovered();
	void ButtonClicked();
};


// Class KillstreakUINew.KSSocialPanelBase
// 0x2F99C80 (0x5DB8E600 - 0x5ABF4980)
class UKSSocialPanelBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F99C80];                                 // 0x5ABF4980(0x2F99C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialPanelBase");
		return ptr;
	}


	void UpdateListData();
	void SetupTreeView();
	void SetDataSource();
	void OnDataChange();
	void GetTreeView();
	void GetSubListFromData();
	void GetDataSource();
};


// Class KillstreakUINew.KSSocialFriendsPanel
// 0xFFFFFFFFFFF6D540 (0x5DAFBB40 - 0x5DB8E600)
class UKSSocialFriendsPanel : public UKSSocialPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialFriendsPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSSocialOverlay
// 0x2F99480 (0x5DB8DE00 - 0x5ABF4980)
class UKSSocialOverlay : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F99480];                                 // 0x5ABF4980(0x2F99480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialOverlay");
		return ptr;
	}


	void RepopulateAll();
	void PlayTransition();
	void OnRecentlyPlayedChange();
	void HandleUpdatePlayers();
	void GetData();
	void GetCategory();
	void GetCategories();
};


// Class KillstreakUINew.KSSocialSearchPanel
// 0xFFFFFFFFFFFFF380 (0x5DB8D980 - 0x5DB8E600)
class UKSSocialSearchPanel : public UKSSocialPanelBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialSearchPanel");
		return ptr;
	}


	void OnSearchTimeout();
	void OnSearchStart();
	void OnSearchComplete();
	void IsSearching();
	void GetActiveSearchTerm();
	void DoSearch();
};


// Class KillstreakUINew.KSSocialWidgetBase
// 0x2F9AC80 (0x5DB8F600 - 0x5ABF4980)
class UKSSocialWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2F9AC80];                                 // 0x5ABF4980(0x2F9AC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSocialWidgetBase");
		return ptr;
	}


	void SortFriendData();
	void SearchPlayerName();
	void OnFriendRequestsUpdated();
	void HandleSearchByNameResultsUpdated();
	void HandlePartyDataUpdated();
	void HandleFriendInviteReceived();
	void HandleFriendDataUpdated();
	void GetSortedFriends();
	void GetSearchResults();
	void GetPlayerWhoDataFactory();
	void GetPartyDataFactory();
	void GetFriendDataFactory();
	void ClearSearchResults();
};


// Class KillstreakUINew.KSSortableGridPanel
// 0x9F3CC00 (0x5AB79280 - 0x50C3C680)
class UKSSortableGridPanel : public UGridPanel
{
public:
	unsigned char                                      UnknownData00[0x9F3CC00];                                 // 0x50C3C680(0x9F3CC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableGridPanel");
		return ptr;
	}


	void SortChildrenComparator__DelegateSignature();
	void SortChildren();
	void AddChildAutoLayout();
};


// Class KillstreakUINew.KSSortableVerticalBox
// 0x5AB78F80
class UKSSortableVerticalBox : public UVerticalBox
{
public:
	unsigned char                                      UnknownData00[0x5AB78F80];                                // 0x0000(0x5AB78F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSSortableVerticalBox");
		return ptr;
	}


	void SortChildrenComparator__DelegateSignature();
	void SortChildren();
};


// Class KillstreakUINew.KSStoreSectionItem
// 0x5DAFDB20
class UKSStoreSectionItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DAFDB20];                                // 0x0000(0x5DAFDB20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreSectionItem");
		return ptr;
	}


	void IsItemNew();
	void HasNewItems();
};


// Class KillstreakUINew.KSStoreSection
// 0x5DAFDA80
class UKSStoreSection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DAFDA80];                                // 0x0000(0x5DAFDA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreSection");
		return ptr;
	}


	void HasNewItems();
	void GetSectionHeader();
};


// Class KillstreakUINew.KSStoreWidget
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSStoreWidget : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSStoreWidget");
		return ptr;
	}


	void OnVendorsReceived();
	void OnPortalOffersReceived();
	void GetStoreLayout();
	void GetStoreItemHelper();
};


// Class KillstreakUINew.KSTargetMarkerWidget
// 0x9E80 (0x5DB8FF00 - 0x5DB86080)
class UKSTargetMarkerWidget : public UKSScreenMarkerWidgetBase
{
public:
	unsigned char                                      UnknownData00[0x9E80];                                    // 0x5DB86080(0x9E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTargetMarkerWidget");
		return ptr;
	}


	void UpdateCharge();
	void TryApplyViewState();
	void ReceiveNewTarget();
	void OnGamepadSelectedChanged();
	void GetCurrentViewState();
	void BindTargetModInst();
	void ApplyViewState();
};


// Class KillstreakUINew.KSTextChatWidget
// 0x2FBBB80 (0x5DBB0500 - 0x5ABF4980)
class UKSTextChatWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2FBBB80];                                 // 0x5ABF4980(0x2FBBB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTextChatWidget");
		return ptr;
	}


	void Whisper();
	void Unblock();
	void UIX_SubmitTextInput();
	void UIX_SendMessageToPlayer();
	void UIX_SendMessageToChannel();
	void UIX_MarkMessageAsRead();
	void UIX_ExecuteChatCommandLine();
	void ToggleDND();
	void ShowTextChat();
	void SetChatChannelToPlayer();
	void SetChatChannel();
	void Reply();
	void ProcessMessageOnClient();
	void PreviousChatChannel();
	void OpenTextChatToPlayer();
	void OpenTextChat();
	void NextChatChannel();
	void IsActiveChatChannel();
	void HandleChatMessageReceived();
	void HandleChatMessageRead();
	void HandleChatChannelLeft();
	void HandleChatChannelJoined();
	void GetCurrentChatChannel();
	void GetChatDataFactory();
	void GetActiveChatChannels();
	void CanChatInChannel();
	void Block();
};


// Class KillstreakUINew.KSToastNotificationWidgetBase
// 0x2FBCD00 (0x5DBB1680 - 0x5ABF4980)
class UKSToastNotificationWidgetBase : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2FBCD00];                                 // 0x5ABF4980(0x2FBCD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastNotificationWidgetBase");
		return ptr;
	}


	void TestDisplayChallengeNotification();
	void StoreToastQueue();
	void ShowToastNotification();
	void OnToastNotificationReceived();
	void OnChallengeCompleted();
	void OnAwardsCompleted();
	void NotifyToastShown();
	void NotifyToastHidden();
	void HandlePartyMemberPromoted();
	void HandlePartyMemberLeftGeneric();
	void HandlePartyMemberKick();
	void HandlePartyMemberAdded();
	void HandlePartyLocalPlayerLeft();
	void HandlePartyInviteSent();
	void HandlePartyInviteRejected();
	void HandlePartyInviteReceived();
	void HandlePartyInviteError();
	void HandlePartyInviteAccepted();
	void HandleFriendRejected();
	void HandleFriendInviteReceived();
	void HandleFriendAddSuccess();
	void HandleFriendAdded();
	void GetPostMatchToasts();
	void GetPlayerChallengesManager();
	void GetPlayerAwardsManager();
	void GetPartyDataFactory();
	void GetNext();
	void GetFriendDataFactory();
	void CreateMercMasteryLevelUpToasts();
	void ClearPostMatchQueue();
	void ClearNotificationQueue();
};


// Class KillstreakUINew.KSTopBarStatusIconInterface
// 0x0000
class UKSTopBarStatusIconInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTopBarStatusIconInterface");
		return ptr;
	}


	void UnbindEventFromTopBarStatusIconShowingChanged();
	void IsInTopBarStatusIconShowingState();
	void GetTopBarStatusIconTexture();
	void BindEventToTopBarStatusIconShowingChanged();
};


// Class KillstreakUINew.KSTreeView
// 0xFFFFFFFFFFFFFC00 (0x5DBB3600 - 0x5DBB3A00)
class UKSTreeView : public UTreeView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSTreeView");
		return ptr;
	}


	void UninitializeWidget();
	void NavigateSelectItem();
	void IsItemExpanded();
	void InitializeWidget();
	void GetNumItemsInLayout();
	void BP_GetEntryWidgetFromItem();
};


// Class KillstreakUINew.KSUIBlueprintFunctionLibrary
// 0x0000
class UKSUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUIBlueprintFunctionLibrary");
		return ptr;
	}


	void UIX_ReportPlayer();
	void SetupReportPlayerFromScoreboardStats();
	void SetupReportPlayerFromGameState();
	void SetHiddenCursorMode();
	void ResetHiddenCursorMode();
	void RegisterGridNavigation();
	void Key_GetShortDisplayName();
	void IsInsideMargins();
	void IsInCenteredScreenRect();
	void GetStoreItemHelper();
	void GetQueueDisplayName();
	void GetPlayerInfoById();
	void GetPingIconByType();
	void GetPingIconByMessage();
	void GetPingColorByType();
	void GetLocalPlayerInfo();
	void GetKSJobItemByLootId();
	void GetKSJobItemByItemId();
	void GetDigitsFromInt();
	void FindContextualPingTypesRowByType();
	void FindContextualPingMessagesRowByMessage();
	void DistanceToClosestScreenEdge();
	void CreateSettingsWidget();
	void CompareStrings();
	void ClearKeyboardFocus();
};


// Class KillstreakUINew.KSUISoundLibrary
// 0x0000
class UKSUISoundLibrary : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSUISoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSGenericSoundLibrary
// 0x5DBB6E00
class UKSGenericSoundLibrary : public UKSUISoundLibrary
{
public:
	unsigned char                                      UnknownData00[0x5DBB6E00];                                // 0x0000(0x5DBB6E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSGenericSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSButtonSoundLibrary
// 0x5DBB6C80
class UKSButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	unsigned char                                      UnknownData00[0x5DBB6C80];                                // 0x0000(0x5DBB6C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSScrollButtonSoundLibrary
// 0x5DBB6A80
class UKSScrollButtonSoundLibrary : public UKSUISoundLibrary
{
public:
	unsigned char                                      UnknownData00[0x5DBB6A80];                                // 0x0000(0x5DBB6A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSScrollButtonSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSShopSoundLibrary
// 0x5DBB6880
class UKSShopSoundLibrary : public UKSUISoundLibrary
{
public:
	unsigned char                                      UnknownData00[0x5DBB6880];                                // 0x0000(0x5DBB6880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSShopSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.KSToastSoundLibrary
// 0x5DBB6680
class UKSToastSoundLibrary : public UKSUISoundLibrary
{
public:
	unsigned char                                      UnknownData00[0x5DBB6680];                                // 0x0000(0x5DBB6680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSToastSoundLibrary");
		return ptr;
	}

};


// Class KillstreakUINew.CommonVendorHelper
// 0x0000
class UCommonVendorHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.CommonVendorHelper");
		return ptr;
	}


	void GetVendorIDFromEnum();
};


// Class KillstreakUINew.KSViewedActiveWeaponCompWidget
// 0xFFFFFFFFA24BEB00 (0x0000 - 0x5DB41500)
class UKSViewedActiveWeaponCompWidget : public UKSActiveWeaponComponentWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveWeaponCompWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveGadgetWidget
// 0x0000
class UKSViewedActiveGadgetWidget : public UKSWeaponWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveGadgetWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedActiveMedPackWidget
// 0x0000
class UKSViewedActiveMedPackWidget : public UKSWeaponWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedActiveMedPackWidget");
		return ptr;
	}

};


// Class KillstreakUINew.KSViewedItemLabel
// 0x5DBB8180
class UKSViewedItemLabel : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x5DBB8180];                                // 0x0000(0x5DBB8180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedItemLabel");
		return ptr;
	}


	void UpdateLabelPosition();
	void UnbindToViewportResizeEvent();
	void TriggerLabelPositionUpdate();
	void OnLabelShow();
	void OnLabelHide();
	void GetViewLimitImage();
	void GetTrackedActor();
	void GetOutermostCanvasPanel();
	void GetOnScreenPositionForLabel();
	void GetLabelCanvasPanel();
	void BindToViewportResizeEvent();
};


// Class KillstreakUINew.KSViewedPawnDamageDisplay
// 0x5DBB7C00
class UKSViewedPawnDamageDisplay : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x5DBB7C00];                                // 0x0000(0x5DBB7C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnDamageDisplay");
		return ptr;
	}


	void PrimeDamageNumbersWidgetPool();
	void HandlePhaseChange();
	void HandleInstigateDamageNotify();
	void HandleFlourishAnimationCompleted();
	void GetDamageNumberWidgetInstance();
	void ClearDamageNumbersOnScreen();
};


// Class KillstreakUINew.DamageNumberDisplayWidget
// 0x2FC8B80 (0x5DBB8E00 - 0x5ABF0280)
class UDamageNumberDisplayWidget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2FC8B80];                                 // 0x5ABF0280(0x2FC8B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.DamageNumberDisplayWidget");
		return ptr;
	}


	void SetDisplayInformation();
	void PlayFlourishAnimation();
	void OnDisplaySpecialDamageInfo();
	void OnDisplayInformationReset();
	void IsDisplayStacking();
};


// Class KillstreakUINew.KSViewedPawnInventoryWidget
// 0x2ACC7C0 (0x5DBB8B00 - 0x5B0EC340)
class UKSViewedPawnInventoryWidget : public UKSPawnInventoryWidget
{
public:
	unsigned char                                      UnknownData00[0x2ACC7C0];                                 // 0x5B0EC340(0x2ACC7C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnInventoryWidget");
		return ptr;
	}


	void OnUpdatedPawnInventorySlot();
	void OnRemovedPawnInventorySlot();
	void OnActivePawnInventorySlot();
	void GetSlotIndex();
};


// Class KillstreakUINew.KSViewedPawnModsWidget
// 0x0000
class UKSViewedPawnModsWidget : public UKSViewedPawnWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewedPawnModsWidget");
		return ptr;
	}


	void OnViewedPawnModAdded();
	void GetOverlay();
};


// Class KillstreakUINew.KSViewRedirector_LocalSetting
// 0x5DBB8800
class UKSViewRedirector_LocalSetting : public UPUMG_ViewRedirecter
{
public:
	unsigned char                                      UnknownData00[0x5DBB8800];                                // 0x0000(0x5DBB8800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSViewRedirector_LocalSetting");
		return ptr;
	}


	void DoesLocalSettingApply();
};


// Class KillstreakUINew.KSVoiceActivityWidget
// 0x2FC5780 (0x5DBBA100 - 0x5ABF4980)
class UKSVoiceActivityWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2FC5780];                                 // 0x5ABF4980(0x2FC5780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSVoiceActivityWidget");
		return ptr;
	}


	void OnVoiceParticipantUpdated();
	void OnVoiceParticipantRemoved();
	void OnVoiceParticipantAdded();
	void GetVoiceIdByPlayerId();
	void GetPlayerStateByVoiceId();
	void GetPlayerIdByVoiceId();
};


// Class KillstreakUINew.KSVoucherAcquisition
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSVoucherAcquisition : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSVoucherAcquisition");
		return ptr;
	}


	void RedeemVouchers();
	void GetVoucherAcquisitions();
	void DisplayVoucherRedemptionFailed();
};


// Class KillstreakUINew.KSWeaponComponentWidget
// 0x2FC5300 (0x5DBB9C80 - 0x5ABF4980)
class UKSWeaponComponentWidget : public UKSWidget
{
public:
	unsigned char                                      UnknownData00[0x2FC5300];                                 // 0x5ABF4980(0x2FC5300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentWidget");
		return ptr;
	}


	void SetOwningWeaponComponent();
	void PreClearWeaponComponent();
	void PostSetWeaponComponent();
	void OnEndActiveWeaponComponent();
	void OnBecomeActiveWeaponComponent();
	void IsWeaponComponentActive();
	void GetWeaponComponent();
};


// Class KillstreakUINew.KSWeaponComponentAmmoWidget
// 0xFFFFFFFFFFFFF900 (0x5DBB9580 - 0x5DBB9C80)
class UKSWeaponComponentAmmoWidget : public UKSWeaponComponentWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWeaponComponentAmmoWidget");
		return ptr;
	}


	void StopReloading();
	void StartReloading();
	void OnAmmoChanged();
	void IsReloading();
	void GetClipSize();
	void GetAmmoInReserve();
	void GetAmmoInClip();
};


// Class KillstreakUINew.KSWhatsNewModalViewRedirector
// 0x0000
class UKSWhatsNewModalViewRedirector : public UPUMG_ViewRedirecter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewModalViewRedirector");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewPanel
// 0x5DBBB480
class UKSWhatsNewPanel : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBBB480];                                // 0x0000(0x5DBBB480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewPanel");
		return ptr;
	}

};


// Class KillstreakUINew.KSWhatsNewModal
// 0xFFFFFFFFA540B680 (0x0000 - 0x5ABF4980)
class UKSWhatsNewModal : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.KSWhatsNewModal");
		return ptr;
	}


	void OnJsonChanged();
	void GetPanelData();
	void GetJsonDataFactory();
};


// Class KillstreakUINew.TickAnimationManager
// 0x5B0EBC80
class UTickAnimationManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0EBC80];                                // 0x0000(0x5B0EBC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class KillstreakUINew.TickAnimationManager");
		return ptr;
	}


	void StopAnimation();
	void SkipToEndAnimation();
	void ResumeAnimation();
	void RemoveAnimation();
	void PlayAnimation();
	void PauseAnimation();
	void GetAnimationInfo();
	void ApplyTick();
	void AddAnimation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
