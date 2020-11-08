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

// WidgetBlueprintGeneratedClass StoreItemWidget.StoreItemWidget_C
// 0xFFFFFFFFCAA81C80 (0x25671F00 - 0x5ABF0280)
class UStoreItemWidget_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StoreItemWidget.StoreItemWidget_C");
		return ptr;
	}


	void SetItemData();
	void BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_StoreItemWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
