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

// WidgetBlueprintGeneratedClass WBP_StoreItemInterior.WBP_StoreItemInterior_C
// 0xFFFFFFFFCE897D80 (0x2948C700 - 0x5ABF4980)
class UWBP_StoreItemInterior_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreItemInterior.WBP_StoreItemInterior_C");
		return ptr;
	}


	void GetStoreIconForSize();
	void SetRarityDisplay();
	void SetStoreItem();
	void PreConstruct();
	void OnParentHovered();
	void OnParentUnhovered();
	void ExecuteUbergraph_WBP_StoreItemInterior();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
