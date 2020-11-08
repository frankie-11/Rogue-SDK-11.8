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

// WidgetBlueprintGeneratedClass WBP_ScorePipEntry.WBP_ScorePipEntry_C
// 0xFFFFFFFFC9DA3300 (0x24997C80 - 0x5ABF4980)
class UWBP_ScorePipEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ScorePipEntry.WBP_ScorePipEntry_C");
		return ptr;
	}


	void Set_Pip();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_ScorePipEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
