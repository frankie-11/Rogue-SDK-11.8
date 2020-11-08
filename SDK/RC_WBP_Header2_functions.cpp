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

// Function WBP_Header2.WBP_Header2_C.SetText
// ()

void UWBP_Header2_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.SetText");

	UWBP_Header2_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.PreConstruct
// (Final)

void UWBP_Header2_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.PreConstruct");

	UWBP_Header2_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.Construct
// (Final)

void UWBP_Header2_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.Construct");

	UWBP_Header2_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Header2.WBP_Header2_C.ExecuteUbergraph_WBP_Header2
// (Final, RequiredAPI)

void UWBP_Header2_C::ExecuteUbergraph_WBP_Header2()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Header2.WBP_Header2_C.ExecuteUbergraph_WBP_Header2");

	UWBP_Header2_C_ExecuteUbergraph_WBP_Header2_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
