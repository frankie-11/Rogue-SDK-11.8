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

// Function VehicleDiagram.VehicleDiagram_C.SetSeating
// ()

void UVehicleDiagram_C::SetSeating()
{
	static auto fn = UObject::FindObject<UFunction>("Function VehicleDiagram.VehicleDiagram_C.SetSeating");

	UVehicleDiagram_C_SetSeating_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
