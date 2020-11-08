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

// Enum Slate.ETextJustify
enum class ETextJustify : uint8_t
{
	ETextJustify__Left             = 0,
	ETextJustify__Center           = 1,
	ETextJustify__Right            = 2,
	ETextJustify__ETextJustify_MAX = 3
};


// Enum Slate.ETextFlowDirection
enum class ETextFlowDirection : uint8_t
{
	ETextFlowDirection__Auto       = 0,
	ETextFlowDirection__LeftToRight = 1,
	ETextFlowDirection__RightToLeft = 2,
	ETextFlowDirection__ETextFlowDirection_MAX = 3
};


// Enum Slate.EVirtualKeyboardDismissAction
enum class EVirtualKeyboardDismissAction : uint8_t
{
	EVirtualKeyboardDismissAction__TextChangeOnDismiss = 0,
	EVirtualKeyboardDismissAction__TextCommitOnAccept = 1,
	EVirtualKeyboardDismissAction__TextCommitOnDismiss = 2,
	EVirtualKeyboardDismissAction__EVirtualKeyboardDismissAction_MAX = 3
};


// Enum Slate.EVirtualKeyboardTrigger
enum class EVirtualKeyboardTrigger : uint8_t
{
	EVirtualKeyboardTrigger__OnFocusByPointer = 0,
	EVirtualKeyboardTrigger__OnAllFocusEvents = 1,
	EVirtualKeyboardTrigger__EVirtualKeyboardTrigger_MAX = 2
};


// Enum Slate.ETextWrappingPolicy
enum class ETextWrappingPolicy : uint8_t
{
	ETextWrappingPolicy__DefaultWrapping = 0,
	ETextWrappingPolicy__AllowPerCharacterWrapping = 1,
	ETextWrappingPolicy__ETextWrappingPolicy_MAX = 2
};


// Enum Slate.ETableViewMode
enum class ETableViewMode : uint8_t
{
	ETableViewMode__List           = 0,
	ETableViewMode__Tile           = 1,
	ETableViewMode__Tree           = 2,
	ETableViewMode__ETableViewMode_MAX = 3
};


// Enum Slate.ESelectionMode
enum class ESelectionMode : uint8_t
{
	ESelectionMode__None           = 0,
	ESelectionMode__Single         = 1,
	ESelectionMode__SingleToggle   = 2,
	ESelectionMode__Multi          = 3,
	ESelectionMode__ESelectionMode_MAX = 4
};


// Enum Slate.EMultiBlockType
enum class EMultiBlockType : uint8_t
{
	EMultiBlockType__None          = 0,
	EMultiBlockType__ButtonRow     = 1,
	EMultiBlockType__EditableText  = 2,
	EMultiBlockType__Heading       = 3,
	EMultiBlockType__MenuEntry     = 4,
	EMultiBlockType__MenuSeparator = 5,
	EMultiBlockType__ToolBarButton = 6,
	EMultiBlockType__ToolBarComboButton = 7,
	EMultiBlockType__ToolBarSeparator = 8,
	EMultiBlockType__Widget        = 9,
	EMultiBlockType__EMultiBlockType_MAX = 10
};


// Enum Slate.EMultiBoxType
enum class EMultiBoxType : uint8_t
{
	EMultiBoxType__MenuBar         = 0,
	EMultiBoxType__ToolBar         = 1,
	EMultiBoxType__VerticalToolBar = 2,
	EMultiBoxType__UniformToolBar  = 3,
	EMultiBoxType__Menu            = 4,
	EMultiBoxType__ButtonRow       = 5,
	EMultiBoxType__ToolMenuBar     = 6,
	EMultiBoxType__EMultiBoxType_MAX = 7
};


// Enum Slate.EProgressBarFillType
enum class EProgressBarFillType : uint8_t
{
	EProgressBarFillType__LeftToRight = 0,
	EProgressBarFillType__RightToLeft = 1,
	EProgressBarFillType__FillFromCenter = 2,
	EProgressBarFillType__TopToBottom = 3,
	EProgressBarFillType__BottomToTop = 4,
	EProgressBarFillType__EProgressBarFillType_MAX = 5
};


// Enum Slate.EStretch
enum class EStretch : uint8_t
{
	EStretch__None                 = 0,
	EStretch__Fill                 = 1,
	EStretch__ScaleToFit           = 2,
	EStretch__ScaleToFitX          = 3,
	EStretch__ScaleToFitY          = 4,
	EStretch__ScaleToFill          = 5,
	EStretch__ScaleBySafeZone      = 6,
	EStretch__UserSpecified        = 7,
	EStretch__EStretch_MAX         = 8
};


