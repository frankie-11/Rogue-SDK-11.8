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

// WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C
// 0xFFFFFFFFC5F61B00 (0x20B51D80 - 0x5ABF0280)
class UWBP_OrdinalNumberText_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_OrdinalNumberText.WBP_OrdinalNumberText_C");
		return ptr;
	}


	void Get_Language_Specific_Superscript_Text();
	void Get_Language_Specific_Main_Text();
	void PreConstruct();
	void Set_Font();
	void Set_Value();
	void ExecuteUbergraph_WBP_OrdinalNumberText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
