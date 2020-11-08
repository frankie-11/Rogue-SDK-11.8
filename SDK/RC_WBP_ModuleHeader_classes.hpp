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

// WidgetBlueprintGeneratedClass WBP_ModuleHeader.WBP_ModuleHeader_C
// 0xFFFFFFFFC828C680 (0x22E81000 - 0x5ABF4980)
class UWBP_ModuleHeader_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ModuleHeader.WBP_ModuleHeader_C");
		return ptr;
	}


	void PreConstruct();
	void ExecuteUbergraph_WBP_ModuleHeader();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
