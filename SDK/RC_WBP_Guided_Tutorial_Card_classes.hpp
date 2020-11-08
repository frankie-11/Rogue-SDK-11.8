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

// WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C
// 0xFFFFFFFFCEFB9A00 (0x29BA9C80 - 0x5ABF0280)
class UWBP_Guided_Tutorial_Card_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Guided_Tutorial_Card.WBP_Guided_Tutorial_Card_C");
		return ptr;
	}


	void SetCardData();
	void PreConstruct();
	void ExecuteUbergraph_WBP_Guided_Tutorial_Card();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
