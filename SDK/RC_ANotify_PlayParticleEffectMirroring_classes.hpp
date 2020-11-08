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

// BlueprintGeneratedClass ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C
// 0x6B1E8280
class UANotify_PlayParticleEffectMirroring_C : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x6B1E8280];                                // 0x0000(0x6B1E8280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANotify_PlayParticleEffectMirroring.ANotify_PlayParticleEffectMirroring_C");
		return ptr;
	}


	void Received_Notify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
