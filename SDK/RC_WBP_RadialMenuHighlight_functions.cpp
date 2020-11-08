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

// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat
// (Final)

void UWBP_RadialMenuHighlight_C::GetHighlightMat()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.GetHighlightMat");

	UWBP_RadialMenuHighlight_C_GetHighlightMat_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition
// (RequiredAPI, BlueprintAuthorityOnly)

void UWBP_RadialMenuHighlight_C::SetPosition()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetPosition");

	UWBP_RadialMenuHighlight_C_SetPosition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth
// (BlueprintAuthorityOnly)

void UWBP_RadialMenuHighlight_C::SetWidth()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_RadialMenuHighlight.WBP_RadialMenuHighlight_C.SetWidth");

	UWBP_RadialMenuHighlight_C_SetWidth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
