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

// WidgetBlueprintGeneratedClass WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C
// 0xFFFFFFFFCEFBA280 (0x29BAA500 - 0x5ABF0280)
class UWBP_VoucherRedemptionItem_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoucherRedemptionItem.WBP_VoucherRedemptionItem_C");
		return ptr;
	}


	void SetPanelDisplay();
	void Construct();
	void ExecuteUbergraph_WBP_VoucherRedemptionItem();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