// Enum Slate.EStretchDirection
enum class EStretchDirection : uint8_t
{
	EStretchDirection__Both        = 0,
	EStretchDirection__DownOnly    = 1,
	EStretchDirection__UpOnly      = 2,
	EStretchDirection__EStretchDirection_MAX = 3
};


// Enum Slate.EScrollWhenFocusChanges
enum class EScrollWhenFocusChanges : uint8_t
{
	EScrollWhenFocusChanges__NoScroll = 0,
	EScrollWhenFocusChanges__InstantScroll = 1,
	EScrollWhenFocusChanges__AnimatedScroll = 2,
	EScrollWhenFocusChanges__EScrollWhenFocusChanges_MAX = 3
};


// Enum Slate.EDescendantScrollDestination
enum class EDescendantScrollDestination : uint8_t
{
	EDescendantScrollDestination__IntoView = 0,
	EDescendantScrollDestination__TopOrLeft = 1,
	EDescendantScrollDestination__Center = 2,
	EDescendantScrollDestination__EDescendantScrollDestination_MAX = 3
};


// Enum Slate.EListItemAlignment
enum class EListItemAlignment : uint8_t
{
	EListItemAlignment__EvenlyDistributed = 0,
	EListItemAlignment__EvenlySize = 1,
	EListItemAlignment__EvenlyWide = 2,
	EListItemAlignment__LeftAligned = 3,
	EListItemAlignment__RightAligned = 4,
	EListItemAlignment__CenterAligned = 5,
	EListItemAlignment__Fill       = 6,
	EListItemAlignment__EListItemAlignment_MAX = 7
};


// Enum Slate.ECustomizedToolMenuVisibility
enum class ECustomizedToolMenuVisibility : uint8_t
{
	ECustomizedToolMenuVisibility__None = 0,
	ECustomizedToolMenuVisibility__Visible = 1,
	ECustomizedToolMenuVisibility__Hidden = 2,
	ECustomizedToolMenuVisibility__ECustomizedToolMenuVisibility_MAX = 3
};


// Enum Slate.EMultipleKeyBindingIndex
enum class EMultipleKeyBindingIndex : uint8_t
{
	EMultipleKeyBindingIndex__Primary = 0,
	EMultipleKeyBindingIndex__Secondary = 1,
	EMultipleKeyBindingIndex__NumChords = 2,
	EMultipleKeyBindingIndex__EMultipleKeyBindingIndex_MAX = 3
};


// Enum Slate.EUserInterfaceActionType
enum class EUserInterfaceActionType : uint8_t
{
	EUserInterfaceActionType__None = 0,
	EUserInterfaceActionType__Button = 1,
	EUserInterfaceActionType__ToggleButton = 2,
	EUserInterfaceActionType__RadioButton = 3,
	EUserInterfaceActionType__Check = 4,
	EUserInterfaceActionType__CollapsedButton = 5,
	EUserInterfaceActionType__EUserInterfaceActionType_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Slate.VirtualKeyboardOptions
// 0x5AA8EC80
struct FVirtualKeyboardOptions
{
	unsigned char                                      UnknownData00[0x5AA8EC80];                                // 0x0000(0x5AA8EC80) MISSED OFFSET
};

// ScriptStruct Slate.InputChord
// 0x5AB73080
struct FInputChord
{
	unsigned char                                      UnknownData00[0x5AB73080];                                // 0x0000(0x5AB73080) MISSED OFFSET
};

// ScriptStruct Slate.Anchors
// 0x5AB7A680
struct FAnchors
{
	unsigned char                                      UnknownData00[0x5AB7A680];                                // 0x0000(0x5AB7A680) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenu
// 0x5AFFA180
struct FCustomizedToolMenu
{
	unsigned char                                      UnknownData00[0x5AFFA180];                                // 0x0000(0x5AFFA180) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// 0x5AFE1640
struct FCustomizedToolMenuNameArray
{
	unsigned char                                      UnknownData00[0x5AFE1640];                                // 0x0000(0x5AFE1640) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenuSection
// 0x5AFE15A0
struct FCustomizedToolMenuSection
{
	unsigned char                                      UnknownData00[0x5AFE15A0];                                // 0x0000(0x5AFE15A0) MISSED OFFSET
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// 0x5AFE1500
struct FCustomizedToolMenuEntry
{
	unsigned char                                      UnknownData00[0x5AFE1500];                                // 0x0000(0x5AFE1500) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
