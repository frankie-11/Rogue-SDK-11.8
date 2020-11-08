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

// Class SceneComponentPools.BasePoolComponent
// 0xA630480 (0x5B1E0300 - 0x50BAFE80)
class UBasePoolComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA630480];                                 // 0x50BAFE80(0xA630480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.BasePoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.DecalPoolComponent
// 0xFFFFFFFFFFFB3FA0 (0x5B1942A0 - 0x5B1E0300)
class UDecalPoolComponent : public UBasePoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.DecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.GunshotDecalPoolComponent
// 0xFFFFFFFFA4E6BD60 (0x0000 - 0x5B1942A0)
class UGunshotDecalPoolComponent : public UDecalPoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.GunshotDecalPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.ParticleSystemPoolComponentBase
// 0xFFFFFFFFFFFB3DC0 (0x5B1940C0 - 0x5B1E0300)
class UParticleSystemPoolComponentBase : public UBasePoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponentBase");
		return ptr;
	}


	void OnPSCFinished();
};


// Class SceneComponentPools.ParticleSystemPoolComponent
// 0xFFFFFFFFA4E6BF40 (0x0000 - 0x5B1940C0)
class UParticleSystemPoolComponent : public UParticleSystemPoolComponentBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.ParticleSystemPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.PoolableDecalComponent
// 0xFFFFFFFFFFFFFF00 (0x5B1E1380 - 0x5B1E1480)
class UPoolableDecalComponent : public UDecalComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.PoolableDecalComponent");
		return ptr;
	}


	void ForceReturnToPool();
};


// Class SceneComponentPools.SceneComponentPoolStatics
// 0x0000
class USceneComponentPoolStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.SceneComponentPoolStatics");
		return ptr;
	}


	void SpawnStaticMeshAttached();
	void SpawnSkeletalMeshAttached();
	void SpawnEmitterAttached();
	void SpawnEmitterAtLocation();
	void SpawnDecalAttached();
	void SpawnDecalAtLocation();
	void ReleaseSpawnedStaticMeshes();
	void ReleaseSpawnedStaticMeshComponent();
	void ReleaseSpawnedStaticMesh();
	void ReleaseSpawnedSkeletalMeshes();
	void ReleaseSpawnedSkeletalMeshComponent();
	void ReleaseSpawnedSkeletalMesh();
	void ReleaseSpawnedEmitters();
	void ReleaseSpawnedDecals();
};


// Class SceneComponentPools.SkeletalMeshPoolComponent
// 0xFFFFFFFFFFFB63E0 (0x5B1966E0 - 0x5B1E0300)
class USkeletalMeshPoolComponent : public UBasePoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.SkeletalMeshPoolComponent");
		return ptr;
	}

};


// Class SceneComponentPools.StaticMeshPoolComponent
// 0xFFFFFFFFFFFB6200 (0x5B196500 - 0x5B1E0300)
class UStaticMeshPoolComponent : public UBasePoolComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SceneComponentPools.StaticMeshPoolComponent");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
