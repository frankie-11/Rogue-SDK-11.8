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

// WidgetBlueprintGeneratedClass WBP_HomeScreen_v2.WBP_HomeScreen_v2_C
// 0xFFFFFFFFD1CEFC00 (0x2C8E4580 - 0x5ABF4980)
class UWBP_HomeScreen_v2_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HomeScreen_v2.WBP_HomeScreen_v2_C");
		return ptr;
	}


	void SetVersionText();
	void CanFocus();
	void UpdateContextPrompts();
	void StopConflictingAnimation();
	void NavigateBack();
	void HandleQueueStatusChange();
	void HandleLobbyCameraSet();
	void HandlePreMatchAnimStarted();
	void UnbindLobbyAnimationHandling();
	void BindLobbyAnimationHandling();
	void InitializeContentWidgets();
	void StartShowAnim();
	void InitializeTickAnimations();
	void ShowQuickPlayFinished();
	void ShowQuickPlayAnim();
	void InitHideAnimation();
	void HideQuickPlayFinished();
	void HideQuickPlayAnim();
	void StartHideAnim();
	void InitializeWidget();
	void InitializeWidgetButtonListeners();
	void HandleJoinQueue();
	void HandleChangeQueue();
	void OnShown();
	void UninitializeWidget();
	void StartShowSequence();
	void StartHideSequence();
	void InitializeWidgetNavigation();
	void Construct();
	void OnCrossplayChanged();
	void UpdateCrossplay();
	void LoginState();
	void Update_Region();
	void Handle_Party_Player_Card_Selected();
	void Handle_Context_Menu_Navigation();
	void Handle_Context_Menu_Hidden();
	void HandleContextMenuShown();
	void FocusGroupNavigateRightFailure();
	void FocusGroupNavigateLeftFailure();
	void NewsPanelVisibilityChanged();
	void OnEOMButton();
	void HandleViewSocial();
	void FocusGroupNavigateDownFailure();
	void FocusGroupNavigateUpFailure();
	void Handle_Player_Card_Back_Button();
	void PreConstruct();
	void OnSetQueueInputState();
	void OnPartyLeaveVisibilityChange();
	void ExecuteUbergraph_WBP_HomeScreen_v2();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
