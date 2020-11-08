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

// WidgetBlueprintGeneratedClass WBP_ShearedButton.WBP_ShearedButton_C
// 0xFFFFFFFFD1971080 (0x2C565A00 - 0x5ABF4980)
class UWBP_ShearedButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShearedButton.WBP_ShearedButton_C");
		return ptr;
	}


	void ApplyColors();
	void SetActive();
	void SetDisabled();
	void NavigateConfirm();
	void SetMessage();
	void SetShadowVisibility();
	void SetPositions();
	void SetSizings();
	void SetColors();
	void HoverStateAnimFinished();
	void UnhoverStateAnim();
	void UnhoverStateAnimFinished();
	void PressedStateAnim();
	void PressedStateAnimFinished();
	void ReleasedStateAnim();
	void ReleasedStateAnimFinished();
	void HoverStateAnim();
	void InitializeTickAnimations();
	void PreConstruct();
	void Construct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void ProxyClick();
	void ProxyHover();
	void ProxyUnhover();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ResetDisplay();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_ShearedButton();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
