#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class MeshDescription.MeshDescription
// 0x0000
class UMeshDescription : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescription");
		return ptr;
	}

};


// Class MeshDescription.MeshDescriptionBase
// 0x0000
class UMeshDescriptionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MeshDescription.MeshDescriptionBase");
		return ptr;
	}


	void SetVertexPosition();
	void SetPolygonVertexInstance();
	void SetPolygonPolygonGroup();
	void ReversePolygonFacing();
	void ReserveNewVertices();
	void ReserveNewVertexInstances();
	void ReserveNewTriangles();
	void ReserveNewPolygons();
	void ReserveNewPolygonGroups();
	void ReserveNewEdges();
	void IsVertexValid();
	void IsVertexOrphaned();
	void IsVertexInstanceValid();
	void IsTriangleValid();
	void IsTrianglePartOfNgon();
	void IsPolygonValid();
	void IsPolygonGroupValid();
	void IsEmpty();
	void IsEdgeValid();
	void IsEdgeInternalToPolygon();
	void IsEdgeInternal();
	void GetVertexVertexInstances();
	void GetVertexPosition();
	void GetVertexPairEdge();
	void GetVertexInstanceVertex();
	void GetVertexInstancePairEdge();
	void GetVertexInstanceForTriangleVertex();
	void GetVertexInstanceForPolygonVertex();
	void GetVertexInstanceConnectedTriangles();
	void GetVertexInstanceConnectedPolygons();
	void GetVertexConnectedTriangles();
	void GetVertexConnectedPolygons();
	void GetVertexConnectedEdges();
	void GetVertexAdjacentVertices();
	void GetTriangleVertices();
	void GetTriangleVertexInstances();
	void GetTriangleVertexInstance();
	void GetTrianglePolygonGroup();
	void GetTrianglePolygon();
	void GetTriangleEdges();
	void GetTriangleAdjacentTriangles();
	void GetPolygonVertices();
	void GetPolygonVertexInstances();
	void GetPolygonTriangles();
	void GetPolygonPolygonGroup();
	void GetPolygonPerimeterEdges();
	void GetPolygonInternalEdges();
	void GetPolygonGroupPolygons();
	void GetPolygonAdjacentPolygons();
	void GetNumVertexVertexInstances();
	void GetNumVertexInstanceConnectedTriangles();
	void GetNumVertexInstanceConnectedPolygons();
	void GetNumVertexConnectedTriangles();
	void GetNumVertexConnectedPolygons();
	void GetNumVertexConnectedEdges();
	void GetNumPolygonVertices();
	void GetNumPolygonTriangles();
	void GetNumPolygonInternalEdges();
	void GetNumPolygonGroupPolygons();
	void GetNumEdgeConnectedTriangles();
	void GetNumEdgeConnectedPolygons();
	void GetEdgeVertices();
	void GetEdgeVertex();
	void GetEdgeConnectedTriangles();
	void GetEdgeConnectedPolygons();
	void Empty();
	void DeleteVertexInstance();
	void DeleteVertex();
	void DeleteTriangle();
	void DeletePolygonGroup();
	void DeletePolygon();
	void DeleteEdge();
	void CreateVertexWithID();
	void CreateVertexInstanceWithID();
	void CreateVertexInstance();
	void CreateVertex();
	void CreateTriangleWithID();
	void CreateTriangle();
	void CreatePolygonWithID();
	void CreatePolygonGroupWithID();
	void CreatePolygonGroup();
	void CreatePolygon();
	void CreateEdgeWithID();
	void CreateEdge();
	void ComputePolygonTriangulation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
