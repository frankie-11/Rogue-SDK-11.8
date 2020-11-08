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

// WidgetBlueprintGeneratedClass WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C
// 0xDEB8300 (0x68AA8580 - 0x5ABF0280)
class UWBP_SettingsCarousel_Light_Indicator_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xDEB8300];                                 // 0x5ABF0280(0xDEB8300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SettingsCarousel_Light_Indicator.WBP_SettingsCarousel_Light_Indicator_C");
		return ptr;
	}


	void Light_Up();
	void Dim_Light();
	void Toggle_Lit_Up();
	void ExecuteUbergraph_WBP_SettingsCarousel_Light_Indicator();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
