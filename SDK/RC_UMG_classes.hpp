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

// Class UMG.Visual
// 0x0000
class UVisual : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Visual");
		return ptr;
	}

};


// Class UMG.Widget
// 0x5AA88000
class UWidget : public UVisual
{
public:
	unsigned char                                      UnknownData00[0x5AA88000];                                // 0x0000(0x5AA88000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Widget");
		return ptr;
	}


	void SetVisibility();
	void SetUserFocus();
	void SetToolTipText();
	void SetToolTip();
	void SetRenderTranslation();
	void SetRenderTransformPivot();
	void SetRenderTransformAngle();
	void SetRenderTransform();
	void SetRenderShear();
	void SetRenderScale();
	void SetRenderOpacity();
	void SetNavigationRuleExplicit();
	void SetNavigationRuleCustomBoundary();
	void SetNavigationRuleCustom();
	void SetNavigationRuleBase();
	void SetNavigationRule();
	void SetKeyboardFocus();
	void SetIsEnabled();
	void SetFocus();
	void SetCursor();
	void SetClipping();
	void SetAllowRenderInterpolation();
	void SetAllNavigationRules();
	void ResetCursor();
	void RemoveFromParent();
	void OnReply__DelegateSignature();
	void OnPointerEvent__DelegateSignature();
	void IsVisible();
	void IsHovered();
	void InvalidateLayoutAndVolatility();
	void HasUserFocusedDescendants();
	void HasUserFocus();
	void HasMouseCaptureByUser();
	void HasMouseCapture();
	void HasKeyboardFocus();
	void HasFocusedDescendants();
	void HasAnyUserFocus();
	void GetWidget__DelegateSignature();
	void GetVisibility();
	void GetTickSpaceGeometry();
	void GetText__DelegateSignature();
	void GetSlateVisibility__DelegateSignature();
	void GetSlateColor__DelegateSignature();
	void GetSlateBrush__DelegateSignature();
	void GetRenderTransformAngle();
	void GetRenderOpacity();
	void GetParent();
	void GetPaintSpaceGeometry();
	void GetOwningPlayer();
	void GetOwningLocalPlayer();
	void GetMouseCursor__DelegateSignature();
	void GetLinearColor__DelegateSignature();
	void GetIsEnabled();
	void GetInt32__DelegateSignature();
	void GetGameInstance();
	void GetFloat__DelegateSignature();
	void GetDesiredSize();
	void GetClipping();
	void GetCheckBoxState__DelegateSignature();
	void GetCachedGeometry();
	void GetBool__DelegateSignature();
	void GenerateWidgetForString__DelegateSignature();
	void GenerateWidgetForObject__DelegateSignature();
	void ForceVolatile();
	void ForceLayoutPrepass();
};


// Class UMG.Image
// 0x6D8E00 (0x5B160E00 - 0x5AA88000)
class UImage : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x6D8E00];                                  // 0x5AA88000(0x6D8E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Image");
		return ptr;
	}


	void SetOpacity();
	void SetColorAndOpacity();
	void SetBrushTintColor();
	void SetBrushSize();
	void SetBrushResourceObject();
	void SetBrushFromTextureDynamic();
	void SetBrushFromTexture();
	void SetBrushFromSoftTexture();
	void SetBrushFromSoftMaterial();
	void SetBrushFromMaterial();
	void SetBrushFromAtlasInterface();
	void SetBrushFromAsset();
	void SetBrush();
	void GetDynamicMaterial();
};


// Class UMG.PanelWidget
// 0xFFFFFFFFF61B47C0 (0x50C3C7C0 - 0x5AA88000)
class UPanelWidget : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelWidget");
		return ptr;
	}


	void RemoveChildAt();
	void RemoveChild();
	void HasChild();
	void HasAnyChildren();
	void GetChildrenCount();
	void GetChildIndex();
	void GetChildAt();
	void GetAllChildren();
	void ClearChildren();
	void AddChild();
};


// Class UMG.CanvasPanel
// 0xFFFFFFFFAF3C3840 (0x0000 - 0x50C3C7C0)
class UCanvasPanel : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanel");
		return ptr;
	}


	void AddChildToCanvas();
};


