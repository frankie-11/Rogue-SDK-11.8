// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData
// ()

void UBuyMenuItemWidgetInterface_C::RefreshData()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.RefreshData");

	UBuyMenuItemWidgetInterface_C_RefreshData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge
// ()

void UBuyMenuItemWidgetInterface_C::PurchaseAcknowledge()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.PurchaseAcknowledge");

	UBuyMenuItemWidgetInterface_C_PurchaseAcknowledge_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type
// ()

void UBuyMenuItemWidgetInterface_C::Get_Shop_Item_Type()
{
	static auto fn = UObject::FindObject<UFunction>("Function BuyMenuItemWidgetInterface.BuyMenuItemWidgetInterface_C.Get Shop Item Type");

	UBuyMenuItemWidgetInterface_C_Get_Shop_Item_Type_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
