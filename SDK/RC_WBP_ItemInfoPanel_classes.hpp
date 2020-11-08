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

// WidgetBlueprintGeneratedClass WBP_ItemInfoPanel.WBP_ItemInfoPanel_C
// 0xFFFFFFFFC86D9580 (0x232CDF00 - 0x5ABF4980)
class UWBP_ItemInfoPanel_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemInfoPanel.WBP_ItemInfoPanel_C");
		return ptr;
	}


	void SetInfoFieldData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
