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

// WidgetBlueprintGeneratedClass MedDroneMenuOption.MedDroneMenuOption_C
// 0xFFFFFFFFCC648700 (0x2723D080 - 0x5ABF4980)
class UMedDroneMenuOption_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MedDroneMenuOption.MedDroneMenuOption_C");
		return ptr;
	}


	void NavigateBack();
	void NavigateConfirm();
	void Construct();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
	void Target_Player_Check_Validity();
	void TargetSelected();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void GamepadUnhover();
	void ExecuteUbergraph_MedDroneMenuOption();
	void Selected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
