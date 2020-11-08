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

// WidgetBlueprintGeneratedClass WBP_RankedIcon.WBP_RankedIcon_C
// 0xFFFFFFFFD06B6400 (0x2B2A6680 - 0x5ABF0280)
class UWBP_RankedIcon_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RankedIcon.WBP_RankedIcon_C");
		return ptr;
	}


	void SetRankedTierTextByTier();
	void SetRankedIconByTier();
	void SetRankedLevel();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_RankedIcon();
	void OnRankTierSet__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
