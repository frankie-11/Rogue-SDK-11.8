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

// WidgetBlueprintGeneratedClass WBP_StoreButtonMedium.WBP_StoreButtonMedium_C
// 0xFFFFFFFFCE89AF80 (0x2948F900 - 0x5ABF4980)
class UWBP_StoreButtonMedium_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreButtonMedium.WBP_StoreButtonMedium_C");
		return ptr;
	}


	void OnRotationTimerTick();
	void NavigateConfirm();
	void DisplayStoreItem();
	void SetStoreItems();
	void Construct();
	void Tick();
	void GamepadHover();
	void GamepadUnhover();
	void OnGamepadConfirm();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_0_OnBtnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_StoreButtonMedium();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
