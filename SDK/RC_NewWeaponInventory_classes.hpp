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

// WidgetBlueprintGeneratedClass NewWeaponInventory.NewWeaponInventory_C
// 0xFFFFFFFFC69CBD80 (0x24584880 - 0x5DBB8B00)
class UNewWeaponInventory_C : public UKSViewedPawnInventoryWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewWeaponInventory.NewWeaponInventory_C");
		return ptr;
	}


	void HandleDeathStateChanged();
	void UnbindKSCharacter();
	void BindKSCharacter();
	void AddGameRuleWidget();
	void Construct();
	void EquipmentAdded();
	void EquipmentRemoved();
	void InitializeWidget();
	void PostSetPawn();
	void PreClearPawn();
	void Handle_Swap_Gamepad_Pressed();
	void Handle_Swap_Gamepad_Released();
	void SetKillCamWeapon();
	void ExecuteUbergraph_NewWeaponInventory();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
