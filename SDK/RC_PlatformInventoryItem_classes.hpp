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

// Class PlatformInventoryItem.PInv_AssetManager
// 0xB0220 (0x5B14D700 - 0x5B09D4E0)
class UPInv_AssetManager : public UAssetManager
{
public:
	unsigned char                                      UnknownData00[0xB0220];                                   // 0x5B09D4E0(0xB0220) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PInv_AssetManager");
		return ptr;
	}

};


// Class PlatformInventoryItem.PlatformInventoryItem
// 0x5B14EB80
class UPlatformInventoryItem : public UPrimaryDataAsset
{
public:
	unsigned char                                      UnknownData00[0x5B14EB80];                                // 0x0000(0x5B14EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PlatformInventoryItem");
		return ptr;
	}


	void ShouldDisplayToUser();
	void SetFriendlySearchName();
	void SetCollectionContainer();
	void GetTextureAsync();
	void GetSoftItemIcon();
	void GetSoftIconByName();
	void GetItemNameAsString();
	void GetItemName();
	void GetItemId();
	void GetItemDescriptionAsString();
	void GetItemDescription();
	void GetItemByFriendlyName();
	void GetCollectionContainer();
};


// Class PlatformInventoryItem.PlatformStoreAsset
// 0xFFFFFFFFFFFFFE80 (0x5B14EA00 - 0x5B14EB80)
class UPlatformStoreAsset : public UPlatformInventoryItem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlatformInventoryItem.PlatformStoreAsset");
		return ptr;
	}


	void GetLootId();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
