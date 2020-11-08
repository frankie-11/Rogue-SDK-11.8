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

// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.PreConstruct
// (Final)

void UWBP_CosmeticItem_Title_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.PreConstruct");

	UWBP_CosmeticItem_Title_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.ExecuteUbergraph_WBP_CosmeticItem_Title
// (RequiredAPI)

void UWBP_CosmeticItem_Title_C::ExecuteUbergraph_WBP_CosmeticItem_Title()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_CosmeticItem_Title.WBP_CosmeticItem_Title_C.ExecuteUbergraph_WBP_CosmeticItem_Title");

	UWBP_CosmeticItem_Title_C_ExecuteUbergraph_WBP_CosmeticItem_Title_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
