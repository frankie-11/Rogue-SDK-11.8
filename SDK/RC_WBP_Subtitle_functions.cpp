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

// Function WBP_Subtitle.WBP_Subtitle_C.SetText
// ()

void UWBP_Subtitle_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitle.WBP_Subtitle_C.SetText");

	UWBP_Subtitle_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Subtitle.WBP_Subtitle_C.PreConstruct
// (Final)

void UWBP_Subtitle_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitle.WBP_Subtitle_C.PreConstruct");

	UWBP_Subtitle_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Subtitle.WBP_Subtitle_C.Construct
// (Final)

void UWBP_Subtitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitle.WBP_Subtitle_C.Construct");

	UWBP_Subtitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Subtitle.WBP_Subtitle_C.ExecuteUbergraph_WBP_Subtitle
// (RequiredAPI)

void UWBP_Subtitle_C::ExecuteUbergraph_WBP_Subtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Subtitle.WBP_Subtitle_C.ExecuteUbergraph_WBP_Subtitle");

	UWBP_Subtitle_C_ExecuteUbergraph_WBP_Subtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
