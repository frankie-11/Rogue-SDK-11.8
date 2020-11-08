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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}


	void UnpinComponent();
	void StopARSession();
	void StartARSession();
	void SetAlignmentTransform();
	void RemovePin();
	void PinComponentToTraceResult();
	void PinComponent();
	void PauseARSession();
	void LineTraceTrackedObjects3D();
	void LineTraceTrackedObjects();
	void IsSessionTypeSupported();
	void IsSessionTrackingFeatureSupported();
	void IsARSupported();
	void GetWorldMappingStatus();
	void GetTrackingQualityReason();
	void GetTrackingQuality();
	void GetSupportedVideoFormats();
	void GetSessionConfig();
	void GetPointCloud();
	void GetPersonSegmentationImage();
	void GetPersonSegmentationDepthImage();
	void GetCurrentLightEstimate();
	void GetCameraImage();
	void GetCameraDepth();
	void GetARSessionStatus();
	void GetAllTrackedPoses();
	void GetAllTrackedPoints();
	void GetAllTrackedPlanes();
	void GetAllTrackedImages();
	void GetAllTrackedEnvironmentCaptureProbes();
	void GetAllTracked2DPoses();
	void GetAllPins();
	void GetAllGeometries();
	void DebugDrawTrackedGeometry();
	void DebugDrawPin();
	void AddRuntimeCandidateImage();
	void AddManualEnvironmentCaptureProbe();
};


// Class AugmentedReality.ARTraceResultLibrary
// 0x0000
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}


	void GetTrackedGeometry();
	void GetTraceChannel();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetDistanceFromCamera();
};


// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0000
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}

};


// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x5DBF0480
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x5DBF0480];                                // 0x0000(0x5DBF0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}


	void ARSaveWorld();
};


// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x5DBF0180
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	unsigned char                                      UnknownData00[0x5DBF0180];                                // 0x0000(0x5DBF0180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}


	void ARGetCandidateObject();
};


// Class AugmentedReality.ARLightEstimate
// 0x0000
class UARLightEstimate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}

};


// Class AugmentedReality.ARBasicLightEstimate
// 0x5DBF1F80
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	unsigned char                                      UnknownData00[0x5DBF1F80];                                // 0x0000(0x5DBF1F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}


	void GetAmbientIntensityLumens();
	void GetAmbientColorTemperatureKelvin();
	void GetAmbientColor();
};


// Class AugmentedReality.AROriginActor
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class AAROriginActor : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AROriginActor");
		return ptr;
	}

};


// Class AugmentedReality.ARPin
// 0x5DBF1700
class UARPin : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBF1700];                                // 0x0000(0x5DBF1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}


	void GetTrackingState();
	void GetTrackedGeometry();
	void GetPinnedComponent();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetDebugName();
	void DebugDraw();
};


// Class AugmentedReality.ARSessionConfig
// 0x2B56640 (0x5DBF3A80 - 0x5B09D440)
class UARSessionConfig : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2B56640];                                 // 0x5B09D440(0x2B56640) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}


	void ShouldResetTrackedObjects();
	void ShouldResetCameraTracking();
	void ShouldRenderCameraOverlay();
	void ShouldEnableCameraTracking();
	void ShouldEnableAutoFocus();
	void SetWorldMapData();
	void SetSessionTrackingFeatureToEnable();
	void SetResetTrackedObjects();
	void SetResetCameraTracking();
	void SetFaceTrackingUpdate();
	void SetFaceTrackingDirection();
	void SetEnableAutoFocus();
	void SetDesiredVideoFormat();
	void SetCandidateObjectList();
	void GetWorldMapData();
	void GetWorldAlignment();
	void GetSessionType();
	void GetPlaneDetectionMode();
	void GetMaxNumSimultaneousImagesTracked();
	void GetLightEstimationMode();
	void GetFrameSyncMode();
	void GetFaceTrackingUpdate();
	void GetFaceTrackingDirection();
	void GetEnvironmentCaptureProbeType();
	void GetEnabledSessionTrackingFeature();
	void GetDesiredVideoFormat();
	void GetCandidateObjectList();
	void GetCandidateImageList();
	void AddCandidateObject();
	void AddCandidateImage();
};


// Class AugmentedReality.ARSharedWorldGameMode
// 0x2C52C00 (0x5DBF3880 - 0x5AFA0C80)
class AARSharedWorldGameMode : public AGameMode
{
public:
	unsigned char                                      UnknownData00[0x2C52C00];                                 // 0x5AFA0C80(0x2C52C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}


	void SetPreviewImageData();
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData();
	void GetARSharedWorldGameState();
};


// Class AugmentedReality.ARSharedWorldGameState
// 0x2C40560 (0x5DBE25E0 - 0x5AFA2080)
class AARSharedWorldGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x2C40560];                                 // 0x5AFA2080(0x2C40560) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}


	void K2_OnARWorldMapIsReady();
};


// Class AugmentedReality.ARSharedWorldPlayerController
// 0xFFFFFFFFA4EB9780 (0x0000 - 0x5B146880)
class AARSharedWorldPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}


	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData();
	void ClientUpdateARWorldData();
	void ClientInitSharedWorld();
};


