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

// WidgetBlueprintGeneratedClass WBP_Social_Search_bar.WBP_Social_Search_bar_C
// 0xFFFFFFFFCAE36F80 (0x25A2B900 - 0x5ABF4980)
class UWBP_Social_Search_bar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Search_bar.WBP_Social_Search_bar_C");
		return ptr;
	}


	void NavigateConfirm();
	void ShowVirtualKeyboard();
	void Clear();
	void DoSearch();
	void InitializeWidget();
	void UninitializeWidget();
	void OnSearchTextChange();
	void BndEvt__InputText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature();
	void BndEvt__InputText_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature();
	void BndEvt__SubmitButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_Social_Search_bar();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnSearchTermChange__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
