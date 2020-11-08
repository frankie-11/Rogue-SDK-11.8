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

// WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C
// 0xFFFFFFFFD11B1680 (0x2BDA6000 - 0x5ABF4980)
class UWBP_RedeemCodeField_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RedeemCodeField.WBP_RedeemCodeField_C");
		return ptr;
	}


	void SetText();
	void GetText();
	void NavigateConfirm();
	void Set_Up_Keyboard_Focus();
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__CodeEntry_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_RedeemCodeField();
	void OnTextCommitted__DelegateSignature();
	void OnTextChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
