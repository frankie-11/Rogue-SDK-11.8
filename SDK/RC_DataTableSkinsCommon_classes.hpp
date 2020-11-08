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

// Class DataTableSkinsCommon.DynamicSkinTable
// 0x5B192F40
class UDynamicSkinTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B192F40];                                // 0x0000(0x5B192F40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.DynamicSkinTable");
		return ptr;
	}


	void RemoveDataTables();
	void RemoveDataTable();
	void IsTablePendingAssetLoad();
	void GetTexture();
	void GetStaticMesh();
	void GetSkeletalMesh();
	void GetSelectiveAudioEvent();
	void GetPoseAsset();
	void GetPhysicsAsset();
	void GetParticleSystem();
	void GetNameField();
	void GetMaterialInterface();
	void GetLinearColor();
	void GetInt();
	void GetFloat();
	void GetClass();
	void GetBool();
	void GetAudioEvent();
	void GetAnimSequence();
	void GetAnimMontage();
	void GetAnimBlendSpace();
	void GetAnimationAsset();
	void GetAnimAimOffset();
	void GetAllKeywords();
	void AddDataTableWithQuery();
	void AddDataTables();
	void AddDataTable();
};


// Class DataTableSkinsCommon.MultiSkinObject
// 0x5B192A40
class UMultiSkinObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B192A40];                                // 0x0000(0x5B192A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.MultiSkinObject");
		return ptr;
	}


	void UnsubscribeToKeywords();
	void UnsubscribeToKeyword();
	void UnsubscribeToAllKeywords();
	void SubscribeToKeywords();
	void SubscribeToKeyword();
	void SubscribeToAllKeywords();
	void RemoveParent();
	void GetTexture();
	void GetStaticMesh();
	void GetSkeletalMesh();
	void GetSelectiveAudioEvent();
	void GetPoseAsset();
	void GetPhysicsAsset();
	void GetParticleSystem();
	void GetNameField();
	void GetMaterialInterface();
	void GetLinearColor();
	void GetInt();
	void GetFloat();
	void GetClass();
	void GetBool();
	void GetAudioEvent();
	void GetAnimSequence();
	void GetAnimMontage();
	void GetAnimBlendSpace();
	void GetAnimAimOffset();
	void GetAllSkinKeywords();
	void AddParent();
};


// Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent
// 0x6480 (0x5B1C8F00 - 0x5B1C2A80)
class USkinnableSkeletalMeshComponent : public USkeletalMeshComponentBudgeted
{
public:
	unsigned char                                      UnknownData00[0x6480];                                    // 0x5B1C2A80(0x6480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableSkeletalMeshComponent");
		return ptr;
	}


	void StaticSetForcedLOD();
	void SetSkeletalMeshKeyword();
	void SetPhysicsAssetKeyword();
	void SetPersistentVectorParameterOnAllMaterials();
	void SetPersistentVectorParameter();
	void SetPersistentTextureParameterOnAllMaterials();
	void SetPersistentTextureParameter();
	void SetPersistentScalarParameterOnAllMaterials();
	void SetPersistentScalarParameter();
	void SetForcedLOD_Skinned();
	void SetAnimClassKeyword();
	void RemovePersistentMaterialParameter();
	void GetSkinObject();
	void ForwardAnimInitialized();
};


// Class DataTableSkinsCommon.SkinnableMergedMeshComponent
// 0xFFFFFFFFFFFCC020 (0x5B194F20 - 0x5B1C8F00)
class USkinnableMergedMeshComponent : public USkinnableSkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinnableMergedMeshComponent");
		return ptr;
	}


	void SetSkeletalMeshKeywords();
	void RemoveSkeletalMeshKeyword();
	void AddSkeletalMeshKeyword();
};


// Class DataTableSkinsCommon.SkinObjectManagerComponent
// 0xA533A00 (0x5B0E3880 - 0x50BAFE80)
class USkinObjectManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA533A00];                                 // 0x50BAFE80(0xA533A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinObjectManagerComponent");
		return ptr;
	}

};


// Class DataTableSkinsCommon.SkinTagAssetInterface
// 0x0000
class USkinTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DataTableSkinsCommon.SkinTagAssetInterface");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
