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

// Enum CoreUObject.EInterpCurveMode
enum class EInterpCurveMode : uint8_t
{
	CIM_Linear                     = 0,
	CIM_CurveAuto                  = 1,
	CIM_Constant                   = 2,
	CIM_CurveUser                  = 3,
	CIM_CurveBreak                 = 4,
	CIM_CurveAutoClamped           = 5,
	CIM_MAX                        = 6
};


// Enum CoreUObject.ERangeBoundTypes
enum class ERangeBoundTypes : uint8_t
{
	ERangeBoundTypes__Exclusive    = 0,
	ERangeBoundTypes__Inclusive    = 1,
	ERangeBoundTypes__Open         = 2,
	ERangeBoundTypes__ERangeBoundTypes_MAX = 3
};


// Enum CoreUObject.ELocalizedTextSourceCategory
enum class ELocalizedTextSourceCategory : uint8_t
{
	ELocalizedTextSourceCategory__Game = 0,
	ELocalizedTextSourceCategory__Engine = 1,
	ELocalizedTextSourceCategory__Editor = 2,
	ELocalizedTextSourceCategory__ELocalizedTextSourceCategory_MAX = 3
};


// Enum CoreUObject.EAutomationEventType
enum class EAutomationEventType : uint8_t
{
	EAutomationEventType__Info     = 0,
	EAutomationEventType__Warning  = 1,
	EAutomationEventType__Error    = 2,
	EAutomationEventType__EAutomationEventType_MAX = 3
};


// Enum CoreUObject.EMouseCursor
enum class EMouseCursor : uint8_t
{
	EMouseCursor__None             = 0,
	EMouseCursor__Default          = 1,
	EMouseCursor__TextEditBeam     = 2,
	EMouseCursor__ResizeLeftRight  = 3,
	EMouseCursor__ResizeUpDown     = 4,
	EMouseCursor__ResizeSouthEast  = 5,
	EMouseCursor__ResizeSouthWest  = 6,
	EMouseCursor__CardinalCross    = 7,
	EMouseCursor__Crosshairs       = 8,
	EMouseCursor__Hand             = 9,
	EMouseCursor__GrabHand         = 10,
	EMouseCursor__GrabHandClosed   = 11,
	EMouseCursor__SlashedCircle    = 12,
	EMouseCursor__EyeDropper       = 13,
	EMouseCursor__EMouseCursor_MAX = 14
};


// Enum CoreUObject.ELifetimeCondition
enum class ELifetimeCondition : uint8_t
{
	COND_None                      = 0,
	COND_InitialOnly               = 1,
	COND_OwnerOnly                 = 2,
	COND_SkipOwner                 = 3,
	COND_SimulatedOnly             = 4,
	COND_AutonomousOnly            = 5,
	COND_SimulatedOrPhysics        = 6,
	COND_InitialOrOwner            = 7,
	COND_Custom                    = 8,
	COND_ReplayOrOwner             = 9,
	COND_ReplayOnly                = 10,
	COND_SimulatedOnlyNoReplay     = 11,
	COND_SimulatedOrPhysicsNoReplay = 12,
	COND_SkipReplay                = 13,
	COND_Never                     = 14,
	COND_Max                       = 15
};


// Enum CoreUObject.EDataValidationResult
enum class EDataValidationResult : uint8_t
{
	EDataValidationResult__Invalid = 0,
	EDataValidationResult__Valid   = 1,
	EDataValidationResult__NotValidated = 2,
	EDataValidationResult__EDataValidationResult_MAX = 3
};


// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class EPropertyAccessChangeNotifyMode : uint8_t
{
	EPropertyAccessChangeNotifyMode__Default = 0,
	EPropertyAccessChangeNotifyMode__Never = 1,
	EPropertyAccessChangeNotifyMode__Always = 2,
	EPropertyAccessChangeNotifyMode__EPropertyAccessChangeNotifyMode_MAX = 3
};


