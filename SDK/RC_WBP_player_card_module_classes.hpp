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

// WidgetBlueprintGeneratedClass WBP_player_card_module.WBP_player_card_module_C
// 0xFFFFFFFFCF1BB380 (0x2CD22880 - 0x5DB67500)
class UWBP_player_card_module_C : public UKSPlayerCardModuleBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_player_card_module.WBP_player_card_module_C");
		return ptr;
	}


	void SetPlayerCardStyle();
	void SetVoiceState();
	void View_ResetPlayerCardState();
	void NavigateConfirm();
	void PlayerUpdate();
	void View_SetDefault();
	void View_SetEmpty();
	void SocialPlayerCardHoverSFX();
	void SocialPlayerCardClickSFX();
	void ShowPlayerCardAnimation();
	void ShowPlayerCardAnimationFinished();
	void AddShowPlayerCardAnimation();
	void PreConstruct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void Manual_Clicked();
	void GamepadUnhover();
	void GamepadHover();
	void NavigateLeftFailure();
	void NavigateRightFailure();
	void Manual_Hover();
	void Manual_Unhover();
	void OnPlayerUpdate();
	void Handle_Input_State_Changed();
	void OnContextMenuOpen();
	void OnContextMenuClose();
	void OnInitialized();
	void ExecuteUbergraph_WBP_player_card_module();
	void OnBackButton__DelegateSignature();
	void OnCardHovered__DelegateSignature();
	void OnNavigateRightFailure__DelegateSignature();
	void OnNavigateLeftFailure__DelegateSignature();
	void OnPlayerClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
