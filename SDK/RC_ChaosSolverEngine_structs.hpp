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

// Enum ChaosSolverEngine.EClusterConnectionTypeEnum
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay = 3,
	EClusterConnectionTypeEnum__Chaos_None = 4,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max = 5,
	EClusterConnectionTypeEnum__Chaos_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolverEngine.ChaosPhysicsCollisionInfo
// 0x5ABFB180
struct FChaosPhysicsCollisionInfo
{
	unsigned char                                      UnknownData00[0x5ABFB180];                                // 0x0000(0x5ABFB180) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.ChaosBreakEvent
// 0x5ABFAE80
struct FChaosBreakEvent
{
	unsigned char                                      UnknownData00[0x5ABFAE80];                                // 0x0000(0x5ABFAE80) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.ChaosHandlerSet
// 0x5B096FA0
struct FChaosHandlerSet
{
	unsigned char                                      UnknownData00[0x5B096FA0];                                // 0x0000(0x5B096FA0) MISSED OFFSET
};

// ScriptStruct ChaosSolverEngine.BreakEventCallbackWrapper
// 0x0000
struct FBreakEventCallbackWrapper
{

};

// ScriptStruct ChaosSolverEngine.ChaosDebugSubstepControl
// 0x5B0D8800
struct FChaosDebugSubstepControl
{
	unsigned char                                      UnknownData00[0x5B0D8800];                                // 0x0000(0x5B0D8800) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
