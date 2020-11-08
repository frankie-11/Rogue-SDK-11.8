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

// WidgetBlueprintGeneratedClass WBP_StandardButtonMedium.WBP_StandardButtonMedium_C
// 0xFFFFFFFFD11AED00 (0x2BDA3680 - 0x5ABF4980)
class UWBP_StandardButtonMedium_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StandardButtonMedium.WBP_StandardButtonMedium_C");
		return ptr;
	}


	void GetGamepadPromptKey();
	void SetKeyPrompt();
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
	void OnInitialized();
	void ExecuteUbergraph_WBP_StandardButtonMedium();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
