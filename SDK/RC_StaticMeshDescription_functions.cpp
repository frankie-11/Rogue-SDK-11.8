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

// Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV
// ()

void UStaticMeshDescription::SetVertexInstanceUV()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV");

	UStaticMeshDescription_SetVertexInstanceUV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName
// ()

void UStaticMeshDescription::SetPolygonGroupMaterialSlotName()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName");

	UStaticMeshDescription_SetPolygonGroupMaterialSlotName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV
// ()

void UStaticMeshDescription::GetVertexInstanceUV()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV");

	UStaticMeshDescription_GetVertexInstanceUV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function StaticMeshDescription.StaticMeshDescription.CreateCube
// ()

void UStaticMeshDescription::CreateCube()
{
	static auto fn = UObject::FindObject<UFunction>("Function StaticMeshDescription.StaticMeshDescription.CreateCube");

	UStaticMeshDescription_CreateCube_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
