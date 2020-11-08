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

// Function CamMod_Master.CamMod_Master_C.OnCamModFinished
// ()

void UCamMod_Master_C::OnCamModFinished()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.OnCamModFinished");

	UCamMod_Master_C_OnCamModFinished_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.PlayTimeline
// ()

void UCamMod_Master_C::PlayTimeline()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.PlayTimeline");

	UCamMod_Master_C_PlayTimeline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera
// ()

void UCamMod_Master_C::ShouldModifyCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.ShouldModifyCamera");

	UCamMod_Master_C_ShouldModifyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.UpdateValues
// ()

void UCamMod_Master_C::UpdateValues()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.UpdateValues");

	UCamMod_Master_C_UpdateValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.GetKSCharacterData
// ()

void UCamMod_Master_C::GetKSCharacterData()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.GetKSCharacterData");

	UCamMod_Master_C_GetKSCharacterData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera
// ()

void UCamMod_Master_C::BlueprintModifyCamera()
{
	static auto fn = UObject::FindObject<UFunction>("Function CamMod_Master.CamMod_Master_C.BlueprintModifyCamera");

	UCamMod_Master_C_BlueprintModifyCamera_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
