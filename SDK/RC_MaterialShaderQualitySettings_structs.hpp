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

// Enum MaterialShaderQualitySettings.EMobileCSMQuality
enum class EMobileCSMQuality : uint8_t
{
	EMobileCSMQuality__NoFiltering = 0,
	EMobileCSMQuality__PCF_1x1     = 1,
	EMobileCSMQuality__PCF_2x2     = 2,
	EMobileCSMQuality__PCF_3x3     = 3,
	EMobileCSMQuality__EMobileCSMQuality_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MaterialShaderQualitySettings.MaterialQualityOverrides
// 0x5AFF9A80
struct FMaterialQualityOverrides
{
	unsigned char                                      UnknownData00[0x5AFF9A80];                                // 0x0000(0x5AFF9A80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
