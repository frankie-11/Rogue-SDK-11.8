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

// WidgetBlueprintGeneratedClass WBP_QuickPlay.WBP_QuickPlay_C
// 0xFFFFFFFFCEDAA380 (0x2C92D000 - 0x5DB82C80)
class UWBP_QuickPlay_C : public UKSQuickPlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay.WBP_QuickPlay_C");
		return ptr;
	}


	void SetRankedPageDisplay();
	void SetMapList();
	void OnKeyDown();
	void OnKeyUp();
	void SortQueueSections();
	void UpdateWarning();
	void SetMapRotation();
	void SetTouchActiveState();
	void SetQueueButtonNavigation();
	void GoToQueueScreen();
	void ResetDetails();
	void UpdateDetails();
	void ReconcileGameModeButtonEnabling();
	void NavigateBack();
	void HandleInputModeChanged();
	void SetDefaultFocusForQueues();
	void ResetQueueSelection();
	void SetupQueueButtons();
	void StartHideAnim();
	void InitializeTickAnimations();
	void InitHideAnimation();
	void ShowQueueTitleFinished();
	void ShowQueueTitleAnim();
	void HideQueueTitleFinished();
	void HideQueueTitleAnim();
	void ShowQueueSelectionFinished();
	void ShowQueueSelectionAnim();
	void HideQueueSelectionFinished();
	void HideQueueSelectionAnim();
	void InitializeWidget();
	void HandleGameModeSelected();
	void HandleGameModeHovered();
	void HandleGameModeUnhovered();
	void InitializeWidgetNavigation();
	void GoToLastScreen();
	void StartShowSequence();
	void StartHideSequence();
	void OnControlQueuePermissionChanged();
	void OnQueuePermissionChanged();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature();
	void OnShown();
	void OnHide();
	void StartShowAnim();
	void OnBackButtonClicked();
	void HandleRegionSelectRequested();
	void OnRegionSelected();
	void OnRegionSelectEntriesCreated();
	void SwitchFocusGroupToScreen();
	void HandleOnQueueSectionPopulated();
	void BndEvt__MobileSelectQueueBtn_K2Node_ComponentBoundEvent_1_OnGraphicBtnClicked__DelegateSignature();
	void PreConstruct();
	void Construct();
	void HandleQueueErrorStateChange();
	void CreateCustomMatch();
	void HandleOnCustomSectionPopulated();
	void HandleMapScrollChange();
	void Tick();
	void ExecuteUbergraph_WBP_QuickPlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