// Class UMG.UserWidget
// 0x168280 (0x5ABF0280 - 0x5AA88000)
class UUserWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x168280];                                  // 0x5AA88000(0x168280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserWidget");
		return ptr;
	}


	void UnregisterInputComponent();
	void UnbindFromAnimationStarted();
	void UnbindFromAnimationFinished();
	void UnbindAllFromAnimationStarted();
	void UnbindAllFromAnimationFinished();
	void Tick();
	void StopListeningForInputAction();
	void StopListeningForAllInputActions();
	void StopAnimationsAndLatentActions();
	void StopAnimation();
	void StopAllAnimations();
	void SetZOrderInViewport();
	void SetPositionInViewport();
	void SetPlaybackSpeed();
	void SetPadding();
	void SetOwningPlayer();
	void SetNumLoopsToPlay();
	void SetInputActionPriority();
	void SetInputActionBlocking();
	void SetForegroundColor();
	void SetDesiredSizeInViewport();
	void SetColorAndOpacity();
	void SetAnchorsInViewport();
	void SetAlignmentInViewport();
	void ReverseAnimation();
	void RemoveFromViewport();
	void RegisterInputComponent();
	void PreConstruct();
	void PlaySound();
	void PlayAnimationTimeRange();
	void PlayAnimationReverse();
	void PlayAnimationForward();
	void PlayAnimation();
	void PauseAnimation();
	void OnTouchStarted();
	void OnTouchMoved();
	void OnTouchGesture();
	void OnTouchForceChanged();
	void OnTouchEnded();
	void OnRemovedFromFocusPath();
	void OnPreviewMouseButtonDown();
	void OnPreviewKeyDown();
	void OnPaint();
	void OnMouseWheel();
	void OnMouseMove();
	void OnMouseLeave();
	void OnMouseEnter();
	void OnMouseCaptureLost();
	void OnMouseButtonUp();
	void OnMouseButtonDown();
	void OnMouseButtonDoubleClick();
	void OnMotionDetected();
	void OnKeyUp();
	void OnKeyDown();
	void OnKeyChar();
	void OnInitialized();
	void OnFocusReceived();
	void OnFocusLost();
	void OnDrop();
	void OnDragOver();
	void OnDragLeave();
	void OnDragEnter();
	void OnDragDetected();
	void OnDragCancelled();
	void OnAnimationStarted();
	void OnAnimationFinished();
	void OnAnalogValueChanged();
	void OnAddedToFocusPath();
	void ListenForInputAction();
	void IsPlayingAnimation();
	void IsListeningForInputAction();
	void IsInViewport();
	void IsInteractable();
	void IsAnyAnimationPlaying();
	void IsAnimationPlayingForward();
	void IsAnimationPlaying();
	void GetOwningPlayerPawn();
	void GetIsVisible();
	void GetAnimationCurrentTime();
	void GetAnchorsInViewport();
	void GetAlignmentInViewport();
	void Destruct();
	void Construct();
	void CancelLatentActions();
	void BindToAnimationStarted();
	void BindToAnimationFinished();
	void BindToAnimationEvent();
	void AddToViewport();
	void AddToPlayerScreen();
};


// Class UMG.ContentWidget
// 0xFFFFFFFFAF3C3840 (0x0000 - 0x50C3C7C0)
class UContentWidget : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ContentWidget");
		return ptr;
	}


	void SetContent();
	void GetContentSlot();
	void GetContent();
};


// Class UMG.EditableTextBox
// 0xE9400 (0x5AB71400 - 0x5AA88000)
class UEditableTextBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xE9400];                                   // 0x5AA88000(0xE9400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableTextBox");
		return ptr;
	}


	void SetText();
	void SetJustification();
	void SetIsReadOnly();
	void SetIsPassword();
	void SetHintText();
	void SetError();
	void OnEditableTextBoxCommittedEvent__DelegateSignature();
	void OnEditableTextBoxChangedEvent__DelegateSignature();
	void HasError();
	void GetText();
	void ClearError();
};


// Class UMG.ScrollBox
// 0xCF4A7C0 (0x5DB86F80 - 0x50C3C7C0)
class UScrollBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xCF4A7C0];                                 // 0x50C3C7C0(0xCF4A7C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBox");
		return ptr;
	}


	void SetWheelScrollMultiplier();
	void SetScrollOffset();
	void SetScrollBarVisibility();
	void SetScrollbarThickness();
	void SetScrollbarPadding();
	void SetOrientation();
	void SetConsumeMouseWheel();
	void SetAnimateWheelScrolling();
	void SetAlwaysShowScrollbar();
	void SetAllowOverscroll();
	void ScrollWidgetIntoView();
	void ScrollToStart();
	void ScrollToEnd();
	void GetViewOffsetFraction();
	void GetScrollOffsetOfEnd();
	void GetScrollOffset();
	void EndInertialScrolling();
};


// Class UMG.GridPanel
// 0xFFFFFFFFFFFFFEC0 (0x50C3C680 - 0x50C3C7C0)
class UGridPanel : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridPanel");
		return ptr;
	}


	void SetRowFill();
	void SetColumnFill();
	void AddChildToGrid();
};


// Class UMG.VerticalBox
// 0xFFFFFFFFAF3C3840 (0x0000 - 0x50C3C7C0)
class UVerticalBox : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBox");
		return ptr;
	}


	void AddChildToVerticalBox();
};


// Class UMG.ListViewBase
// 0x3077740 (0x5DAFF740 - 0x5AA88000)
class UListViewBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3077740];                                 // 0x5AA88000(0x3077740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewBase");
		return ptr;
	}


	void SetWheelScrollMultiplier();
	void SetScrollOffset();
	void SetScrollBarVisibility();
	void ScrollToTop();
	void ScrollToBottom();
	void RequestRefresh();
	void RegenerateAllEntries();
	void GetDisplayedEntryWidgets();
};


// Class UMG.ListView
// 0xB44C0 (0x5DBB3C00 - 0x5DAFF740)
class UListView : public UListViewBase
{
public:
	unsigned char                                      UnknownData00[0xB44C0];                                   // 0x5DAFF740(0xB44C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListView");
		return ptr;
	}


	void SetSelectionMode();
	void SetSelectedIndex();
	void ScrollIndexIntoView();
	void RemoveItem();
	void NavigateToIndex();
	void IsRefreshPending();
	void GetNumItems();
	void GetListItems();
	void GetItemAt();
	void GetIndexForItem();
	void ClearListItems();
	void BP_SetSelectedItem();
	void BP_SetListItems();
	void BP_SetItemSelection();
	void BP_ScrollItemIntoView();
	void BP_NavigateToItem();
	void BP_IsItemVisible();
	void BP_GetSelectedItems();
	void BP_GetSelectedItem();
	void BP_GetNumItemsSelected();
	void BP_ClearSelection();
	void BP_CancelScrollIntoView();
	void AddItem();
};


// Class UMG.TreeView
// 0xFFFFFFFFFFFFFE00 (0x5DBB3A00 - 0x5DBB3C00)
class UTreeView : public UListView
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TreeView");
		return ptr;
	}


	void SetItemExpansion();
	void ExpandAll();
	void CollapseAll();
};