// Enum CoreUObject.EUnit
enum class EUnit : uint8_t
{
	EUnit__Micrometers             = 0,
	EUnit__Millimeters             = 1,
	EUnit__Centimeters             = 2,
	EUnit__Meters                  = 3,
	EUnit__Kilometers              = 4,
	EUnit__Inches                  = 5,
	EUnit__Feet                    = 6,
	EUnit__Yards                   = 7,
	EUnit__Miles                   = 8,
	EUnit__Lightyears              = 9,
	EUnit__Degrees                 = 10,
	EUnit__Radians                 = 11,
	EUnit__MetersPerSecond         = 12,
	EUnit__KilometersPerHour       = 13,
	EUnit__MilesPerHour            = 14,
	EUnit__Celsius                 = 15,
	EUnit__Farenheit               = 16,
	EUnit__Kelvin                  = 17,
	EUnit__Micrograms              = 18,
	EUnit__Milligrams              = 19,
	EUnit__Grams                   = 20,
	EUnit__Kilograms               = 21,
	EUnit__MetricTons              = 22,
	EUnit__Ounces                  = 23,
	EUnit__Pounds                  = 24,
	EUnit__Stones                  = 25,
	EUnit__Newtons                 = 26,
	EUnit__PoundsForce             = 27,
	EUnit__KilogramsForce          = 28,
	EUnit__Hertz                   = 29,
	EUnit__Kilohertz               = 30,
	EUnit__Megahertz               = 31,
	EUnit__Gigahertz               = 32,
	EUnit__RevolutionsPerMinute    = 33,
	EUnit__Bytes                   = 34,
	EUnit__Kilobytes               = 35,
	EUnit__Megabytes               = 36,
	EUnit__Gigabytes               = 37,
	EUnit__Terabytes               = 38,
	EUnit__Lumens                  = 39,
	EUnit__Milliseconds            = 40,
	EUnit__Seconds                 = 41,
	EUnit__Minutes                 = 42,
	EUnit__Hours                   = 43,
	EUnit__Days                    = 44,
	EUnit__Months                  = 45,
	EUnit__Years                   = 46,
	EUnit__Multiplier              = 47,
	EUnit__Percentage              = 48,
	EUnit__Unspecified             = 49,
	EUnit__EUnit_MAX               = 50
};


// Enum CoreUObject.EPixelFormat
enum class EPixelFormat : uint8_t
{
	PF_Unknown                     = 0,
	PF_A32B32G32R32F               = 1,
	PF_B8G8R8A8                    = 2,
	PF_G8                          = 3,
	PF_G16                         = 4,
	PF_DXT1                        = 5,
	PF_DXT3                        = 6,
	PF_DXT5                        = 7,
	PF_UYVY                        = 8,
	PF_FloatRGB                    = 9,
	PF_FloatRGBA                   = 10,
	PF_DepthStencil                = 11,
	PF_ShadowDepth                 = 12,
	PF_R32_FLOAT                   = 13,
	PF_G16R16                      = 14,
	PF_G16R16F                     = 15,
	PF_G16R16F_FILTER              = 16,
	PF_G32R32F                     = 17,
	PF_A2B10G10R10                 = 18,
	PF_A16B16G16R16                = 19,
	PF_D24                         = 20,
	PF_R16F                        = 21,
	PF_R16F_FILTER                 = 22,
	PF_BC5                         = 23,
	PF_V8U8                        = 24,
	PF_A1                          = 25,
	PF_FloatR11G11B10              = 26,
	PF_A8                          = 27,
	PF_R32_UINT                    = 28,
	PF_R32_SINT                    = 29,
	PF_PVRTC2                      = 30,
	PF_PVRTC4                      = 31,
	PF_R16_UINT                    = 32,
	PF_R16_SINT                    = 33,
	PF_R16G16B16A16_UINT           = 34,
	PF_R16G16B16A16_SINT           = 35,
	PF_R5G6B5_UNORM                = 36,
	PF_R8G8B8A8                    = 37,
	PF_A8R8G8B8                    = 38,
	PF_BC4                         = 39,
	PF_R8G8                        = 40,
	PF_ATC_RGB                     = 41,
	PF_ATC_RGBA_E                  = 42,
	PF_ATC_RGBA_I                  = 43,
	PF_X24_G8                      = 44,
	PF_ETC1                        = 45,
	PF_ETC2_RGB                    = 46,
	PF_ETC2_RGBA                   = 47,
	PF_R32G32B32A32_UINT           = 48,
	PF_R16G16_UINT                 = 49,
	PF_ASTC_4x4                    = 50,
	PF_ASTC_6x6                    = 51,
	PF_ASTC_8x8                    = 52,
	PF_ASTC_10x10                  = 53,
	PF_ASTC_12x12                  = 54,
	PF_BC6H                        = 55,
	PF_BC7                         = 56,
	PF_R8_UINT                     = 57,
	PF_L8                          = 58,
	PF_XGXR8                       = 59,
	PF_R8G8B8A8_UINT               = 60,
	PF_R8G8B8A8_SNORM              = 61,
	PF_R16G16B16A16_UNORM          = 62,
	PF_R16G16B16A16_SNORM          = 63,
	PF_PLATFORM_HDR                = 64,
	PF_PLATFORM_HDR01              = 65,
	PF_PLATFORM_HDR02              = 66,
	PF_NV12                        = 67,
	PF_R32G32_UINT                 = 68,
	PF_ETC2_R11_EAC                = 69,
	PF_ETC2_RG11_EAC               = 70,
	PF_MAX                         = 71
};


