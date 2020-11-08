#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WBP_InventoryFullWarning.WBP_InventoryFullWarning_C
// 0x2423BA80
class UWBP_InventoryFullWarning_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x2423BA80];                                // 0x0000(0x2423BA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InventoryFullWarning.WBP_InventoryFullWarning_C");
		return ptr;
	}


	void PostSetPawn();
	void Handle_Inventory_Full();
	void ExecuteUbergraph_WBP_InventoryFullWarning();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