// Class UMG.AsyncTaskDownloadImage
// 0x5DC37200
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x5DC37200];                                // 0x0000(0x5DC37200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.AsyncTaskDownloadImage");
		return ptr;
	}


	void DownloadImage();
};


// Class UMG.BackgroundBlur
// 0x5DC36A80
class UBackgroundBlur : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC36A80];                                // 0x0000(0x5DC36A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlur");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetLowQualityFallbackBrush();
	void SetHorizontalAlignment();
	void SetBlurStrength();
	void SetBlurRadius();
	void SetApplyAlphaToBlur();
};


// Class UMG.PanelSlot
// 0x5DC36980
class UPanelSlot : public UVisual
{
public:
	unsigned char                                      UnknownData00[0x5DC36980];                                // 0x0000(0x5DC36980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PanelSlot");
		return ptr;
	}

};


// Class UMG.BackgroundBlurSlot
// 0xFFFFFFFFFFFFFD00 (0x5DC36680 - 0x5DC36980)
class UBackgroundBlurSlot : public UPanelSlot
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BackgroundBlurSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.PropertyBinding
// 0x5DC36500
class UPropertyBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC36500];                                // 0x0000(0x5DC36500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.PropertyBinding");
		return ptr;
	}

};


// Class UMG.BoolBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UBoolBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BoolBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.Border
// 0x5DC37800
class UBorder : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC37800];                                // 0x0000(0x5DC37800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Border");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
	void SetDesiredSizeScale();
	void SetContentColorAndOpacity();
	void SetBrushFromTexture();
	void SetBrushFromMaterial();
	void SetBrushFromAsset();
	void SetBrushColor();
	void SetBrush();
	void GetDynamicMaterial();
};


// Class UMG.BorderSlot
// 0x0B80 (0x5DC37500 - 0x5DC36980)
class UBorderSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0xB80];                                     // 0x5DC36980(0x0B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BorderSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.BrushBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UBrushBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.BrushBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.Button
// 0x5DC38B00
class UButton : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC38B00];                                // 0x0000(0x5DC38B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Button");
		return ptr;
	}


	void SetTouchMethod();
	void SetStyle();
	void SetPressMethod();
	void SetColorAndOpacity();
	void SetClickMethod();
	void SetBackgroundColor();
	void IsPressed();
};


// Class UMG.ButtonSlot
// 0x1E80 (0x5DC38800 - 0x5DC36980)
class UButtonSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x1E80];                                    // 0x5DC36980(0x1E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ButtonSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.CanvasPanelSlot
// 0x3400 (0x5DC39D80 - 0x5DC36980)
class UCanvasPanelSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x3400];                                    // 0x5DC36980(0x3400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CanvasPanelSlot");
		return ptr;
	}


	void SetZOrder();
	void SetSize();
	void SetPosition();
	void SetOffsets();
	void SetMinimum();
	void SetMaximum();
	void SetLayout();
	void SetAutoSize();
	void SetAnchors();
	void SetAlignment();
	void GetZOrder();
	void GetSize();
	void GetPosition();
	void GetOffsets();
	void GetLayout();
	void GetAutoSize();
	void GetAnchors();
	void GetAlignment();
};


// Class UMG.CheckBox
// 0x5DBE8F80
class UCheckBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DBE8F80];                                // 0x0000(0x5DBE8F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckBox");
		return ptr;
	}


	void SetIsChecked();
	void SetCheckedState();
	void IsPressed();
	void IsChecked();
	void GetCheckedState();
};


// Class UMG.CheckedStateBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UCheckedStateBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CheckedStateBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.CircularThrobber
// 0x31B2E00 (0x5DC3AE00 - 0x5AA88000)
class UCircularThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31B2E00];                                 // 0x5AA88000(0x31B2E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.CircularThrobber");
		return ptr;
	}


	void SetRadius();
	void SetPeriod();
	void SetNumberOfPieces();
};


// Class UMG.ColorBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UColorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ColorBinding");
		return ptr;
	}


	void GetSlateValue();
	void GetLinearValue();
};


// Class UMG.ComboBox
// 0x3160E40 (0x5DBE8E40 - 0x5AA88000)
class UComboBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3160E40];                                 // 0x5AA88000(0x3160E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBox");
		return ptr;
	}

};


// Class UMG.ComboBoxString
// 0xFFFFFFFFF61B27E0 (0x50C3A7E0 - 0x5AA88000)
class UComboBoxString : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ComboBoxString");
		return ptr;
	}


	void SetSelectedOption();
	void SetSelectedIndex();
	void RemoveOption();
	void RefreshOptions();
	void OnSelectionChangedEvent__DelegateSignature();
	void OnOpeningEvent__DelegateSignature();
	void OnClosingEvent__DelegateSignature();
	void IsOpen();
	void GetSelectedOption();
	void GetSelectedIndex();
	void GetOptionCount();
	void GetOptionAtIndex();
	void FindOptionIndex();
	void ClearSelection();
	void ClearOptions();
	void AddOption();
};


// Class UMG.DragDropOperation
// 0x5DC3A600
class UDragDropOperation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC3A600];                                // 0x0000(0x5DC3A600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DragDropOperation");
		return ptr;
	}


	void Drop();
	void Dragged();
	void DragCancelled();
};


// Class UMG.DynamicEntryBoxBase
// 0x3160BC0 (0x5DBE8BC0 - 0x5AA88000)
class UDynamicEntryBoxBase : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x3160BC0];                                 // 0x5AA88000(0x3160BC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBoxBase");
		return ptr;
	}


	void SetEntrySpacing();
	void GetNumEntries();
	void GetAllEntries();
};


