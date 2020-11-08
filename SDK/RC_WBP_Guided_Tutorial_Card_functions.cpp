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

// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData
// ()

void UWBP_Guided_Tutorial_Card_C::SetCardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.SetCardData");

	UWBP_Guided_Tutorial_Card_C_SetCardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct
// (Final)

void UWBP_Guided_Tutorial_Card_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.PreConstruct");

	UWBP_Guided_Tutorial_Card_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card
// (RequiredAPI)

void UWBP_Guided_Tutorial_Card_C::ExecuteUbergraph_WBP_Guided_Tutorial_Card()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C.ExecuteUbergraph_WBP_Guided_Tutorial_Card");

	UWBP_Guided_Tutorial_Card_C_ExecuteUbergraph_WBP_Guided_Tutorial_Card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
