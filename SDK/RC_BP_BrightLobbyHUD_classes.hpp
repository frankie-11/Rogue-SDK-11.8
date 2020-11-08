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

// BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C
// 0x16BEF80 (0x26D2F880 - 0x25670900)
class ABP_BrightLobbyHUD_C : public ABP_BrightLobbyHUDMinimal_C
{
public:
	unsigned char                                      UnknownData00[0x16BEF80];                                 // 0x25670900(0x16BEF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BrightLobbyHUD.BP_BrightLobbyHUD_C");
		return ptr;
	}


	void GetDefaultPlayerAccountItem();
	void SetupQueueEvents();
	void CallRemoveTopViewRoute();
	void CallAddViewRoute();
	void SafeFrameSettingApplied();
	void BindSettingCallbacks();
	void InternalAddViewRoute();
	void OnAcquisition();
	void GetContextBarWidget();
	void SwapViewRoute();
	void Remove_Top_View_Route();
	void Add_View_Route();
	void HandeEOMResults();
	void GetCurrentTransitionRoute();
	void GetLobbyWidget();
	void Focus_Home_Screen();
	void Get_Current_View_Route();
	void Focus_Sticky_Loadout_Panel();
	void EvaluateFocus();
	void Get_Current_Loadout_Slot();
	void Cache_Current_Loadout_Slot();
	void InitialLobbyAnimStatesBinding();
	void TempBootstrapFunctionality();
	void FallbackLogoutCleanup();
	void GetFocusableWidgetContainers();
	void Handle_Login_State_Change();
	void GetPopupManager();
	void ReceiveBeginPlay();
	void HandleEndPlayingPreMatch();
	void HandleBeginPlayingPreMatch();
	void HandleEndPlayingPostMatch();
	void HandleLoginCameraSet();
	void HandleMainLobbyCameraSet();
	void Handle_Party_Invite_Received();
	void HandleSettingsKeybind();
	void SetUIFocus();
	void HandleOpenTextChat();
	void OpenTextChatToPlayer();
	void ApplySafeFrameScale();
	void OnCustomQueueJoin();
	void HandleRewardsReceived();
	void ExecuteUbergraph_BP_BrightLobbyHUD();
	void Loadout_Slot_Change__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
