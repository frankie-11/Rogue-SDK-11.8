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

// WidgetBlueprintGeneratedClass WBP_StoreButtonSmall.WBP_StoreButtonSmall_C
// 0xFFFFFFFFCE899180 (0x2948DB00 - 0x5ABF4980)
class UWBP_StoreButtonSmall_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreButtonSmall.WBP_StoreButtonSmall_C");
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
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_3_OnBtnClicked__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_4_OnBtnHovered__DelegateSignature();
	void BndEvt__WBP_StorePanelButton_K2Node_ComponentBoundEvent_5_OnBtnUnhovered__DelegateSignature();
	void ExecuteUbergraph_WBP_StoreButtonSmall();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
