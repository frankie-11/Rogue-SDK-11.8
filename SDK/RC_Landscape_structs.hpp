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

// Enum Landscape.ELandscapeBlendMode
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend             = 0,
	LSBM_AlphaBlend                = 1,
	LSBM_MAX                       = 2
};


// Enum Landscape.ELandscapeSetupErrors
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                       = 0,
	LSE_NoLandscapeInfo            = 1,
	LSE_CollsionXY                 = 2,
	LSE_NoLayerInfo                = 3,
	LSE_MAX                        = 4
};


// Enum Landscape.ELandscapeClearMode
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                = 0,
	Clear_Heightmap                = 1,
	Clear_All                      = 2,
	Clear_MAX                      = 3
};


// Enum Landscape.ELandscapeGizmoType
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                       = 0,
	LGT_Height                     = 1,
	LGT_Weight                     = 2,
	LGT_MAX                        = 3
};


// Enum Landscape.EGrassScaling
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform         = 0,
	EGrassScaling__Free            = 1,
	EGrassScaling__LockXY          = 2,
	EGrassScaling__EGrassScaling_MAX = 3
};


// Enum Landscape.ESplineModulationColorMask
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red = 0,
	ESplineModulationColorMask__Green = 1,
	ESplineModulationColorMask__Blue = 2,
	ESplineModulationColorMask__Alpha = 3,
	ESplineModulationColorMask__ESplineModulationColorMask_MAX = 4
};


// Enum Landscape.ELandscapeLODFalloff
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear   = 0,
	ELandscapeLODFalloff__SquareRoot = 1,
	ELandscapeLODFalloff__ELandscapeLODFalloff_MAX = 2
};


// Enum Landscape.ELandscapeLayerDisplayMode
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default = 0,
	ELandscapeLayerDisplayMode__Alphabetical = 1,
	ELandscapeLayerDisplayMode__UserSpecific = 2,
	ELandscapeLayerDisplayMode__ELandscapeLayerDisplayMode_MAX = 3
};


// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly = 2,
	ELandscapeLayerPaintingRestriction__UseComponentWhitelist = 3,
	ELandscapeLayerPaintingRestriction__ELandscapeLayerPaintingRestriction_MAX = 4
};


// Enum Landscape.ELandscapeImportAlphamapType
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive = 0,
	ELandscapeImportAlphamapType__Layered = 1,
	ELandscapeImportAlphamapType__ELandscapeImportAlphamapType_MAX = 2
};


// Enum Landscape.LandscapeSplineMeshOrientation
enum class ELandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                       = 0,
	LSMO_YUp                       = 1,
	LSMO_MAX                       = 2
};


// Enum Landscape.ELandscapeLayerBlendType
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                 = 0,
	LB_AlphaBlend                  = 1,
	LB_HeightBlend                 = 2,
	LB_MAX                         = 3
};


// Enum Landscape.ELandscapeCustomizedCoordType
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                      = 0,
	LCCT_CustomUV0                 = 1,
	LCCT_CustomUV1                 = 2,
	LCCT_CustomUV2                 = 3,
	LCCT_WeightMapUV               = 4,
	LCCT_MAX                       = 5
};


// Enum Landscape.ETerrainCoordMappingType
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                      = 0,
	TCMT_XY                        = 1,
	TCMT_XZ                        = 2,
	TCMT_YZ                        = 3,
	TCMT_MAX                       = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Landscape.LandscapeLayer