// Class AugmentedReality.ARSkyLight
// 0xFFFFFFFFFFFFFF00 (0x5DBF5180 - 0x5DBF5280)
class AARSkyLight : public ASkyLight
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}


	void SetEnvironmentCaptureProbe();
};


// Class AugmentedReality.ARTexture
// 0xFFFFFFFFFFFED740 (0x5DBE22C0 - 0x5DBF4B80)
class UARTexture : public UTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraImage
// 0xFFFFFFFFA241DD40 (0x0000 - 0x5DBE22C0)
class UARTextureCameraImage : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}

};


// Class AugmentedReality.ARTextureCameraDepth
// 0xFFFFFFFFFFFFFEC0 (0x5DBE2180 - 0x5DBE22C0)
class UARTextureCameraDepth : public UARTexture
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}

};


// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x5DBE20E0
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	unsigned char                                      UnknownData00[0x5DBE20E0];                                // 0x0000(0x5DBE20E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}

};


// Class AugmentedReality.ARTraceResultDummy
// 0x0000
class UARTraceResultDummy : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedGeometry
// 0x5DBF5E80
class UARTrackedGeometry : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBF5E80];                                // 0x0000(0x5DBF5E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}


	void IsTracked();
	void GetUnderlyingMesh();
	void GetTrackingState();
	void GetObjectClassification();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetLastUpdateTimestamp();
	void GetLastUpdateFrameNumber();
	void GetDebugName();
};


// Class AugmentedReality.ARPlaneGeometry
// 0xFFFFFFFFFFFEBE00 (0x5DBE1C80 - 0x5DBF5E80)
class UARPlaneGeometry : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}


	void GetSubsumedBy();
	void GetOrientation();
	void GetExtent();
	void GetCenter();
	void GetBoundaryPolygonInLocalSpace();
};


// Class AugmentedReality.ARTrackedPoint
// 0xFFFFFFFFA240A180 (0x0000 - 0x5DBF5E80)
class UARTrackedPoint : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}

};


// Class AugmentedReality.ARTrackedImage
// 0xFFFFFFFFFFFFF980 (0x5DBF5800 - 0x5DBF5E80)
class UARTrackedImage : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}


	void GetEstimateSize();
	void GetDetectedImage();
};


// Class AugmentedReality.ARTrackedQRCode
// 0xFFFFFFFFFFFFFF00 (0x5DBF5700 - 0x5DBF5800)
class UARTrackedQRCode : public UARTrackedImage
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedQRCode");
		return ptr;
	}

};


// Class AugmentedReality.ARFaceGeometry
// 0x1380 (0x5DBF7200 - 0x5DBF5E80)
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x1380];                                    // 0x5DBF5E80(0x1380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}


	void GetWorldSpaceEyeTransform();
	void GetLocalSpaceEyeTransform();
	void GetBlendShapeValue();
	void GetBlendShapes();
};


// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x1200 (0x5DBF7080 - 0x5DBF5E80)
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x1200];                                    // 0x5DBF5E80(0x1200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}


	void GetExtent();
	void GetEnvironmentCaptureTexture();
};


// Class AugmentedReality.ARTrackedObject
// 0x1100 (0x5DBF6F80 - 0x5DBF5E80)
class UARTrackedObject : public UARTrackedGeometry
{
public:
	unsigned char                                      UnknownData00[0x1100];                                    // 0x5DBF5E80(0x1100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}


	void GetDetectedObject();
};


// Class AugmentedReality.ARTrackedPose
// 0xFFFFFFFFA240A180 (0x0000 - 0x5DBF5E80)
class UARTrackedPose : public UARTrackedGeometry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPose");
		return ptr;
	}


	void GetTrackedPoseData();
};


// Class AugmentedReality.ARTrackableNotifyComponent
// 0xD046600 (0x5DBF6480 - 0x50BAFE80)
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xD046600];                                 // 0x50BAFE80(0xD046600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackableNotifyComponent");
		return ptr;
	}

};


// Class AugmentedReality.ARTypesDummyClass
// 0x0000
class UARTypesDummyClass : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}

};


// Class AugmentedReality.ARCandidateImage
// 0x2B5AC40 (0x5DBF8080 - 0x5B09D440)
class UARCandidateImage : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2B5AC40];                                 // 0x5B09D440(0x2B5AC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}


	void GetPhysicalWidth();
	void GetPhysicalHeight();
	void GetOrientation();
	void GetFriendlyName();
	void GetCandidateTexture();
};


// Class AugmentedReality.ARCandidateObject
// 0x2B44200 (0x5DBE1640 - 0x5B09D440)
class UARCandidateObject : public UDataAsset
{
public:
	unsigned char                                      UnknownData00[0x2B44200];                                 // 0x5B09D440(0x2B44200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}


	void SetFriendlyName();
	void SetCandidateObjectData();
	void SetBoundingBox();
	void GetFriendlyName();
	void GetCandidateObjectData();
	void GetBoundingBox();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