// Class UMG.DynamicEntryBox
// 0xFFFFFFFFFFFFFEC0 (0x5DBE8A80 - 0x5DBE8BC0)
class UDynamicEntryBox : public UDynamicEntryBoxBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.DynamicEntryBox");
		return ptr;
	}


	void Reset();
	void RemoveEntry();
	void BP_CreateEntryOfClass();
	void BP_CreateEntry();
};


// Class UMG.EditableText
// 0x7800 (0x5AA8F800 - 0x5AA88000)
class UEditableText : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x7800];                                    // 0x5AA88000(0x7800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.EditableText");
		return ptr;
	}


	void SetText();
	void SetJustification();
	void SetIsReadOnly();
	void SetIsPassword();
	void SetHintText();
	void OnEditableTextCommittedEvent__DelegateSignature();
	void OnEditableTextChangedEvent__DelegateSignature();
	void GetText();
};


// Class UMG.ExpandableArea
// 0x31B3900 (0x5DC3B900 - 0x5AA88000)
class UExpandableArea : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31B3900];                                 // 0x5AA88000(0x31B3900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ExpandableArea");
		return ptr;
	}


	void SetIsExpanded_Animated();
	void SetIsExpanded();
	void GetIsExpanded();
};


// Class UMG.FloatBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UFloatBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.FloatBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.GridSlot
// 0x6700 (0x5DC3D080 - 0x5DC36980)
class UGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x6700];                                    // 0x5DC36980(0x6700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.GridSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetRowSpan();
	void SetRow();
	void SetPadding();
	void SetNudge();
	void SetLayer();
	void SetHorizontalAlignment();
	void SetColumnSpan();
	void SetColumn();
};


// Class UMG.HorizontalBox
// 0xFFFFFFFFAF3C3840 (0x0000 - 0x50C3C7C0)
class UHorizontalBox : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBox");
		return ptr;
	}


	void AddChildToHorizontalBox();
};


// Class UMG.HorizontalBoxSlot
// 0x6200 (0x5DC3CB80 - 0x5DC36980)
class UHorizontalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x6200];                                    // 0x5DC36980(0x6200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.HorizontalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetSize();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.InputKeySelector
// 0xEA200 (0x5AB72200 - 0x5AA88000)
class UInputKeySelector : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xEA200];                                   // 0x5AA88000(0xEA200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InputKeySelector");
		return ptr;
	}


	void SetTextBlockVisibility();
	void SetSelectedKey();
	void SetNoKeySpecifiedText();
	void SetKeySelectionText();
	void SetEscapeKeys();
	void SetAllowModifierKeys();
	void SetAllowGamepadKeys();
	void OnKeySelected__DelegateSignature();
	void OnIsSelectingKeyChanged__DelegateSignature();
	void GetIsSelectingKey();
};


// Class UMG.Int32Binding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UInt32Binding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Int32Binding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.InvalidationBox
// 0x5DC3C900
class UInvalidationBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC3C900];                                // 0x0000(0x5DC3C900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.InvalidationBox");
		return ptr;
	}


	void SetCanCache();
	void InvalidateCache();
	void GetCanCache();
};


// Class UMG.UserListEntry
// 0x0000
class UUserListEntry : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntry");
		return ptr;
	}


	void BP_OnItemSelectionChanged();
	void BP_OnItemExpansionChanged();
	void BP_OnEntryReleased();
};


// Class UMG.UserListEntryLibrary
// 0x0000
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserListEntryLibrary");
		return ptr;
	}


	void IsListItemSelected();
	void IsListItemExpanded();
	void GetOwningListView();
};


// Class UMG.UserObjectListEntry
// 0x0000
class UUserObjectListEntry : public UUserListEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntry");
		return ptr;
	}


	void OnListItemObjectSet();
};


// Class UMG.UserObjectListEntryLibrary
// 0x0000
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UserObjectListEntryLibrary");
		return ptr;
	}


	void GetListItemObject();
};


// Class UMG.ListViewDesignerPreviewItem
// 0x0000
class UListViewDesignerPreviewItem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ListViewDesignerPreviewItem");
		return ptr;
	}

};


// Class UMG.MenuAnchor
// 0x5DBE89E0
class UMenuAnchor : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DBE89E0];                                // 0x0000(0x5DBE89E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MenuAnchor");
		return ptr;
	}


	void ToggleOpen();
	void ShouldOpenDueToClick();
	void SetPlacement();
	void Open();
	void IsOpen();
	void HasOpenSubMenus();
	void GetMenuPosition();
	void FitInWindow();
	void Close();
};


// Class UMG.MouseCursorBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UMouseCursorBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MouseCursorBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.MovieScene2DTransformSection
// 0x2A92C80 (0x5DC3DA80 - 0x5B1AAE00)
class UMovieScene2DTransformSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x2A92C80];                                 // 0x5B1AAE00(0x2A92C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformSection");
		return ptr;
	}

};


// Class UMG.MovieScene2DTransformTrack
// 0xFFFFFFFFA4E17600 (0x0000 - 0x5B1E8A00)
class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieScene2DTransformTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginSection
// 0x2A92A80 (0x5DC3D880 - 0x5B1AAE00)
class UMovieSceneMarginSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x2A92A80];                                 // 0x5B1AAE00(0x2A92A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginSection");
		return ptr;
	}

};


// Class UMG.MovieSceneMarginTrack
// 0xFFFFFFFFA4E17600 (0x0000 - 0x5B1E8A00)
class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneMarginTrack");
		return ptr;
	}

};


