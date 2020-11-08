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

// WidgetBlueprintGeneratedClass ReportMenu.ReportMenu_C
// 0xFFFFFFFFC98AB200 (0x2449FB80 - 0x5ABF4980)
class UReportMenu_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReportMenu.ReportMenu_C");
		return ptr;
	}


	void GetNavigationWidgets();
	void SelectReason();
	void ReportPlayer();
	void OnOpenReportScreen();
	void InitializeWidget();
	void OnShown();
	void OnHide();
	void BndEvt__SubmitNew_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__HarassmentButton_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__CheatingButton_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__IntentionalFeedingButton_K2Node_ComponentBoundEvent_5_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__StreamSnipingButton_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__LeavingButton_K2Node_ComponentBoundEvent_12_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__OtherButton_K2Node_ComponentBoundEvent_16_OnBtnStackedClicked__DelegateSignature();
	void ExecuteUbergraph_ReportMenu();
	void OnTabPressed__DelegateSignature();
	void OnPlayerReported__DelegateSignature();
	void OnCloseTabScreen__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
