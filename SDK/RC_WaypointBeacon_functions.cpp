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

// Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript
// ()

void AWaypointBeacon_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.UserConstructionScript");

	AWaypointBeacon_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay
// ()

void AWaypointBeacon_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.ReceiveBeginPlay");

	AWaypointBeacon_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay
// ()

void AWaypointBeacon_C::SetupBeaconDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.SetupBeaconDisplay");

	AWaypointBeacon_C_SetupBeaconDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon
// ()

void AWaypointBeacon_C::ExecuteUbergraph_WaypointBeacon()
{
	static auto fn = UObject::FindObject<UFunction>("Function WaypointBeacon.WaypointBeacon_C.ExecuteUbergraph_WaypointBeacon");

	AWaypointBeacon_C_ExecuteUbergraph_WaypointBeacon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
