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

// Class PlatformUMG.PUMG_AcquisitionManager
// 0x5B14E880
class UPUMG_AcquisitionManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B14E880];                                // 0x0000(0x5B14E880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_AcquisitionManager");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_AsyncImage
// 0xFFFFFFFFFFFFFD80 (0x5B160B80 - 0x5B160E00)
class UPUMG_AsyncImage : public UImage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_AsyncImage");
		return ptr;
	}


	void ShowWaitingWidget();
	void HideWaitingWidget();
};


// Class PlatformUMG.PUMG_BlueprintFunctionLibrary
// 0x0000
class UPUMG_BlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_BlueprintFunctionLibrary");
		return ptr;
	}


	void IsWithEditor();
	void GetUMG_DPI_Scaling();
	void GetKeyName();
	void GetGamepadConfirmButton();
	void GetGamepadCancelButton();
	void GetGamepadButtonForAction();
	void GetButtonForActionMappingUsingWidget();
	void GetButtonForActionMapping();
	void GetAllButtonsForActionMappingUsingWidget();
	void GetAllButtonsForActionMapping();
};


// Class PlatformUMG.PUMG_CanvasPanel
// 0x0000
class UPUMG_CanvasPanel : public UCanvasPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_CanvasPanel");
		return ptr;
	}


	void PlaceWidgetUnder();
};


// Class PlatformUMG.PUMG_DataFactory
// 0x5AA80300
class UPUMG_DataFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5AA80300];                                // 0x0000(0x5AA80300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_DataFactory");
		return ptr;
	}


	void IsLoggedIn();
};


// Class PlatformUMG.PUMG_ChatDataFactory
// 0x6E2100 (0x5B162400 - 0x5AA80300)
class UPUMG_ChatDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6E2100];                                  // 0x5AA80300(0x6E2100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ChatDataFactory");
		return ptr;
	}


	void SetMaxMessageCount();
	void SendChatToPlayer();
	void SendChatToChannel();
	void RemovePlayerFilter();
	void RemoveChatCommand();
	void RemoveAllChatCommands();
	void QueueCheckPendingMessages();
	void MarkMessageAsRead();
	void ListChatCommands();
	void IsValidMessage();
	void IsPlayerFilteredFromChat();
	void HandleCommunicationSettingChanged();
	void GetMessage();
	void GetMaxMessageCount();
	void GetChatPrivilegeStatus();
	void GetActiveChatChannels();
	void FindChatCommandIndex();
	void ExecuteChatCommandLine();
	void CheckPendingMessages();
	void BeginProcessingChatMessage();
	void AddSystemMessage();
	void AddPlayerFilter();
	void AddGameMessage();
	void AddChatCommand();
};


// Class PlatformUMG.PUMG_CollectionDataFactory
// 0x6E1F80 (0x5B162280 - 0x5AA80300)
class UPUMG_CollectionDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6E1F80];                                  // 0x5AA80300(0x6E1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_CollectionDataFactory");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_FriendDataFactory
// 0x1080 (0x5AA81380 - 0x5AA80300)
class UPUMG_FriendDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x1080];                                    // 0x5AA80300(0x1080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_FriendDataFactory");
		return ptr;
	}


	void UIX_OnRemoveFriend();
	void UIX_OnRejectFriendRequest();
	void UIX_OnCancelFriendRequest();
	void UIX_OnAddFriend();
	void UIX_OnAcceptFriendRequest();
	void SetEnableFriendsListUpdatePolling();
	void RequestUpdateFriendsList();
	void IsCrossplaySocialEnabled();
	void HandleFriendsListUpdatePolling();
	void HandleCrossplaySettingChanged();
	void GetPendingFriends();
	void GetFriends();
	void GetFriendRequests();
	void GetFriendName();
	void GetFriendAvatarTexture();
	void GetEnableFriendsListUpdatePolling();
	void FriendRemoveResponse();
	void CheckAlreadyFriends();
};


// Class PlatformUMG.GamepadPromptInterface
// 0x0000
class UGamepadPromptInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.GamepadPromptInterface");
		return ptr;
	}


	void UnregisterOnClear();
	void SetPrompt();
	void ClearPrompt();
};


