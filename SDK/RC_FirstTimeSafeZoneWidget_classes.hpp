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

// WidgetBlueprintGeneratedClass FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C
// 0xFFFFFFFFD1FE1C00 (0x2CBD5500 - 0x5ABF3900)
class UFirstTimeSafeZoneWidget_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FirstTimeSafeZoneWidget.FirstTimeSafeZoneWidget_C");
		return ptr;
	}


	void InitializeWidgetNavigation();
	void InitializeWidget();
	void OnShown();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_FirstTimeSafeZoneWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
