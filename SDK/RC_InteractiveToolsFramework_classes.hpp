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

// Class InteractiveToolsFramework.InputBehavior
// 0x0000
class UInputBehavior : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AnyButtonInputBehavior
// 0x0000
class UAnyButtonInputBehavior : public UInputBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AnyButtonInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// 0x0000
class UInteractiveGizmoBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// 0x0000
class UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmo
// 0x5E417880
class UInteractiveGizmo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E417880];                                // 0x0000(0x5E417880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisAngleGizmo
// 0x1A80 (0x5E419300 - 0x5E417880)
class UAxisAngleGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x1A80];                                    // 0x5E417880(0x1A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisAngleGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// 0x0000
class UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.AxisPositionGizmo
// 0x1400 (0x5E418C80 - 0x5E417880)
class UAxisPositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x1400];                                    // 0x5E417880(0x1400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.AxisPositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantAxisSource
// 0x5E418B80
class UGizmoConstantAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E418B80];                                // 0x0000(0x5E418B80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// 0x5E418980
class UGizmoConstantFrameAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E418980];                                // 0x0000(0x5E418980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoConstantFrameAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoWorldAxisSource
// 0x5E418880
class UGizmoWorldAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E418880];                                // 0x0000(0x5E418880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoWorldAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentAxisSource
// 0x5E418700
class UGizmoComponentAxisSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E418700];                                // 0x0000(0x5E418700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentAxisSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolPropertySet
// 0x5E418600
class UInteractiveToolPropertySet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E418600];                                // 0x0000(0x5E418600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolPropertySet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushBaseProperties
// 0x1D80 (0x5E41A380 - 0x5E418600)
class UBrushBaseProperties : public UInteractiveToolPropertySet
{
public:
	unsigned char                                      UnknownData00[0x1D80];                                    // 0x5E418600(0x1D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushBaseProperties");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveTool
// 0x5E41A280
class UInteractiveTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41A280];                                // 0x0000(0x5E41A280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleSelectionTool
// 0xFFFFFFFFA1BE5D80 (0x0000 - 0x5E41A280)
class USingleSelectionTool : public UInteractiveTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointTool
// 0x0000
class UMeshSurfacePointTool : public USingleSelectionTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BaseBrushTool
// 0x5E41A080
class UBaseBrushTool : public UMeshSurfacePointTool
{
public:
	unsigned char                                      UnknownData00[0x5E41A080];                                // 0x0000(0x5E41A080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.BaseBrushTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// 0x0000
class UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicatorBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.BrushStampIndicator
// 0x2080 (0x5E419900 - 0x5E417880)
class UBrushStampIndicator : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x2080];                                    // 0x5E417880(0x2080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.BrushStampIndicator");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragInputBehavior
// 0x5E419880
class UClickDragInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x5E419880];                                // 0x0000(0x5E419880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// 0xFFFFFFFFA1BE6780 (0x0000 - 0x5E419880)
class ULocalClickDragInputBehavior : public UClickDragInputBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.LocalClickDragInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolBuilder
// 0x0000
class UInteractiveToolBuilder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragToolBuilder
// 0x0000
class UClickDragToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ClickDragTool
// 0xFFFFFFFFA1BE5D80 (0x0000 - 0x5E41A280)
class UClickDragTool : public UInteractiveTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ClickDragTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InternalToolFrameworkActor
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AInternalToolFrameworkActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InternalToolFrameworkActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoActor
// 0x0000
class AGizmoActor : public AInternalToolFrameworkActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseComponent
// 0x3612080 (0x5E419600 - 0x5AE07580)
class UGizmoBaseComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x3612080];                                 // 0x5AE07580(0x3612080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseComponent");
		return ptr;
	}


	void UpdateWorldLocalState();
	void UpdateHoverState();
};


// Class InteractiveToolsFramework.GizmoArrowComponent
// 0x1F00 (0x5E41B500 - 0x5E419600)
class UGizmoArrowComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x1F00];                                    // 0x5E419600(0x1F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoArrowComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBoxComponent
// 0x1C00 (0x5E41B200 - 0x5E419600)
class UGizmoBoxComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x1C00];                                    // 0x5E419600(0x1C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBoxComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoCircleComponent
// 0x1900 (0x5E41AF00 - 0x5E419600)
class UGizmoCircleComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x1900];                                    // 0x5E419600(0x1900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoCircleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformSource
// 0x0000
class UGizmoTransformSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformSource");
		return ptr;
	}


	void SetTransform();
	void GetTransform();
};


