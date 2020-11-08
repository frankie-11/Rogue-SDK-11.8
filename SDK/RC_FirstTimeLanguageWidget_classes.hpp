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

// WidgetBlueprintGeneratedClass FirstTimeLanguageWidget.FirstTimeLanguageWidget_C
// 0xFFFFFFFFCC136200 (0x26D29B00 - 0x5ABF3900)
class UFirstTimeLanguageWidget_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FirstTimeLanguageWidget.FirstTimeLanguageWidget_C");
		return ptr;
	}


	void InitializeWidget();
	void OnShown();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void PreConstruct();
	void HandleInputState();
	void SaveSetting();
	void OnHide();
	void OnSettingSelected();
	void ExecuteUbergraph_FirstTimeLanguageWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
