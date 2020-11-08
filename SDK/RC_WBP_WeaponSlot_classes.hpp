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

// WidgetBlueprintGeneratedClass WBP_WeaponSlot.WBP_WeaponSlot_C
// 0xFFFFFFFFCCAF6200 (0x276E6480 - 0x5ABF0280)
class UWBP_WeaponSlot_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WeaponSlot.WBP_WeaponSlot_C");
		return ptr;
	}


	void ToggleActiveState();
	void Construct();
	void HandleSlotRemoved();
	void UpdateSlotDisplay();
	void ResetSlot();
	void ExecuteUbergraph_WBP_WeaponSlot();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