// 0x5AFFCD80
struct FLandscapeLayer
{
	unsigned char                                      UnknownData00[0x5AFFCD80];                                // 0x0000(0x5AFFCD80) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeLayerBrush
// 0x0000
struct FLandscapeLayerBrush
{

};

// ScriptStruct Landscape.LandscapeLayerComponentData
// 0x5AFFCA00
struct FLandscapeLayerComponentData
{
	unsigned char                                      UnknownData00[0x5AFFCA00];                                // 0x0000(0x5AFFCA00) MISSED OFFSET
};

// ScriptStruct Landscape.WeightmapData
// 0x5AFE3300
struct FWeightmapData
{
	unsigned char                                      UnknownData00[0x5AFE3300];                                // 0x0000(0x5AFE3300) MISSED OFFSET
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// 0x5AFFCB00
struct FWeightmapLayerAllocationInfo
{
	unsigned char                                      UnknownData00[0x5AFFCB00];                                // 0x0000(0x5AFFCB00) MISSED OFFSET
};

// ScriptStruct Landscape.HeightmapData
// 0x5AFFC980
struct FHeightmapData
{
	unsigned char                                      UnknownData00[0x5AFFC980];                                // 0x0000(0x5AFFC980) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// 0x5AFFC880
struct FLandscapeComponentMaterialOverride
{
	unsigned char                                      UnknownData00[0x5AFFC880];                                // 0x0000(0x5AFFC880) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// 0x5AFFE500
struct FLandscapeEditToolRenderData
{
	unsigned char                                      UnknownData00[0x5AFFE500];                                // 0x0000(0x5AFFE500) MISSED OFFSET
};

// ScriptStruct Landscape.GizmoSelectData
// 0x0000
struct FGizmoSelectData
{

};

// ScriptStruct Landscape.GrassVariety
// 0x5AFFDC00
struct FGrassVariety
{
	unsigned char                                      UnknownData00[0x5AFFDC00];                                // 0x0000(0x5AFFDC00) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// 0x5AFFDB00
struct FLandscapeInfoLayerSettings
{
	unsigned char                                      UnknownData00[0x5AFFDB00];                                // 0x0000(0x5AFFDB00) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// 0x5AFFDA00
struct FLandscapeMaterialTextureStreamingInfo
{
	unsigned char                                      UnknownData00[0x5AFFDA00];                                // 0x0000(0x5AFFDA00) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// 0x5AFFD900
struct FLandscapeProxyMaterialOverride
{
	unsigned char                                      UnknownData00[0x5AFFD900];                                // 0x0000(0x5AFFD900) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// 0x0000
struct FLandscapeImportLayerInfo
{

};

// ScriptStruct Landscape.LandscapeLayerStruct
// 0x5AFFD880
struct FLandscapeLayerStruct
{
	unsigned char                                      UnknownData00[0x5AFFD880];                                // 0x0000(0x5AFFD880) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// 0x0000
struct FLandscapeEditorLayerSettings
{

};

// ScriptStruct Landscape.LandscapeSplineConnection
// 0x5AFFD780
struct FLandscapeSplineConnection
{
	unsigned char                                      UnknownData00[0x5AFFD780];                                // 0x0000(0x5AFFD780) MISSED OFFSET
};

// ScriptStruct Landscape.ForeignWorldSplineData
// 0x0000
struct FForeignWorldSplineData
{

};

// ScriptStruct Landscape.ForeignSplineSegmentData
// 0x0000
struct FForeignSplineSegmentData
{

};

// ScriptStruct Landscape.ForeignControlPointData
// 0x0000
struct FForeignControlPointData
{

};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// 0x5AFFF400
struct FLandscapeSplineMeshEntry
{
	unsigned char                                      UnknownData00[0x5AFFF400];                                // 0x0000(0x5AFFF400) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// 0x5AFFF280
struct FLandscapeSplineSegmentConnection
{
	unsigned char                                      UnknownData00[0x5AFFF280];                                // 0x0000(0x5AFFF280) MISSED OFFSET
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// 0x5AFFED80
struct FLandscapeSplineInterpPoint
{
	unsigned char                                      UnknownData00[0x5AFFED80];                                // 0x0000(0x5AFFED80) MISSED OFFSET
};

// ScriptStruct Landscape.GrassInput
// 0x5AFFEC00
struct FGrassInput
{
	unsigned char                                      UnknownData00[0x5AFFEC00];                                // 0x0000(0x5AFFEC00) MISSED OFFSET
};

// ScriptStruct Landscape.LayerBlendInput
// 0x5AFFE880
struct FLayerBlendInput
{
	unsigned char                                      UnknownData00[0x5AFFE880];                                // 0x0000(0x5AFFE880) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
