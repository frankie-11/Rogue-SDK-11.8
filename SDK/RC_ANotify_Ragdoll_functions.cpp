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

// Function ANotify_Ragdoll.ANotify_Ragdoll_C.Received_Notify
// ()

void UANotify_Ragdoll_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotify_Ragdoll.ANotify_Ragdoll_C.Received_Notify");

	UANotify_Ragdoll_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
