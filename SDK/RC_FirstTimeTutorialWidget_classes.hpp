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

// WidgetBlueprintGeneratedClass FirstTimeTutorialWidget.FirstTimeTutorialWidget_C
// 0xFFFFFFFFD1FE0B80 (0x2CBD4480 - 0x5ABF3900)
class UFirstTimeTutorialWidget_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass FirstTimeTutorialWidget.FirstTimeTutorialWidget_C");
		return ptr;
	}


	void InitializeWidgetNavigation();
	void OnShown();
	void PreConstruct();
	void BndEvt__WBP_StandardButtonLarge_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__WBP_StandardButtonMedium_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_9_CloseButtonClicked__DelegateSignature();
	void OnHide();
	void ExecuteUbergraph_FirstTimeTutorialWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
