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

// DynamicClass NameplateWidget.NameplateWidget_C
// 0xAFA3D80 (0x65B94000 - 0x5ABF0280)
class UNameplateWidget_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xAFA3D80];                                 // 0x5ABF0280(0xAFA3D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass NameplateWidget.NameplateWidget_C");
		return ptr;
	}


	void Should_Show_Enemy_Nameplate();
	void SetNamePlateColor();
	void Player_Is_Blinded();
	void OnUnhovered();
	void OnPossession();
	void OnPlayerUINeedsUpdate();
	void OnPlayerDownedChanged_Event();
	void OnLoaded_F5BCD8C84871643FB2979DA9F519484F();
	void OnKillCamEnabled();
	void OnHovered();
	void OnDead();
	void Manual_Tick();
	void Handle_Overheal_Changed();
	void Handle_Job_Changed();
	void HandleNameChanged();
	void ExecuteUbergraph_NameplateWidget_9();
	void ExecuteUbergraph_NameplateWidget_5();
	void Destruct();
	void Deferred_Player_State_Open();
	void Construct();
	void CharacterHealthChange();
	void OnUIRelevantPlayerStateChanged__DelegateSignature();
	void OnPlayerEliminated__DelegateSignature();
	void OnPlayerDownedChanged__DelegateSignature();
	void OnKSPlayerStateNameChanged__DelegateSignature();
	void OnKillCamEnabled__DelegateSignature();
	void OnJobChanged__DelegateSignature();
	void OnHealthChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