// Class InteractiveToolsFramework.GizmoAxisSource
// 0x0000
class UGizmoAxisSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisSource");
		return ptr;
	}


	void HasTangentVectors();
	void GetTangentVectors();
	void GetOrigin();
	void GetDirection();
};


// Class InteractiveToolsFramework.GizmoClickTarget
// 0x0000
class UGizmoClickTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoClickTarget");
		return ptr;
	}


	void UpdateHoverState();
};


// Class InteractiveToolsFramework.GizmoStateTarget
// 0x0000
class UGizmoStateTarget : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoStateTarget");
		return ptr;
	}


	void EndUpdate();
	void BeginUpdate();
};


// Class InteractiveToolsFramework.GizmoFloatParameterSource
// 0x0000
class UGizmoFloatParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoFloatParameterSource");
		return ptr;
	}


	void SetParameter();
	void GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// 0x0000
class UGizmoVec2ParameterSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoVec2ParameterSource");
		return ptr;
	}


	void SetParameter();
	void GetParameter();
	void EndModify();
	void BeginModify();
};


// Class InteractiveToolsFramework.GizmoLineHandleComponent
// 0x1000 (0x5E41A600 - 0x5E419600)
class UGizmoLineHandleComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x1000];                                    // 0x5E419600(0x1000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLineHandleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoRectangleComponent
// 0x2D00 (0x5E41C300 - 0x5E419600)
class UGizmoRectangleComponent : public UGizmoBaseComponent
{
public:
	unsigned char                                      UnknownData00[0x2D00];                                    // 0x5E419600(0x2D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoRectangleComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// 0x0000
class UGizmoLambdaHitTarget : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentHitTarget
// 0x5E41C280
class UGizmoComponentHitTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41C280];                                // 0x0000(0x5E41C280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentHitTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSet
// 0x5E3B9FC0
class UInputBehaviorSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B9FC0];                                // 0x0000(0x5E3B9FC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputBehaviorSource
// 0x0000
class UInputBehaviorSource : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputBehaviorSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InputRouter
// 0x5E41C080
class UInputRouter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41C080];                                // 0x0000(0x5E41C080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InputRouter");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractionMechanic
// 0x0000
class UInteractionMechanic : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractionMechanic");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveGizmoManager
// 0x5E3B9F20
class UInteractiveGizmoManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E3B9F20];                                // 0x0000(0x5E3B9F20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveGizmoManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolContextTransactionProvider
// 0x0000
class UToolContextTransactionProvider : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolContextTransactionProvider");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolManager
// 0x5E41BD00
class UInteractiveToolManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41BD00];                                // 0x0000(0x5E41BD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolManager");
		return ptr;
	}

};


// Class InteractiveToolsFramework.ToolFrameworkComponent
// 0x0000
class UToolFrameworkComponent : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.ToolFrameworkComponent");
		return ptr;
	}

};


