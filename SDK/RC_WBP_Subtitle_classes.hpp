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

// WidgetBlueprintGeneratedClass WBP_Subtitle.WBP_Subtitle_C
// 0xFFFFFFFFCD66E580 (0x2825E800 - 0x5ABF0280)
class UWBP_Subtitle_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Subtitle.WBP_Subtitle_C");
		return ptr;
	}


	void SetText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_Subtitle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
