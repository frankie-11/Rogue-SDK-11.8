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

// BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C
// 0x13D0100 (0x5EEB6180 - 0x5DAE6080)
class UMainCharacterVOComponent_C : public UKSVOComponent
{
public:
	unsigned char                                      UnknownData00[0x13D0100];                                 // 0x5DAE6080(0x13D0100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MainCharacterVOComponent.MainCharacterVOComponent_C");
		return ptr;
	}


	void EnemyBehind();
	void BindToGameStateEvents();
	void OnLastManStanding();
	void OnWinnerSet();
	void OnRoundSetup();
	void OnPhaseChange();
	void BindToPingManagerEvents();
	void PingAdded();
	void PingAcknowledged();
	void SentVoiceLineOnly();
	void OnTakeDamage();
	void OnItemPickedUp();
	void OnReviveCompleted();
	void BindToCharacterEvents();
	void OnInteractStart();
	void OnLanded();
	void OnMantleChanged();
	void OnDOdgeRollChanged();
	void OnJumped();
	void OnCharacterFreeFallStarted();
	void OnWeaponInventoryChanged();
	void BuildWeaponStateChanged();
	void GadgetWeaponStateChanged();
	void ResetObjectiveVO();
	void OnStartReviveOther();
	void AnnounceBombSpotted();
	void OnDeathStateChanged();
	void ModFailedToActivate();
	void BindToPlayerStateEvents();
	void BindToActivatableModEvents();
	void BindToEvents();
	void BindToTeamStateEvents();
	void BindToPlayerControllerEvents();
	void OnJobChanged();
	void ShopItemChanged();
	void OnPlayerDownedChanged();
	void ModTriggered();
	void ModSetup();
	void ModActivated();
	void ExecuteUbergraph_MainCharacterVOComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
