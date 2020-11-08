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

// WidgetBlueprintGeneratedClass WBP_StorePriceTag.WBP_StorePriceTag_C
// 0xFFFFFFFFD11BE280 (0x2BDAE500 - 0x5ABF0280)
class UWBP_StorePriceTag_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorePriceTag.WBP_StorePriceTag_C");
		return ptr;
	}


	void SetPriceDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
