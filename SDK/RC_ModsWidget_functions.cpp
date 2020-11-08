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

// Function ModsWidget.ModsWidget_C.GetOverlay
// ()

void UModsWidget_C::GetOverlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function ModsWidget.ModsWidget_C.GetOverlay");

	UModsWidget_C_GetOverlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
