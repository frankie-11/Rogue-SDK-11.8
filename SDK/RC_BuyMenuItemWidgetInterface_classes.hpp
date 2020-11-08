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

// BlueprintGeneratedClass BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C
// 0x0000
class UBuyMenuItemWidgetInterface_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C");
		return ptr;
	}


	void RefreshData();
	void PurchaseAcknowledge();
	void Get_Shop_Item_Type();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