// Class UMG.MovieSceneWidgetMaterialTrack
// 0x1A40 (0x5DBE8940 - 0x5DBE6F00)
class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
{
public:
	unsigned char                                      UnknownData00[0x1A40];                                    // 0x5DBE6F00(0x1A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MovieSceneWidgetMaterialTrack");
		return ptr;
	}

};


// Class UMG.TextLayoutWidget
// 0xEB800 (0x5AB73800 - 0x5AA88000)
class UTextLayoutWidget : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xEB800];                                   // 0x5AA88000(0xEB800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextLayoutWidget");
		return ptr;
	}


	void SetJustification();
};


// Class UMG.MultiLineEditableText
// 0x1500 (0x5AB74D00 - 0x5AB73800)
class UMultiLineEditableText : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5AB73800(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableText");
		return ptr;
	}


	void SetWidgetStyle();
	void SetText();
	void SetIsReadOnly();
	void SetHintText();
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature();
	void OnMultiLineEditableTextChangedEvent__DelegateSignature();
	void GetText();
	void GetHintText();
};


// Class UMG.MultiLineEditableTextBox
// 0x2900 (0x5AB76100 - 0x5AB73800)
class UMultiLineEditableTextBox : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x2900];                                    // 0x5AB73800(0x2900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.MultiLineEditableTextBox");
		return ptr;
	}


	void SetTextStyle();
	void SetText();
	void SetIsReadOnly();
	void SetHintText();
	void SetError();
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature();
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature();
	void GetText();
	void GetHintText();
};


// Class UMG.NamedSlot
// 0x0000
class UNamedSlot : public UContentWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlot");
		return ptr;
	}

};


// Class UMG.NamedSlotInterface
// 0x0000
class UNamedSlotInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NamedSlotInterface");
		return ptr;
	}

};


// Class UMG.NativeWidgetHost
// 0xFFFFFFFFA5578000 (0x0000 - 0x5AA88000)
class UNativeWidgetHost : public UWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.NativeWidgetHost");
		return ptr;
	}

};


// Class UMG.Overlay
// 0xFFFFFFFFAF3C3840 (0x0000 - 0x50C3C7C0)
class UOverlay : public UPanelWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Overlay");
		return ptr;
	}


	void AddChildToOverlay();
};


// Class UMG.OverlaySlot
// 0x8B00 (0x5DC3F480 - 0x5DC36980)
class UOverlaySlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x8B00];                                    // 0x5DC36980(0x8B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.OverlaySlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.ProgressBar
// 0x31B6D00 (0x5DC3ED00 - 0x5AA88000)
class UProgressBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31B6D00];                                 // 0x5AA88000(0x31B6D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ProgressBar");
		return ptr;
	}


	void SetPercent();
	void SetIsMarquee();
	void SetFillColorAndOpacity();
};


// Class UMG.RetainerBox
// 0x5DC3FF00
class URetainerBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC3FF00];                                // 0x0000(0x5DC3FF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RetainerBox");
		return ptr;
	}


	void SetTextureParameter();
	void SetRetainedRendering();
	void SetRenderingPhase();
	void SetEffectMaterial();
	void RequestRender();
	void GetEffectMaterial();
};


// Class UMG.RichTextBlock
// 0x30DD700 (0x5DC50F00 - 0x5AB73800)
class URichTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x30DD700];                                 // 0x5AB73800(0x30DD700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlock");
		return ptr;
	}


	void SetTextStyleSet();
	void SetText();
	void SetMinDesiredWidth();
	void SetDefaultTextStyle();
	void SetDefaultStrikeBrush();
	void SetDefaultShadowOffset();
	void SetDefaultShadowColorAndOpacity();
	void SetDefaultFont();
	void SetDefaultColorAndOpacity();
	void SetAutoWrapText();
	void GetText();
	void GetDecoratorByClass();
	void ClearAllDefaultStyleOverrides();
};


// Class UMG.RichTextBlockDecorator
// 0x0000
class URichTextBlockDecorator : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockDecorator");
		return ptr;
	}

};


// Class UMG.RichTextBlockImageDecorator
// 0x5DC50E80
class URichTextBlockImageDecorator : public URichTextBlockDecorator
{
public:
	unsigned char                                      UnknownData00[0x5DC50E80];                                // 0x0000(0x5DC50E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.RichTextBlockImageDecorator");
		return ptr;
	}

};


// Class UMG.SafeZone
// 0x5DC50A80
class USafeZone : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC50A80];                                // 0x0000(0x5DC50A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZone");
		return ptr;
	}


	void SetSidesToPad();
};


// Class UMG.SafeZoneSlot
// 0x19E80 (0x5DC50800 - 0x5DC36980)
class USafeZoneSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x19E80];                                   // 0x5DC36980(0x19E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SafeZoneSlot");
		return ptr;
	}

};


// Class UMG.ScaleBox
// 0x5DC50400
class UScaleBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC50400];                                // 0x0000(0x5DC50400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBox");
		return ptr;
	}


	void SetUserSpecifiedScale();
	void SetStretchDirection();
	void SetStretch();
	void SetIgnoreInheritedScale();
};


// Class UMG.ScaleBoxSlot
// 0x19780 (0x5DC50100 - 0x5DC36980)
class UScaleBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x19780];                                   // 0x5DC36980(0x19780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScaleBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.ScrollBar
// 0x31C9D80 (0x5DC51D80 - 0x5AA88000)
class UScrollBar : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31C9D80];                                 // 0x5AA88000(0x31C9D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBar");
		return ptr;
	}


	void SetState();
};


