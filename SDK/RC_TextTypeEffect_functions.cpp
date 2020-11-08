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

// Function TextTypeEffect.TextTypeEffect_C.SetText
// ()

void UTextTypeEffect_C::SetText()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.SetText");

	UTextTypeEffect_C_SetText_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.Tick
// (Final)

void UTextTypeEffect_C::Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.Tick");

	UTextTypeEffect_C_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.StartType
// (Final)

void UTextTypeEffect_C::StartType()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.StartType");

	UTextTypeEffect_C_StartType_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UTextTypeEffect_C::ExecuteUbergraph_TextTypeEffect()
{
	static auto fn = UObject::FindObject<UFunction>("Function TextTypeEffect.TextTypeEffect_C.ExecuteUbergraph_TextTypeEffect");

	UTextTypeEffect_C_ExecuteUbergraph_TextTypeEffect_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
