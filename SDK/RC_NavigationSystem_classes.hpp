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

// Class NavigationSystem.NavArea
// 0x5DA46C00
class UNavArea : public UNavAreaBase
{
public:
	unsigned char                                      UnknownData00[0x5DA46C00];                                // 0x0000(0x5DA46C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea");
		return ptr;
	}

};


// Class NavigationSystem.NavigationQueryFilter
// 0x5D9E7860
class UNavigationQueryFilter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5D9E7860];                                // 0x0000(0x5D9E7860) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationQueryFilter");
		return ptr;
	}

};


// Class NavigationSystem.NavRelevantComponent
// 0xCE98500 (0x5DA48380 - 0x50BAFE80)
class UNavRelevantComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xCE98500];                                 // 0x50BAFE80(0xCE98500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavRelevantComponent");
		return ptr;
	}


	void SetNavigationRelevancy();
};


// Class NavigationSystem.NavModifierComponent
// 0xFFFFFFFFFFF9EFE0 (0x5D9E7360 - 0x5DA48380)
class UNavModifierComponent : public UNavRelevantComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierComponent");
		return ptr;
	}


	void SetAreaClass();
};


// Class NavigationSystem.NavModifierVolume
// 0x5D9E7180
class ANavModifierVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5D9E7180];                                // 0x0000(0x5D9E7180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavModifierVolume");
		return ptr;
	}


	void SetAreaClass();
};


// Class NavigationSystem.NavigationData
// 0x3442900 (0x5E3E0900 - 0x5AF9E000)
class ANavigationData : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3442900];                                 // 0x5AF9E000(0x3442900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationData");
		return ptr;
	}

};


// Class NavigationSystem.AbstractNavData
// 0xFFFFFFFFA1C1F700 (0x0000 - 0x5E3E0900)
class AAbstractNavData : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.AbstractNavData");
		return ptr;
	}

};


// Class NavigationSystem.CrowdManagerBase
// 0x0000
class UCrowdManagerBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.CrowdManagerBase");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Default
// 0xFFFFFFFFA25B9400 (0x0000 - 0x5DA46C00)
class UNavArea_Default : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Default");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_LowHeight
// 0xFFFFFFFFA25B9400 (0x0000 - 0x5DA46C00)
class UNavArea_LowHeight : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_LowHeight");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Null
// 0xFFFFFFFFA25B9400 (0x0000 - 0x5DA46C00)
class UNavArea_Null : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Null");
		return ptr;
	}

};


// Class NavigationSystem.NavArea_Obstacle
// 0xFFFFFFFFA25B9400 (0x0000 - 0x5DA46C00)
class UNavArea_Obstacle : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavArea_Obstacle");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta
// 0xFFFFFFFFA25B9400 (0x0000 - 0x5DA46C00)
class UNavAreaMeta : public UNavArea
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta");
		return ptr;
	}

};


// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// 0x5E3B3440
class UNavAreaMeta_SwitchByAgent : public UNavAreaMeta
{
public:
	unsigned char                                      UnknownData00[0x5E3B3440];                                // 0x0000(0x5E3B3440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavAreaMeta_SwitchByAgent");
		return ptr;
	}

};


// Class NavigationSystem.NavCollision
// 0x37560 (0x5E3B3260 - 0x5E37BD00)
class UNavCollision : public UNavCollisionBase
{
public:
	unsigned char                                      UnknownData00[0x37560];                                   // 0x5E37BD00(0x37560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavCollision");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraph
// 0xFFFFFFFFA1C1F700 (0x0000 - 0x5E3E0900)
class ANavigationGraph : public ANavigationData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraph");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNode
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ANavigationGraphNode : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNode");
		return ptr;
	}

};


// Class NavigationSystem.NavigationGraphNodeComponent
// 0xD747E00 (0x5E3E0580 - 0x50C98780)
class UNavigationGraphNodeComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xD747E00];                                 // 0x50C98780(0xD747E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationGraphNodeComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationInvokerComponent
// 0xD830600 (0x5E3E0480 - 0x50BAFE80)
class UNavigationInvokerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD830600];                                 // 0x50BAFE80(0xD830600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationInvokerComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavigationPath
// 0x5E3E1F80
class UNavigationPath : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3E1F80];                                // 0x0000(0x5E3E1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPath");
		return ptr;
	}


	void IsValid();
	void IsStringPulled();
	void IsPartial();
	void GetPathLength();
	void GetPathCost();
	void GetDebugString();
	void EnableRecalculationOnInvalidation();
	void EnableDebugDrawing();
};


// Class NavigationSystem.NavigationPathGenerator
// 0x0000
class UNavigationPathGenerator : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationPathGenerator");
		return ptr;
	}

};


