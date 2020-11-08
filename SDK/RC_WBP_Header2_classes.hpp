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

// WidgetBlueprintGeneratedClass WBP_Header2.WBP_Header2_C
// 0xFFFFFFFFCE89A700 (0x2948A980 - 0x5ABF0280)
class UWBP_Header2_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Header2.WBP_Header2_C");
		return ptr;
	}


	void SetText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_Header2();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
