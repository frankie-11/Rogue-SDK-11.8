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

// Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.UpdatePlayerRankInfo
// (Final, RequiredAPI)

void UWBP_PersonalRankedIcon_C::UpdatePlayerRankInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.UpdatePlayerRankInfo");

	UWBP_PersonalRankedIcon_C_UpdatePlayerRankInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.Construct
// (Final)

void UWBP_PersonalRankedIcon_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.Construct");

	UWBP_PersonalRankedIcon_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.InitializeWidget
// (Final)

void UWBP_PersonalRankedIcon_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.InitializeWidget");

	UWBP_PersonalRankedIcon_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.ExecuteUbergraph_WBP_PersonalRankedIcon
// (RequiredAPI)

void UWBP_PersonalRankedIcon_C::ExecuteUbergraph_WBP_PersonalRankedIcon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C.ExecuteUbergraph_WBP_PersonalRankedIcon");

	UWBP_PersonalRankedIcon_C_ExecuteUbergraph_WBP_PersonalRankedIcon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
