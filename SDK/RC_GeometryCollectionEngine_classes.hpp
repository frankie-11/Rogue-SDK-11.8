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

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0xD77B100 (0x5E413880 - 0x50C98780)
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD77B100];                                 // 0x50C98780(0xD77B100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}


	void SortTrailingEvents();
	void SortCollisionEvents();
	void SortBreakingEvents();
	void SetTrailingEventRequestSettings();
	void SetTrailingEventEnabled();
	void SetCollisionEventRequestSettings();
	void SetCollisionEventEnabled();
	void SetBreakingEventRequestSettings();
	void SetBreakingEventEnabled();
	void RemoveGeometryCollectionActor();
	void RemoveChaosSolverActor();
	void IsEventListening();
	void AddGeometryCollectionActor();
	void AddChaosSolverActor();
};


// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x3475580 (0x5E413580 - 0x5AF9E000)
class AGeometryCollectionActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3475580];                                 // 0x5AF9E000(0x3475580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}


	void RaycastSingle();
};


// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x5E413400
class UGeometryCollectionCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E413400];                                // 0x0000(0x5E413400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0xA1CC760 (0x5AE0B400 - 0x50C3ECA0)
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA1CC760];                                 // 0x50C3ECA0(0xA1CC760) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}


	void SetNotifyBreaks();
	void ReceivePhysicsCollision();
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature();
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature();
	void ApplyPhysicsField();
	void ApplyKinematicField();
};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x3477780 (0x5E415780 - 0x5AF9E000)
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3477780];                                 // 0x5AF9E000(0x3477780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0xD865800 (0x5E415680 - 0x50BAFE80)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD865800];                                 // 0x50BAFE80(0xD865800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollection
// 0x5E3B7D60
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B7D60];                                // 0x0000(0x5E3B7D60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}

};


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x3478B00 (0x5E416B00 - 0x5AF9E000)
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3478B00];                                 // 0x5AF9E000(0x3478B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}

};


// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0xD868300 (0x5E418180 - 0x50BAFE80)
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD868300];                                 // 0x50BAFE80(0xD868300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision();
};


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0xD867A80 (0x5E417900 - 0x50BAFE80)
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD867A80];                                 // 0x50BAFE80(0xD867A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}


	void ReceivePhysicsCollision();
	void ForceRecreatePhysicsState();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
