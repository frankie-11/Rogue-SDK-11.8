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

// WidgetBlueprintGeneratedClass WBP_ButtonArrow.WBP_ButtonArrow_C
// 0xFFFFFFFFD1577200 (0x2C16BB80 - 0x5ABF4980)
class UWBP_ButtonArrow_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ButtonArrow.WBP_ButtonArrow_C");
		return ptr;
	}


	void OnHoveredLogic();
	void NavigateConfirm();
	void OnClickSound();
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
	void PreConstruct();
	void ExecuteUbergraph_WBP_ButtonArrow();
	void OnBtnUnhovered__DelegateSignature();
	void OnBtnHovered__DelegateSignature();
	void OnBtnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
