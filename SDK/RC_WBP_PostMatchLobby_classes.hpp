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

// WidgetBlueprintGeneratedClass WBP_PostMatchLobby.WBP_PostMatchLobby_C
// 0xFFFFFFFFCC12F800 (0x26D24180 - 0x5ABF4980)
class UWBP_PostMatchLobby_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PostMatchLobby.WBP_PostMatchLobby_C");
		return ptr;
	}


	void ShowAwardsEarned();
	void GetPreviousMatchPlayerIds();
	void TryUpdatePlayAgainPrompt();
	void SetCurrentPrompts();
	void TryMakeTabArray();
	void SetupReportMenuNav();
	void GetReportMenuFocusGroup();
	void ShowContextMenuForPlayer();
	void GetContextMenuFocusGroup();
	void HandleScoreboardChange();
	void GetScoreboardFocusGroup();
	void SetupContextMenuNav();
	void SetupFocusGroups();
	void SetGamepadIcon();
	void OnKeyUp();
	void SetGamepadPrompt();
	void GetNavButtons();
	void FormatPlayedTime();
	void PopulateTimePlayed();
	void NavigateBack();
	void SetVictoryDefeat();
	void DetermineMatchResult();
	void PopulateScoreboard();
	void HandleTabClicked();
	void CycleTab();
	void Construct();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnShown();
	void PopulatePostMatch();
	void HandleOnShowAnimationFinished();
	void HandleOnPlayerDataChanged();
	void HandleInputStateChanged();
	void StartShowSequence();
	void StartHideSequence();
	void OnHide();
	void OnBackButtonClicked();
	void PreConstruct();
	void Handle_Play_Again();
	void JoinQueue();
	void Handle_Party_Data_Updated();
	void Handle_Queue_Status_Change();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_0_OnReadyForNavigation__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnMenuHidden__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuStart__DelegateSignature();
	void BndEvt__ScoreboardOverview_K2Node_ComponentBoundEvent_3_OnTeamsChanged__DelegateSignature();
	void HandlePlayerClicked();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_4_OnReportPlayer__DelegateSignature();
	void BndEvt__ReportMenu_K2Node_ComponentBoundEvent_5_OnPlayerReported__DelegateSignature();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_PostMatchLobby();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
