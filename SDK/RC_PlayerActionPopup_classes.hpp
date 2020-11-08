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

// WidgetBlueprintGeneratedClass PlayerActionPopup.PlayerActionPopup_C
// 0xFFFFFFFFC895E000 (0x23552980 - 0x5ABF4980)
class UPlayerActionPopup_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerActionPopup.PlayerActionPopup_C");
		return ptr;
	}


	void UpdateMuteText();
	void GetButtons();
	void InitializeWidget();
	void OnPopupShown();
	void OnPlayerReported();
	void BndEvt__MutePlayer_K2Node_ComponentBoundEvent_1_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__ViewProfile_K2Node_ComponentBoundEvent_3_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__ReportPlayer_K2Node_ComponentBoundEvent_6_OnBtnStackedClicked__DelegateSignature();
	void BndEvt__Back_K2Node_ComponentBoundEvent_8_OnBtnStackedClicked__DelegateSignature();
	void ExecuteUbergraph_PlayerActionPopup();
	void OnBackOut__DelegateSignature();
	void OnMutePlayer__DelegateSignature();
	void OnReportPlayer__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
