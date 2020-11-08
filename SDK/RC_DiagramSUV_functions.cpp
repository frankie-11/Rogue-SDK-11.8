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

// Function DiagramSUV.DiagramSUV_C.SetSeating
// (Final)

void UDiagramSUV_C::SetSeating()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.SetSeating");

	UDiagramSUV_C_SetSeating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV
// (RequiredAPI, BlueprintAuthorityOnly)

void UDiagramSUV_C::ExecuteUbergraph_DiagramSUV()
{
	static auto fn = UObject::FindObject<UFunction>("Function DiagramSUV.DiagramSUV_C.ExecuteUbergraph_DiagramSUV");

	UDiagramSUV_C_ExecuteUbergraph_DiagramSUV_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
