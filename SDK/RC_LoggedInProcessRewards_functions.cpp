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

// Function LoggedInProcessRewards.LoggedInProcessRewards_C.OnShown
// (Final)

void ULoggedInProcessRewards_C::OnShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInProcessRewards.LoggedInProcessRewards_C.OnShown");

	ULoggedInProcessRewards_C_OnShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LoggedInProcessRewards.LoggedInProcessRewards_C.ExecuteUbergraph_LoggedInProcessRewards
// (Final, BlueprintAuthorityOnly)

void ULoggedInProcessRewards_C::ExecuteUbergraph_LoggedInProcessRewards()
{
	static auto fn = UObject::FindObject<UFunction>("Function LoggedInProcessRewards.LoggedInProcessRewards_C.ExecuteUbergraph_LoggedInProcessRewards");

	ULoggedInProcessRewards_C_ExecuteUbergraph_LoggedInProcessRewards_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
