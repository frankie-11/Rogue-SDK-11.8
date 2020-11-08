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

// Function WBP_StoreRotatorTick.WBP_StoreRotatorTick_C.SetTickActive
// (RequiredAPI)

void UWBP_StoreRotatorTick_C::SetTickActive()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_StoreRotatorTick.WBP_StoreRotatorTick_C.SetTickActive");

	UWBP_StoreRotatorTick_C_SetTickActive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
