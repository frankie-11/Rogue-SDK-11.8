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

// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick
// ()

void UMainCharacterThreatComponent_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.ReceiveTick");

	UMainCharacterThreatComponent_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels
// ()

void UMainCharacterThreatComponent_C::DebugThreatLevels()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainCharacterThreatComponent.MainCharacterThreatComponent_C.DebugThreatLevels");

	UMainCharacterThreatComponent_C_DebugThreatLevels_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
