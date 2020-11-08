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

// Enum EditableMesh.ETriangleTessellationMode
enum class ETriangleTessellationMode : uint8_t
{
	ETriangleTessellationMode__ThreeTriangles = 0,
	ETriangleTessellationMode__FourTriangles = 1,
	ETriangleTessellationMode__ETriangleTessellationMode_MAX = 2
};


// Enum EditableMesh.EInsetPolygonsMode
enum class EInsetPolygonsMode : uint8_t
{
	EInsetPolygonsMode__All        = 0,
	EInsetPolygonsMode__CenterPolygonOnly = 1,
	EInsetPolygonsMode__SidePolygonsOnly = 2,
	EInsetPolygonsMode__EInsetPolygonsMode_MAX = 3
};


// Enum EditableMesh.EPolygonEdgeHardness
enum class EPolygonEdgeHardness : uint8_t
{
	EPolygonEdgeHardness__NewEdgesSoft = 0,
	EPolygonEdgeHardness__NewEdgesHard = 1,
	EPolygonEdgeHardness__AllEdgesSoft = 2,
	EPolygonEdgeHardness__AllEdgesHard = 3,
	EPolygonEdgeHardness__EPolygonEdgeHardness_MAX = 4
};


// Enum EditableMesh.EMeshElementAttributeType
enum class EMeshElementAttributeType : uint8_t
{
	EMeshElementAttributeType__None = 0,
	EMeshElementAttributeType__FVector4 = 1,
	EMeshElementAttributeType__FVector = 2,
	EMeshElementAttributeType__FVector2D = 3,
	EMeshElementAttributeType__Float = 4,
	EMeshElementAttributeType__Int = 5,
	EMeshElementAttributeType__Bool = 6,
	EMeshElementAttributeType__FName = 7,
	EMeshElementAttributeType__EMeshElementAttributeType_MAX = 8
};


// Enum EditableMesh.EMeshTopologyChange
enum class EMeshTopologyChange : uint8_t
{
	EMeshTopologyChange__NoTopologyChange = 0,
	EMeshTopologyChange__TopologyChange = 1,
	EMeshTopologyChange__EMeshTopologyChange_MAX = 2
};