// Class PlatformUMG.PUMG_GamepadDataFactory
// 0xFFFFFFFFA557FD00 (0x0000 - 0x5AA80300)
class UPUMG_GamepadDataFactory : public UPUMG_DataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_GamepadDataFactory");
		return ptr;
	}


	void UnregisterPromptForButton();
	void SetPromptForGamepadButton();
	void RemovePromptForGamepadButton();
	void RegisterPromptWidgetForButton();
	void ClearAllGamepadPrompts();
};


// Class PlatformUMG.PUMG_GameViewportClient
// 0xFFFFFFFFA4E9C480 (0x0000 - 0x5B163B80)
class UPUMG_GameViewportClient : public UGameViewportClient
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_GameViewportClient");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_LobbyHUD
// 0x0000
class UPUMG_LobbyHUD : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LobbyHUD");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_HUD
// 0x1280 (0x5B169100 - 0x5B167E80)
class APUMG_HUD : public AHUD
{
public:
	unsigned char                                      UnknownData00[0x1280];                                    // 0x5B167E80(0x1280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_HUD");
		return ptr;
	}


	void TestHirezLogin();
	void TestAutoLogin();
	void ShowSystemTrayNotification();
	void SetUseNewUIFeatures();
	void SetUIFocus();
	void SetNavigationEnabled();
	void OnQuit();
	void OnNavigateBack();
	void OnConfirmQuit();
	void NewPlayerInfo();
	void IsLobbyHUD();
	void IsCrossplayEnabled();
	void InputStateChangePassthrough();
	void GetViewManager();
	void GetPopupManager();
	void GetPlayerControllerOwner();
	void GetOrCreatePlayerInfo();
	void GetInputManager();
	void GetCurrentInputState();
	void DisplayGenericPopup();
	void DisplayGenericError();
};


// Class PlatformUMG.PUMG_InputManager
// 0x5B0E4540
class UPUMG_InputManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E4540];                                // 0x0000(0x5B0E4540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_InputManager");
		return ptr;
	}


	void HandleModeChange();
	void GetFocusedWidget();
	void ClearNavInputThrottled();
	void ClearNavInputDebouncedThrottled();
};


// Class PlatformUMG.PUMG_JsonDataFactory
// 0xFFFFFFFFA557FD00 (0x0000 - 0x5AA80300)
class UPUMG_JsonDataFactory : public UPUMG_DataFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_JsonDataFactory");
		return ptr;
	}


	void HandleJsonReady();
	void HandleImagesReady();
};


// Class PlatformUMG.PUMG_Loadout
// 0x5B168A80
class UPUMG_Loadout : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B168A80];                                // 0x0000(0x5B168A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_Loadout");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_LoadoutDataFactory
// 0x5B168700
class UPUMG_LoadoutDataFactory : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B168700];                                // 0x0000(0x5B168700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LoadoutDataFactory");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_LoginDataFactory
// 0x6EAD80 (0x5B16B080 - 0x5AA80300)
class UPUMG_LoginDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6EAD80];                                  // 0x5AA80300(0x6EAD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_LoginDataFactory");
		return ptr;
	}


	void UpdateControllers();
	void UIX_TriggerAutoLogin();
	void UIX_OnTwoFactorSubmit();
	void UIX_OnTwoFactorDecline();
	void UIX_OnSubmitLogin();
	void UIX_OnSubmitConsoleLogin();
	void UIX_OnSubmitAutoLogin();
	void UIX_OnPlayerCreate();
	void UIX_OnLinkExistingAccount();
	void UIX_OnLinkDecline();
	void UIX_OnLinkCreateAccount();
	void UIX_OnEulaDecline();
	void UIX_OnEulaAccept();
	void UIX_OnChangeUserAccount();
	void UIX_OnCancelLogin();
	void UIX_OnAccountCreate();
	void TriggerAutoLogin();
	void ShouldDisplayUsername();
	void ShouldDisplayDisconnectError();
	void SetUserErrorDataTable();
	void RecordLoginState();
	void LoginEvent_ShowEula();
	void LoginEvent_Queued();
	void LoginEvent_LoginRequested();
	void LoginEvent_LoggedIn();
	void LoginEvent_FailedClient();
	void LoginEvent_Failed();
	void LoginEvent_CreatePlayer();
	void LoadEULAFile();
	void HandleControllerPairingChange();
	void HandleControllerConnectionChange();
	void GetVersion();
	void GetLastDisconnectReason();
	void GetCurrentPlayerName();
	void GetCurrentLoginState();
};


