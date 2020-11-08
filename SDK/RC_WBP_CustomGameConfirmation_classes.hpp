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

// WidgetBlueprintGeneratedClass WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C
// 0xFFFFFFFFD161B780 (0x2C210100 - 0x5ABF4980)
class UWBP_CustomGameConfirmation_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomGameConfirmation.WBP_CustomGameConfirmation_C");
		return ptr;
	}


	void InitalizeButtons();
	void GetButtons();
	void PopulateCustomPopup();
	void InitializeWidget();
	void BndEvt__CreateButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_2_CloseButtonClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomGameConfirmation();
	void OnCreateLobby__DelegateSignature();
	void OnCancelLobby__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
