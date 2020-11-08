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

// Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll
// (Final)

void USurrenderPoll_C::CanPlayerProposeThisPoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.CanPlayerProposeThisPoll");

	USurrenderPoll_C_CanPlayerProposeThisPoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollPassed
// (Final)

void USurrenderPoll_C::OnPollPassed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollPassed");

	USurrenderPoll_C_OnPollPassed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollFailed
// (Final)

void USurrenderPoll_C::OnPollFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollFailed");

	USurrenderPoll_C_OnPollFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.OnPollStarted
// (Final)

void USurrenderPoll_C::OnPollStarted()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.OnPollStarted");

	USurrenderPoll_C_OnPollStarted_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll
// (Final, BlueprintAuthorityOnly, BlueprintCosmetic)

void USurrenderPoll_C::ExecuteUbergraph_SurrenderPoll()
{
	static auto fn = UObject::FindObject<UFunction>("Function SurrenderPoll.SurrenderPoll_C.ExecuteUbergraph_SurrenderPoll");

	USurrenderPoll_C_ExecuteUbergraph_SurrenderPoll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