// Class UMG.ScrollBoxSlot
// 0x1B100 (0x5DC51A80 - 0x5DC36980)
class UScrollBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x1B100];                                   // 0x5DC36980(0x1B100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.ScrollBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.SizeBox
// 0x5DC52F80
class USizeBox : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC52F80];                                // 0x0000(0x5DC52F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBox");
		return ptr;
	}


	void SetWidthOverride();
	void SetMinDesiredWidth();
	void SetMinDesiredHeight();
	void SetMinAspectRatio();
	void SetMaxDesiredWidth();
	void SetMaxDesiredHeight();
	void SetMaxAspectRatio();
	void SetHeightOverride();
	void ClearWidthOverride();
	void ClearMinDesiredWidth();
	void ClearMinDesiredHeight();
	void ClearMinAspectRatio();
	void ClearMaxDesiredWidth();
	void ClearMaxDesiredHeight();
	void ClearMaxAspectRatio();
	void ClearHeightOverride();
};


// Class UMG.SizeBoxSlot
// 0x1C300 (0x5DC52C80 - 0x5DC36980)
class USizeBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x1C300];                                   // 0x5DC36980(0x1C300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SizeBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.SlateBlueprintLibrary
// 0x0000
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateBlueprintLibrary");
		return ptr;
	}


	void TransformVectorLocalToAbsolute();
	void TransformVectorAbsoluteToLocal();
	void TransformScalarLocalToAbsolute();
	void TransformScalarAbsoluteToLocal();
	void ScreenToWidgetLocal();
	void ScreenToWidgetAbsolute();
	void ScreenToViewport();
	void LocalToViewport();
	void LocalToAbsolute();
	void IsUnderLocation();
	void GetLocalTopLeft();
	void GetLocalSize();
	void GetAbsoluteSize();
	void EqualEqual_SlateBrush();
	void AbsoluteToViewport();
	void AbsoluteToLocal();
};


// Class UMG.SlateVectorArtData
// 0x5DBE8580
class USlateVectorArtData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBE8580];                                // 0x0000(0x5DBE8580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateVectorArtData");
		return ptr;
	}

};


// Class UMG.SlateAccessibleWidgetData
// 0x5AA83A00
class USlateAccessibleWidgetData : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5AA83A00];                                // 0x0000(0x5AA83A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SlateAccessibleWidgetData");
		return ptr;
	}

};


// Class UMG.Slider
// 0x31CC400 (0x5DC54400 - 0x5AA88000)
class USlider : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31CC400];                                 // 0x5AA88000(0x31CC400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Slider");
		return ptr;
	}


	void SetValue();
	void SetStepSize();
	void SetSliderHandleColor();
	void SetSliderBarColor();
	void SetMinValue();
	void SetMaxValue();
	void SetLocked();
	void SetIndentHandle();
	void GetValue();
	void GetNormalizedValue();
};


// Class UMG.Spacer
// 0x31CC300 (0x5DC54300 - 0x5AA88000)
class USpacer : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31CC300];                                 // 0x5AA88000(0x31CC300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Spacer");
		return ptr;
	}


	void SetSize();
};


// Class UMG.SpinBox
// 0xEE400 (0x5AB76400 - 0x5AA88000)
class USpinBox : public UWidget
{
public:
	unsigned char                                      UnknownData00[0xEE400];                                   // 0x5AA88000(0xEE400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.SpinBox");
		return ptr;
	}


	void SetValue();
	void SetMinValue();
	void SetMinSliderValue();
	void SetMinFractionalDigits();
	void SetMaxValue();
	void SetMaxSliderValue();
	void SetMaxFractionalDigits();
	void SetForegroundColor();
	void SetDelta();
	void SetAlwaysUsesDeltaSnap();
	void OnSpinBoxValueCommittedEvent__DelegateSignature();
	void OnSpinBoxValueChangedEvent__DelegateSignature();
	void OnSpinBoxBeginSliderMovement__DelegateSignature();
	void GetValue();
	void GetMinValue();
	void GetMinSliderValue();
	void GetMinFractionalDigits();
	void GetMaxValue();
	void GetMaxSliderValue();
	void GetMaxFractionalDigits();
	void GetDelta();
	void GetAlwaysUsesDeltaSnap();
	void ClearMinValue();
	void ClearMinSliderValue();
	void ClearMaxValue();
	void ClearMaxSliderValue();
};


// Class UMG.TextBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UTextBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBinding");
		return ptr;
	}


	void GetTextValue();
	void GetStringValue();
};


// Class UMG.TextBlock
// 0x30E1E80 (0x5DC55680 - 0x5AB73800)
class UTextBlock : public UTextLayoutWidget
{
public:
	unsigned char                                      UnknownData00[0x30E1E80];                                 // 0x5AB73800(0x30E1E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TextBlock");
		return ptr;
	}


	void SetText();
	void SetStrikeBrush();
	void SetShadowOffset();
	void SetShadowColorAndOpacity();
	void SetOpacity();
	void SetMinDesiredWidth();
	void SetFont();
	void SetColorAndOpacity();
	void SetAutoWrapText();
	void GetText();
	void GetDynamicOutlineMaterial();
	void GetDynamicFontMaterial();
};


// Class UMG.Throbber
// 0x31CF280 (0x5DC57280 - 0x5AA88000)
class UThrobber : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x31CF280];                                 // 0x5AA88000(0x31CF280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Throbber");
		return ptr;
	}


	void SetNumberOfPieces();
	void SetAnimateVertically();
	void SetAnimateOpacity();
	void SetAnimateHorizontally();
};


// Class UMG.TileView
// 0xA3380 (0x5DC56F80 - 0x5DBB3C00)
class UTileView : public UListView
{
public:
	unsigned char                                      UnknownData00[0xA3380];                                   // 0x5DBB3C00(0xA3380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.TileView");
		return ptr;
	}


	void SetEntryWidth();
	void SetEntryHeight();
};


