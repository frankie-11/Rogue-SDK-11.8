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

// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C
// 0xFFFFFFFFCF156900 (0x29D4B280 - 0x5ABF4980)
class UWBP_KSCosmeticItemDisplay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KSCosmeticItemDisplay.WBP_KSCosmeticItemDisplay_C");
		return ptr;
	}


	void SetItemOwned();
	void NavigateConfirm();
	void ResetSlot();
	void SetWeaponSlot();
	void SetCornerIcon();
	void SetCosmeticSlot();
	void OnClickSound();
	void OnHoverSound();
	void PopulateSlot();
	void Construct();
	void OnHovered();
	void OnButtonUnhovered();
	void InitializeWidget();
	void PreConstruct();
	void OnButtonClicked();
	void GamepadHover();
	void GamepadUnhover();
	void CallHovered();
	void CallUnhovered();
	void SetSlotActive();
	void ExecuteUbergraph_WBP_KSCosmeticItemDisplay();
	void OnCosmeticClicked__DelegateSignature();
	void OnUnhover__DelegateSignature();
	void OnHover__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
