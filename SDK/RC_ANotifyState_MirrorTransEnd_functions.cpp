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

// Function ANotifyState_MirrorTransEnd.ANotifyState_MirrorTransEnd_C.Received_NotifyBegin
// ()

void UANotifyState_MirrorTransEnd_C::Received_NotifyBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotifyState_MirrorTransEnd.ANotifyState_MirrorTransEnd_C.Received_NotifyBegin");

	UANotifyState_MirrorTransEnd_C_Received_NotifyBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
