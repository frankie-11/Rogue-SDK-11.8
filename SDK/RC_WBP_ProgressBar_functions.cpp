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

// Function WBP_ProgressBar.WBP_ProgressBar_C.SetFillPercentage
// (BlueprintAuthorityOnly)

void UWBP_ProgressBar_C::SetFillPercentage()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ProgressBar.WBP_ProgressBar_C.SetFillPercentage");

	UWBP_ProgressBar_C_SetFillPercentage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
