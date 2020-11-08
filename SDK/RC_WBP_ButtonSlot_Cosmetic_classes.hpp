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

// WidgetBlueprintGeneratedClass WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C
// 0xFFFFFFFFC9F67680 (0x24B5C000 - 0x5ABF4980)
class UWBP_ButtonSlot_Cosmetic_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ButtonSlot_Cosmetic.WBP_ButtonSlot_Cosmetic_C");
		return ptr;
	}


	void RestoreDefaultColor();
	void OverrideColor();
	void SetTint();
	void OnHoveredLogic();
	void NavigateConfirm();
	void OnHoverSound();
	void Construct();
	void OnGamepadConfirmed();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void DisableButton();
	void CallButtonHover();
	void CallButtonUnhover();
	void SetIsActiveState();
	void PreConstruct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void OnClickSound();
	void ExecuteUbergraph_WBP_ButtonSlot_Cosmetic();
	void OnBtnUnhovered__DelegateSignature();
	void OnBtnHovered__DelegateSignature();
	void OnBtnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