// Class UMG.UMGSequencePlayer
// 0x5DC56E00
class UUMGSequencePlayer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC56E00];                                // 0x0000(0x5DC56E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UMGSequencePlayer");
		return ptr;
	}


	void SetUserTag();
	void GetUserTag();
};


// Class UMG.UniformGridPanel
// 0xD01A140 (0x5DC56900 - 0x50C3C7C0)
class UUniformGridPanel : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xD01A140];                                 // 0x50C3C7C0(0xD01A140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridPanel");
		return ptr;
	}


	void SetSlotPadding();
	void SetMinDesiredSlotWidth();
	void SetMinDesiredSlotHeight();
	void AddChildToUniformGrid();
};


// Class UMG.UniformGridSlot
// 0x1FB80 (0x5DC56500 - 0x5DC36980)
class UUniformGridSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x1FB80];                                   // 0x5DC36980(0x1FB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.UniformGridSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetRow();
	void SetHorizontalAlignment();
	void SetColumn();
};


// Class UMG.VerticalBoxSlot
// 0x21880 (0x5DC58200 - 0x5DC36980)
class UVerticalBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x21880];                                   // 0x5DC36980(0x21880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VerticalBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetSize();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.Viewport
// 0x5DC57E80
class UViewport : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC57E80];                                // 0x0000(0x5DC57E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.Viewport");
		return ptr;
	}


	void Spawn();
	void SetViewRotation();
	void SetViewLocation();
	void GetViewRotation();
	void GetViewportWorld();
	void GetViewLocation();
};


// Class UMG.VisibilityBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UVisibilityBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.VisibilityBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetAnimation
// 0x2A2AC00 (0x5DC57600 - 0x5B22CA00)
class UWidgetAnimation : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x2A2AC00];                                 // 0x5B22CA00(0x2A2AC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimation");
		return ptr;
	}


	void UnbindFromAnimationStarted();
	void UnbindFromAnimationFinished();
	void UnbindAllFromAnimationStarted();
	void UnbindAllFromAnimationFinished();
	void GetStartTime();
	void GetEndTime();
	void BindToAnimationStarted();
	void BindToAnimationFinished();
};


// Class UMG.WidgetAnimationDelegateBinding
// 0x5DBE8260
class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
{
public:
	unsigned char                                      UnknownData00[0x5DBE8260];                                // 0x0000(0x5DBE8260) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationDelegateBinding");
		return ptr;
	}

};


// Class UMG.WidgetAnimationPlayCallbackProxy
// 0x5DC58D80
class UWidgetAnimationPlayCallbackProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC58D80];                                // 0x0000(0x5DC58D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetAnimationPlayCallbackProxy");
		return ptr;
	}


	void CreatePlayAnimationTimeRangeProxyObject();
	void CreatePlayAnimationProxyObject();
};


// Class UMG.WidgetBinding
// 0xFFFFFFFFA23C9B00 (0x0000 - 0x5DC36500)
class UWidgetBinding : public UPropertyBinding
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBinding");
		return ptr;
	}


	void GetValue();
};


// Class UMG.WidgetBlueprintGeneratedClass
// 0x1B00 (0x5DC5A180 - 0x5DC58680)
class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x1B00];                                    // 0x5DC58680(0x1B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintGeneratedClass");
		return ptr;
	}

};


// Class UMG.WidgetBlueprintLibrary
// 0x0000
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetBlueprintLibrary");
		return ptr;
	}


	void UnlockMouse();
	void Unhandled();
	void SetWindowTitleBarState();
	void SetWindowTitleBarOnCloseClickedDelegate();
	void SetWindowTitleBarCloseButtonActive();
	void SetUserFocus();
	void SetMousePosition();
	void SetInputMode_UIOnlyEx();
	void SetInputMode_UIOnly();
	void SetInputMode_GameOnly();
	void SetInputMode_GameAndUIEx();
	void SetInputMode_GameAndUI();
	void SetHardwareCursor();
	void SetFocusToGameViewport();
	void SetColorVisionDeficiencyType();
	void SetBrushResourceToTexture();
	void SetBrushResourceToMaterial();
	void RestorePreviousWindowTitleBarState();
	void ReleaseMouseCapture();
	void ReleaseJoystickCapture();
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	void NoResourceBrush();
	void MakeBrushFromTexture();
	void MakeBrushFromMaterial();
	void MakeBrushFromAsset();
	void LockMouse();
	void IsDragDropping();
	void Handled();
	void GetSafeZonePadding();
	void GetKeyEventFromAnalogInputEvent();
	void GetInputEventFromPointerEvent();
	void GetInputEventFromNavigationEvent();
	void GetInputEventFromKeyEvent();
	void GetInputEventFromCharacterEvent();
	void GetDynamicMaterial();
	void GetDragDroppingContent();
	void GetBrushResourceAsTexture2D();
	void GetBrushResourceAsMaterial();
	void GetBrushResource();
	void GetAllWidgetsWithInterface();
	void GetAllWidgetsOfClass();
	void EndDragDrop();
	void DrawTextFormatted();
	void DrawText();
	void DrawLines();
	void DrawLine();
	void DrawBox();
	void DismissAllMenus();
	void DetectDragIfPressed();
	void DetectDrag();
	void CreateDragDropOperation();
	void Create();
	void ClearUserFocus();
	void CaptureMouse();
	void CaptureJoystick();
	void CancelDragDrop();
};


