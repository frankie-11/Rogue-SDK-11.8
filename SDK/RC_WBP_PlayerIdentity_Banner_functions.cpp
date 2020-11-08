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

// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder
// ()

void UWBP_PlayerIdentity_Banner_C::HideBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.HideBorder");

	UWBP_PlayerIdentity_Banner_C_HideBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder
// ()

void UWBP_PlayerIdentity_Banner_C::SetBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBorder");

	UWBP_PlayerIdentity_Banner_C_SetBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner
// ()

void UWBP_PlayerIdentity_Banner_C::SetBanner()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Banner.WBP_PlayerIdentity_Banner_C.SetBanner");

	UWBP_PlayerIdentity_Banner_C_SetBanner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
