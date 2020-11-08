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

// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// 0x5B1F8880
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B1F8880];                                // 0x0000(0x5B1F8880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect");
		return ptr;
	}


	void GetSpawnedEffect();
};


// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// 0x5B1FA100
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	unsigned char                                      UnknownData00[0x5B1FA100];                                // 0x0000(0x5B1FA100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
