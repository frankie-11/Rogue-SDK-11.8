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

// WidgetBlueprintGeneratedClass FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C
// 0xFFFFFFFFD1FE4500 (0x2CBD7E00 - 0x5ABF3900)
class UFirstTimeBrightnessWidget_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FirstTimeBrightnessWidget.FirstTimeBrightnessWidget_C");
		return ptr;
	}


	void OnShown();
	void OnHide();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct();
	void ExecuteUbergraph_FirstTimeBrightnessWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
