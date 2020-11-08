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

// BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C
// 0xFFFFFFFFCD829B80 (0x2B26BB00 - 0x5DA41F80)
class UFlashTrapModInst_C : public UKSModInst_GiveWeaponOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FlashTrapModInst.FlashTrapModInst_C");
		return ptr;
	}


	void CanActivateNow();
	void ReceiveBeginPlay();
	void OnNewGivenItem();
	void OnWeaponStateChanged();
	void BeginActivation();
	void OnGrenadeSpawned();
	void OnGrenadeDestroyed();
	void Init_RemoteThrow();
	void Init_Detonator();
	void On_Detonator_Spawned();
	void On_Remote_Throw_Spawned();
	void FiredOnAuthority();
	void On_Reclaimed();
	void OnAbilityReleased();
	void OnNewCharacter();
	void On_Character_Died();
	void ExecuteUbergraph_FlashTrapModInst();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
