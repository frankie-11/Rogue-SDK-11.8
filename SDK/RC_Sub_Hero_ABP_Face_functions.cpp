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

// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face
// ()

void USub_Hero_ABP_Face_C::ExecuteUbergraph_Sub_Hero_ABP_Face()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.ExecuteUbergraph_Sub_Hero_ABP_Face");

	USub_Hero_ABP_Face_C_ExecuteUbergraph_Sub_Hero_ABP_Face_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph
// ()

void USub_Hero_ABP_Face_C::AnimGraph()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C.AnimGraph");

	USub_Hero_ABP_Face_C_AnimGraph_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
