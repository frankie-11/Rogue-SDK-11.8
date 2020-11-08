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

// WidgetBlueprintGeneratedClass WBP_TabScreenWidget.WBP_TabScreenWidget_C
// 0xFFFFFFFFC6A26F80 (0x2161B900 - 0x5ABF4980)
class UWBP_TabScreenWidget_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TabScreenWidget.WBP_TabScreenWidget_C");
		return ptr;
	}


	void ChangeFocusable();
	void UpdateAfterTabChange();
	void RegisterAllForFocus();
	void SetupContextPrompts();
	void SetupReportButtonNav();
	void HandlePlayerReported();
	void InitializeReportPlayer();
	void ResetScoreboardNav();
	void MoveFocusTo();
	void HandleOnActionBack();
	void HandleOnPlayerReported();
	void InitializePlayerAction();
	void InitializeScoreboard();
	void SetupPlayerActionNavigation();
	void ToggleHideCursor();
	void OnMouseMove();
	void ResetScoreboardHoverState();
	void NavigateBack();
	void OnKeyUp();
	void SetupScoreboardNav();
	void HandleInputModeChanged();
	void HasTabs();
	void HandleNavButtonClicked();
	void CycleTabs();
	void IncrementTabWrapped();
	void Refresh_Tabs();
	void SetGamepadCallouts();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void InitializeWidgetButtonListeners();
	void NavLeft();
	void NavRight();
	void OpenTimerGate();
	void CloseTimerGate();
	void Tick();
	void AttemptCloseTab();
	void FocusScoreboardPlayerEntries();
	void ResetScoreboardFocus();
	void ShowPlayerOptions();
	void Handle_KillCamEnabled();
	void Construct();
	void Handle_Back_Button_Clicked();
	void UnfocusScoreboardPlayers();
	void AttemptCloseTabFromKeyUp();
	void ExecuteUbergraph_WBP_TabScreenWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
