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

// WidgetBlueprintGeneratedClass WBP_news_card.WBP_news_card_C
// 0xFFFFFFFFD213B000 (0x2CD2B280 - 0x5ABF0280)
class UWBP_news_card_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_news_card.WBP_news_card_C");
		return ptr;
	}


	void SetCardData();
	void PreConstruct();
	void ExecuteUbergraph_WBP_news_card();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
