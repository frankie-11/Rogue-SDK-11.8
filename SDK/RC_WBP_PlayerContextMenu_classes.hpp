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

// WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C
// 0xFFFFFFFFD21D8D80 (0x2CDCD700 - 0x5ABF4980)
class UWBP_PlayerContextMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerContextMenu.WBP_PlayerContextMenu_C");
		return ptr;
	}


	void SetCustomMatchOptions();
	void GetQueueDataFactory();
	void UpdateOptionsList();
	void SetMenuContext();
	void IsShowingPlayer();
	void IsContextMenuOpen();
	void SetPlayerReported();
	void HasReportedPlayer();
	void ShowForPlayerCard();
	void MoveToWidgetSide();
	void UpdatePlayerAliases();
	void MoveToWidgetAndShow();
	void MoveToWidget();
	void IsCurrentAccountId();
	void GetOptionsWidgetByEnum();
	void RefreshOptionsPadding();
	void HideContextMenu();
	void Move_To_Player_Card_And_Show();
	void Get_Option_Widgets();
	void SetMenuPosition();
	void Is_Any_Option_Visible();
	void Set_All_Options_Visibility();
	void OnKeyUp();
	void OnKeyDown();
	void GetAllActiveButtons();
	void GetFirstActiveButton();
	void HandleQueueStatusChanged();
	void InitializeQueueDF();
	void SetInactiveOption();
	void HandleOptionSelected();
	void ShowForPlayer();
	void SetEnabledOption();
	void PreConstruct();
	void Handle_Input_State_Changed();
	void Handle_View_State_Changed();
	void OnInitialized();
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_0_OnVoiceParticipantUpdated__DelegateSignature();
	void BndEvt__WBP_VoiceActivityContainer_K2Node_ComponentBoundEvent_1_OnVoiceAudioStateChange__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerContextMenu();
	void OnReportPlayer__DelegateSignature();
	void OnMenuStart__DelegateSignature();
	void OnMenuHidden__DelegateSignature();
	void OnReadyForNavigation__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
