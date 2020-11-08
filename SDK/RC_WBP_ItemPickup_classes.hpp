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

// WidgetBlueprintGeneratedClass WBP_ItemPickup.WBP_ItemPickup_C
// 0xFFFFFFFFCCAF7900 (0x276E7B80 - 0x5ABF0280)
class UWBP_ItemPickup_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ItemPickup.WBP_ItemPickup_C");
		return ptr;
	}


	void Tick();
	void Construct();
	void OnItemPickedUp_Event_1();
	void OnPostSetPawn();
	void ExecuteUbergraph_WBP_ItemPickup();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
