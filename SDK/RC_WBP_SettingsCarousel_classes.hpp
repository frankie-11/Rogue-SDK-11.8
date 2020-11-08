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

// WidgetBlueprintGeneratedClass WBP_SettingsCarousel.WBP_SettingsCarousel_C
// 0xAF1B980 (0x68AA8800 - 0x5DB8CE80)
class UWBP_SettingsCarousel_C : public UKSSettingsWidget
{
public:
	unsigned char                                      UnknownData00[0xAF1B980];                                 // 0x5DB8CE80(0xAF1B980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsCarousel.WBP_SettingsCarousel_C");
		return ptr;
	}


	void Make_Indicator_Lights();
	void Add_Indicator_Light();
	void SetAnimationTextToIndex();
	void SetDisplayTextToIndex();
	void GetDirtyIndex();
	void SetDesiredIndex();
	void SetTextToIndex();
	void SettingsCarouselHoverSFX();
	void SettingsCarouselClickedSFX();
	void GamepadHover();
	void GamepadUnhover();
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void Master_Hover();
	void Master_Unhover();
	void InitializeWidget();
	void OnWidgetSettingsInfoSet();
	void OnWidgetConfigSet();
	void BndEvt__Left_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Right_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Reset_Text();
	void Reset_Indicator_Light();
	void Reset();
	void NavigateRightFailure();
	void NavigateLeftFailure();
	void FocusGroupNavigateDownFailure();
	void FocusGroupNavigateUpFailure();
	void Reset_Indicator_Lights();
	void OnSettingsInfoValueChanged();
	void ExecuteUbergraph_WBP_SettingsCarousel();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
