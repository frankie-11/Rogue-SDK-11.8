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

// Function GameTimerBarPips.GameTimerBarPips_C.Set Total Pips
// ()

void UGameTimerBarPips_C::Set_Total_Pips()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPips.GameTimerBarPips_C.Set Total Pips");

	UGameTimerBarPips_C_Set_Total_Pips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPips.GameTimerBarPips_C.Set Pips Number
// (Final, BlueprintCosmetic)

void UGameTimerBarPips_C::Set_Pips_Number()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPips.GameTimerBarPips_C.Set Pips Number");

	UGameTimerBarPips_C_Set_Pips_Number_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPips.GameTimerBarPips_C.PreConstruct
// (Final)

void UGameTimerBarPips_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPips.GameTimerBarPips_C.PreConstruct");

	UGameTimerBarPips_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPips.GameTimerBarPips_C.Construct
// (Final)

void UGameTimerBarPips_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPips.GameTimerBarPips_C.Construct");

	UGameTimerBarPips_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarPips.GameTimerBarPips_C.ExecuteUbergraph_GameTimerBarPips
// ()

void UGameTimerBarPips_C::ExecuteUbergraph_GameTimerBarPips()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarPips.GameTimerBarPips_C.ExecuteUbergraph_GameTimerBarPips");

	UGameTimerBarPips_C_ExecuteUbergraph_GameTimerBarPips_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
