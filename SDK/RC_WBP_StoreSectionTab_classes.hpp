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

// WidgetBlueprintGeneratedClass WBP_StoreSectionTab.WBP_StoreSectionTab_C
// 0xFFFFFFFFD11B4480 (0x2BDA8E00 - 0x5ABF4980)
class UWBP_StoreSectionTab_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreSectionTab.WBP_StoreSectionTab_C");
		return ptr;
	}


	void ShowCTA();
	void SetPromptButton();
	void OnInputStateChanged();
	void NavigateConfirm();
	void Construct();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void GamepadConfirm();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__TabButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void SetActive();
	void SetInactive();
	void PreConstruct();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_StoreSectionTab();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
