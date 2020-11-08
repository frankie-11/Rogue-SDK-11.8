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

// Function DamageModifierDisplay.DamageModifierDisplay_C.InitializeWidget
// (Final)

void UDamageModifierDisplay_C::InitializeWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageModifierDisplay.DamageModifierDisplay_C.InitializeWidget");

	UDamageModifierDisplay_C_InitializeWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DamageModifierDisplay.DamageModifierDisplay_C.ExecuteUbergraph_DamageModifierDisplay
// (Final, RequiredAPI)

void UDamageModifierDisplay_C::ExecuteUbergraph_DamageModifierDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageModifierDisplay.DamageModifierDisplay_C.ExecuteUbergraph_DamageModifierDisplay");

	UDamageModifierDisplay_C_ExecuteUbergraph_DamageModifierDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
