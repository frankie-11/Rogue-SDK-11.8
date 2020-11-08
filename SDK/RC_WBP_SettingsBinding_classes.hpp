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

// WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C
// 0xAF14480 (0x68AA1300 - 0x5DB8CE80)
class UWBP_SettingsBinding_C : public UKSSettingsWidget
{
public:
	unsigned char                                      UnknownData00[0xAF14480];                                 // 0x5DB8CE80(0xAF14480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsBinding.WBP_SettingsBinding_C");
		return ptr;
	}


	void Set_Desired_Gamepad_Combo();
	void Get_Dirty_Combo_Key();
	void OnInputStateChanged();
	void CanGamepadNavigate();
	void DisableUnbindableKeybinds();
	void NavigateBack();
	void Set_Desired_Gamepad_Key();
	void Set_Desired_Secondary_Key();
	void Set_Desired_Primary_Key();
	void Get_Dirty_Gamepad_Key();
	void Get_Dirty_Secondary_Key();
	void Get_Dirty_Primary_Key();
	void SetKeysForBindingDisplays();
	void SetKeyForGamepadBindingDisplay();
	void SetKeyForSecondaryBindingDisplay();
	void SetKeyForPrimaryBindingDisplay();
	void OnWidgetSettingsInfoSet();
	void GamepadHover();
	void GamepadUnhover();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_6_OnKeySelected__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_K2Node_ComponentBoundEvent_7_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_8_OnKeySelected__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Secondary_K2Node_ComponentBoundEvent_9_OnIsSelectingKeyChanged__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_10_OnKeySelected__DelegateSignature();
	void BndEvt__WBP_InputKeySelector_Gamepad_K2Node_ComponentBoundEvent_11_OnIsSelectingKeyChanged__DelegateSignature();
	void FocusGroupNavigateDownFailure();
	void FocusGroupNavigateUpFailure();
	void InitializeWidget();
	void StopCapturingCombo();
	void StartCapturingCombo();
	void Combo_Succeed();
	void Combo_Failed();
	void OnInputAttached();
	void OnSettingsInfoValueChanged();
	void ExecuteUbergraph_WBP_SettingsBinding();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
