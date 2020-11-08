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

// Enum MeshDescription.EComputeNTBsOptions
enum class EComputeNTBsOptions : uint8_t
{
	EComputeNTBsOptions__None      = 0,
	EComputeNTBsOptions__Normals   = 1,
	EComputeNTBsOptions__Tangents  = 2,
	EComputeNTBsOptions__WeightedNTBs = 3,
	EComputeNTBsOptions__EComputeNTBsOptions_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MeshDescription.ElementID
// 0x5AF90780
struct FElementID
{
	unsigned char                                      UnknownData00[0x5AF90780];                                // 0x0000(0x5AF90780) MISSED OFFSET
};

// ScriptStruct MeshDescription.PolygonGroupID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FPolygonGroupID : public FElementID
{

};

// ScriptStruct MeshDescription.PolygonID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FPolygonID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FVertexID : public FElementID
{

};

// ScriptStruct MeshDescription.VertexInstanceID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FVertexInstanceID : public FElementID
{

};

// ScriptStruct MeshDescription.EdgeID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FEdgeID : public FElementID
{

};

// ScriptStruct MeshDescription.TriangleID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FTriangleID : public FElementID
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
