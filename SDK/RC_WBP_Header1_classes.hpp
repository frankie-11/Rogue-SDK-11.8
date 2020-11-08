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

// WidgetBlueprintGeneratedClass WBP_Header1.WBP_Header1_C
// 0xFFFFFFFFD213AC80 (0x2CD2AF00 - 0x5ABF0280)
class UWBP_Header1_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Header1.WBP_Header1_C");
		return ptr;
	}


	void SetText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_Header1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
