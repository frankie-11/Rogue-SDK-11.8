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

// Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate
// ()

void UPCom_SimpleTimecodeProvider::SetFrameRate()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlatformCommon.PCom_SimpleTimecodeProvider.SetFrameRate");

	UPCom_SimpleTimecodeProvider_SetFrameRate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
