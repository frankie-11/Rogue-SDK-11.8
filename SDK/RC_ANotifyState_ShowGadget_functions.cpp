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

// Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyEnd
// ()

void UANotifyState_ShowGadget_C::Received_NotifyEnd()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyEnd");

	UANotifyState_ShowGadget_C_Received_NotifyEnd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyBegin
// ()

void UANotifyState_ShowGadget_C::Received_NotifyBegin()
{
	static auto fn = UObject::FindObject<UFunction>("Function ANotifyState_ShowGadget.ANotifyState_ShowGadget_C.Received_NotifyBegin");

	UANotifyState_ShowGadget_C_Received_NotifyBegin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
