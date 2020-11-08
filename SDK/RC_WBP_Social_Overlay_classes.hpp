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

// WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C
// 0xFFFFFFFFCE003D00 (0x2BB91B00 - 0x5DB8DE00)
class UWBP_Social_Overlay_C : public UKSSocialOverlay
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Overlay.WBP_Social_Overlay_C");
		return ptr;
	}


	void OnFriendsScrolled();
	void ToggleContextMenuForPlayerCard();
	void HandleStatusMenuHidden();
	void HandleStatusMenuShown();
	void HandleStatusNavigationReady();
	void SetupHeader();
	void SetTabIndex();
	void OnTabChange();
	void SetActiveTabByWidget();
	void OnMouseButtonUp();
	void MoveTabBy();
	void SetupNavTabs();
	void NavigateBack();
	void ClosePanel();
	void OnShown();
	void BndEvt__Blocker_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void StartShowSequence();
	void StartHideSequence();
	void InitializeWidget();
	void OnTabClicked();
	void UninitializeWidget();
	void OnPlayerCardClick();
	void OnInputStateChange();
	void InitializeWidgetNavigation();
	void OnHide();
	void OnTabLeft();
	void OnTabRight();
	void OnToggleSocial();
	void OnViewStateChange();
	void OnToggleStatusMenu();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_1_OnReadyForNavigation__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_2_OnMenuHidden__DelegateSignature();
	void BndEvt__ContextMenu_K2Node_ComponentBoundEvent_3_OnMenuStart__DelegateSignature();
	void HandlePlayerInvitesChanged();
	void BndEvt__ContextBlocker_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_Social_Overlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
