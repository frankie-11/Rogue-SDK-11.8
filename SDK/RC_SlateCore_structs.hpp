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

// Enum SlateCore.EUINavigation
enum class EUINavigation : uint8_t
{
	EUINavigation__Left            = 0,
	EUINavigation__Right           = 1,
	EUINavigation__Up              = 2,
	EUINavigation__Down            = 3,
	EUINavigation__Next            = 4,
	EUINavigation__Previous        = 5,
	EUINavigation__Num             = 6,
	EUINavigation__Invalid         = 7,
	EUINavigation__EUINavigation_MAX = 8
};


// Enum SlateCore.ECheckBoxState
enum class ECheckBoxState : uint8_t
{
	ECheckBoxState__Unchecked      = 0,
	ECheckBoxState__Checked        = 1,
	ECheckBoxState__Undetermined   = 2,
	ECheckBoxState__ECheckBoxState_MAX = 3
};


// Enum SlateCore.EWidgetClipping
enum class EWidgetClipping : uint8_t
{
	EWidgetClipping__Inherit       = 0,
	EWidgetClipping__ClipToBounds  = 1,
	EWidgetClipping__ClipToBoundsWithoutIntersecting = 2,
	EWidgetClipping__ClipToBoundsAlways = 3,
	EWidgetClipping__OnDemand      = 4,
	EWidgetClipping__EWidgetClipping_MAX = 5
};


// Enum SlateCore.ESlateBrushImageType
enum class ESlateBrushImageType : uint8_t
{
	ESlateBrushImageType__NoImage  = 0,
	ESlateBrushImageType__FullColor = 1,
	ESlateBrushImageType__Linear   = 2,
	ESlateBrushImageType__ESlateBrushImageType_MAX = 3
};


// Enum SlateCore.ESlateBrushMirrorType
enum class ESlateBrushMirrorType : uint8_t
{
	ESlateBrushMirrorType__NoMirror = 0,
	ESlateBrushMirrorType__Horizontal = 1,
	ESlateBrushMirrorType__Vertical = 2,
	ESlateBrushMirrorType__Both    = 3,
	ESlateBrushMirrorType__ESlateBrushMirrorType_MAX = 4
};


// Enum SlateCore.ESlateBrushTileType
enum class ESlateBrushTileType : uint8_t
{
	ESlateBrushTileType__NoTile    = 0,
	ESlateBrushTileType__Horizontal = 1,
	ESlateBrushTileType__Vertical  = 2,
	ESlateBrushTileType__Both      = 3,
	ESlateBrushTileType__ESlateBrushTileType_MAX = 4
};


// Enum SlateCore.ESlateBrushDrawType
enum class ESlateBrushDrawType : uint8_t
{
	ESlateBrushDrawType__NoDrawType = 0,
	ESlateBrushDrawType__Box       = 1,
	ESlateBrushDrawType__Border    = 2,
	ESlateBrushDrawType__Image     = 3,
	ESlateBrushDrawType__ESlateBrushDrawType_MAX = 4
};


// Enum SlateCore.ESlateColorStylingMode
enum class ESlateColorStylingMode : uint8_t
{
	ESlateColorStylingMode__UseColor_Specified = 0,
	ESlateColorStylingMode__UseColor_Specified_Link = 1,
	ESlateColorStylingMode__UseColor_Foreground = 2,
	ESlateColorStylingMode__UseColor_Foreground_Subdued = 3,
	ESlateColorStylingMode__UseColor_MAX = 4
};


// Enum SlateCore.EUINavigationRule
enum class EUINavigationRule : uint8_t
{
	EUINavigationRule__Escape      = 0,
	EUINavigationRule__Explicit    = 1,
	EUINavigationRule__Wrap        = 2,
	EUINavigationRule__Stop        = 3,
	EUINavigationRule__Custom      = 4,
	EUINavigationRule__CustomBoundary = 5,
	EUINavigationRule__Invalid     = 6,
	EUINavigationRule__EUINavigationRule_MAX = 7
};


// Enum SlateCore.EFlowDirectionPreference
enum class EFlowDirectionPreference : uint8_t
{
	EFlowDirectionPreference__Inherit = 0,
	EFlowDirectionPreference__Culture = 1,
	EFlowDirectionPreference__LeftToRight = 2,
	EFlowDirectionPreference__RightToLeft = 3,
	EFlowDirectionPreference__EFlowDirectionPreference_MAX = 4
};


// Enum SlateCore.EColorVisionDeficiency
enum class EColorVisionDeficiency : uint8_t
{
	EColorVisionDeficiency__NormalVision = 0,
	EColorVisionDeficiency__Deuteranope = 1,
	EColorVisionDeficiency__Protanope = 2,
	EColorVisionDeficiency__Tritanope = 3,
	EColorVisionDeficiency__EColorVisionDeficiency_MAX = 4
};


// Enum SlateCore.ESelectInfo
enum class ESelectInfo : uint8_t
{
	ESelectInfo__OnKeyPress        = 0,
	ESelectInfo__OnNavigation      = 1,
	ESelectInfo__OnMouseClick      = 2,
	ESelectInfo__Direct            = 3,
	ESelectInfo__ESelectInfo_MAX   = 4
};


// Enum SlateCore.ETextCommit
enum class ETextCommit : uint8_t
{
	ETextCommit__Default           = 0,
	ETextCommit__OnEnter           = 1,
	ETextCommit__OnUserMovedFocus  = 2,
	ETextCommit__OnCleared         = 3,
	ETextCommit__ETextCommit_MAX   = 4
};


// Enum SlateCore.ETextShapingMethod
enum class ETextShapingMethod : uint8_t
{
	ETextShapingMethod__Auto       = 0,
	ETextShapingMethod__KerningOnly = 1,
	ETextShapingMethod__FullShaping = 2,
	ETextShapingMethod__ETextShapingMethod_MAX = 3
};


// Enum SlateCore.EOrientation
enum class EOrientation : uint8_t
{
	Orient_Horizontal              = 0,
	Orient_Vertical                = 1,
	Orient_MAX                     = 2
};


// Enum SlateCore.EFontLayoutMethod
enum class EFontLayoutMethod : uint8_t
{
	EFontLayoutMethod__Metrics     = 0,
	EFontLayoutMethod__BoundingBox = 1,
	EFontLayoutMethod__EFontLayoutMethod_MAX = 2
};


// Enum SlateCore.EFontLoadingPolicy
enum class EFontLoadingPolicy : uint8_t
{
	EFontLoadingPolicy__LazyLoad   = 0,
	EFontLoadingPolicy__Stream     = 1,
	EFontLoadingPolicy__Inline     = 2,
	EFontLoadingPolicy__EFontLoadingPolicy_MAX = 3
};


// Enum SlateCore.EFontHinting
enum class EFontHinting : uint8_t
{
	EFontHinting__Default          = 0,
	EFontHinting__Auto             = 1,
	EFontHinting__AutoLight        = 2,
	EFontHinting__Monochrome       = 3,
	EFontHinting__None             = 4,
	EFontHinting__EFontHinting_MAX = 5
};


// Enum SlateCore.EFocusCause
enum class EFocusCause : uint8_t
{
	EFocusCause__Mouse             = 0,
	EFocusCause__Navigation        = 1,
	EFocusCause__SetDirectly       = 2,
	EFocusCause__Cleared           = 3,
	EFocusCause__OtherWidgetLostFocus = 4,
	EFocusCause__WindowActivate    = 5,
	EFocusCause__EFocusCause_MAX   = 6
};


// Enum SlateCore.ESlateDebuggingFocusEvent
enum class ESlateDebuggingFocusEvent : uint8_t
{
	ESlateDebuggingFocusEvent__FocusChanging = 0,
	ESlateDebuggingFocusEvent__FocusLost = 1,
	ESlateDebuggingFocusEvent__FocusReceived = 2,
	ESlateDebuggingFocusEvent__ESlateDebuggingFocusEvent_MAX = 3
};


// Enum SlateCore.ESlateDebuggingNavigationMethod
enum class ESlateDebuggingNavigationMethod : uint8_t
{
	ESlateDebuggingNavigationMethod__Unknown = 0,
	ESlateDebuggingNavigationMethod__Explicit = 1,
	ESlateDebuggingNavigationMethod__CustomDelegateBound = 2,
	ESlateDebuggingNavigationMethod__CustomDelegateUnbound = 3,
	ESlateDebuggingNavigationMethod__NextOrPrevious = 4,
	ESlateDebuggingNavigationMethod__HitTestGrid = 5,
	ESlateDebuggingNavigationMethod__ESlateDebuggingNavigationMethod_MAX = 6
};


// Enum SlateCore.ESlateDebuggingStateChangeEvent
enum class ESlateDebuggingStateChangeEvent : uint8_t
{
	ESlateDebuggingStateChangeEvent__MouseCaptureGained = 0,
	ESlateDebuggingStateChangeEvent__MouseCaptureLost = 1,
	ESlateDebuggingStateChangeEvent__ESlateDebuggingStateChangeEvent_MAX = 2
};


// Enum SlateCore.ESlateDebuggingInputEvent
enum class ESlateDebuggingInputEvent : uint8_t
{
	ESlateDebuggingInputEvent__MouseMove = 0,
	ESlateDebuggingInputEvent__MouseEnter = 1,
	ESlateDebuggingInputEvent__MouseLeave = 2,
	ESlateDebuggingInputEvent__MouseButtonDown = 3,
	ESlateDebuggingInputEvent__MouseButtonUp = 4,
	ESlateDebuggingInputEvent__MouseButtonDoubleClick = 5,
	ESlateDebuggingInputEvent__MouseWheel = 6,
	ESlateDebuggingInputEvent__TouchStart = 7,
	ESlateDebuggingInputEvent__TouchEnd = 8,
	ESlateDebuggingInputEvent__DragDetected = 9,
	ESlateDebuggingInputEvent__DragEnter = 10,
	ESlateDebuggingInputEvent__DragLeave = 11,
	ESlateDebuggingInputEvent__DragOver = 12,
	ESlateDebuggingInputEvent__DragDrop = 13,
	ESlateDebuggingInputEvent__DropMessage = 14,
	ESlateDebuggingInputEvent__KeyDown = 15,
	ESlateDebuggingInputEvent__KeyUp = 16,
	ESlateDebuggingInputEvent__KeyChar = 17,
	ESlateDebuggingInputEvent__AnalogInput = 18,
	ESlateDebuggingInputEvent__TouchGesture = 19,
	ESlateDebuggingInputEvent__COUNT = 20,
	ESlateDebuggingInputEvent__ESlateDebuggingInputEvent_MAX = 21
};


// Enum SlateCore.EScrollDirection
enum class EScrollDirection : uint8_t
{
	Scroll_Down                    = 0,
	Scroll_Up                      = 1,
	Scroll_MAX                     = 2
};


// Enum SlateCore.EMenuPlacement
enum class EMenuPlacement : uint8_t
{
	MenuPlacement_BelowAnchor      = 0,
	MenuPlacement_CenteredBelowAnchor = 1,
	MenuPlacement_BelowRightAnchor = 2,
	MenuPlacement_ComboBox         = 3,
	MenuPlacement_ComboBoxRight    = 4,
	MenuPlacement_MenuRight        = 5,
	MenuPlacement_AboveAnchor      = 6,
	MenuPlacement_CenteredAboveAnchor = 7,
	MenuPlacement_AboveRightAnchor = 8,
	MenuPlacement_MenuLeft         = 9,
	MenuPlacement_Center           = 10,
	MenuPlacement_RightLeftCenter  = 11,
	MenuPlacement_MatchBottomLeft  = 12,
	MenuPlacement_MAX              = 13
};


// Enum SlateCore.EVerticalAlignment
enum class EVerticalAlignment : uint8_t
{
	VAlign_Fill                    = 0,
	VAlign_Top                     = 1,
	VAlign_Center                  = 2,
	VAlign_Bottom                  = 3,
	VAlign_MAX                     = 4
};


// Enum SlateCore.EHorizontalAlignment
enum class EHorizontalAlignment : uint8_t
{
	HAlign_Fill                    = 0,
	HAlign_Left                    = 1,
	HAlign_Center                  = 2,
	HAlign_Right                   = 3,
	HAlign_MAX                     = 4
};


// Enum SlateCore.ENavigationGenesis
enum class ENavigationGenesis : uint8_t
{
	ENavigationGenesis__Keyboard   = 0,
	ENavigationGenesis__Controller = 1,
	ENavigationGenesis__User       = 2,
	ENavigationGenesis__ENavigationGenesis_MAX = 3
};


// Enum SlateCore.ENavigationSource
enum class ENavigationSource : uint8_t
{
	ENavigationSource__FocusedWidget = 0,
	ENavigationSource__WidgetUnderCursor = 1,
	ENavigationSource__ENavigationSource_MAX = 2
};


// Enum SlateCore.EUINavigationAction
enum class EUINavigationAction : uint8_t
{
	EUINavigationAction__Accept    = 0,
	EUINavigationAction__Back      = 1,
	EUINavigationAction__Num       = 2,
	EUINavigationAction__Invalid   = 3,
	EUINavigationAction__EUINavigationAction_MAX = 4
};


// Enum SlateCore.EButtonPressMethod
enum class EButtonPressMethod : uint8_t
{
	EButtonPressMethod__DownAndUp  = 0,
	EButtonPressMethod__ButtonPress = 1,
	EButtonPressMethod__ButtonRelease = 2,
	EButtonPressMethod__EButtonPressMethod_MAX = 3
};


// Enum SlateCore.EButtonTouchMethod
enum class EButtonTouchMethod : uint8_t
{
	EButtonTouchMethod__DownAndUp  = 0,
	EButtonTouchMethod__Down       = 1,
	EButtonTouchMethod__PreciseTap = 2,
	EButtonTouchMethod__EButtonTouchMethod_MAX = 3
};


// Enum SlateCore.EButtonClickMethod
enum class EButtonClickMethod : uint8_t
{
	EButtonClickMethod__DownAndUp  = 0,
	EButtonClickMethod__MouseDown  = 1,
	EButtonClickMethod__MouseUp    = 2,
	EButtonClickMethod__PreciseClick = 3,
	EButtonClickMethod__EButtonClickMethod_MAX = 4
};


// Enum SlateCore.ESlateCheckBoxType
enum class ESlateCheckBoxType : uint8_t
{
	ESlateCheckBoxType__CheckBox   = 0,
	ESlateCheckBoxType__ToggleButton = 1,
	ESlateCheckBoxType__ESlateCheckBoxType_MAX = 2
};


// Enum SlateCore.ESlateParentWindowSearchMethod
enum class ESlateParentWindowSearchMethod : uint8_t
{
	ESlateParentWindowSearchMethod__ActiveWindow = 0,
	ESlateParentWindowSearchMethod__MainWindow = 1,
	ESlateParentWindowSearchMethod__ESlateParentWindowSearchMethod_MAX = 2
};


// Enum SlateCore.EConsumeMouseWheel
enum class EConsumeMouseWheel : uint8_t
{
	EConsumeMouseWheel__WhenScrollingPossible = 0,
	EConsumeMouseWheel__Always     = 1,
	EConsumeMouseWheel__Never      = 2,
	EConsumeMouseWheel__EConsumeMouseWheel_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct SlateCore.Geometry
// 0x0000
struct FGeometry
{

};

// ScriptStruct SlateCore.SlateBrush
// 0x5AA84400
struct FSlateBrush
{
	unsigned char                                      UnknownData00[0x5AA84400];                                // 0x0000(0x5AA84400) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateColor
// 0x5AA84700
struct FSlateColor
{
	unsigned char                                      UnknownData00[0x5AA84700];                                // 0x0000(0x5AA84700) MISSED OFFSET
};

// ScriptStruct SlateCore.Margin
// 0x5AA84480
struct FMargin
{
	unsigned char                                      UnknownData00[0x5AA84480];                                // 0x0000(0x5AA84480) MISSED OFFSET
};

// ScriptStruct SlateCore.InputEvent
// 0x0000
struct FInputEvent
{

};

// ScriptStruct SlateCore.PointerEvent
// 0x0000
struct FPointerEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.CharacterEvent
// 0x0000
struct FCharacterEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.KeyEvent
// 0x0000
struct FKeyEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.NavigationEvent
// 0x0000
struct FNavigationEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.AnalogInputEvent
// 0x0000
struct FAnalogInputEvent : public FKeyEvent
{

};

// ScriptStruct SlateCore.SlateFontInfo
// 0x5AA8CA80
struct FSlateFontInfo
{
	unsigned char                                      UnknownData00[0x5AA8CA80];                                // 0x0000(0x5AA8CA80) MISSED OFFSET
};

// ScriptStruct SlateCore.FontOutlineSettings
// 0x5AA8CB80
struct FFontOutlineSettings
{
	unsigned char                                      UnknownData00[0x5AA8CB80];                                // 0x0000(0x5AA8CB80) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateWidgetStyle
// 0x0000
struct FSlateWidgetStyle
{

};

// ScriptStruct SlateCore.TableRowStyle
// 0x5AA8E100
struct FTableRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AA8E100];                                // 0x0000(0x5AA8E100) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboBoxStyle
// 0x5AA8DE80
struct FComboBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AA8DE80];                                // 0x0000(0x5AA8DE80) MISSED OFFSET
};

// ScriptStruct SlateCore.SlateSound
// 0x5AA8DF80
struct FSlateSound
{
	unsigned char                                      UnknownData00[0x5AA8DF80];                                // 0x0000(0x5AA8DF80) MISSED OFFSET
};

// ScriptStruct SlateCore.ComboButtonStyle
// 0x5AA8DB80
struct FComboButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AA8DB80];                                // 0x0000(0x5AA8DB80) MISSED OFFSET
};

// ScriptStruct SlateCore.ButtonStyle
// 0x5AA8D780
struct FButtonStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AA8D780];                                // 0x0000(0x5AA8D780) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextStyle
// 0x5AA8FA00
struct FEditableTextStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AA8FA00];                                // 0x0000(0x5AA8FA00) MISSED OFFSET
};

// ScriptStruct SlateCore.EditableTextBoxStyle
// 0x5AB71500
struct FEditableTextBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AB71500];                                // 0x0000(0x5AB71500) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBarStyle
// 0x5AB71A80
struct FScrollBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AB71A80];                                // 0x0000(0x5AB71A80) MISSED OFFSET
};

// ScriptStruct SlateCore.TextBlockStyle
// 0x5AB72280
struct FTextBlockStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AB72280];                                // 0x0000(0x5AB72280) MISSED OFFSET
};

// ScriptStruct SlateCore.SpinBoxStyle
// 0x5AB76500
struct FSpinBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AB76500];                                // 0x0000(0x5AB76500) MISSED OFFSET
};

// ScriptStruct SlateCore.FocusEvent
// 0x0000
struct FFocusEvent
{

};

// ScriptStruct SlateCore.MotionEvent
// 0x0000
struct FMotionEvent : public FInputEvent
{

};

