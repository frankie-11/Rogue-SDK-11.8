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

// WidgetBlueprintGeneratedClass WBP_StandardButtonInner.WBP_StandardButtonInner_C
// 0xFFFFFFFFCFA74F80 (0x2A669900 - 0x5ABF4980)
class UWBP_StandardButtonInner_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StandardButtonInner.WBP_StandardButtonInner_C");
		return ptr;
	}


	void SetDefaultValues();
	void SetHeight();
	void HasGamepadAction();
	void SetGamepadPromptForAction();
	void SetDefaultDisplay();
	void SetWidth();
	void SetButtonText();
	void NavigateConfirm();
	void PreConstruct();
	void Construct();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__LoadoutButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void Do_Hover();
	void Do_Unhover();
	void InitializeWidget();
	void HandleInputStateChanged();
	void ExecuteUbergraph_WBP_StandardButtonInner();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
