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

// WidgetBlueprintGeneratedClass WBP_SettingsSlider.WBP_SettingsSlider_C
// 0xAF15D00 (0x68AA2B80 - 0x5DB8CE80)
class UWBP_SettingsSlider_C : public UKSSettingsWidget
{
public:
	unsigned char                                      UnknownData00[0xAF15D00];                                 // 0x5DB8CE80(0xAF15D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsSlider.WBP_SettingsSlider_C");
		return ptr;
	}


	void IsSliderKey();
	void ResetCurrentAcceleration();
	void IncreaseCurrentAcceleration();
	void OnKeyUp();
	void OnKeyDown();
	void Step_Left();
	void Step();
	void Step_Right();
	void Set_Display_Text();
	void Set_Desired_Value();
	void Position_Slider_To_Value();
	void Slider_To_Value();
	void GetMaxSliderValue();
	void GetMinSliderValue();
	void Value_To_Slider();
	void Get_Dirty_Value();
	void Construct();
	void Tick();
	void BndEvt__SettingsSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature();
	void OnWidgetSettingsInfoSet();
	void OnMouseEnter();
	void OnMouseLeave();
	void GamepadHover();
	void GamepadUnhover();
	void NavigateLeftFailure();
	void NavigateRightFailure();
	void OnSettingsInfoValueChanged();
	void ExecuteUbergraph_WBP_SettingsSlider();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
