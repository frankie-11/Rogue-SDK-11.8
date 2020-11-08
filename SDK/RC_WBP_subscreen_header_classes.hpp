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

// WidgetBlueprintGeneratedClass WBP_subscreen_header.WBP_subscreen_header_C
// 0xFFFFFFFFD213F980 (0x2CD2FC00 - 0x5ABF0280)
class UWBP_subscreen_header_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_subscreen_header.WBP_subscreen_header_C");
		return ptr;
	}


	void PreConstruct();
	void ExecuteUbergraph_WBP_subscreen_header();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
