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

// WidgetBlueprintGeneratedClass WBP_InputKeySelector.WBP_InputKeySelector_C
// 0xBD38300 (0x6692BC00 - 0x5ABF3900)
class UWBP_InputKeySelector_C : public UPUMG_Widget
{
public:
	unsigned char                                      UnknownData00[0xBD38300];                                 // 0x5ABF3900(0xBD38300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputKeySelector.WBP_InputKeySelector_C");
		return ptr;
	}


	void SetMouseWheel();
	void OnMouseWheel();
	void OnKeyUp();
	void InputKeySelectorInputSelectedSFX();
	void InputKeySelectorClickSFX();
	void InputKeySelectorHoverSFX();
	void Construct();
	void BndEvt__KeySelector_K2Node_ComponentBoundEvent_0_OnKeySelected__DelegateSignature();
	void BndEvt__KeySelector_K2Node_ComponentBoundEvent_1_OnIsSelectingKeyChanged__DelegateSignature();
	void GamepadHover();
	void GamepadUnhover();
	void Set_Selected_Key();
	void OnMouseEnter();
	void OnMouseLeave();
	void InitializeWidget();
	void SetDisabledText();
	void SetComboGamepadKey();
	void Capture_Combo();
	void TabRight();
	void ExecuteUbergraph_WBP_InputKeySelector();
	void OnComboKeySelected__DelegateSignature();
	void OnIsSelectingKeyChanged__DelegateSignature();
	void OnKeySelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
