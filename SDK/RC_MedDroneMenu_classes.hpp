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

// WidgetBlueprintGeneratedClass MedDroneMenu.MedDroneMenu_C
// 0xFFFFFFFFCC64AA80 (0x2723F400 - 0x5ABF4980)
class UMedDroneMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MedDroneMenu.MedDroneMenu_C");
		return ptr;
	}


	void Construct();
	void OptionSelected();
	void BndEvt__OutButton_K2Node_ComponentBoundEvent_40_OnButtonClickedEvent__DelegateSignature();
	void Close();
	void InitializeWidgetNavigation();
	void InitializeWidget();
	void Handle_Input_State_Change();
	void ExecuteUbergraph_MedDroneMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
