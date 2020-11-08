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

// Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle
// (Final)

void UWBP_PlayerIdentity_Title_C::SetTitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_PlayerIdentity_Title.WBP_PlayerIdentity_Title_C.SetTitle");

	UWBP_PlayerIdentity_Title_C_SetTitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
