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

// Enum ProceduralMeshComponent.EProcMeshSliceCapOption
enum class EProcMeshSliceCapOption : uint8_t
{
	EProcMeshSliceCapOption__NoCap = 0,
	EProcMeshSliceCapOption__CreateNewSectionForCap = 1,
	EProcMeshSliceCapOption__UseLastSectionForCap = 2,
	EProcMeshSliceCapOption__EProcMeshSliceCapOption_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// 0x5AF57360
struct FProcMeshSection
{
	unsigned char                                      UnknownData00[0x5AF57360];                                // 0x0000(0x5AF57360) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// 0x5AF93C80
struct FProcMeshVertex
{
	unsigned char                                      UnknownData00[0x5AF93C80];                                // 0x0000(0x5AF93C80) MISSED OFFSET
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// 0x5AF93D80
struct FProcMeshTangent
{
	unsigned char                                      UnknownData00[0x5AF93D80];                                // 0x0000(0x5AF93D80) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
