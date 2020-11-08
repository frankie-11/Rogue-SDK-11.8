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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C
// 0xFFFFFFFFC6E2DA00 (0x24999580 - 0x5DB6BB80)
class UWBP_InGameJobSelectManager_C : public UKSPlayerJobSelectWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelectManager.WBP_InGameJobSelectManager_C");
		return ptr;
	}


	void OnPlayerStateChanged();
	void HandlePhaseChange();
	void OnKeyDown();
	void RestoreJobSelectViewState();
	void OnKeyUp();
	void SetFocusGroup();
	void InitializeLoadoutScreen();
	void NavigateBack();
	void ViewScreen();
	void HandleJobSelectionEntryChanged();
	void InitializeJobSelectScreen();
	void HandleJobSelectionReady();
	void HandleJobSelection();
	void HandleJobLockedIn();
	void HandleJobLoadoutView();
	void OnJobEntryChanged();
	void InitializeWidgetNavigation();
	void OnShown();
	void HandleNavigateBack();
	void OpenMainMenu();
	void OnHide();
	void OnBackPrompt();
	void PreRoundAnimComplete();
	void InitializeWidget();
	void Construct();
	void OnJobEntriesReady();
	void OnResetSelection();
	void OnPlayerSelectionStateChanged();
	void ExecuteUbergraph_WBP_InGameJobSelectManager();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
