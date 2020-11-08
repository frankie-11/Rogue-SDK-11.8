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

// Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar
// ()

void UWBP_PlayerIdentity_Avatar_C::SetAvatar()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Avatar.WBP_PlayerIdentity_Avatar_C.SetAvatar");

	UWBP_PlayerIdentity_Avatar_C_SetAvatar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
