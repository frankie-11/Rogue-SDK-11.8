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

// WidgetBlueprintGeneratedClass WBP_news_header.WBP_news_header_C
// 0xFFFFFFFFCF22DC00 (0x2CD29B00 - 0x5DAFBF00)
class UWBP_news_header_C : public UKSSettingsSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_news_header.WBP_news_header_C");
		return ptr;
	}


	void Add_Settings_Group_Widget();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_news_header();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
