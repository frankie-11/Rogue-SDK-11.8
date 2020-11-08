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

// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged
// ()

void UDefaultEnvironmentListener_C::OnEnvironmentChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.OnEnvironmentChanged");

	UDefaultEnvironmentListener_C_OnEnvironmentChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State
// ()

void UDefaultEnvironmentListener_C::Print_State()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.Print State");

	UDefaultEnvironmentListener_C_Print_State_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay
// ()

void UDefaultEnvironmentListener_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ReceiveBeginPlay");

	UDefaultEnvironmentListener_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener
// ()

void UDefaultEnvironmentListener_C::ExecuteUbergraph_DefaultEnvironmentListener()
{
	static auto fn = UObject::FindObject<UFunction>("Function DefaultEnvironmentListener.DefaultEnvironmentListener_C.ExecuteUbergraph_DefaultEnvironmentListener");

	UDefaultEnvironmentListener_C_ExecuteUbergraph_DefaultEnvironmentListener_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