// Class UMG.WidgetComponent
// 0xD01D1E0 (0x5DC5BE80 - 0x50C3ECA0)
class UWidgetComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xD01D1E0];                                 // 0x50C3ECA0(0xD01D1E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetComponent");
		return ptr;
	}


	void SetWindowVisibility();
	void SetWindowFocusable();
	void SetWidgetSpace();
	void SetWidget();
	void SetTwoSided();
	void SetTintColorAndOpacity();
	void SetTickWhenOffscreen();
	void SetRedrawTime();
	void SetPivot();
	void SetOwnerPlayer();
	void SetManuallyRedraw();
	void SetGeometryMode();
	void SetDrawSize();
	void SetDrawAtDesiredSize();
	void SetCylinderArcAngle();
	void SetBackgroundColor();
	void RequestRedraw();
	void GetWindowVisiblility();
	void GetWindowFocusable();
	void GetWidgetSpace();
	void GetUserWidgetObject();
	void GetTwoSided();
	void GetTickWhenOffscreen();
	void GetRenderTarget();
	void GetRedrawTime();
	void GetPivot();
	void GetOwnerPlayer();
	void GetMaterialInstance();
	void GetManuallyRedraw();
	void GetGeometryMode();
	void GetDrawSize();
	void GetDrawAtDesiredSize();
	void GetCylinderArcAngle();
	void GetCurrentDrawSize();
};


// Class UMG.WidgetInteractionComponent
// 0xCFC4500 (0x5DC5CC80 - 0x50C98780)
class UWidgetInteractionComponent : public USceneComponent
{
public:
	unsigned char                                      UnknownData00[0xCFC4500];                                 // 0x50C98780(0xCFC4500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetInteractionComponent");
		return ptr;
	}


	void SetFocus();
	void SetCustomHitResult();
	void SendKeyChar();
	void ScrollWheel();
	void ReleasePointerKey();
	void ReleaseKey();
	void PressPointerKey();
	void PressKey();
	void PressAndReleaseKey();
	void IsOverInteractableWidget();
	void IsOverHitTestVisibleWidget();
	void IsOverFocusableWidget();
	void GetLastHitResult();
	void GetHoveredWidgetComponent();
	void Get2DHitLocation();
};


// Class UMG.WidgetLayoutLibrary
// 0x0000
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetLayoutLibrary");
		return ptr;
	}


	void SlotAsWrapBoxSlot();
	void SlotAsWidgetSwitcherSlot();
	void SlotAsVerticalBoxSlot();
	void SlotAsUniformGridSlot();
	void SlotAsSizeBoxSlot();
	void SlotAsScrollBoxSlot();
	void SlotAsScaleBoxSlot();
	void SlotAsSafeBoxSlot();
	void SlotAsOverlaySlot();
	void SlotAsHorizontalBoxSlot();
	void SlotAsGridSlot();
	void SlotAsCanvasSlot();
	void SlotAsBorderSlot();
	void RemoveAllWidgets();
	void ProjectWorldLocationToWidgetPosition();
	void GetViewportWidgetGeometry();
	void GetViewportSize();
	void GetViewportScale();
	void GetPlayerScreenWidgetGeometry();
	void GetMousePositionScaledByDPI();
	void GetMousePositionOnViewport();
	void GetMousePositionOnPlatform();
};


// Class UMG.WidgetNavigation
// 0x5DC5F300
class UWidgetNavigation : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC5F300];                                // 0x0000(0x5DC5F300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetNavigation");
		return ptr;
	}

};


// Class UMG.WidgetSwitcher
// 0xD022740 (0x5DC5EF00 - 0x50C3C7C0)
class UWidgetSwitcher : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xD022740];                                 // 0x50C3C7C0(0xD022740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcher");
		return ptr;
	}


	void SetActiveWidgetIndex();
	void SetActiveWidget();
	void GetWidgetAtIndex();
	void GetNumWidgets();
	void GetActiveWidgetIndex();
	void GetActiveWidget();
};


// Class UMG.WidgetSwitcherSlot
// 0x28280 (0x5DC5EC00 - 0x5DC36980)
class UWidgetSwitcherSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x28280];                                   // 0x5DC36980(0x28280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetSwitcherSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.WidgetTree
// 0x5DC5EB80
class UWidgetTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC5EB80];                                // 0x0000(0x5DC5EB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WidgetTree");
		return ptr;
	}

};


// Class UMG.WindowTitleBarArea
// 0x5DC5E900
class UWindowTitleBarArea : public UContentWidget
{
public:
	unsigned char                                      UnknownData00[0x5DC5E900];                                // 0x0000(0x5DC5E900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarArea");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.WindowTitleBarAreaSlot
// 0x29500 (0x5DC5FE80 - 0x5DC36980)
class UWindowTitleBarAreaSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x29500];                                   // 0x5DC36980(0x29500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WindowTitleBarAreaSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
};


// Class UMG.WrapBox
// 0xD0233C0 (0x5DC5FB80 - 0x50C3C7C0)
class UWrapBox : public UPanelWidget
{
public:
	unsigned char                                      UnknownData00[0xD0233C0];                                 // 0x50C3C7C0(0xD0233C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBox");
		return ptr;
	}


	void SetInnerSlotPadding();
	void AddChildToWrapBox();
};


// Class UMG.WrapBoxSlot
// 0x4A600 (0x5DC80F80 - 0x5DC36980)
class UWrapBoxSlot : public UPanelSlot
{
public:
	unsigned char                                      UnknownData00[0x4A600];                                   // 0x5DC36980(0x4A600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UMG.WrapBoxSlot");
		return ptr;
	}


	void SetVerticalAlignment();
	void SetPadding();
	void SetHorizontalAlignment();
	void SetFillSpanWhenLessThan();
	void SetFillEmptySpace();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
