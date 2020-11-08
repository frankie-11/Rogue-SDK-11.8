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

// WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C
// 0xFFFFFFFFCF153800 (0x29D48180 - 0x5ABF4980)
class UWBP_KSCosmeticItemSelector_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KSCosmeticItemSelector.WBP_KSCosmeticItemSelector_C");
		return ptr;
	}


	void NavigateConfirm();
	void OnClickSound();
	void OnHoverSound();
	void Construct();
	void InitializeWidget();
	void OnCosmeticHover();
	void OnCosmeticUnhover();
	void OnCosmeticClicked();
	void GamepadHover();
	void GamepadUnhover();
	void SetSlotActive();
	void SetItemOwned();
	void ExecuteUbergraph_WBP_KSCosmeticItemSelector();
	void OnPurchaseItem__DelegateSignature();
	void OnItemSelected__DelegateSignature();
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
