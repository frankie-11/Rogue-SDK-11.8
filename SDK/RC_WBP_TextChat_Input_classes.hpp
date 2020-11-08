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

// WidgetBlueprintGeneratedClass WBP_TextChat_Input.WBP_TextChat_Input_C
// 0xFFFFFFFFD1BE7400 (0x2C7DBD80 - 0x5ABF4980)
class UWBP_TextChat_Input_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TextChat_Input.WBP_TextChat_Input_C");
		return ptr;
	}


	void SetPromptActionActive();
	void UpdateGamepadFocus();
	void HandleInputStateChange();
	void SetEngaged();
	void UpdateHintText();
	void GetHintText();
	void SetCurrentChannel();
	void On_Input_KeyDown();
	void PreConstruct();
	void BndEvt__Button_66_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitializeWidget();
	void OnViewStateChanged();
	void BndEvt__Input_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__Input_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_TextChat_Input();
	void OnDownPressed__DelegateSignature();
	void OnUpPressed__DelegateSignature();
	void OnRightPressed__DelegateSignature();
	void OnLeftPressed__DelegateSignature();
	void OnCancelPressed__DelegateSignature();
	void OnTabPressed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
