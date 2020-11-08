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

// WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C
// 0xFFFFFFFFCAD5EA80 (0x25953400 - 0x5ABF4980)
class UWBP_CustomGameLobby_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomGameLobby.WBP_CustomGameLobby_C");
		return ptr;
	}


	void OnKeyUp();
	void TogglePlayerCardFor();
	void HandleVoiceMemberUpdate();
	void HandleVoiceMemberRemoved();
	void HandleVoiceMemberAdded();
	void GetMemberWidgetForVoice();
	void SetupExistingPlayers();
	void SetupQueueFactoryEvents();
	void OnQueueStateUpdated();
	void GetTeamButtons();
	void OnKeyDown();
	void MassInvite_Close();
	void MassInvite_Select();
	void MassInvite_IsSelected();
	void MassInvite_ShouldShowPlayer();
	void OnReceiveHostName();
	void CheckQueueState();
	void FinalizeLog();
	void LogPermissionChange();
	void HandleReceivePlayerName();
	void GetTeamName();
	void AddLog();
	void RemoveMember();
	void AddMember();
	void NavigateBack();
	void TEST_InviteNextAvailablePlayer();
	void SetupTeamNavigation();
	void UpdateWidgetsWithData();
	void OnMemberUpdate();
	void OnMemberRemoved();
	void OnMemberAdded();
	void OnQueueUpdate();
	void GetQueueDataFactory();
	void PopulateTeamRenderers();
	void SetupRenderers();
	void SetupDisplayElements();
	void UpdateQueueInfo();
	void PreConstruct();
	void Construct();
	void OnInitialized();
	void HandleDataChange();
	void InvalidateData();
	void InitializeWidgetNavigation();
	void HandlePlayerClicked();
	void HandleEmptyClicked();
	void HandlePlayerKick();
	void HandlePlayerSwap();
	void OnClickBack();
	void OnShown();
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnPlayerHovered();
	void OnPlayerUnhovered();
	void OnQueueLeft();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_2_OnVoiceParticipantAdded__DelegateSignature();
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_3_OnVoiceParticipantRemoved__DelegateSignature();
	void BndEvt__VoiceActivity_K2Node_ComponentBoundEvent_4_OnVoiceParticipantUpdated__DelegateSignature();
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_5_OnMenuStart__DelegateSignature();
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_6_OnReadyForNavigation__DelegateSignature();
	void BndEvt__PlayerContextMenu_K2Node_ComponentBoundEvent_7_OnMenuHidden__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomGameLobby();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
