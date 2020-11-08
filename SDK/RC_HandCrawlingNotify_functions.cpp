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

// Function HandCrawlingNotify.HandCrawlingNotify_C.Received_Notify
// ()

void UHandCrawlingNotify_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function HandCrawlingNotify.HandCrawlingNotify_C.Received_Notify");

	UHandCrawlingNotify_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HandCrawlingNotify.HandCrawlingNotify_C.GetNotifyName
// ()

void UHandCrawlingNotify_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function HandCrawlingNotify.HandCrawlingNotify_C.GetNotifyName");

	UHandCrawlingNotify_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
