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

// WidgetBlueprintGeneratedClass WBP_Header3.WBP_Header3_C
// 0xFFFFFFFFCE895180 (0x29485400 - 0x5ABF0280)
class UWBP_Header3_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Header3.WBP_Header3_C");
		return ptr;
	}


	void SetText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_Header3();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
