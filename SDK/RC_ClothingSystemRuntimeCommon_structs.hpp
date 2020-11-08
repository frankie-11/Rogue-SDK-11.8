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

// Enum ClothingSystemRuntimeCommon.EClothingWindMethod_Legacy
enum class EClothingWindMethod_Legacy : uint8_t
{
	EClothingWindMethod_Legacy__Legacy = 0,
	EClothingWindMethod_Legacy__Accurate = 1,
	EClothingWindMethod_Legacy__EClothingWindMethod_MAX = 2
};


// Enum ClothingSystemRuntimeCommon.EWeightMapTargetCommon
enum class EWeightMapTargetCommon : uint8_t
{
	EWeightMapTargetCommon__None   = 0,
	EWeightMapTargetCommon__MaxDistance = 1,
	EWeightMapTargetCommon__BackstopDistance = 2,
	EWeightMapTargetCommon__BackstopRadius = 3,
	EWeightMapTargetCommon__AnimDriveMultiplier = 4,
	EWeightMapTargetCommon__EWeightMapTargetCommon_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeCommon.ClothConfig_Legacy
// 0x5B096280
struct FClothConfig_Legacy
{
	unsigned char                                      UnknownData00[0x5B096280];                                // 0x0000(0x5B096280) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothConstraintSetup_Legacy
// 0x5B0CEF00
struct FClothConstraintSetup_Legacy
{
	unsigned char                                      UnknownData00[0x5B0CEF00];                                // 0x0000(0x5B0CEF00) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothLODDataCommon
// 0x5B0CEC00
struct FClothLODDataCommon
{
	unsigned char                                      UnknownData00[0x5B0CEC00];                                // 0x0000(0x5B0CEC00) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothPhysicalMeshData
// 0x5B095BA0
struct FClothPhysicalMeshData
{
	unsigned char                                      UnknownData00[0x5B095BA0];                                // 0x0000(0x5B095BA0) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.PointWeightMap
// 0x5B095D80
struct FPointWeightMap
{
	unsigned char                                      UnknownData00[0x5B095D80];                                // 0x0000(0x5B095D80) MISSED OFFSET
};

// ScriptStruct ClothingSystemRuntimeCommon.ClothParameterMask_Legacy
// 0x5B0CFA00
struct FClothParameterMask_Legacy
{
	unsigned char                                      UnknownData00[0x5B0CFA00];                                // 0x0000(0x5B0CFA00) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
