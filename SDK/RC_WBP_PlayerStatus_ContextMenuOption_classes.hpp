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

// WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C
// 0xFFFFFFFFCFA73300 (0x2A667C80 - 0x5ABF4980)
class UWBP_PlayerStatus_ContextMenuOption_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerStatus_ContextMenuOption.WBP_PlayerStatus_ContextMenuOption_C");
		return ptr;
	}


	void NavigateConfirm();
	void IsActiveForNavigation();
	void Update_Callout_Visibility();
	void SocialPlayerContextMenuOptionClickSFX();
	void SocialPlayerContextMenuOptionHoverSFX();
	void PreConstruct();
	void SetActiveInMenu();
	void InitializeWidget();
	void Handle_Input_State_Changed();
	void GamepadHover();
	void GamepadUnhover();
	void Construct();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_4_OnBtnStackedHovered__DelegateSignature();
	void BndEvt__WBP_ButtonStacked_K2Node_ComponentBoundEvent_5_OnBtnStackedUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerStatus_ContextMenuOption();
	void OnContextOptionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
