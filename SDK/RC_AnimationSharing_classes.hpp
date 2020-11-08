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

// Class AnimationSharing.AnimSharingStateInstance
// 0x2F900 (0x5B1FE800 - 0x5B1CEF00)
class UAnimSharingStateInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x2F900];                                   // 0x5B1CEF00(0x2F900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingStateInstance");
		return ptr;
	}


	void GetInstancedActors();
};


// Class AnimationSharing.AnimSharingTransitionInstance
// 0x30F80 (0x5B1FFE80 - 0x5B1CEF00)
class UAnimSharingTransitionInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x30F80];                                   // 0x5B1CEF00(0x30F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingTransitionInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingAdditiveInstance
// 0x30D80 (0x5B1FFC80 - 0x5B1CEF00)
class UAnimSharingAdditiveInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x30D80];                                   // 0x5B1CEF00(0x30D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingAdditiveInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimSharingInstance
// 0x5B199520
class UAnimSharingInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B199520];                                // 0x0000(0x5B199520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimSharingInstance");
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingManager
// 0x5B1993E0
class UAnimationSharingManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1993E0];                                // 0x0000(0x5B1993E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingManager");
		return ptr;
	}


	void RegisterActorWithSkeletonBP();
	void GetAnimationSharingManager();
	void CreateAnimationSharingManager();
	void AnimationSharingEnabled();
};


// Class AnimationSharing.AnimationSharingSetup
// 0x5B199340
class UAnimationSharingSetup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B199340];                                // 0x0000(0x5B199340) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingSetup");
		return ptr;
	}

};


// Class AnimationSharing.AnimationSharingStateProcessor
// 0x5B200980
class UAnimationSharingStateProcessor : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B200980];                                // 0x0000(0x5B200980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AnimationSharing.AnimationSharingStateProcessor");
		return ptr;
	}


	void ProcessActorState();
	void GetAnimationStateEnum();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