// Class PlatformUMG.PUMG_PartyDataFactory
// 0x6EB880 (0x5B16BB80 - 0x5AA80300)
class UPUMG_PartyDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6EB880];                                  // 0x5AA80300(0x6EB880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PartyDataFactory");
		return ptr;
	}


	void UIX_PromoteMemberToLeader();
	void UIX_LeaveParty();
	void UIX_KickMemberFromParty();
	void UIX_InviteMemberToParty();
	void UIX_GiveInvitePermission();
	void UIX_DisbandParty();
	void UIX_DenyPartyInvitation();
	void UIX_AcceptPartyInvitation();
	void PartyPromoteResponse();
	void PartyLeaveResponse();
	void PartyKickResponse();
	void IsPlayerInParty();
	void IsPending();
	void IsPartyMaxed();
	void IsLeader();
	void IsInParty();
	void HasInvitePrivileges();
	void GetQueueId();
	void GetPartyMemeberName();
	void GetPartyMembers();
	void GetPartyMemberCount();
	void GetPartyMemberByID();
	void GetPartyInviter();
	void GetPartyInviteMode();
	void GetMaxPartyMembers();
	void CheckPartyMemberIsLeader();
};


// Class PlatformUMG.PUMG_PlayerDataFactory
// 0x6ED080 (0x5B16D380 - 0x5AA80300)
class UPUMG_PlayerDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6ED080];                                  // 0x5AA80300(0x6ED080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerDataFactory");
		return ptr;
	}


	void OnSelectAvatar();
	void GetAvatarIcon();
};


// Class PlatformUMG.PUMG_PlayerInfo
// 0x5B16D000
class UPUMG_PlayerInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B16D000];                                // 0x0000(0x5B16D000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerInfo");
		return ptr;
	}


	void SetIgnored();
	void IsIgnored();
	void GetPlayerId();
	void GetName();
	void GetMctsName();
	void GetAvatarItemId();
};


// Class PlatformUMG.PUMG_PlayerInventoryHelper
// 0x0000
class UPUMG_PlayerInventoryHelper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerInventoryHelper");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_PlayerWhoDataFactory
// 0x6ECA80 (0x5B16CD80 - 0x5AA80300)
class UPUMG_PlayerWhoDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6ECA80];                                  // 0x5AA80300(0x6ECA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PlayerWhoDataFactory");
		return ptr;
	}


	void UIX_SearchByNameForPlayer();
	void GetSearchByNameResults();
};


// Class PlatformUMG.PUMG_Widget
// 0x3680 (0x5ABF3900 - 0x5ABF0280)
class UPUMG_Widget : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x3680];                                    // 0x5ABF0280(0x3680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_Widget");
		return ptr;
	}


	void UnregisterWidgetFromInputManager();
	void UnregisterFocusGroup();
	void UninitializeWidget();
	void SwapViewRoute();
	void StartShowSequence();
	void StartHideSequence();
	void ShowWidget();
	void SetPendingRouteData();
	void SetFocusToWidgetOfGroup();
	void SetFocusToThis();
	void SetFocusToGroup();
	void SetDefaultFocusForGroup();
	void RemoveViewRoute();
	void RemoveTopViewRoute();
	void RegisterWidgetToInputManager();
	void OnShown();
	void OnHide();
	void OnGamepadUnhover();
	void OnGamepadHover();
	void NavigateUpFailure();
	void NavigateRightFailure();
	void NavigateLeftFailure();
	void NavigateDownFailure();
	void NavigateConfirmPressed();
	void NavigateConfirmCancelled();
	void NavigateConfirm();
	void NavigateBackPressed();
	void NavigateBackCancelled();
	void NavigateBack();
	void IsFocusEnabled();
	void InitializeWidgetNavigation();
	void InitializeWidgetButtonListeners();
	void InitializeWidget();
	void HideWidget();
	void GetViewManager();
	void GetUsesBlocker();
	void GetPendingRouteData();
	void GetGeometryFromLastTick();
	void GetCurrentFocusGroup();
	void GetCurrentFocusForGroup();
	void GamepadUnhover();
	void GamepadHover();
	void GamepadButtonUp();
	void GamepadButtonDown();
	void FocusGroupNavigateUpFailure();
	void FocusGroupNavigateRightFailure();
	void FocusGroupNavigateLeftFailure();
	void FocusGroupNavigateDownFailure();
	void ExplicitNavigateUp();
	void ExplicitNavigateRight();
	void ExplicitNavigateLeft();
	void ExplicitNavigateDown();
	void DisplayGenericPopup();
	void DisplayGenericError();
	void ClearNavigationInputThrottle();
	void CanCloseOnLogout();
	void CallOnShowSequenceFinished();
	void CallOnHideSequenceFinished();
	void BindToInputManager();
	void AsyncLoadTexture2D();
	void AddViewRoute();
};


