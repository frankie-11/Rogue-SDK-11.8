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

// Function KillCamController.KillCamController_C.ReceiveBeginPlay
// (Final)

void AKillCamController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCamController.KillCamController_C.ReceiveBeginPlay");

	AKillCamController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function KillCamController.KillCamController_C.ExecuteUbergraph_KillCamController
// (Final)

void AKillCamController_C::ExecuteUbergraph_KillCamController()
{
	static auto fn = UObject::FindObject<UFunction>("Function KillCamController.KillCamController_C.ExecuteUbergraph_KillCamController");

	AKillCamController_C_ExecuteUbergraph_KillCamController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif