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

// Enum UMG.ESlateAccessibleBehavior
enum class ESlateAccessibleBehavior : uint8_t
{
	ESlateAccessibleBehavior__NotAccessible = 0,
	ESlateAccessibleBehavior__Auto = 1,
	ESlateAccessibleBehavior__Summary = 2,
	ESlateAccessibleBehavior__Custom = 3,
	ESlateAccessibleBehavior__ToolTip = 4,
	ESlateAccessibleBehavior__ESlateAccessibleBehavior_MAX = 5
};


// Enum UMG.ESlateVisibility
enum class ESlateVisibility : uint8_t
{
	ESlateVisibility__Visible      = 0,
	ESlateVisibility__Collapsed    = 1,
	ESlateVisibility__Hidden       = 2,
	ESlateVisibility__HitTestInvisible = 3,
	ESlateVisibility__SelfHitTestInvisible = 4,
	ESlateVisibility__ESlateVisibility_MAX = 5
};


// Enum UMG.EVirtualKeyboardType
enum class EVirtualKeyboardType : uint8_t
{
	EVirtualKeyboardType__Default  = 0,
	EVirtualKeyboardType__Number   = 1,
	EVirtualKeyboardType__Web      = 2,
	EVirtualKeyboardType__Email    = 3,
	EVirtualKeyboardType__Password = 4,
	EVirtualKeyboardType__AlphaNumeric = 5,
	EVirtualKeyboardType__EVirtualKeyboardType_MAX = 6
};


// Enum UMG.EWidgetAnimationEvent
enum class EWidgetAnimationEvent : uint8_t
{
	EWidgetAnimationEvent__Started = 0,
	EWidgetAnimationEvent__Finished = 1,
	EWidgetAnimationEvent__EWidgetAnimationEvent_MAX = 2
};


// Enum UMG.EUMGSequencePlayMode
enum class EUMGSequencePlayMode : uint8_t
{
	EUMGSequencePlayMode__Forward  = 0,
	EUMGSequencePlayMode__Reverse  = 1,
	EUMGSequencePlayMode__PingPong = 2,
	EUMGSequencePlayMode__EUMGSequencePlayMode_MAX = 3
};


// Enum UMG.EWidgetTickFrequency
enum class EWidgetTickFrequency : uint8_t
{
	EWidgetTickFrequency__Never    = 0,
	EWidgetTickFrequency__Auto     = 1,
	EWidgetTickFrequency__EWidgetTickFrequency_MAX = 2
};


// Enum UMG.EDragPivot
enum class EDragPivot : uint8_t
{
	EDragPivot__MouseDown          = 0,
	EDragPivot__TopLeft            = 1,
	EDragPivot__TopCenter          = 2,
	EDragPivot__TopRight           = 3,
	EDragPivot__CenterLeft         = 4,
	EDragPivot__CenterCenter       = 5,
	EDragPivot__CenterRight        = 6,
	EDragPivot__BottomLeft         = 7,
	EDragPivot__BottomCenter       = 8,
	EDragPivot__BottomRight        = 9,
	EDragPivot__EDragPivot_MAX     = 10
};


// Enum UMG.EDynamicBoxType
enum class EDynamicBoxType : uint8_t
{
	EDynamicBoxType__Horizontal    = 0,
	EDynamicBoxType__Vertical      = 1,
	EDynamicBoxType__Wrap          = 2,
	EDynamicBoxType__Overlay       = 3,
	EDynamicBoxType__EDynamicBoxType_MAX = 4
};


// Enum UMG.ESlateSizeRule
enum class ESlateSizeRule : uint8_t
{
	ESlateSizeRule__Automatic      = 0,
	ESlateSizeRule__Fill           = 1,
	ESlateSizeRule__ESlateSizeRule_MAX = 2
};


// Enum UMG.EWidgetDesignFlags
enum class EWidgetDesignFlags : uint8_t
{
	EWidgetDesignFlags__None       = 0,
	EWidgetDesignFlags__Designing  = 1,
	EWidgetDesignFlags__ShowOutline = 2,
	EWidgetDesignFlags__ExecutePreConstruct = 3,
	EWidgetDesignFlags__EWidgetDesignFlags_MAX = 4
};


// Enum UMG.EBindingKind
enum class EBindingKind : uint8_t
{
	EBindingKind__Function         = 0,
	EBindingKind__Property         = 1,
	EBindingKind__EBindingKind_MAX = 2
};


// Enum UMG.EWindowVisibility
enum class EWindowVisibility : uint8_t
{
	EWindowVisibility__Visible     = 0,
	EWindowVisibility__SelfHitTestInvisible = 1,
	EWindowVisibility__EWindowVisibility_MAX = 2
};


// Enum UMG.EWidgetGeometryMode
enum class EWidgetGeometryMode : uint8_t
{
	EWidgetGeometryMode__Plane     = 0,
	EWidgetGeometryMode__Cylinder  = 1,
	EWidgetGeometryMode__EWidgetGeometryMode_MAX = 2
};


// Enum UMG.EWidgetBlendMode
enum class EWidgetBlendMode : uint8_t
{
	EWidgetBlendMode__Opaque       = 0,
	EWidgetBlendMode__Masked       = 1,
	EWidgetBlendMode__Transparent  = 2,
	EWidgetBlendMode__EWidgetBlendMode_MAX = 3
};


// Enum UMG.EWidgetTimingPolicy
enum class EWidgetTimingPolicy : uint8_t
{
	EWidgetTimingPolicy__RealTime  = 0,
	EWidgetTimingPolicy__GameTime  = 1,
	EWidgetTimingPolicy__EWidgetTimingPolicy_MAX = 2
};


// Enum UMG.EWidgetSpace
enum class EWidgetSpace : uint8_t
{
	EWidgetSpace__World            = 0,
	EWidgetSpace__Screen           = 1,
	EWidgetSpace__EWidgetSpace_MAX = 2
};


// Enum UMG.EWidgetInteractionSource
enum class EWidgetInteractionSource : uint8_t
{
	EWidgetInteractionSource__World = 0,
	EWidgetInteractionSource__Mouse = 1,
	EWidgetInteractionSource__CenterScreen = 2,
	EWidgetInteractionSource__Custom = 3,
	EWidgetInteractionSource__EWidgetInteractionSource_MAX = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UMG.EventReply
// 0x0000
struct FEventReply
{

};

// ScriptStruct UMG.WidgetTransform
// 0x5AA86F00
struct FWidgetTransform
{
	unsigned char                                      UnknownData00[0x5AA86F00];                                // 0x0000(0x5AA86F00) MISSED OFFSET
};

// ScriptStruct UMG.PaintContext
// 0x0000
struct FPaintContext
{

};

// ScriptStruct UMG.ShapedTextOptions
// 0x5AA8EF80
struct FShapedTextOptions
{
	unsigned char                                      UnknownData00[0x5AA8EF80];                                // 0x0000(0x5AA8EF80) MISSED OFFSET
};

// ScriptStruct UMG.AnimationEventBinding
// 0x5ABF0C80
struct FAnimationEventBinding
{
	unsigned char                                      UnknownData00[0x5ABF0C80];                                // 0x0000(0x5ABF0C80) MISSED OFFSET
};

// ScriptStruct UMG.NamedSlotBinding
// 0x5ABF0600
struct FNamedSlotBinding
{
	unsigned char                                      UnknownData00[0x5ABF0600];                                // 0x0000(0x5ABF0600) MISSED OFFSET
};

// ScriptStruct UMG.AnchorData
// 0x5B028500
struct FAnchorData
{
	unsigned char                                      UnknownData00[0x5B028500];                                // 0x0000(0x5B028500) MISSED OFFSET
};

// ScriptStruct UMG.DynamicPropertyPath
// 0xFFFFFFFFA5017E40 (0x0000 - 0x5AFE81C0)
struct FDynamicPropertyPath : public FCachedPropertyPath
{

};

// ScriptStruct UMG.MovieScene2DTransformMask
// 0x5B028480
struct FMovieScene2DTransformMask
{
	unsigned char                                      UnknownData00[0x5B028480];                                // 0x0000(0x5B028480) MISSED OFFSET
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// 0x12AA80 (0x5B02A280 - 0x5AEFF800)
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x12AA80];                                  // 0x5AEFF800(0x12AA80) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// 0x12A800 (0x5B02A000 - 0x5AEFF800)
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate
{
	unsigned char                                      UnknownData00[0x12A800];                                  // 0x5AEFF800(0x12A800) MISSED OFFSET
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// 0xFFFFFFFFFFFFFBA0 (0x5AFE7FE0 - 0x5AFE8440)
struct FMovieSceneWidgetMaterialSectionTemplate : public FMovieSceneParameterSectionTemplate
{

};

// ScriptStruct UMG.RichTextStyleRow
// 0x5B029F00
struct FRichTextStyleRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5B029F00];                                // 0x0000(0x5B029F00) MISSED OFFSET
};

// ScriptStruct UMG.RichImageRow
// 0x5B029E80
struct FRichImageRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5B029E80];                                // 0x0000(0x5B029E80) MISSED OFFSET
};

// ScriptStruct UMG.SlateMeshVertex
// 0x5B029A80
struct FSlateMeshVertex
{
	unsigned char                                      UnknownData00[0x5B029A80];                                // 0x0000(0x5B029A80) MISSED OFFSET
};

// ScriptStruct UMG.SlateChildSize
// 0x5B029980
struct FSlateChildSize
{
	unsigned char                                      UnknownData00[0x5B029980];                                // 0x0000(0x5B029980) MISSED OFFSET
};

// ScriptStruct UMG.UserWidgetPool
// 0x5AFE7EA0
struct FUserWidgetPool
{
	unsigned char                                      UnknownData00[0x5AFE7EA0];                                // 0x0000(0x5AFE7EA0) MISSED OFFSET
};

// ScriptStruct UMG.WidgetAnimationBinding
// 0x5B029680
struct FWidgetAnimationBinding
{
	unsigned char                                      UnknownData00[0x5B029680];                                // 0x0000(0x5B029680) MISSED OFFSET
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// 0x5AFE7E00
struct FBlueprintWidgetAnimationDelegateBinding
{
	unsigned char                                      UnknownData00[0x5AFE7E00];                                // 0x0000(0x5AFE7E00) MISSED OFFSET
};

// ScriptStruct UMG.DelegateRuntimeBinding
// 0x5B02B300
struct FDelegateRuntimeBinding
{
	unsigned char                                      UnknownData00[0x5B02B300];                                // 0x0000(0x5B02B300) MISSED OFFSET
};

// ScriptStruct UMG.WidgetComponentInstanceData
// 0xFFFFFFFFA4FF3240 (0x0000 - 0x5B00CDC0)
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData
{

};

// ScriptStruct UMG.WidgetNavigationData
// 0x5AFEA2E0
struct FWidgetNavigationData
{
	unsigned char                                      UnknownData00[0x5AFEA2E0];                                // 0x0000(0x5AFEA2E0) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
