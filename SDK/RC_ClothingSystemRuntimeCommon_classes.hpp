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

// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// 0x0000
class UClothConfigCommon : public UClothConfigBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothConfigCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// 0x0000
class UClothSharedConfigCommon : public UClothConfigCommon
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// 0x0000
class UClothingAssetCustomData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCustomData");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// 0x73C780 (0x5E3DF180 - 0x5DCA2A00)
class UClothingAssetCommon : public UClothingAssetBase
{
public:
	unsigned char                                      UnknownData00[0x73C780];                                  // 0x5DCA2A00(0x73C780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothingAssetCommon");
		return ptr;
	}

};


// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// 0x5E3DF000
class UClothLODDataCommon_Legacy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3DF000];                                // 0x0000(0x5E3DF000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
