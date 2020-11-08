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

// Function AccuracyDebug.AccuracyDebug_C.Construct
// (Final)

void UAccuracyDebug_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.Construct");

	UAccuracyDebug_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccuracyDebug.AccuracyDebug_C.Tick
// (Final)

void UAccuracyDebug_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.Tick");

	UAccuracyDebug_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AccuracyDebug.AccuracyDebug_C.ExecuteUbergraph_AccuracyDebug
// (Final, RequiredAPI)

void UAccuracyDebug_C::ExecuteUbergraph_AccuracyDebug()
{
	static auto fn = UObject::FindObject<UFunction>("Function AccuracyDebug.AccuracyDebug_C.ExecuteUbergraph_AccuracyDebug");

	UAccuracyDebug_C_ExecuteUbergraph_AccuracyDebug_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
