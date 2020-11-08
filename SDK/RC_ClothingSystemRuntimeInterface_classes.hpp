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

// Class ClothingSystemRuntimeInterface.ClothConfigBase
// 0x0000
class UClothConfigBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothConfigBase");
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// 0x0000
class UClothingSimulationFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationFactory");
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// 0x0000
class UClothingSimulationInteractor : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor");
		return ptr;
	}


	void SetAnimDriveSpringStiffness();
	void PhysicsAssetUpdated();
	void EnableGravityOverride();
	void DisableGravityOverride();
	void ClothConfigUpdated();
};


// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// 0x0000
class UClothSharedSimConfigBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// 0x5DCA2A00
class UClothingAssetBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DCA2A00];                                // 0x0000(0x5DCA2A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothingAssetBase");
		return ptr;
	}

};


// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// 0x5DBEDD00
class UClothPhysicalMeshDataBase_Legacy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBEDD00];                                // 0x0000(0x5DBEDD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
