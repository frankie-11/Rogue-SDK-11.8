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

// WidgetBlueprintGeneratedClass WBP_ItemInfoContainer.WBP_ItemInfoContainer_C
// 0xFFFFFFFFCF153080 (0x29D43300 - 0x5ABF0280)
class UWBP_ItemInfoContainer_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfoContainer.WBP_ItemInfoContainer_C");
		return ptr;
	}


	void SetAlignment();
	void SetItemRarityInfo();
	void SetInfoFieldData();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ItemInfoContainer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
