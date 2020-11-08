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

// WidgetBlueprintGeneratedClass ActivePerkSlot.ActivePerkSlot_C
// 0xFFFFFFFFD067CC80 (0x2B26CF00 - 0x5ABF0280)
class UActivePerkSlot_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ActivePerkSlot.ActivePerkSlot_C");
		return ptr;
	}


	void Construct();
	void HandleOnModTriggered();
	void ExecuteUbergraph_ActivePerkSlot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