// Enum EditableMesh.EMeshModificationType
enum class EMeshModificationType : uint8_t
{
	EMeshModificationType__FirstInterim = 0,
	EMeshModificationType__Interim = 1,
	EMeshModificationType__Final   = 2,
	EMeshModificationType__EMeshModificationType_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct EditableMesh.AdaptorPolygon2Group
// 0x5AF90880
struct FAdaptorPolygon2Group
{
	unsigned char                                      UnknownData00[0x5AF90880];                                // 0x0000(0x5AF90880) MISSED OFFSET
};

// ScriptStruct EditableMesh.AdaptorPolygon
// 0x5AF90700
struct FAdaptorPolygon
{
	unsigned char                                      UnknownData00[0x5AF90700];                                // 0x0000(0x5AF90700) MISSED OFFSET
};

// ScriptStruct EditableMesh.AdaptorTriangleID
// 0xFFFFFFFFA506F880 (0x0000 - 0x5AF90780)
struct FAdaptorTriangleID : public FElementID
{

};

// ScriptStruct EditableMesh.PolygonGroupForPolygon
// 0x5AF90600
struct FPolygonGroupForPolygon
{
	unsigned char                                      UnknownData00[0x5AF90600];                                // 0x0000(0x5AF90600) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonGroupToCreate
// 0x5AF90500
struct FPolygonGroupToCreate
{
	unsigned char                                      UnknownData00[0x5AF90500];                                // 0x0000(0x5AF90500) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeList
// 0x5AF55420
struct FMeshElementAttributeList
{
	unsigned char                                      UnknownData00[0x5AF55420];                                // 0x0000(0x5AF55420) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeData
// 0x5AF90280
struct FMeshElementAttributeData
{
	unsigned char                                      UnknownData00[0x5AF90280];                                // 0x0000(0x5AF90280) MISSED OFFSET
};

// ScriptStruct EditableMesh.MeshElementAttributeValue
// 0x0000
struct FMeshElementAttributeValue
{

};

// ScriptStruct EditableMesh.VertexToMove
// 0x5AF90180
struct FVertexToMove
{
	unsigned char                                      UnknownData00[0x5AF90180];                                // 0x0000(0x5AF90180) MISSED OFFSET
};

// ScriptStruct EditableMesh.ChangeVertexInstancesForPolygon
// 0x5AF91F80
struct FChangeVertexInstancesForPolygon
{
	unsigned char                                      UnknownData00[0x5AF91F80];                                // 0x0000(0x5AF91F80) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstancesForPolygonHole
// 0x5AF552E0
struct FVertexInstancesForPolygonHole
{
	unsigned char                                      UnknownData00[0x5AF552E0];                                // 0x0000(0x5AF552E0) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexIndexAndInstanceID
// 0x5AF92080
struct FVertexIndexAndInstanceID
{
	unsigned char                                      UnknownData00[0x5AF92080];                                // 0x0000(0x5AF92080) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAttributesForPolygon
// 0x5AF91D80
struct FVertexAttributesForPolygon
{
	unsigned char                                      UnknownData00[0x5AF91D80];                                // 0x0000(0x5AF91D80) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAttributesForPolygonHole
// 0x5AF57A40
struct FVertexAttributesForPolygonHole
{
	unsigned char                                      UnknownData00[0x5AF57A40];                                // 0x0000(0x5AF57A40) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForEdge
// 0x5AF91C80
struct FAttributesForEdge
{
	unsigned char                                      UnknownData00[0x5AF91C80];                                // 0x0000(0x5AF91C80) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForVertexInstance
// 0x5AF91B80
struct FAttributesForVertexInstance
{
	unsigned char                                      UnknownData00[0x5AF91B80];                                // 0x0000(0x5AF91B80) MISSED OFFSET
};

// ScriptStruct EditableMesh.AttributesForVertex
// 0x5AF91A80
struct FAttributesForVertex
{
	unsigned char                                      UnknownData00[0x5AF91A80];                                // 0x0000(0x5AF91A80) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonToSplit
// 0x5AF91880
struct FPolygonToSplit
{
	unsigned char                                      UnknownData00[0x5AF91880];                                // 0x0000(0x5AF91880) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexPair
// 0x5AF91900
struct FVertexPair
{
	unsigned char                                      UnknownData00[0x5AF91900];                                // 0x0000(0x5AF91900) MISSED OFFSET
};

// ScriptStruct EditableMesh.PolygonToCreate
// 0x5AF91500
struct FPolygonToCreate
{
	unsigned char                                      UnknownData00[0x5AF91500];                                // 0x0000(0x5AF91500) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexAndAttributes
// 0x5AF91580
struct FVertexAndAttributes
{
	unsigned char                                      UnknownData00[0x5AF91580];                                // 0x0000(0x5AF91580) MISSED OFFSET
};

// ScriptStruct EditableMesh.EdgeToCreate
// 0x5AF91300
struct FEdgeToCreate
{
	unsigned char                                      UnknownData00[0x5AF91300];                                // 0x0000(0x5AF91300) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexInstanceToCreate
// 0x5AF91180
struct FVertexInstanceToCreate
{
	unsigned char                                      UnknownData00[0x5AF91180];                                // 0x0000(0x5AF91180) MISSED OFFSET
};

// ScriptStruct EditableMesh.VertexToCreate
// 0x5AF93180
struct FVertexToCreate
{
	unsigned char                                      UnknownData00[0x5AF93180];                                // 0x0000(0x5AF93180) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitData
// 0x5AF57540
struct FSubdivisionLimitData
{
	unsigned char                                      UnknownData00[0x5AF57540];                                // 0x0000(0x5AF57540) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedWireEdge
// 0x5AF93000
struct FSubdividedWireEdge
{
	unsigned char                                      UnknownData00[0x5AF93000];                                // 0x0000(0x5AF93000) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdivisionLimitSection
// 0x5AF575E0
struct FSubdivisionLimitSection
{
	unsigned char                                      UnknownData00[0x5AF575E0];                                // 0x0000(0x5AF575E0) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuad
// 0x5AF92980
struct FSubdividedQuad
{
	unsigned char                                      UnknownData00[0x5AF92980];                                // 0x0000(0x5AF92980) MISSED OFFSET
};

// ScriptStruct EditableMesh.SubdividedQuadVertex
// 0x5AF92B00
struct FSubdividedQuadVertex
{
	unsigned char                                      UnknownData00[0x5AF92B00];                                // 0x0000(0x5AF92B00) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygonGroup
// 0x5AF92780
struct FRenderingPolygonGroup
{
	unsigned char                                      UnknownData00[0x5AF92780];                                // 0x0000(0x5AF92780) MISSED OFFSET
};

// ScriptStruct EditableMesh.RenderingPolygon
// 0x5AF92680
struct FRenderingPolygon
{
	unsigned char                                      UnknownData00[0x5AF92680];                                // 0x0000(0x5AF92680) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
