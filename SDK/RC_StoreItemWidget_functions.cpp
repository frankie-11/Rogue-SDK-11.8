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

// Function StoreItemWidget.StoreItemWidget_C.SetItemData
// (RequiredAPI)

void UStoreItemWidget_C::SetItemData()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemWidget.StoreItemWidget_C.SetItemData");

	UStoreItemWidget_C_SetItemData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemWidget.StoreItemWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (Final)

void UStoreItemWidget_C::BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemWidget.StoreItemWidget_C.BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UStoreItemWidget_C_BndEvt__PurchaseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StoreItemWidget.StoreItemWidget_C.ExecuteUbergraph_StoreItemWidget
// (Final)

void UStoreItemWidget_C::ExecuteUbergraph_StoreItemWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function StoreItemWidget.StoreItemWidget_C.ExecuteUbergraph_StoreItemWidget");

	UStoreItemWidget_C_ExecuteUbergraph_StoreItemWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