// Enum CoreUObject.EAxis
enum class EAxis : uint8_t
{
	EAxis__None                    = 0,
	EAxis__X                       = 1,
	EAxis__Y                       = 2,
	EAxis__Z                       = 3,
	EAxis__EAxis_MAX               = 4
};


// Enum CoreUObject.ELogTimes
enum class ELogTimes : uint8_t
{
	ELogTimes__None                = 0,
	ELogTimes__UTC                 = 1,
	ELogTimes__SinceGStartTime     = 2,
	ELogTimes__Local               = 3,
	ELogTimes__ELogTimes_MAX       = 4
};


// Enum CoreUObject.ESearchDir
enum class ESearchDir : uint8_t
{
	ESearchDir__FromStart          = 0,
	ESearchDir__FromEnd            = 1,
	ESearchDir__ESearchDir_MAX     = 2
};


// Enum CoreUObject.ESearchCase
enum class ESearchCase : uint8_t
{
	ESearchCase__CaseSensitive     = 0,
	ESearchCase__IgnoreCase        = 1,
	ESearchCase__ESearchCase_MAX   = 2
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct CoreUObject.JoinabilitySettings
// 0x6199E200
struct FJoinabilitySettings
{
	unsigned char                                      UnknownData00[0x6199E200];                                // 0x0000(0x6199E200) MISSED OFFSET
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// 0x0000
struct FUniqueNetIdWrapper
{

};

// ScriptStruct CoreUObject.Guid
// 0x6199E000
struct FGuid
{
	unsigned char                                      UnknownData00[0x6199E000];                                // 0x0000(0x6199E000) MISSED OFFSET
};

// ScriptStruct CoreUObject.Vector
// 0x6199DE80
struct FVector
{
	unsigned char                                      UnknownData00[0x6199DE80];                                // 0x0000(0x6199DE80) MISSED OFFSET
};

// ScriptStruct CoreUObject.Vector4
// 0x6199DC80
struct alignas(16) FVector4
{
	unsigned char                                      UnknownData00[0x6199DC80];                                // 0x0000(0x6199DC80) MISSED OFFSET
};

// ScriptStruct CoreUObject.Vector2D
// 0x6199DB80
struct FVector2D
{
	unsigned char                                      UnknownData00[0x6199DB80];                                // 0x0000(0x6199DB80) MISSED OFFSET

	inline FVector2D()
		: X(0), Y(0)
	{ }

	inline FVector2D(float x, float y)
		: X(x),
		  Y(y)
	{ }

};

// ScriptStruct CoreUObject.TwoVectors
// 0x6199DA80
struct FTwoVectors
{
	unsigned char                                      UnknownData00[0x6199DA80];                                // 0x0000(0x6199DA80) MISSED OFFSET
};

// ScriptStruct CoreUObject.Plane
// 0xFFFFFFFFFFFFFB80 (0x6199DA00 - 0x6199DE80)
struct alignas(16) FPlane : public FVector
{

};

// ScriptStruct CoreUObject.Rotator
// 0x6199D880
struct FRotator
{
	unsigned char                                      UnknownData00[0x6199D880];                                // 0x0000(0x6199D880) MISSED OFFSET
};

// ScriptStruct CoreUObject.Quat
// 0x6199F780
struct alignas(16) FQuat
{
	unsigned char                                      UnknownData00[0x6199F780];                                // 0x0000(0x6199F780) MISSED OFFSET
};

// ScriptStruct CoreUObject.PackedNormal
// 0x6199F580
struct FPackedNormal
{
	unsigned char                                      UnknownData00[0x6199F580];                                // 0x0000(0x6199F580) MISSED OFFSET
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// 0x6199F500
struct FPackedRGB10A2N
{
	unsigned char                                      UnknownData00[0x6199F500];                                // 0x0000(0x6199F500) MISSED OFFSET
};

// ScriptStruct CoreUObject.PackedRGBA16N
// 0x6199F400
struct FPackedRGBA16N
{
	unsigned char                                      UnknownData00[0x6199F400];                                // 0x0000(0x6199F400) MISSED OFFSET
};

// ScriptStruct CoreUObject.IntPoint
// 0x6199F300
struct FIntPoint
{
	unsigned char                                      UnknownData00[0x6199F300];                                // 0x0000(0x6199F300) MISSED OFFSET
};

// ScriptStruct CoreUObject.IntVector
// 0x6199F180
struct FIntVector
{
	unsigned char                                      UnknownData00[0x6199F180];                                // 0x0000(0x6199F180) MISSED OFFSET
};

// ScriptStruct CoreUObject.Color
// 0x6199EF80
struct FColor
{
	unsigned char                                      UnknownData00[0x6199EF80];                                // 0x0000(0x6199EF80) MISSED OFFSET
};

// ScriptStruct CoreUObject.LinearColor
// 0x6199ED00
struct FLinearColor
{
	unsigned char                                      UnknownData00[0x6199ED00];                                // 0x0000(0x6199ED00) MISSED OFFSET

