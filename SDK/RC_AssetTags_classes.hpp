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

// Class AssetTags.AssetTagsSubsystem
// 0x0000
class UAssetTagsSubsystem : public UEngineSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AssetTags.AssetTagsSubsystem");
		return ptr;
	}


	void GetCollectionsContainingAssetPtr();
	void GetCollectionsContainingAssetData();
	void GetCollectionsContainingAsset();
	void GetCollections();
	void GetAssetsInCollection();
	void CollectionExists();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
