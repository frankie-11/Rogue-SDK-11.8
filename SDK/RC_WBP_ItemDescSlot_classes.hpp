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

// WidgetBlueprintGeneratedClass WBP_ItemDescSlot.WBP_ItemDescSlot_C
// 0xFFFFFFFFCE89BA00 (0x2948BC80 - 0x5ABF0280)
class UWBP_ItemDescSlot_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemDescSlot.WBP_ItemDescSlot_C");
		return ptr;
	}


	void Construct();
	void PopulateItemDescSlot();
	void SetTextColors();
	void PreConstruct();
	void ExecuteUbergraph_WBP_ItemDescSlot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
