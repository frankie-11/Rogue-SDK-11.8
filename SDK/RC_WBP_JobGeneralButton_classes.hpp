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

// WidgetBlueprintGeneratedClass WBP_JobGeneralButton.WBP_JobGeneralButton_C
// 0xFFFFFFFFD11ABA80 (0x2BDA0400 - 0x5ABF4980)
class UWBP_JobGeneralButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_JobGeneralButton.WBP_JobGeneralButton_C");
		return ptr;
	}


	void SetItemOwned();
	void CanBeFavorited();
	void DisplayFavoriteStatus();
	void PopulateJobButton();
	void NavigateConfirm();
	void OnClickSound();
	void OnHoverSound();
	void OnHoverFavoriteSFX();
	void OnClickFavoriteSFX();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void PreConstruct();
	void OnGamepadConfirm();
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void InitializeWidget();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__FavoriteHitBox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void UninitializeWidget();
	void ExecuteUbergraph_WBP_JobGeneralButton();
	void OnFavorited__DelegateSignature();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
