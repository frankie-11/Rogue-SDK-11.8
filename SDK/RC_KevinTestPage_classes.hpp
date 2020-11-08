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

// WidgetBlueprintGeneratedClass KevinTestPage.KevinTestPage_C
// 0x2CBD3B00
class UKevinTestPage_C : public UKSKevinTest
{
public:
	unsigned char                                      UnknownData00[0x2CBD3B00];                                // 0x0000(0x2CBD3B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KevinTestPage.KevinTestPage_C");
		return ptr;
	}


	void Intialize_Item_Helper_Example();
	void OnShowPurchaseModal();
	void OnNeedMoreMoney();
	void OnVendorReceived();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void InitializeWidget();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_0_BackButtonClicked__DelegateSignature();
	void Construct();
	void BndEvt__ExampleSelector_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature();
	void ExecuteUbergraph_KevinTestPage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
