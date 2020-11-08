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

// WidgetBlueprintGeneratedClass WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C
// 0xFFFFFFFFD17DDC80 (0x2C3D2600 - 0x5ABF4980)
class UWBP_subscreen_nav_tab_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_subscreen_nav_tab.WBP_subscreen_nav_tab_C");
		return ptr;
	}


	void TryCreateCalloutWidget();
	void SetShowCallout();
	void SetDisabled();
	void SettingsSubScreenNavTabClickedSFX();
	void SettingsSubScreenNavTabHoveredSFX();
	void Construct();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void On_Selected();
	void On_Unselected();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetButtonText();
	void ProxyClick();
	void InitializeWidget();
	void PreConstruct();
	void ExecuteUbergraph_WBP_subscreen_nav_tab();
	void On_Tab_Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
