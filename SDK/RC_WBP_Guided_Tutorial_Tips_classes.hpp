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

// WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C
// 0xFFFFFFFFD1CF6700 (0x2C8EB080 - 0x5ABF4980)
class UWBP_Guided_Tutorial_Tips_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Tips.WBP_Guided_Tutorial_Tips_C");
		return ptr;
	}


	void NavigateBack();
	void GuidedTutorialShown();
	void SetTipMode();
	void Construct();
	void InitializeWidget();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void HandleCloseHovered();
	void HandleCLoseUnhovered();
	void InitializeWidgetNavigation();
	void OnShown();
	void PreConstruct();
	void CloseScene();
	void BndEvt__GotItButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void OnBackPrompt();
	void ExecuteUbergraph_WBP_Guided_Tutorial_Tips();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
