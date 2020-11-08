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

// Function GameTimerBarScorePip.GameTimerBarScorePip_C.Set Pip
// ()

void UGameTimerBarScorePip_C::Set_Pip()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.Set Pip");

	UGameTimerBarScorePip_C_Set_Pip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarScorePip.GameTimerBarScorePip_C.Construct
// (Final)

void UGameTimerBarScorePip_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.Construct");

	UGameTimerBarScorePip_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function GameTimerBarScorePip.GameTimerBarScorePip_C.ExecuteUbergraph_GameTimerBarScorePip
// (Final)

void UGameTimerBarScorePip_C::ExecuteUbergraph_GameTimerBarScorePip()
{
	static auto fn = UObject::FindObject<UFunction>("Function GameTimerBarScorePip.GameTimerBarScorePip_C.ExecuteUbergraph_GameTimerBarScorePip");

	UGameTimerBarScorePip_C_ExecuteUbergraph_GameTimerBarScorePip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
