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

// WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C
// 0xFFFFFFFFD197E000 (0x2C56E280 - 0x5ABF0280)
class UWBP_SlotHeading_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SlotHeading.WBP_SlotHeading_C");
		return ptr;
	}


	void SetText();
	void SetUnderlineColor();
	void SetTextColor();
	void PreConstruct();
	void Construct();
	void SetSlotHeading();
	void ExecuteUbergraph_WBP_SlotHeading();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
