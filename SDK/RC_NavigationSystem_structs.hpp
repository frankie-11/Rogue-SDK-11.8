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

// Enum NavigationSystem.ERuntimeGenerationType
enum class ERuntimeGenerationType : uint8_t
{
	ERuntimeGenerationType__Static = 0,
	ERuntimeGenerationType__DynamicModifiersOnly = 1,
	ERuntimeGenerationType__Dynamic = 2,
	ERuntimeGenerationType__LegacyGeneration = 3,
	ERuntimeGenerationType__ERuntimeGenerationType_MAX = 4
};


// Enum NavigationSystem.ENavCostDisplay
enum class ENavCostDisplay : uint8_t
{
	ENavCostDisplay__TotalCost     = 0,
	ENavCostDisplay__HeuristicOnly = 1,
	ENavCostDisplay__RealCostOnly  = 2,
	ENavCostDisplay__ENavCostDisplay_MAX = 3
};


// Enum NavigationSystem.ENavSystemOverridePolicy
enum class ENavSystemOverridePolicy : uint8_t
{
	ENavSystemOverridePolicy__Override = 0,
	ENavSystemOverridePolicy__Append = 1,
	ENavSystemOverridePolicy__Skip = 2,
	ENavSystemOverridePolicy__ENavSystemOverridePolicy_MAX = 3
};


// Enum NavigationSystem.ERecastPartitioning
enum class ERecastPartitioning : uint8_t
{
	ERecastPartitioning__Monotone  = 0,
	ERecastPartitioning__Watershed = 1,
	ERecastPartitioning__ChunkyMonotone = 2,
	ERecastPartitioning__ERecastPartitioning_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NavigationSystem.NavCollisionBox
// 0x5B0D0800
struct FNavCollisionBox
{
	unsigned char                                      UnknownData00[0x5B0D0800];                                // 0x0000(0x5B0D0800) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// 0x5B0D0680
struct FNavCollisionCylinder
{
	unsigned char                                      UnknownData00[0x5B0D0680];                                // 0x0000(0x5B0D0680) MISSED OFFSET
};

// ScriptStruct NavigationSystem.SupportedAreaData
// 0x5B0D0580
struct FSupportedAreaData
{
	unsigned char                                      UnknownData00[0x5B0D0580];                                // 0x0000(0x5B0D0580) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphNode
// 0x5B0D0500
struct FNavGraphNode
{
	unsigned char                                      UnknownData00[0x5B0D0500];                                // 0x0000(0x5B0D0500) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavGraphEdge
// 0x0000
struct FNavGraphEdge
{

};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// 0x5B0D1E80
struct FNavigationFilterFlags
{
	unsigned char                                      UnknownData00[0x5B0D1E80];                                // 0x0000(0x5B0D1E80) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// 0x5B095920
struct FNavigationFilterArea
{
	unsigned char                                      UnknownData00[0x5B095920];                                // 0x0000(0x5B095920) MISSED OFFSET
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// 0xA6C00 (0x5B0D1B80 - 0x5B02AF80)
struct FNavLinkCustomInstanceData : public FActorComponentInstanceData
{
	unsigned char                                      UnknownData00[0xA6C00];                                   // 0x5B02AF80(0xA6C00) MISSED OFFSET
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// 0x5B0D3180
struct FRecastNavMeshGenerationProperties
{
	unsigned char                                      UnknownData00[0x5B0D3180];                                // 0x0000(0x5B0D3180) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
