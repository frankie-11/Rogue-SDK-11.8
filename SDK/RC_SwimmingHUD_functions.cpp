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

// Function SwimmingHUD.SwimmingHUD_C.Construct
// (Final)

void USwimmingHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwimmingHUD.SwimmingHUD_C.Construct");

	USwimmingHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingHUD.SwimmingHUD_C.SwimmingChanged
// (Final)

void USwimmingHUD_C::SwimmingChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwimmingHUD.SwimmingHUD_C.SwimmingChanged");

	USwimmingHUD_C_SwimmingChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingHUD.SwimmingHUD_C.PostSetPawn
// (Final)

void USwimmingHUD_C::PostSetPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwimmingHUD.SwimmingHUD_C.PostSetPawn");

	USwimmingHUD_C_PostSetPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingHUD.SwimmingHUD_C.PreClearPawn
// (Final)

void USwimmingHUD_C::PreClearPawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwimmingHUD.SwimmingHUD_C.PreClearPawn");

	USwimmingHUD_C_PreClearPawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function SwimmingHUD.SwimmingHUD_C.ExecuteUbergraph_SwimmingHUD
// (Final, BlueprintAuthorityOnly)

void USwimmingHUD_C::ExecuteUbergraph_SwimmingHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function SwimmingHUD.SwimmingHUD_C.ExecuteUbergraph_SwimmingHUD");

	USwimmingHUD_C_ExecuteUbergraph_SwimmingHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
