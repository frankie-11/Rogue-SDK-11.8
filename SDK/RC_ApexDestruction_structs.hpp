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

// Enum ApexDestruction.EImpactDamageOverride
enum class EImpactDamageOverride : uint8_t
{
	IDO_None                       = 0,
	IDO_On                         = 1,
	IDO_Off                        = 2,
	IDO_MAX                        = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ApexDestruction.DestructibleChunkParameters
// 0x5AE0A880
struct FDestructibleChunkParameters
{
	unsigned char                                      UnknownData00[0x5AE0A880];                                // 0x0000(0x5AE0A880) MISSED OFFSET
};

// ScriptStruct ApexDestruction.FractureMaterial
// 0x5AE0A600
struct FFractureMaterial
{
	unsigned char                                      UnknownData00[0x5AE0A600];                                // 0x0000(0x5AE0A600) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleParameters
// 0x5AE0B800
struct FDestructibleParameters
{
	unsigned char                                      UnknownData00[0x5AE0B800];                                // 0x0000(0x5AE0B800) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleParametersFlag
// 0x5AE0C200
struct FDestructibleParametersFlag
{
	unsigned char                                      UnknownData00[0x5AE0C200];                                // 0x0000(0x5AE0C200) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDepthParameters
// 0x5AE0C100
struct FDestructibleDepthParameters
{
	unsigned char                                      UnknownData00[0x5AE0C100];                                // 0x0000(0x5AE0C100) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleSpecialHierarchyDepths
// 0x5AE0BE00
struct FDestructibleSpecialHierarchyDepths
{
	unsigned char                                      UnknownData00[0x5AE0BE00];                                // 0x0000(0x5AE0BE00) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleAdvancedParameters
// 0x5AE0BB80
struct FDestructibleAdvancedParameters
{
	unsigned char                                      UnknownData00[0x5AE0BB80];                                // 0x0000(0x5AE0BB80) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDebrisParameters
// 0x5AE0B880
struct FDestructibleDebrisParameters
{
	unsigned char                                      UnknownData00[0x5AE0B880];                                // 0x0000(0x5AE0B880) MISSED OFFSET
};

// ScriptStruct ApexDestruction.DestructibleDamageParameters
// 0x5AE0D580
struct FDestructibleDamageParameters
{
	unsigned char                                      UnknownData00[0x5AE0D580];                                // 0x0000(0x5AE0D580) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
