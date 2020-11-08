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

// WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C
// 0xFFFFFFFFD157A180 (0x2C16EB00 - 0x5ABF4980)
class UWBP_PurchaseConfirmationButton_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PurchaseConfirmationButton.WBP_PurchaseConfirmationButton_C");
		return ptr;
	}


	void StartConfirmHold();
	void ClearConfirmHold();
	void UpdateGamepadPromptDisplay();
	void OnButtonUnhovered();
	void OnButtonHovered();
	void OnButtonClicked();
	void SetPortalOffer();
	void SetRawText();
	void SetStorePrice();
	void PreConstruct();
	void Construct();
	void Tick();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_PurchaseConfirmationButton();
	void OnRawClick__DelegateSignature();
	void PurcaseItemWithPortalOffer__DelegateSignature();
	void PurcaseItemWithPrice__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
