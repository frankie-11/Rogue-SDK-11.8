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

// Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips
// (RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UWBP_ScorePips_C::Set_Total_Pips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Total Pips");

	UWBP_ScorePips_C_Set_Total_Pips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number
// (Final, BlueprintCosmetic)

void UWBP_ScorePips_C::Set_Pips_Number()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Set Pips Number");

	UWBP_ScorePips_C_Set_Pips_Number_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct
// (Final)

void UWBP_ScorePips_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.PreConstruct");

	UWBP_ScorePips_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.Construct
// (Final)

void UWBP_ScorePips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.Construct");

	UWBP_ScorePips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips
// ()

void UWBP_ScorePips_C::ExecuteUbergraph_WBP_ScorePips()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ScorePips.WBP_ScorePips_C.ExecuteUbergraph_WBP_ScorePips");

	UWBP_ScorePips_C_ExecuteUbergraph_WBP_ScorePips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
