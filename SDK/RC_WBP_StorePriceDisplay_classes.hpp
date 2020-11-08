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

// WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C
// 0xFFFFFFFFD11BF100 (0x2BDAF380 - 0x5ABF0280)
class UWBP_StorePriceDisplay_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StorePriceDisplay.WBP_StorePriceDisplay_C");
		return ptr;
	}


	void SetStorePrices();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
