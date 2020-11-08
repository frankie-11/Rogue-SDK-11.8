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

// Function GamePlayerController.GamePlayerController_C.ReceiveBeginPlay
// ()

void AGamePlayerController_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayerController.GamePlayerController_C.ReceiveBeginPlay");

	AGamePlayerController_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GamePlayerController.GamePlayerController_C.ExecuteUbergraph_GamePlayerController
// ()

void AGamePlayerController_C::ExecuteUbergraph_GamePlayerController()
{
	static auto fn = UObject::FindObject<UFunction>("Function GamePlayerController.GamePlayerController_C.ExecuteUbergraph_GamePlayerController");

	AGamePlayerController_C_ExecuteUbergraph_GamePlayerController_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