	inline FLinearColor()
		: R(0), G(0), B(0), A(0)
	{ }

	inline FLinearColor(float r, float g, float b, float a)
		: R(r),
		  G(g),
		  B(b),
		  A(a)
	{ }

};

// ScriptStruct CoreUObject.Box
// 0x6199EB80
struct FBox
{
	unsigned char                                      UnknownData00[0x6199EB80];                                // 0x0000(0x6199EB80) MISSED OFFSET
};

// ScriptStruct CoreUObject.Box2D
// 0x6199EA00
struct FBox2D
{
	unsigned char                                      UnknownData00[0x6199EA00];                                // 0x0000(0x6199EA00) MISSED OFFSET
};

// ScriptStruct CoreUObject.BoxSphereBounds
// 0x6199E880
struct FBoxSphereBounds
{
	unsigned char                                      UnknownData00[0x6199E880];                                // 0x0000(0x6199E880) MISSED OFFSET
};

// ScriptStruct CoreUObject.OrientedBox
// 0x6199FD80
struct FOrientedBox
{
	unsigned char                                      UnknownData00[0x6199FD80];                                // 0x0000(0x6199FD80) MISSED OFFSET
};

// ScriptStruct CoreUObject.Matrix
// 0x6199FB80
struct FMatrix
{
	unsigned char                                      UnknownData00[0x6199FB80];                                // 0x0000(0x6199FB80) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// 0x6199F900
struct FInterpCurvePointFloat
{
	unsigned char                                      UnknownData00[0x6199F900];                                // 0x0000(0x6199F900) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveFloat
// 0x618DC900
struct FInterpCurveFloat
{
	unsigned char                                      UnknownData00[0x618DC900];                                // 0x0000(0x618DC900) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// 0x50BA0E00
struct FInterpCurvePointVector2D
{
	unsigned char                                      UnknownData00[0x50BA0E00];                                // 0x0000(0x50BA0E00) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// 0x618DC860
struct FInterpCurveVector2D
{
	unsigned char                                      UnknownData00[0x618DC860];                                // 0x0000(0x618DC860) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// 0x50BA0A00
struct FInterpCurvePointVector
{
	unsigned char                                      UnknownData00[0x50BA0A00];                                // 0x0000(0x50BA0A00) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveVector
// 0x618DC7C0
struct FInterpCurveVector
{
	unsigned char                                      UnknownData00[0x618DC7C0];                                // 0x0000(0x618DC7C0) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// 0x50BA0600
struct FInterpCurvePointQuat
{
	unsigned char                                      UnknownData00[0x50BA0600];                                // 0x0000(0x50BA0600) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveQuat
// 0x618DC720
struct FInterpCurveQuat
{
	unsigned char                                      UnknownData00[0x618DC720];                                // 0x0000(0x618DC720) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// 0x50BA0200
struct FInterpCurvePointTwoVectors
{
	unsigned char                                      UnknownData00[0x50BA0200];                                // 0x0000(0x50BA0200) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// 0x618DC680
struct FInterpCurveTwoVectors
{
	unsigned char                                      UnknownData00[0x618DC680];                                // 0x0000(0x618DC680) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// 0x50BA1F00
struct FInterpCurvePointLinearColor
{
	unsigned char                                      UnknownData00[0x50BA1F00];                                // 0x0000(0x50BA1F00) MISSED OFFSET
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// 0x618DC5E0
struct FInterpCurveLinearColor
{
	unsigned char                                      UnknownData00[0x618DC5E0];                                // 0x0000(0x618DC5E0) MISSED OFFSET
};

// ScriptStruct CoreUObject.Transform
// 0x50BA1C00
struct alignas(16) FTransform
{
	unsigned char                                      UnknownData00[0x50BA1C00];                                // 0x0000(0x50BA1C00) MISSED OFFSET
};

// ScriptStruct CoreUObject.RandomStream
// 0x50BA1B00
struct FRandomStream
{
	unsigned char                                      UnknownData00[0x50BA1B00];                                // 0x0000(0x50BA1B00) MISSED OFFSET
};

// ScriptStruct CoreUObject.DateTime
// 0x0000
struct FDateTime
{

};

// ScriptStruct CoreUObject.FrameNumber
// 0x50BA1A80
struct FFrameNumber
{
	unsigned char                                      UnknownData00[0x50BA1A80];                                // 0x0000(0x50BA1A80) MISSED OFFSET
};

// ScriptStruct CoreUObject.FrameRate
// 0x50BA1980
struct FFrameRate
{
	unsigned char                                      UnknownData00[0x50BA1980];                                // 0x0000(0x50BA1980) MISSED OFFSET
};

// ScriptStruct CoreUObject.FrameTime
// 0x50BA1880
struct FFrameTime
{
	unsigned char                                      UnknownData00[0x50BA1880];                                // 0x0000(0x50BA1880) MISSED OFFSET
};

// ScriptStruct CoreUObject.QualifiedFrameTime
// 0x50BA1780
struct FQualifiedFrameTime
{
	unsigned char                                      UnknownData00[0x50BA1780];                                // 0x0000(0x50BA1780) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timecode
// 0x50BA1500
struct FTimecode
{
	unsigned char                                      UnknownData00[0x50BA1500];                                // 0x0000(0x50BA1500) MISSED OFFSET
};

// ScriptStruct CoreUObject.Timespan
// 0x0000
struct FTimespan
{

};

// ScriptStruct CoreUObject.SoftObjectPath
// 0x50BA1400
struct FSoftObjectPath
{
	unsigned char                                      UnknownData00[0x50BA1400];                                // 0x0000(0x50BA1400) MISSED OFFSET
};

// ScriptStruct CoreUObject.SoftClassPath
// 0xFFFFFFFFAF45EC00 (0x0000 - 0x50BA1400)
struct FSoftClassPath : public FSoftObjectPath
{

};

// ScriptStruct CoreUObject.PrimaryAssetType
// 0x50BA1380
struct FPrimaryAssetType
{
	unsigned char                                      UnknownData00[0x50BA1380];                                // 0x0000(0x50BA1380) MISSED OFFSET
};

// ScriptStruct CoreUObject.PrimaryAssetId
// 0x50BA1280
struct FPrimaryAssetId
{
	unsigned char                                      UnknownData00[0x50BA1280];                                // 0x0000(0x50BA1280) MISSED OFFSET
};

// ScriptStruct CoreUObject.FallbackStruct
// 0x0000
struct FFallbackStruct
{

};

// ScriptStruct CoreUObject.FloatRangeBound
// 0x50BA1200
struct FFloatRangeBound
{
	unsigned char                                      UnknownData00[0x50BA1200];                                // 0x0000(0x50BA1200) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatRange
// 0x50BA1100
struct FFloatRange
{
	unsigned char                                      UnknownData00[0x50BA1100];                                // 0x0000(0x50BA1100) MISSED OFFSET
};

// ScriptStruct CoreUObject.Int32RangeBound
// 0x50BA3100
struct FInt32RangeBound
{
	unsigned char                                      UnknownData00[0x50BA3100];                                // 0x0000(0x50BA3100) MISSED OFFSET
};

// ScriptStruct CoreUObject.Int32Range
// 0x50BA3000
struct FInt32Range
{
	unsigned char                                      UnknownData00[0x50BA3000];                                // 0x0000(0x50BA3000) MISSED OFFSET
};

// ScriptStruct CoreUObject.FloatInterval
// 0x50BA2F00
struct FFloatInterval
{
	unsigned char                                      UnknownData00[0x50BA2F00];                                // 0x0000(0x50BA2F00) MISSED OFFSET
};

// ScriptStruct CoreUObject.Int32Interval
// 0x50BA2E00
struct FInt32Interval
{
	unsigned char                                      UnknownData00[0x50BA2E00];                                // 0x0000(0x50BA2E00) MISSED OFFSET
};

// ScriptStruct CoreUObject.PolyglotTextData
// 0x618DC540
struct FPolyglotTextData
{
	unsigned char                                      UnknownData00[0x618DC540];                                // 0x0000(0x618DC540) MISSED OFFSET
};

// ScriptStruct CoreUObject.AutomationEvent
// 0x618DC4A0
struct FAutomationEvent
{
	unsigned char                                      UnknownData00[0x618DC4A0];                                // 0x0000(0x618DC4A0) MISSED OFFSET
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// 0x50BA2500
struct FAutomationExecutionEntry
{
	unsigned char                                      UnknownData00[0x50BA2500];                                // 0x0000(0x50BA2500) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