// Class InteractiveToolsFramework.InteractiveToolsContext
// 0x5E41BB80
class UInteractiveToolsContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41BB80];                                // 0x0000(0x5E41BB80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.InteractiveToolsContext");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoActor
// 0x5E41BA00
class AIntervalGizmoActor : public AGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x5E41BA00];                                // 0x0000(0x5E41BA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmoBuilder
// 0x0000
class UIntervalGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.IntervalGizmo
// 0x3E80 (0x5E41B700 - 0x5E417880)
class UIntervalGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x3E80];                                    // 0x5E417880(0x3E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.IntervalGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// 0x0000
class UGizmoBaseFloatParameterSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// 0x5E41D680
class UGizmoAxisIntervalParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41D680];                                // 0x0000(0x5E41D680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// 0x0000
class UKeyAsModifierInputBehavior : public UInputBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.KeyAsModifierInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// 0x0000
class UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSurfacePointToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MouseHoverBehavior
// 0x0000
class UMouseHoverBehavior : public UInputBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MouseHoverBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// 0x0000
class UMultiClickSequenceInputBehavior : public UAnyButtonInputBehavior
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiClickSequenceInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MultiSelectionTool
// 0xFFFFFFFFA1BE5D80 (0x0000 - 0x5E41A280)
class UMultiSelectionTool : public UInteractiveTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MultiSelectionTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// 0x5E41D580
class UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41D580];                                // 0x0000(0x5E41D580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalFloatParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// 0x0000
class UGizmoBaseVec2ParameterSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// 0x5E41D480
class UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41D480];                                // 0x0000(0x5E41D480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// 0x5E41D100
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41D100];                                // 0x0000(0x5E41D100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// 0x5E41CC80
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41CC80];                                // 0x0000(0x5E41CC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// 0x5E41C900
class UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41C900];                                // 0x0000(0x5E41C900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisRotationParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// 0x5E41E500
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41E500];                                // 0x0000(0x5E41E500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoUniformScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// 0x5E41E100
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41E100];                                // 0x0000(0x5E41E100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoAxisScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// 0x5E41DC00
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource
{
public:
	unsigned char                                      UnknownData00[0x5E41DC00];                                // 0x0000(0x5E41DC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// 0x0000
class UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.PlanePositionGizmo
// 0x7C00 (0x5E41F480 - 0x5E417880)
class UPlanePositionGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x7C00];                                    // 0x5E417880(0x7C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.PlanePositionGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SelectionSet
// 0x0000
class USelectionSet : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.MeshSelectionSet
// 0x5E3B9AC0
class UMeshSelectionSet : public USelectionSet
{
public:
	unsigned char                                      UnknownData00[0x5E3B9AC0];                                // 0x0000(0x5E3B9AC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.MeshSelectionSet");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickInputBehavior
// 0x5E41F200
class USingleClickInputBehavior : public UAnyButtonInputBehavior
{
public:
	unsigned char                                      UnknownData00[0x5E41F200];                                // 0x0000(0x5E41F200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickInputBehavior");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickToolBuilder
// 0x0000
class USingleClickToolBuilder : public UInteractiveToolBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickToolBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.SingleClickTool
// 0xFFFFFFFFA1BE5D80 (0x0000 - 0x5E41A280)
class USingleClickTool : public UInteractiveTool
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.SingleClickTool");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoNilStateTarget
// 0x0000
class UGizmoNilStateTarget : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoNilStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// 0x0000
class UGizmoLambdaStateTarget : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoLambdaStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// 0x0000
class UGizmoObjectModifyStateTarget : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoObjectModifyStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// 0x5E41F180
class UGizmoTransformChangeStateTarget : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41F180];                                // 0x0000(0x5E41F180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformChangeStateTarget");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoActor
// 0x5E41E980
class ATransformGizmoActor : public AGizmoActor
{
public:
	unsigned char                                      UnknownData00[0x5E41E980];                                // 0x0000(0x5E41E980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoActor");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmoBuilder
// 0x0000
class UTransformGizmoBuilder : public UInteractiveGizmoBuilder
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmoBuilder");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformGizmo
// 0x8180 (0x5E41FA00 - 0x5E417880)
class UTransformGizmo : public UInteractiveGizmo
{
public:
	unsigned char                                      UnknownData00[0x8180];                                    // 0x5E417880(0x8180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformGizmo");
		return ptr;
	}

};


// Class InteractiveToolsFramework.TransformProxy
// 0x5E41F800
class UTransformProxy : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5E41F800];                                // 0x0000(0x5E41F800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.TransformProxy");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoBaseTransformSource
// 0x0000
class UGizmoBaseTransformSource : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoBaseTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// 0x5E421000
class UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource
{
public:
	unsigned char                                      UnknownData00[0x5E421000];                                // 0x0000(0x5E421000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoComponentWorldTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoScaledTransformSource
// 0x5E420F80
class UGizmoScaledTransformSource : public UGizmoBaseTransformSource
{
public:
	unsigned char                                      UnknownData00[0x5E420F80];                                // 0x0000(0x5E420F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoScaledTransformSource");
		return ptr;
	}

};


// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// 0x5E420F00
class UGizmoTransformProxyTransformSource : public UGizmoBaseTransformSource
{
public:
	unsigned char                                      UnknownData00[0x5E420F00];                                // 0x0000(0x5E420F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class InteractiveToolsFramework.GizmoTransformProxyTransformSource");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
