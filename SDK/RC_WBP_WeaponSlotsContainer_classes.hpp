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

// WidgetBlueprintGeneratedClass WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C
// 0xFFFFFFFFC9B2D200 (0x276E5D00 - 0x5DBB8B00)
class UWBP_WeaponSlotsContainer_C : public UKSViewedPawnInventoryWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WeaponSlotsContainer.WBP_WeaponSlotsContainer_C");
		return ptr;
	}


	void FindActiveSlot();
	void RefreshActiveSlot();
	void HandleInputStop();
	void HandleInputHold();
	void ResetWeaponSlotsText();
	void Construct();
	void OnUpdatedPawnInventorySlot();
	void OnActivePawnInventorySlot();
	void OnRemovedPawnInventorySlot();
	void InitializeWidget();
	void StartHoldProgress();
	void CloseHoldProgress();
	void Tick_Wheel();
	void ExecuteUbergraph_WBP_WeaponSlotsContainer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
