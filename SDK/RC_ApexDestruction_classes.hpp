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

// Class ApexDestruction.DestructibleActor
// 0x13B600 (0x5B0D9600 - 0x5AF9E000)
class ADestructibleActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x13B600];                                  // 0x5AF9E000(0x13B600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleActor");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleComponent
// 0xFFFFFFFFFFFFF800 (0x5B0DDB00 - 0x5B0DE300)
class UDestructibleComponent : public USkinnedMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleComponent");
		return ptr;
	}


	void SetDestructibleMesh();
	void GetDestructibleMesh();
	void ApplyRadiusDamage();
	void ApplyDamage();
};


// Class ApexDestruction.DestructibleFractureSettings
// 0x5B0DD780
class UDestructibleFractureSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0DD780];                                // 0x0000(0x5B0DD780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleFractureSettings");
		return ptr;
	}

};


// Class ApexDestruction.DestructibleMesh
// 0xFFFFFFFFFFFFFF00 (0x5B100800 - 0x5B100900)
class UDestructibleMesh : public USkeletalMesh
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ApexDestruction.DestructibleMesh");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
