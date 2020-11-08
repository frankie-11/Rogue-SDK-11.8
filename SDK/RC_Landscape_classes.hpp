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

// Class Landscape.ControlPointMeshActor
// 0x2C75380 (0x5DC13380 - 0x5AF9E000)
class AControlPointMeshActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C75380];                                 // 0x5AF9E000(0x2C75380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshActor");
		return ptr;
	}

};


// Class Landscape.ControlPointMeshComponent
// 0x1CA800 (0x5DC13300 - 0x5DA48B00)
class UControlPointMeshComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1CA800];                                  // 0x5DA48B00(0x1CA800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.ControlPointMeshComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeProxy
// 0x2C78C80 (0x5DC16C80 - 0x5AF9E000)
class ALandscapeProxy : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C78C80];                                 // 0x5AF9E000(0x2C78C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeProxy");
		return ptr;
	}


	void SetLandscapeMaterialVectorParameterValue();
	void SetLandscapeMaterialTextureParameterValue();
	void SetLandscapeMaterialScalarParameterValue();
	void EditorSetLandscapeMaterial();
	void EditorApplySpline();
	void ChangeUseTessellationComponentScreenSizeFalloff();
	void ChangeTessellationComponentScreenSizeFalloff();
	void ChangeTessellationComponentScreenSize();
	void ChangeLODDistanceFactor();
	void ChangeComponentScreenSizeToUseSubSections();
};


// Class Landscape.Landscape
// 0xFFFFFFFFA23E9380 (0x0000 - 0x5DC16C80)
class ALandscape : public ALandscapeProxy
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.Landscape");
		return ptr;
	}

};


// Class Landscape.LandscapeBlueprintBrushBase
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ALandscapeBlueprintBrushBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeBlueprintBrushBase");
		return ptr;
	}


	void RequestLandscapeUpdate();
	void Render();
	void Initialize();
	void GetBlueprintRenderDependencies();
};


// Class Landscape.LandscapeComponent
// 0x2E11E80 (0x5DC19400 - 0x5AE07580)
class ULandscapeComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2E11E80];                                 // 0x5AE07580(0x2E11E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeComponent");
		return ptr;
	}


	void GetMaterialInstanceDynamic();
	void EditorGetPaintLayerWeightByNameAtLocation();
	void EditorGetPaintLayerWeightAtLocation();
};


// Class Landscape.LandscapeGizmoActor
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ALandscapeGizmoActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoActiveActor
// 0x0000
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoActiveActor");
		return ptr;
	}

};


// Class Landscape.LandscapeGizmoRenderComponent
// 0xFFFFFFFFA51F8A80 (0x0000 - 0x5AE07580)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGizmoRenderComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeGrassType
// 0x5DBE4520
class ULandscapeGrassType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBE4520];                                // 0x0000(0x5DBE4520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeGrassType");
		return ptr;
	}

};


// Class Landscape.LandscapeHeightfieldCollisionComponent
// 0x2DDCDC0 (0x5DBE4340 - 0x5AE07580)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2DDCDC0];                                 // 0x5AE07580(0x2DDCDC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeHeightfieldCollisionComponent");
		return ptr;
	}


	void GetRenderComponent();
};


// Class Landscape.LandscapeInfo
// 0x5DC18600
class ULandscapeInfo : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC18600];                                // 0x0000(0x5DC18600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfo");
		return ptr;
	}

};


// Class Landscape.LandscapeInfoMap
// 0x0000
class ULandscapeInfoMap : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeInfoMap");
		return ptr;
	}

};


// Class Landscape.LandscapeLayerInfoObject
// 0x5DC1A500
class ULandscapeLayerInfoObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1A500];                                // 0x0000(0x5DC1A500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeLayerInfoObject");
		return ptr;
	}

};


// Class Landscape.LandscapeMaterialInstanceConstant
// 0xFFFFFFFFFFFCB3C0 (0x5DBE6640 - 0x5DC1B280)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMaterialInstanceConstant");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshCollisionComponent
// 0x36C40 (0x5DC1AF80 - 0x5DBE4340)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{
public:
	unsigned char                                      UnknownData00[0x36C40];                                   // 0x5DBE4340(0x36C40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshCollisionComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyActor
// 0x2C7CF00 (0x5DC1AF00 - 0x5AF9E000)
class ALandscapeMeshProxyActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2C7CF00];                                 // 0x5AF9E000(0x2C7CF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyActor");
		return ptr;
	}

};


// Class Landscape.LandscapeMeshProxyComponent
// 0x1D2280 (0x5DC1AD80 - 0x5DA48B00)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{
public:
	unsigned char                                      UnknownData00[0x1D2280];                                  // 0x5DA48B00(0x1D2280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeMeshProxyComponent");
		return ptr;
	}

};


// Class Landscape.LandscapeSettings
// 0x5DC1AD00
class ULandscapeSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5DC1AD00];                                // 0x0000(0x5DC1AD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSettings");
		return ptr;
	}

};


// Class Landscape.LandscapeSplinesComponent
// 0x2DDEC60 (0x5DBE61E0 - 0x5AE07580)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x2DDEC60];                                 // 0x5AE07580(0x2DDEC60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplinesComponent");
		return ptr;
	}


	void GetSplineMeshComponents();
};


// Class Landscape.LandscapeSplineControlPoint
// 0x5DC1A600
class ULandscapeSplineControlPoint : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1A600];                                // 0x0000(0x5DC1A600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineControlPoint");
		return ptr;
	}

};


// Class Landscape.LandscapeSplineSegment
// 0x5DC1C280
class ULandscapeSplineSegment : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1C280];                                // 0x0000(0x5DC1C280) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSplineSegment");
		return ptr;
	}

};


// Class Landscape.LandscapeStreamingProxy
// 0x5580 (0x5DC1C200 - 0x5DC16C80)
class ALandscapeStreamingProxy : public ALandscapeProxy
{
public:
	unsigned char                                      UnknownData00[0x5580];                                    // 0x5DC16C80(0x5580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeStreamingProxy");
		return ptr;
	}

};


// Class Landscape.LandscapeSubsystem
// 0x0000
class ULandscapeSubsystem : public UWorldSubsystem
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeSubsystem");
		return ptr;
	}

};


// Class Landscape.LandscapeWeightmapUsage
// 0x5DC1C100
class ULandscapeWeightmapUsage : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC1C100];                                // 0x0000(0x5DC1C100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.LandscapeWeightmapUsage");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeGrassOutput
// 0x5DBE6000
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{
public:
	unsigned char                                      UnknownData00[0x5DBE6000];                                // 0x0000(0x5DBE6000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeGrassOutput");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerBlend
// 0xFFFFFFFFFFFC9FE0 (0x5DBE5F60 - 0x5DC1BF80)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerBlend");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerCoords
// 0xFFFFFFFFFFFFFB80 (0x5DC1BB00 - 0x5DC1BF80)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerCoords");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSample
// 0xFFFFFFFFFFFFFA00 (0x5DC1B980 - 0x5DC1BF80)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSample");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// 0xFFFFFFFFFFFFF780 (0x5DC1B700 - 0x5DC1BF80)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerSwitch");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeLayerWeight
// 0x1580 (0x5DC1D500 - 0x5DC1BF80)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5DC1BF80(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeLayerWeight");
		return ptr;
	}

};


// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// 0x1500 (0x5DC1D480 - 0x5DC1BF80)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
public:
	unsigned char                                      UnknownData00[0x1500];                                    // 0x5DC1BF80(0x1500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Landscape.MaterialExpressionLandscapeVisibilityMask");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