// Class PlatformUMG.PUMG_PopupManager
// 0x4AB120 (0x5B09EA20 - 0x5ABF3900)
class UPUMG_PopupManager : public UPUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0x4AB120];                                  // 0x5ABF3900(0x4AB120) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PopupManager");
		return ptr;
	}


	void ShowPopup();
	void RemovePopup();
	void OnPopupResponse();
	void OnPopupCanceled();
	void NextPopup();
	void HidePopup();
	void CloseUnimportantPopups();
	void CloseAllPopups();
	void AddPopup();
};


// Class PlatformUMG.PUMG_QueueDataFactory
// 0x6EEA00 (0x5B16ED00 - 0x5AA80300)
class UPUMG_QueueDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6EEA00];                                  // 0x5AA80300(0x6EEA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_QueueDataFactory");
		return ptr;
	}


	void StartCustomMatch();
	void SetMapForCustomMatch();
	void LeaveQueue();
	void KickFromCustomMatch();
	void JoinQueue();
	void IsQueueActive();
	void IsInQueue();
	void IsInGame();
	void IsInCustomMatch();
	void IsCustomInvitePending();
	void InviteToCustomMatch();
	void IncrementPlayerTeamCustomMatch();
	void HandleInviteCooldowns();
	void HandleConfirmKickCustomPlayer();
	void GetTimeInQueueSeconds();
	void GetQueueIds();
	void GetNextTeamId();
	void GetCustomMatchPermissions();
	void GetCustomMatchMembers();
	void GetCustomMatchMapId();
	void GetCustomMatchInviterPlayerInfo();
	void GetCurrentQueueMatchState();
	void GetCurrentQueueId();
	void GetCurrentMatchId();
	void GetBaseQueueInfoById();
	void DeclineMatchInvite();
	void CreateCustomMatch();
	void CheckCustomMatch();
	void CanQueue();
	void CanLocalPlayerPromoteCustomLobbyPlayer();
	void CanLocalPlayerKickCustomLobbyPlayer();
	void CanLocalPlayerControlCustomLobbyPlayer();
	void AttemptRejoinMatch();
	void AcceptMatchInvite();
};


// Class PlatformUMG.PUMG_SettingsDataFactory
// 0x6EE580 (0x5B16E880 - 0x5AA80300)
class UPUMG_SettingsDataFactory : public UPUMG_DataFactory
{
public:
	unsigned char                                      UnknownData00[0x6EE580];                                  // 0x5AA80300(0x6EE580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_SettingsDataFactory");
		return ptr;
	}


	void OnSettingChanged();
	void InitSettingsForPlayer();
};


// Class PlatformUMG.PUMG_StorePurchaseRequest
// 0x5B16FB00
class UPUMG_StorePurchaseRequest : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B16FB00];                                // 0x0000(0x5B16FB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StorePurchaseRequest");
		return ptr;
	}


	void SubmitPurchaseRequest();
};


// Class PlatformUMG.PUMG_PortalOffer
// 0x5B181000
class UPUMG_PortalOffer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B181000];                                // 0x0000(0x5B181000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_PortalOffer");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_StoreItemPrice
// 0x5B180D00
class UPUMG_StoreItemPrice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B180D00];                                // 0x0000(0x5B180D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItemPrice");
		return ptr;
	}


	void GetDiscountPercentage();
	void CanAfford();
};


