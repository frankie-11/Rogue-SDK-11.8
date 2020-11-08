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

// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class EDatasmithAreaLightActorType : uint8_t
{
	EDatasmithAreaLightActorType__Point = 0,
	EDatasmithAreaLightActorType__Spot = 1,
	EDatasmithAreaLightActorType__Rect = 2,
	EDatasmithAreaLightActorType__EDatasmithAreaLightActorType_MAX = 3
};


// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class EDatasmithAreaLightActorShape : uint8_t
{
	EDatasmithAreaLightActorShape__Rectangle = 0,
	EDatasmithAreaLightActorShape__Disc = 1,
	EDatasmithAreaLightActorShape__Sphere = 2,
	EDatasmithAreaLightActorShape__Cylinder = 3,
	EDatasmithAreaLightActorShape__None = 4,
	EDatasmithAreaLightActorShape__EDatasmithAreaLightActorShape_MAX = 5
};


// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class EDatasmithCADStitchingTechnique : uint8_t
{
	EDatasmithCADStitchingTechnique__StitchingNone = 0,
	EDatasmithCADStitchingTechnique__StitchingHeal = 1,
	EDatasmithCADStitchingTechnique__StitchingSew = 2,
	EDatasmithCADStitchingTechnique__EDatasmithCADStitchingTechnique_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportHierarchy
enum class EDatasmithImportHierarchy : uint8_t
{
	EDatasmithImportHierarchy__UseMultipleActors = 0,
	EDatasmithImportHierarchy__UseSingleActor = 1,
	EDatasmithImportHierarchy__UseOneBlueprint = 2,
	EDatasmithImportHierarchy__EDatasmithImportHierarchy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportScene
enum class EDatasmithImportScene : uint8_t
{
	EDatasmithImportScene__NewLevel = 0,
	EDatasmithImportScene__CurrentLevel = 1,
	EDatasmithImportScene__AssetsOnly = 2,
	EDatasmithImportScene__EDatasmithImportScene_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class EDatasmithImportLightmapMax : uint8_t
{
	EDatasmithImportLightmapMax__LIGHTMAP = 0,
	EDatasmithImportLightmapMax__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMax__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMax__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMax__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMax__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMax__LIGHTMAP06 = 6,
	EDatasmithImportLightmapMax__LIGHTMAP_MAX = 7
};


// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class EDatasmithImportLightmapMin : uint8_t
{
	EDatasmithImportLightmapMin__LIGHTMAP = 0,
	EDatasmithImportLightmapMin__LIGHTMAP01 = 1,
	EDatasmithImportLightmapMin__LIGHTMAP02 = 2,
	EDatasmithImportLightmapMin__LIGHTMAP03 = 3,
	EDatasmithImportLightmapMin__LIGHTMAP04 = 4,
	EDatasmithImportLightmapMin__LIGHTMAP05 = 5,
	EDatasmithImportLightmapMin__LIGHTMAP_MAX = 6
};


// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class EDatasmithImportMaterialQuality : uint8_t
{
	EDatasmithImportMaterialQuality__UseNoFresnelCurves = 0,
	EDatasmithImportMaterialQuality__UseSimplifierFresnelCurves = 1,
	EDatasmithImportMaterialQuality__UseRealFresnelCurves = 2,
	EDatasmithImportMaterialQuality__EDatasmithImportMaterialQuality_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class EDatasmithImportActorPolicy : uint8_t
{
	EDatasmithImportActorPolicy__Update = 0,
	EDatasmithImportActorPolicy__Full = 1,
	EDatasmithImportActorPolicy__Ignore = 2,
	EDatasmithImportActorPolicy__EDatasmithImportActorPolicy_MAX = 3
};


// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class EDatasmithImportAssetConflictPolicy : uint8_t
{
	EDatasmithImportAssetConflictPolicy__Replace = 0,
	EDatasmithImportAssetConflictPolicy__Update = 1,
	EDatasmithImportAssetConflictPolicy__Use = 2,
	EDatasmithImportAssetConflictPolicy__Ignore = 3,
	EDatasmithImportAssetConflictPolicy__EDatasmithImportAssetConflictPolicy_MAX = 4
};


// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class EDatasmithImportSearchPackagePolicy : uint8_t
{
	EDatasmithImportSearchPackagePolicy__Current = 0,
	EDatasmithImportSearchPackagePolicy__All = 1,
	EDatasmithImportSearchPackagePolicy__EDatasmithImportSearchPackagePolicy_MAX = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// 0x5AF8DC80
struct FDatasmithCameraLookatTrackingSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF8DC80];                                // 0x0000(0x5AF8DC80) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// 0x5AF8F580
struct FDatasmithPostProcessSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF8F580];                                // 0x0000(0x5AF8F580) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// 0x5AF557E0
struct FDatasmithCameraFocusSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF557E0];                                // 0x0000(0x5AF557E0) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// 0x5AF8F400
struct FDatasmithCameraLensSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF8F400];                                // 0x0000(0x5AF8F400) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// 0x5AF8F300
struct FDatasmithCameraFilmbackSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF8F300];                                // 0x0000(0x5AF8F300) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// 0x5AF8F100
struct FDatasmithTessellationOptions
{
	unsigned char                                      UnknownData00[0x5AF8F100];                                // 0x0000(0x5AF8F100) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// 0x5AF55560
struct FDatasmithImportBaseOptions
{
	unsigned char                                      UnknownData00[0x5AF55560];                                // 0x0000(0x5AF55560) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// 0x5AF55600
struct FDatasmithStaticMeshImportOptions
{
	unsigned char                                      UnknownData00[0x5AF55600];                                // 0x0000(0x5AF55600) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// 0x5AF8ED80
struct FDatasmithAssetImportOptions
{
	unsigned char                                      UnknownData00[0x5AF8ED80];                                // 0x0000(0x5AF8ED80) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// 0x5AF8E980
struct FDatasmithReimportOptions
{
	unsigned char                                      UnknownData00[0x5AF8E980];                                // 0x0000(0x5AF8E980) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// 0x5AF76400
struct FDatasmithStaticParameterSetTemplate
{
	unsigned char                                      UnknownData00[0x5AF76400];                                // 0x0000(0x5AF76400) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// 0x5AF79400
struct FDatasmithMeshSectionInfoMapTemplate
{
	unsigned char                                      UnknownData00[0x5AF79400];                                // 0x0000(0x5AF79400) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// 0x5AF8FF80
struct FDatasmithMeshSectionInfoTemplate
{
	unsigned char                                      UnknownData00[0x5AF8FF80];                                // 0x0000(0x5AF8FF80) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// 0x5AF8FE80
struct FDatasmithStaticMaterialTemplate
{
	unsigned char                                      UnknownData00[0x5AF8FE80];                                // 0x0000(0x5AF8FE80) MISSED OFFSET
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// 0x5AF8F900
struct FDatasmithMeshBuildSettingsTemplate
{
	unsigned char                                      UnknownData00[0x5AF8F900];                                // 0x0000(0x5AF8F900) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
