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

// Enum ClothingSystemRuntimeNv.EClothingWindMethodNv
enum class EClothingWindMethodNv : uint8_t
{
	EClothingWindMethodNv__Legacy  = 0,
	EClothingWindMethodNv__Accurate = 1,
	EClothingWindMethodNv__EClothingWindMethodNv_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ClothingSystemRuntimeNv.ClothConstraintSetupNv
// 0x5B0CF800
struct FClothConstraintSetupNv
{
	unsigned char                                      UnknownData00[0x5B0CF800];                                // 0x0000(0x5B0CF800) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