// Class PlatformUMG.PUMG_StoreItem
// 0x5B181A80
class UPUMG_StoreItem : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B181A80];                                // 0x0000(0x5B181A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItem");
		return ptr;
	}


	void UIX_ShowPurchaseConfirmation();
	void ShouldDisplayToUser();
	void PurchaseFromPortal();
	void IsRented();
	void IsRecipeFulfilled();
	void IsOwned();
	void IsActive();
	void HasPortalOffer();
	void GetUIHint();
	void GetType();
	void GetSubType();
	void GetSortOrder();
	void GetSoftItemIcon();
	void GetQuantityOwned();
	void GetPurchaseRequest();
	void GetPrices();
	void GetPrice();
	void GetPortalOffer();
	void GetName();
	void GetLootQuantity();
	void GetLootId();
	void GetInventoryItem();
	void GetFormattedNameDisplay();
	void GetFormattedDescDisplay();
	void GetDescription();
	void GetBestDiscount();
	void ConfirmGotoPortalOffer();
	void CanAfford();
};


// Class PlatformUMG.PUMG_XpTable
// 0x0000
class UPUMG_XpTable : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_XpTable");
		return ptr;
	}


	void GetXpAtLevel();
	void GetXpAtIndex();
	void GetMinXpLevel();
	void GetLevelCount();
	void GetLevelAtXp();
	void GetId();
};


// Class PlatformUMG.PUMG_StoreItemHelper
// 0x5B182280
class UPUMG_StoreItemHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B182280];                                // 0x0000(0x5B182280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_StoreItemHelper");
		return ptr;
	}


	void UIX_RedeemCode();
	void UIX_CompletePurchaseItem();
	void RequestVendorData();
	void HasPendingPurchase();
	void GetXpTable();
	void GetStoreItemsForVendor();
	void GetStoreItemForVendorByItemId();
	void GetStoreItemForVendor();
	void GetStoreItem();
	void GetPortalOffer();
	void GetPendingPurchaseData();
	void ExitInGameStoreUI();
	void EnterInGameStoreUI();
	void DoesPortalHaveOffers();
	void AreXpTablesLoaded();
};


// Class PlatformUMG.PUMG_UISoundTheme
// 0x5B0E4180
class UPUMG_UISoundTheme : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E4180];                                // 0x0000(0x5B0E4180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_UISoundTheme");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_GenericRouteDataObject
// 0x5B184100
class UPUMG_GenericRouteDataObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B184100];                                // 0x0000(0x5B184100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_GenericRouteDataObject");
		return ptr;
	}

};


// Class PlatformUMG.PUMG_ViewRedirecter
// 0x0000
class UPUMG_ViewRedirecter : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ViewRedirecter");
		return ptr;
	}


	void ShouldRedirect();
};


// Class PlatformUMG.PUMG_ViewLayer
// 0x5B183780
class UPUMG_ViewLayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B183780];                                // 0x0000(0x5B183780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ViewLayer");
		return ptr;
	}


	void IsRouteValid();
	void GoToRoute_InternalShowStep();
	void GoToRoute_HandleShowFinished();
	void GoToRoute_HandleHideFinished();
};


// Class PlatformUMG.PUMG_ViewManager
// 0x5B09F880
class UPUMG_ViewManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B09F880];                                // 0x0000(0x5B09F880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformUMG.PUMG_ViewManager");
		return ptr;
	}


	void SwapRoute();
	void SetPendingRouteData();
	void ReplaceRoute();
	void RemoveRoute();
	void PushRoute();
	void PopRoute();
	void IsBlockingAcquisitions();
	void InitializeRoutes();
	void Initialize();
	void HasCompletedRedirectFlow();
	void GetViewRouteCount();
	void GetTopViewRouteWidget();
	void GetTopViewRoute();
	void GetTopLayer();
	void GetPendingRouteData();
	void GetDefaultRouteForLayer();
	void GetCurrentTransitionRoute();
	void GetCurrentRoute();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