// ScriptStruct SlateCore.CompositeFont
// 0x5AFF5400
struct FCompositeFont
{
	unsigned char                                      UnknownData00[0x5AFF5400];                                // 0x0000(0x5AFF5400) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeFallbackFont
// 0x5AFF5A00
struct FCompositeFallbackFont
{
	unsigned char                                      UnknownData00[0x5AFF5A00];                                // 0x0000(0x5AFF5A00) MISSED OFFSET
};

// ScriptStruct SlateCore.Typeface
// 0x5AFE1960
struct FTypeface
{
	unsigned char                                      UnknownData00[0x5AFE1960];                                // 0x0000(0x5AFE1960) MISSED OFFSET
};

// ScriptStruct SlateCore.TypefaceEntry
// 0x5AFF5600
struct FTypefaceEntry
{
	unsigned char                                      UnknownData00[0x5AFF5600];                                // 0x0000(0x5AFF5600) MISSED OFFSET
};

// ScriptStruct SlateCore.FontData
// 0x5AFF5680
struct FFontData
{
	unsigned char                                      UnknownData00[0x5AFF5680];                                // 0x0000(0x5AFF5680) MISSED OFFSET
};

// ScriptStruct SlateCore.CompositeSubFont
// 0xFFFFFFFFFFFEBD80 (0x5AFE1780 - 0x5AFF5A00)
struct FCompositeSubFont : public FCompositeFallbackFont
{

};

// ScriptStruct SlateCore.CaptureLostEvent
// 0x0000
struct FCaptureLostEvent
{

};

// ScriptStruct SlateCore.WindowStyle
// 0x5AFF6E00
struct FWindowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF6E00];                                // 0x0000(0x5AFF6E00) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBorderStyle
// 0x5AFF6D00
struct FScrollBorderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF6D00];                                // 0x0000(0x5AFF6D00) MISSED OFFSET
};

// ScriptStruct SlateCore.ScrollBoxStyle
// 0x5AFF6B00
struct FScrollBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF6B00];                                // 0x0000(0x5AFF6B00) MISSED OFFSET
};

// ScriptStruct SlateCore.DockTabStyle
// 0x5AFF6500
struct FDockTabStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF6500];                                // 0x0000(0x5AFF6500) MISSED OFFSET
};

// ScriptStruct SlateCore.HeaderRowStyle
// 0x5AFF7E00
struct FHeaderRowStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF7E00];                                // 0x0000(0x5AFF7E00) MISSED OFFSET
};

// ScriptStruct SlateCore.SplitterStyle
// 0x5AFF8380
struct FSplitterStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF8380];                                // 0x0000(0x5AFF8380) MISSED OFFSET
};

// ScriptStruct SlateCore.TableColumnHeaderStyle
// 0x5AFF7E80
struct FTableColumnHeaderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF7E80];                                // 0x0000(0x5AFF7E80) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineTextImageStyle
// 0x5AFF7D00
struct FInlineTextImageStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF7D00];                                // 0x0000(0x5AFF7D00) MISSED OFFSET
};

// ScriptStruct SlateCore.VolumeControlStyle
// 0x5AFF7A00
struct FVolumeControlStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF7A00];                                // 0x0000(0x5AFF7A00) MISSED OFFSET
};

// ScriptStruct SlateCore.SliderStyle
// 0x5AFF7680
struct FSliderStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF7680];                                // 0x0000(0x5AFF7680) MISSED OFFSET
};

// ScriptStruct SlateCore.SearchBoxStyle
// 0x5AFF9380
struct FSearchBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF9380];                                // 0x0000(0x5AFF9380) MISSED OFFSET
};

// ScriptStruct SlateCore.ExpandableAreaStyle
// 0x5AFF9200
struct FExpandableAreaStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF9200];                                // 0x0000(0x5AFF9200) MISSED OFFSET
};

// ScriptStruct SlateCore.ProgressBarStyle
// 0x5AFF9080
struct FProgressBarStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF9080];                                // 0x0000(0x5AFF9080) MISSED OFFSET
};

// ScriptStruct SlateCore.InlineEditableTextBlockStyle
// 0x5AFF8F80
struct FInlineEditableTextBlockStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF8F80];                                // 0x0000(0x5AFF8F80) MISSED OFFSET
};

// ScriptStruct SlateCore.HyperlinkStyle
// 0x5AFF8E00
struct FHyperlinkStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF8E00];                                // 0x0000(0x5AFF8E00) MISSED OFFSET
};

// ScriptStruct SlateCore.CheckBoxStyle
// 0x5AFF8600
struct FCheckBoxStyle : public FSlateWidgetStyle
{
	unsigned char                                      UnknownData00[0x5AFF8600];                                // 0x0000(0x5AFF8600) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
