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

// WidgetBlueprintGeneratedClass WBP_ButtonSlot.WBP_ButtonSlot_C
// 0xFFFFFFFFC9F5E380 (0x24B52D00 - 0x5ABF4980)
class UWBP_ButtonSlot_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ButtonSlot.WBP_ButtonSlot_C");
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
	void SetIsActiveState();
	void ExecuteUbergraph_WBP_ButtonSlot();
	void OnBtnUnhovered__DelegateSignature();
	void OnBtnHovered__DelegateSignature();
	void OnBtnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
