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

// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelExplicit
// (Final, RequiredAPI)

void UWBP_MercMasteryIcon_C::SetMasteryLevelExplicit()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelExplicit");

	UWBP_MercMasteryIcon_C_SetMasteryLevelExplicit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelForJob
// (BlueprintAuthorityOnly)

void UWBP_MercMasteryIcon_C::SetMasteryLevelForJob()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_MercMasteryIcon.WBP_MercMasteryIcon_C.SetMasteryLevelForJob");

	UWBP_MercMasteryIcon_C_SetMasteryLevelForJob_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
