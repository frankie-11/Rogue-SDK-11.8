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

// WidgetBlueprintGeneratedClass WBP_StoreButtonLarge.WBP_StoreButtonLarge_C
// 0xFFFFFFFFCB52D780 (0x26122100 - 0x5ABF4980)
class UWBP_StoreButtonLarge_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreButtonLarge.WBP_StoreButtonLarge_C");
		return ptr;
	}


	void OnRotationTimerTick();
	void OnInputStateChanged();
	void NavigateConfirm();
	void DisplayStoreItem();
	void SetStoreItems();
	void GamepadUnhover();
	void OnGamepadConfirm();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature();
	void OnComparePressed();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__CompareButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void GamepadHover();
	void Construct();
	void Tick();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_StoreButtonLarge();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
