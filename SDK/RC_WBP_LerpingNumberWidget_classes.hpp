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

// WidgetBlueprintGeneratedClass WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C
// 0xFFFFFFFFC10B8600 (0x1EC02C80 - 0x5DB4A680)
class UWBP_LerpingNumberWidget_C : public UKSFloatTickLerpWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LerpingNumberWidget.WBP_LerpingNumberWidget_C");
		return ptr;
	}


	void UpdateTextDisplay();
	void UpdateCashBalance();
	void DisplayForValue();
	void ExecuteUbergraph_WBP_LerpingNumberWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
