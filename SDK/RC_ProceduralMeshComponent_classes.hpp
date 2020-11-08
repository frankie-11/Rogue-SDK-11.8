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

// Class ProceduralMeshComponent.KismetProceduralMeshLibrary
// 0x0000
class UKismetProceduralMeshLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.KismetProceduralMeshLibrary");
		return ptr;
	}


	void SliceProceduralMesh();
	void GetSectionFromStaticMesh();
	void GetSectionFromProceduralMesh();
	void GenerateBoxMesh();
	void CreateGridMeshWelded();
	void CreateGridMeshTriangles();
	void CreateGridMeshSplit();
	void CopyProceduralMeshFromStaticMeshComponent();
	void ConvertQuadToTriangles();
	void CalculateTangentsForMesh();
};


// Class ProceduralMeshComponent.ProceduralMeshComponent
// 0xA5EA4E0 (0x5B229180 - 0x50C3ECA0)
class UProceduralMeshComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA5EA4E0];                                 // 0x50C3ECA0(0xA5EA4E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ProceduralMeshComponent.ProceduralMeshComponent");
		return ptr;
	}


	void UpdateMeshSection_LinearColor();
	void UpdateMeshSection();
	void SetMeshSectionVisible();
	void IsMeshSectionVisible();
	void GetNumSections();
	void CreateMeshSection_LinearColor();
	void CreateMeshSection();
	void ClearMeshSection();
	void ClearCollisionConvexMeshes();
	void ClearAllMeshSections();
	void AddCollisionConvexMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
