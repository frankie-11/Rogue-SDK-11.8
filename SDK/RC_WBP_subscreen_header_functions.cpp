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

// Function WBP_subscreen_header.WBP_subscreen_header_C.PreConstruct
// (Final)

void UWBP_subscreen_header_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_header.WBP_subscreen_header_C.PreConstruct");

	UWBP_subscreen_header_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_subscreen_header.WBP_subscreen_header_C.ExecuteUbergraph_WBP_subscreen_header
// (RequiredAPI)

void UWBP_subscreen_header_C::ExecuteUbergraph_WBP_subscreen_header()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_subscreen_header.WBP_subscreen_header_C.ExecuteUbergraph_WBP_subscreen_header");

	UWBP_subscreen_header_C_ExecuteUbergraph_WBP_subscreen_header_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
