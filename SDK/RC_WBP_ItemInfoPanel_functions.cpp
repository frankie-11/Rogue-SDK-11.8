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

// Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData
// (BlueprintCosmetic)

void UWBP_ItemInfoPanel_C::SetInfoFieldData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_ItemInfoPanel.WBP_ItemInfoPanel_C.SetInfoFieldData");

	UWBP_ItemInfoPanel_C_SetInfoFieldData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
