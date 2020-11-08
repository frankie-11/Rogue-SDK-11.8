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

// WidgetBlueprintGeneratedClass WBP_CompareFoundersRow.WBP_CompareFoundersRow_C
// 0xFFFFFFFFCE89D180 (0x2948D400 - 0x5ABF0280)
class UWBP_CompareFoundersRow_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CompareFoundersRow.WBP_CompareFoundersRow_C");
		return ptr;
	}


	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_CompareFoundersRow();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
