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

// Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue
// (RequiredAPI)

void UVehicleSpeedometer_C::SetTargetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetTargetValue");

	UVehicleSpeedometer_C_SetTargetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue
// (Final, RequiredAPI, BlueprintAuthorityOnly)

void UVehicleSpeedometer_C::SetValue()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.SetValue");

	UVehicleSpeedometer_C_SetValue_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.Tick
// (Final)

void UVehicleSpeedometer_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.Tick");

	UVehicleSpeedometer_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer
// (RequiredAPI)

void UVehicleSpeedometer_C::ExecuteUbergraph_VehicleSpeedometer()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleSpeedometer.VehicleSpeedometer_C.ExecuteUbergraph_VehicleSpeedometer");

	UVehicleSpeedometer_C_ExecuteUbergraph_VehicleSpeedometer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
