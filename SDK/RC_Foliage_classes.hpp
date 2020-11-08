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

// Class Foliage.FoliageInstancedStaticMeshComponent
// 0x1CCC0 (0x5DBFFC00 - 0x5DBE2F40)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1CCC0];                                   // 0x5DBE2F40(0x1CCC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageInstancedStaticMeshComponent");
		return ptr;
	}

};


// Class Foliage.FoliageStatistics
// 0x0000
class UFoliageStatistics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageStatistics");
		return ptr;
	}


	void FoliageOverlappingSphereCount();
	void FoliageOverlappingBoxCount();
};


// Class Foliage.FoliageType
// 0x5DC12780
class UFoliageType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC12780];                                // 0x0000(0x5DC12780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType");
		return ptr;
	}

};


// Class Foliage.FoliageType_Actor
// 0xFFFFFFFFFFFD0360 (0x5DBE2AE0 - 0x5DC12780)
class UFoliageType_Actor : public UFoliageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_Actor");
		return ptr;
	}

};


// Class Foliage.FoliageType_InstancedStaticMesh
// 0xFFFFFFFFFFFFFE80 (0x5DC12600 - 0x5DC12780)
class UFoliageType_InstancedStaticMesh : public UFoliageType
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.FoliageType_InstancedStaticMesh");
		return ptr;
	}

};


// Class Foliage.InstancedFoliageActor
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AInstancedFoliageActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InstancedFoliageActor");
		return ptr;
	}

};


// Class Foliage.InteractiveFoliageActor
// 0x1700 (0x5DC13B00 - 0x5DC12400)
class AInteractiveFoliageActor : public AStaticMeshActor
{
public:
	unsigned char                                      UnknownData00[0x1700];                                    // 0x5DC12400(0x1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageActor");
		return ptr;
	}


	void CapsuleTouched();
};


// Class Foliage.InteractiveFoliageComponent
// 0xFFFFFFFFA25B7500 (0x0000 - 0x5DA48B00)
class UInteractiveFoliageComponent : public UStaticMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.InteractiveFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageBlockingVolume
// 0x5DC13A80
class AProceduralFoliageBlockingVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DC13A80];                                // 0x0000(0x5DC13A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageBlockingVolume");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageComponent
// 0xD063A00 (0x5DC13880 - 0x50BAFE80)
class UProceduralFoliageComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD063A00];                                 // 0x50BAFE80(0xD063A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageComponent");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageSpawner
// 0x5DC13580
class UProceduralFoliageSpawner : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC13580];                                // 0x0000(0x5DC13580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageSpawner");
		return ptr;
	}


	void Simulate();
};


// Class Foliage.ProceduralFoliageTile
// 0x5DC13480
class UProceduralFoliageTile : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC13480];                                // 0x0000(0x5DC13480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageTile");
		return ptr;
	}

};


// Class Foliage.ProceduralFoliageVolume
// 0x5DC13400
class AProceduralFoliageVolume : public AVolume
{
public:
	unsigned char                                      UnknownData00[0x5DC13400];                                // 0x0000(0x5DC13400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Foliage.ProceduralFoliageVolume");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
