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

// BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C
// 0xFFFFFFFFCD827300 (0x2B26BA00 - 0x5DA44700)
class UReviveSelfOnActivateModInst_C : public UKSModInst_ReviveSelfOnActivation
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReviveSelfOnActivateModInst.ReviveSelfOnActivateModInst_C");
		return ptr;
	}


	void Get_outro_timer();
	void StopAnimationFromEvent();
	void ReactsToAnimationEvent();
	void OnNotifyEnd_9E1EC10C43864E26E4E9E1B703588426();
	void OnNotifyBegin_9E1EC10C43864E26E4E9E1B703588426();
	void OnInterrupted_9E1EC10C43864E26E4E9E1B703588426();
	void OnBlendOut_9E1EC10C43864E26E4E9E1B703588426();
	void OnCompleted_9E1EC10C43864E26E4E9E1B703588426();
	void VO_Revive_Activate();
	void StimPackDownedEndSFX();
	void StimPackActivateStandingSFX();
	void StimPackActivateDownedSFX();
	void SFX_Revive_Activate();
	void SFX_Revive_Complete();
	void StimPackReviveCompleteSFX();
	void PlayAnimationFromEvent();
	void ReceiveBeginPlay();
	void OnActivated();
	void ReceiveEndPlay();
	void AdjustImmunityEffect();
	void OnSetup();
	void Brute_Strength_Effect_Stop();
	void Play_Outro();
	void Brute_Strength_Effect_Play();
	void OnNewCharacter();
	void OnDeathStateChanged();
	void ExecuteUbergraph_ReviveSelfOnActivateModInst();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
