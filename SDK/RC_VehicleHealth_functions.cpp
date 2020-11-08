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

// Function VehicleHealth.VehicleHealth_C.Set Target Value
// ()

void UVehicleHealth_C::Set_Target_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Target Value");

	UVehicleHealth_C_Set_Target_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.Set Value
// (RequiredAPI, BlueprintAuthorityOnly)

void UVehicleHealth_C::Set_Value()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Set Value");

	UVehicleHealth_C_Set_Value_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.Tick
// (Final)

void UVehicleHealth_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.Tick");

	UVehicleHealth_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth
// (RequiredAPI)

void UVehicleHealth_C::ExecuteUbergraph_VehicleHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleHealth.VehicleHealth_C.ExecuteUbergraph_VehicleHealth");

	UVehicleHealth_C_ExecuteUbergraph_VehicleHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