// Class NavigationSystem.NavigationSystemV1
// 0x5E3E4B00
class UNavigationSystemV1 : public UNavigationSystemBase
{
public:
	unsigned char                                      UnknownData00[0x5E3E4B00];                                // 0x0000(0x5E3E4B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemV1");
		return ptr;
	}


	void UnregisterNavigationInvoker();
	void SimpleMoveToLocation();
	void SimpleMoveToActor();
	void SetMaxSimultaneousTileGenerationJobsCount();
	void SetGeometryGatheringMode();
	void ResetMaxSimultaneousTileGenerationJobsCount();
	void RegisterNavigationInvoker();
	void ProjectPointToNavigation();
	void OnNavigationBoundsUpdated();
	void NavigationRaycast();
	void K2_ReplaceAreaInOctreeData();
	void K2_ProjectPointToNavigation();
	void K2_GetRandomReachablePointInRadius();
	void K2_GetRandomPointInNavigableRadius();
	void K2_GetRandomLocationInNavigableRadius();
	void IsNavigationBeingBuiltOrLocked();
	void IsNavigationBeingBuilt();
	void GetRandomReachablePointInRadius();
	void GetRandomPointInNavigableRadius();
	void GetPathLength();
	void GetPathCost();
	void GetNavigationSystem();
	void FindPathToLocationSynchronously();
	void FindPathToActorSynchronously();
};


// Class NavigationSystem.NavigationSystemModuleConfig
// 0x68E80 (0x5E3E4900 - 0x5E37BA80)
class UNavigationSystemModuleConfig : public UNavigationSystemConfig
{
public:
	unsigned char                                      UnknownData00[0x68E80];                                   // 0x5E37BA80(0x68E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationSystemModuleConfig");
		return ptr;
	}

};


// Class NavigationSystem.NavigationTestingActor
// 0x3447B00 (0x5E3E5B00 - 0x5AF9E000)
class ANavigationTestingActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3447B00];                                 // 0x5AF9E000(0x3447B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavigationTestingActor");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkComponent
// 0x35AD720 (0x5E3B4CA0 - 0x5AE07580)
class UNavLinkComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x35AD720];                                 // 0x5AE07580(0x35AD720) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomComponent
// 0x99D000 (0x5E3E5380 - 0x5DA48380)
class UNavLinkCustomComponent : public UNavRelevantComponent
{
public:
	unsigned char                                      UnknownData00[0x99D000];                                  // 0x5DA48380(0x99D000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkCustomInterface
// 0x0000
class UNavLinkCustomInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkCustomInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkHostInterface
// 0x0000
class UNavLinkHostInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkHostInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkRenderingComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class UNavLinkRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavLinkTrivial
// 0xFFFFFFFFA2324380 (0x0000 - 0x5DCDBC80)
class UNavLinkTrivial : public UNavLinkDefinition
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavLinkTrivial");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshBoundsVolume
// 0x5E3E5300
class ANavMeshBoundsVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5E3E5300];                                // 0x0000(0x5E3E5300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshBoundsVolume");
		return ptr;
	}

};


// Class NavigationSystem.NavMeshRenderingComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class UNavMeshRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavMeshRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.NavNodeInterface
// 0x0000
class UNavNodeInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavNodeInterface");
		return ptr;
	}

};


// Class NavigationSystem.NavSystemConfigOverride
// 0x3449280 (0x5E3E7280 - 0x5AF9E000)
class ANavSystemConfigOverride : public AActor
{
public:
	unsigned char                                      UnknownData00[0x3449280];                                 // 0x5AF9E000(0x3449280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavSystemConfigOverride");
		return ptr;
	}

};


// Class NavigationSystem.NavTestRenderingComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class UNavTestRenderingComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.NavTestRenderingComponent");
		return ptr;
	}

};


// Class NavigationSystem.RecastFilter_UseDefaultArea
// 0xFFFFFFFFA26187A0 (0x0000 - 0x5D9E7860)
class URecastFilter_UseDefaultArea : public UNavigationQueryFilter
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastFilter_UseDefaultArea");
		return ptr;
	}

};


// Class NavigationSystem.RecastNavMesh
// 0x6B80 (0x5E3E7480 - 0x5E3E0900)
class ARecastNavMesh : public ANavigationData
{
public:
	unsigned char                                      UnknownData00[0x6B80];                                    // 0x5E3E0900(0x6B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMesh");
		return ptr;
	}


	void K2_ReplaceAreaInTileBounds();
};


// Class NavigationSystem.RecastNavMeshDataChunk
// 0xFFFFFFFFA1C84380 (0x0000 - 0x5E37BC80)
class URecastNavMeshDataChunk : public UNavigationDataChunk
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NavigationSystem.RecastNavMeshDataChunk");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
