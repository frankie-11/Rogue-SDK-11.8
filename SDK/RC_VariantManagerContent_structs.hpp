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

// Enum VariantManagerContent.EPropertyValueCategory
enum class EPropertyValueCategory : uint8_t
{
	EPropertyValueCategory__Undefined = 0,
	EPropertyValueCategory__Generic = 1,
	EPropertyValueCategory__RelativeLocation = 2,
	EPropertyValueCategory__RelativeRotation = 3,
	EPropertyValueCategory__RelativeScale3D = 4,
	EPropertyValueCategory__Visibility = 5,
	EPropertyValueCategory__Material = 6,
	EPropertyValueCategory__Color  = 7,
	EPropertyValueCategory__Option = 8,
	EPropertyValueCategory__EPropertyValueCategory_MAX = 9
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct VariantManagerContent.FunctionCaller
// 0x5AF8F880
struct FFunctionCaller
{
	unsigned char                                      UnknownData00[0x5AF8F880];                                // 0x0000(0x5AF8F880) MISSED OFFSET
};

// ScriptStruct VariantManagerContent.CapturedPropSegment
// 0x5AF91000
struct FCapturedPropSegment
{
	unsigned char                                      UnknownData00[0x5AF91000];                                // 0x0000(0x5AF91000) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
