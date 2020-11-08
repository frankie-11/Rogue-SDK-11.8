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

// Function SFXEvent.SFXEvent_C.GetNotifyName
// ()

void USFXEvent_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function SFXEvent.SFXEvent_C.GetNotifyName");

	USFXEvent_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SFXEvent.SFXEvent_C.Received_Notify
// ()

void USFXEvent_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function SFXEvent.SFXEvent_C.Received_Notify");

	USFXEvent_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
