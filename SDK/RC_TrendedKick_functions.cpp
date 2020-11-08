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

// Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick
// (RequiredAPI)

void UTrendedKick_C::GetMaximumHorizontalKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetMaximumHorizontalKick");

	UTrendedKick_C_GetMaximumHorizontalKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick
// (RequiredAPI)

void UTrendedKick_C::GetMaximumVerticalKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetMaximumVerticalKick");

	UTrendedKick_C_GetMaximumVerticalKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile
// (RequiredAPI, BlueprintCosmetic)

void UTrendedKick_C::GetCurrentTrendProfile()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.GetCurrentTrendProfile");

	UTrendedKick_C_GetCurrentTrendProfile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TrendedKick.TrendedKick_C.MakeKickbackInstance
// (Final, RequiredAPI, BlueprintCosmetic)

void UTrendedKick_C::MakeKickbackInstance()
{
	static auto fn = UObject::FindObject<UFunction>("Function TrendedKick.TrendedKick_C.MakeKickbackInstance");

	UTrendedKick_C_MakeKickbackInstance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
