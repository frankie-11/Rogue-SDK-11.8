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

// WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C
// 0xFFFFFFFFD1976580 (0x2C56AF00 - 0x5ABF4980)
class UWBP_QuickPlay_QueueButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_QuickPlay_QueueButton.WBP_QuickPlay_QueueButton_C");
		return ptr;
	}


	void UpdateStatus();
	void NavigateConfirm();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_0_OnGraphicBtnClicked__DelegateSignature();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_1_OnGraphicBtnHovered__DelegateSignature();
	void BndEvt__WBP_Graphic_Button_K2Node_ComponentBoundEvent_2_OnGraphicBtnUnhovered__DelegateSignature();
	void InitializeWidget();
	void Construct();
	void OnButtonHovered();
	void OnButtonUnhovered();
	void GamepadHover();
	void GamepadUnhover();
	void GamepadConfirm();
	void SetButtonActive();
	void PreConstruct();
	void ExecuteUbergraph_WBP_QuickPlay_QueueButton();
	void OnQueueBtnUnhovered__DelegateSignature();
	void OnQueueBtnHovered__DelegateSignature();
	void OnQueueBtnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
