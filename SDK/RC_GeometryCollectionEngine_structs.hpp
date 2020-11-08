#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone = 0,
	EChaosBreakingSortMethod__SortByHighestMass = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed = 2,
	EChaosBreakingSortMethod__SortByNearestFirst = 3,
	EChaosBreakingSortMethod__Count = 4,
	EChaosBreakingSortMethod__EChaosBreakingSortMethod_MAX = 5
};


// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone = 0,
	EChaosCollisionSortMethod__SortByHighestMass = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse = 3,
	EChaosCollisionSortMethod__SortByNearestFirst = 4,
	EChaosCollisionSortMethod__Count = 5,
	EChaosCollisionSortMethod__EChaosCollisionSortMethod_MAX = 6
};


// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone = 0,
	EChaosTrailingSortMethod__SortByHighestMass = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed = 2,
	EChaosTrailingSortMethod__SortByNearestFirst = 3,
	EChaosTrailingSortMethod__Count = 4,
	EChaosTrailingSortMethod__EChaosTrailingSortMethod_MAX = 5
};


// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll = 4,
	EGeometryCollectionDebugDrawActorHideGeometry__EGeometryCollectionDebugDrawActorHideGeometry_MAX = 5
};


// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform = 0,
	ECollectionGroupEnum__Chaos_Max = 1
};


// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active = 0,
	ECollectionAttributeEnum__Chaos_DynamicState = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup = 2,
	ECollectionAttributeEnum__Chaos_Max = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// 0x50C3EB60
struct FGeomComponentCacheParameters
{
	unsigned char                                      UnknownData00[0x50C3EB60];                                // 0x0000(0x50C3EB60) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// 0x5AE0B000
struct FChaosCollisionEventData
{
	unsigned char                                      UnknownData00[0x5AE0B000];                                // 0x0000(0x5AE0B000) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// 0x5AE0AE00
struct FChaosBreakingEventData
{
	unsigned char                                      UnknownData00[0x5AE0AE00];                                // 0x0000(0x5AE0AE00) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// 0x5AE0AA80
struct FChaosTrailingEventData
{
	unsigned char                                      UnknownData00[0x5AE0AA80];                                // 0x0000(0x5AE0AA80) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// 0x5B0D8500
struct FChaosBreakingEventRequestSettings
{
	unsigned char                                      UnknownData00[0x5B0D8500];                                // 0x0000(0x5B0D8500) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// 0x5B0DA300
struct FChaosCollisionEventRequestSettings
{
	unsigned char                                      UnknownData00[0x5B0DA300];                                // 0x0000(0x5B0DA300) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// 0x5B0DA000
struct FChaosTrailingEventRequestSettings
{
	unsigned char                                      UnknownData00[0x5B0DA000];                                // 0x0000(0x5B0DA000) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// 0x5B0D9E80
struct FGeometryCollectionDebugDrawActorSelectedRigidBody
{
	unsigned char                                      UnknownData00[0x5B0D9E80];                                // 0x0000(0x5B0D9E80) MISSED OFFSET
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// 0x0000
struct FGeometryCollectionDebugDrawWarningMessage
{

};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// 0x5B0D9980
struct FGeometryCollectionSizeSpecificData
{
	unsigned char                                      UnknownData00[0x5B0D9980];                                // 0x0000(0x5B0D9980) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
