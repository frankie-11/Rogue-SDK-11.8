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

// WidgetBlueprintGeneratedClass WBP_CustomGameActionItem.WBP_CustomGameActionItem_C
// 0xFFFFFFFFCE89B200 (0x2948B480 - 0x5ABF0280)
class UWBP_CustomGameActionItem_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomGameActionItem.WBP_CustomGameActionItem_C");
		return ptr;
	}


	void SetText();
	void PreConstruct();
	void Construct();
	void ExecuteUbergraph_WBP_CustomGameActionItem();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
