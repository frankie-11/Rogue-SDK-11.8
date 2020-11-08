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

// Enum DataTableSkinsCommon.EMaterialSkinType
enum class EMaterialSkinType : uint8_t
{
	EMaterialSkinType__Material    = 0,
	EMaterialSkinType__InstanceDataMine = 1,
	EMaterialSkinType__FloatParam  = 2,
	EMaterialSkinType__VectorParam = 3,
	EMaterialSkinType__TextureParam = 4,
	EMaterialSkinType__EMaterialSkinType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DataTableSkinsCommon.DataTableInfo
// 0x5AEF7400
struct FDataTableInfo
{
	unsigned char                                      UnknownData00[0x5AEF7400];                                // 0x0000(0x5AEF7400) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.SoftAssetTableRow
// 0x5AEF8E00
struct FSoftAssetTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AEF8E00];                                // 0x0000(0x5AEF8E00) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.HardAssetTableRow
// 0x5AEF8700
struct FHardAssetTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5AEF8700];                                // 0x0000(0x5AEF8700) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.MaterialSkinInfo
// 0x5AEF8480
struct FMaterialSkinInfo
{
	unsigned char                                      UnknownData00[0x5AEF8480];                                // 0x0000(0x5AEF8480) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.CachedRowsEntry
// 0x5AEFA480
struct FCachedRowsEntry
{
	unsigned char                                      UnknownData00[0x5AEFA480];                                // 0x0000(0x5AEFA480) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.DynamicSkinTableMapEntry
// 0x5AEFA400
struct FDynamicSkinTableMapEntry
{
	unsigned char                                      UnknownData00[0x5AEFA400];                                // 0x0000(0x5AEFA400) MISSED OFFSET
};

// ScriptStruct DataTableSkinsCommon.SkinUpdateTickFunction
// 0xFFFFFFFFAF450500 (0x0000 - 0x50BAFB00)
struct FSkinUpdateTickFunction : public FTickFunction
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
