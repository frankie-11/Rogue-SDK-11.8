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

// WidgetBlueprintGeneratedClass WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C
// 0xFFFFFFFFD1D2C780 (0x2C921100 - 0x5ABF4980)
class UWBP_WelcomeToRankedPopup_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WelcomeToRankedPopup.WBP_WelcomeToRankedPopup_C");
		return ptr;
	}


	void SetUpRankedDisplay();
	void NavigateBack();
	void PreConstruct();
	void Construct();
	void InitializeWidget();
	void BndEvt__DismissButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void InitializeWidgetNavigation();
	void OnClose();
	void ExecuteUbergraph_WBP_WelcomeToRankedPopup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
