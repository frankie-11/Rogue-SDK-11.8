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

// WidgetBlueprintGeneratedClass WBP_KSItemDisplay.WBP_KSItemDisplay_C
// 0xFFFFFFFFC9F5ED80 (0x24B53700 - 0x5ABF4980)
class UWBP_KSItemDisplay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KSItemDisplay.WBP_KSItemDisplay_C");
		return ptr;
	}


	void OnButtonHovered();
	void OnHoverSound();
	void PopulateSlot();
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__Button_111_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_111_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void SetIsActiveState();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_KSItemDisplay();
	void OnClick__DelegateSignature();
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
