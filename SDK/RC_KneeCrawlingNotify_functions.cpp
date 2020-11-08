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

// Function KneeCrawlingNotify.KneeCrawlingNotify_C.Received_Notify
// ()

void UKneeCrawlingNotify_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function KneeCrawlingNotify.KneeCrawlingNotify_C.Received_Notify");

	UKneeCrawlingNotify_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KneeCrawlingNotify.KneeCrawlingNotify_C.GetNotifyName
// ()

void UKneeCrawlingNotify_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function KneeCrawlingNotify.KneeCrawlingNotify_C.GetNotifyName");

	UKneeCrawlingNotify_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
