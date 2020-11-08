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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C
// 0xFFFFFFFFB20C9300 (0xCCBDC80 - 0x5ABF4980)
class UWBP_InGameJobSelect_Loadout_Perk_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout_Perk.WBP_InGameJobSelect_Loadout_Perk_C");
		return ptr;
	}


	void Get_Shop_Item_Type();
	void SetItemSlot();
	void PurchaseAcknowledge();
	void RefreshData();
	void ExecuteUbergraph_WBP_InGameJobSelect_Loadout_Perk();
	void OnUnhovered__DelegateSignature();
	void OnHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
