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

// Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.Construct
// (Final)

void UWBP_LocalPlayerModBarElement_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.Construct");

	UWBP_LocalPlayerModBarElement_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.ExecuteUbergraph_WBP_LocalPlayerModBarElement
// (Final)

void UWBP_LocalPlayerModBarElement_C::ExecuteUbergraph_WBP_LocalPlayerModBarElement()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C.ExecuteUbergraph_WBP_LocalPlayerModBarElement");

	UWBP_LocalPlayerModBarElement_C_ExecuteUbergraph_WBP_LocalPlayerModBarElement_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
