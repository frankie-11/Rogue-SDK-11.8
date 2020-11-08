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

// WidgetBlueprintGeneratedClass WBP_CurrencySummary.WBP_CurrencySummary_C
// 0xFFFFFFFFCE895400 (0x29489D80 - 0x5ABF4980)
class UWBP_CurrencySummary_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CurrencySummary.WBP_CurrencySummary_C");
		return ptr;
	}


	void UpdateCurrencyDisplay();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_CurrencySummary();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
