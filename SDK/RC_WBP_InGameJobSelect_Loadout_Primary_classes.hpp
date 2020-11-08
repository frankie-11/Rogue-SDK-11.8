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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C
// 0xFFFFFFFFB20C7E80 (0xCCBC800 - 0x5ABF4980)
class UWBP_InGameJobSelect_Loadout_Primary_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Primary.WBP_InGameJobSelect_Loadout_Primary_C");
		return ptr;
	}


	void Get_Shop_Item_Type();
	void SetItemSlot();
	void PurchaseAcknowledge();
	void RefreshData();
	void Construct();
	void PreConstruct();
	void ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Primary();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
