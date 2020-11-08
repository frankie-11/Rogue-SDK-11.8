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

// Function HitIndictor.HitIndictor_C.ReturnToPool
// (Final, RequiredAPI)

void UHitIndictor_C::ReturnToPool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ReturnToPool");

	UHitIndictor_C_ReturnToPool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.Init Indicator Pool
// (Final, RequiredAPI, BlueprintAuthorityOnly, BlueprintCosmetic)

void UHitIndictor_C::Init_Indicator_Pool()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Init Indicator Pool");

	UHitIndictor_C_Init_Indicator_Pool_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.CreateHitIndicator
// (Final, RequiredAPI, BlueprintAuthorityOnly)

void UHitIndictor_C::CreateHitIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.CreateHitIndicator");

	UHitIndictor_C_CreateHitIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.Construct
// (Final)

void UHitIndictor_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.Construct");

	UHitIndictor_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage
// (Final)

void UHitIndictor_C::On_Viewed_Pawn_Take_Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.On Viewed Pawn Take Damage");

	UHitIndictor_C_On_Viewed_Pawn_Take_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage
// (Final)

void UHitIndictor_C::HandleViewedPawnTakeArmorDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.HandleViewedPawnTakeArmorDamage");

	UHitIndictor_C_HandleViewedPawnTakeArmorDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor
// (Final)

void UHitIndictor_C::ExecuteUbergraph_HitIndictor()
{
	static auto fn = UObject::FindObject<UFunction>("Function HitIndictor.HitIndictor_C.ExecuteUbergraph_HitIndictor");

	UHitIndictor_C_ExecuteUbergraph_HitIndictor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
