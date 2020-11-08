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

// WidgetBlueprintGeneratedClass WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C
// 0xFFFFFFFFC8756C00 (0x23346E80 - 0x5ABF0280)
class UWBP_LocalPlayerModBarElement_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LocalPlayerModBarElement.WBP_LocalPlayerModBarElement_C");
		return ptr;
	}


	void Construct();
	void ExecuteUbergraph_WBP_LocalPlayerModBarElement();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
