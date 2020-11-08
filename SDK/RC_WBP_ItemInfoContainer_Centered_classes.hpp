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

// WidgetBlueprintGeneratedClass WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C
// 0xFFFFFFFFCE899880 (0x29489B00 - 0x5ABF0280)
class UWBP_ItemInfoContainer_Centered_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfoContainer_Centered.WBP_ItemInfoContainer_Centered_C");
		return ptr;
	}


	void Refresh_Rarity_Text();
	void SetItemRarityInfo();
	void SetInfoFieldData();
	void PreConstruct();
	void ExecuteUbergraph_WBP_ItemInfoContainer_Centered();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
