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

// Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect
// 0xFFFFFFFFFFFFFF80 (0x5B1CA400 - 0x5B1CA480)
class UAnimNotify_PlaySkinnedParticleEffect : public UAnimNotify_PlayParticleEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_PlaySkinnedParticleEffect");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent
// 0x5B1CA180
class UAnimNotify_SkinnedAkEvent : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B1CA180];                                // 0x0000(0x5B1CA180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_SkinnedAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent
// 0xFFFFFFFFFFFFFF80 (0x5B1C9F80 - 0x5B1CA000)
class UAnimNotify_SkinSelectiveAkEvent : public UAnimNotify_SelectiveAkEvent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.AnimNotify_SkinSelectiveAkEvent");
		return ptr;
	}

};


// Class SkinnableAnimGraphRuntime.SkinnedAnimInstance
// 0x0F80 (0x5B1CFE80 - 0x5B1CEF00)
class USkinnedAnimInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0xF80];                                     // 0x5B1CEF00(0x0F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SkinnableAnimGraphRuntime.SkinnedAnimInstance");
		return ptr;
	}


	void GetSkinObject();
	void GetSkinnedBlendSpace();
	void GetSkinnedAnimSequence();
	void GetSkinnedAnimOffset();
	void GetSkinnedAnimMontage();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
