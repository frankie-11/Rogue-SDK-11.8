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

// Function WeaponMenuInterface.WeaponMenuInterface_C.Close
// ()

void UWeaponMenuInterface_C::Close()
{
	static auto fn = UObject::FindObject<UFunction>("Function WeaponMenuInterface.WeaponMenuInterface_C.Close");

	UWeaponMenuInterface_C_Close_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
