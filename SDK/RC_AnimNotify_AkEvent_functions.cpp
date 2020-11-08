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

// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Hirez Get Ak Component
// ()

void UAnimNotify_AkEvent_C::Hirez_Get_Ak_Component()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Hirez Get Ak Component");

	UAnimNotify_AkEvent_C_Hirez_Get_Ak_Component_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify
// ()

void UAnimNotify_AkEvent_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function AnimNotify_AkEvent.AnimNotify_AkEvent_C.Received_Notify");

	UAnimNotify_AkEvent_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
