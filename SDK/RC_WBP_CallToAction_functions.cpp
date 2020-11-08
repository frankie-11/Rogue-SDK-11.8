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

// Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim
// (Final)

void UWBP_CallToAction_C::StopCTAAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.StopCTAAnim");

	UWBP_CallToAction_C_StopCTAAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim
// (Final)

void UWBP_CallToAction_C::PlayCTAAnim()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.PlayCTAAnim");

	UWBP_CallToAction_C_PlayCTAAnim_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CallToAction.WBP_CallToAction_C.Construct
// (Final)

void UWBP_CallToAction_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.Construct");

	UWBP_CallToAction_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction
// (Final)

void UWBP_CallToAction_C::ExecuteUbergraph_WBP_CallToAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CallToAction.WBP_CallToAction_C.ExecuteUbergraph_WBP_CallToAction");

	UWBP_CallToAction_C_ExecuteUbergraph_WBP_CallToAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
