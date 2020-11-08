#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AugmentedReality.ARBlueprintLibrary.UnpinComponent
struct UARBlueprintLibrary_UnpinComponent_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StopARSession
struct UARBlueprintLibrary_StopARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.StartARSession
struct UARBlueprintLibrary_StartARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.SetAlignmentTransform
struct UARBlueprintLibrary_SetAlignmentTransform_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.RemovePin
struct UARBlueprintLibrary_RemovePin_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponentToTraceResult
struct UARBlueprintLibrary_PinComponentToTraceResult_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.PinComponent
struct UARBlueprintLibrary_PinComponent_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.PauseARSession
struct UARBlueprintLibrary_PauseARSession_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects3D
struct UARBlueprintLibrary_LineTraceTrackedObjects3D_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.LineTraceTrackedObjects
struct UARBlueprintLibrary_LineTraceTrackedObjects_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTypeSupported
struct UARBlueprintLibrary_IsSessionTypeSupported_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.IsSessionTrackingFeatureSupported
struct UARBlueprintLibrary_IsSessionTrackingFeatureSupported_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.IsARSupported
struct UARBlueprintLibrary_IsARSupported_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetWorldMappingStatus
struct UARBlueprintLibrary_GetWorldMappingStatus_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQualityReason
struct UARBlueprintLibrary_GetTrackingQualityReason_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetTrackingQuality
struct UARBlueprintLibrary_GetTrackingQuality_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetSupportedVideoFormats
struct UARBlueprintLibrary_GetSupportedVideoFormats_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetSessionConfig
struct UARBlueprintLibrary_GetSessionConfig_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetPointCloud
struct UARBlueprintLibrary_GetPointCloud_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationImage
struct UARBlueprintLibrary_GetPersonSegmentationImage_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetPersonSegmentationDepthImage
struct UARBlueprintLibrary_GetPersonSegmentationDepthImage_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetCurrentLightEstimate
struct UARBlueprintLibrary_GetCurrentLightEstimate_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraImage
struct UARBlueprintLibrary_GetCameraImage_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetCameraDepth
struct UARBlueprintLibrary_GetCameraDepth_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetARSessionStatus
struct UARBlueprintLibrary_GetARSessionStatus_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoses
struct UARBlueprintLibrary_GetAllTrackedPoses_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPoints
struct UARBlueprintLibrary_GetAllTrackedPoints_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedPlanes
struct UARBlueprintLibrary_GetAllTrackedPlanes_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedImages
struct UARBlueprintLibrary_GetAllTrackedImages_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTrackedEnvironmentCaptureProbes
struct UARBlueprintLibrary_GetAllTrackedEnvironmentCaptureProbes_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllTracked2DPoses
struct UARBlueprintLibrary_GetAllTracked2DPoses_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllPins
struct UARBlueprintLibrary_GetAllPins_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.GetAllGeometries
struct UARBlueprintLibrary_GetAllGeometries_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawTrackedGeometry
struct UARBlueprintLibrary_DebugDrawTrackedGeometry_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.DebugDrawPin
struct UARBlueprintLibrary_DebugDrawPin_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.AddRuntimeCandidateImage
struct UARBlueprintLibrary_AddRuntimeCandidateImage_Params
{
};

// Function AugmentedReality.ARBlueprintLibrary.AddManualEnvironmentCaptureProbe
struct UARBlueprintLibrary_AddManualEnvironmentCaptureProbe_Params
{
};

// Function AugmentedReality.ARTraceResultLibrary.GetTrackedGeometry
struct UARTraceResultLibrary_GetTrackedGeometry_Params
{
};

// Function AugmentedReality.ARTraceResultLibrary.GetTraceChannel
struct UARTraceResultLibrary_GetTraceChannel_Params
{
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToWorldTransform
struct UARTraceResultLibrary_GetLocalToWorldTransform_Params
{
};

// Function AugmentedReality.ARTraceResultLibrary.GetLocalToTrackingTransform
struct UARTraceResultLibrary_GetLocalToTrackingTransform_Params
{
};

// Function AugmentedReality.ARTraceResultLibrary.GetDistanceFromCamera
struct UARTraceResultLibrary_GetDistanceFromCamera_Params
{
};

// Function AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy.ARSaveWorld
struct UARSaveWorldAsyncTaskBlueprintProxy_ARSaveWorld_Params
{
};

// Function AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject
struct UARGetCandidateObjectAsyncTaskBlueprintProxy_ARGetCandidateObject_Params
{
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientIntensityLumens
struct UARBasicLightEstimate_GetAmbientIntensityLumens_Params
{
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColorTemperatureKelvin
struct UARBasicLightEstimate_GetAmbientColorTemperatureKelvin_Params
{
};

// Function AugmentedReality.ARBasicLightEstimate.GetAmbientColor
struct UARBasicLightEstimate_GetAmbientColor_Params
{
};

// Function AugmentedReality.ARPin.GetTrackingState
struct UARPin_GetTrackingState_Params
{
};

// Function AugmentedReality.ARPin.GetTrackedGeometry
struct UARPin_GetTrackedGeometry_Params
{
};

// Function AugmentedReality.ARPin.GetPinnedComponent
struct UARPin_GetPinnedComponent_Params
{
};

// Function AugmentedReality.ARPin.GetLocalToWorldTransform
struct UARPin_GetLocalToWorldTransform_Params
{
};

// Function AugmentedReality.ARPin.GetLocalToTrackingTransform
struct UARPin_GetLocalToTrackingTransform_Params
{
};

// Function AugmentedReality.ARPin.GetDebugName
struct UARPin_GetDebugName_Params
{
};

// Function AugmentedReality.ARPin.DebugDraw
struct UARPin_DebugDraw_Params
{
};

// Function AugmentedReality.ARSessionConfig.ShouldResetTrackedObjects
struct UARSessionConfig_ShouldResetTrackedObjects_Params
{
};

// Function AugmentedReality.ARSessionConfig.ShouldResetCameraTracking
struct UARSessionConfig_ShouldResetCameraTracking_Params
{
};

// Function AugmentedReality.ARSessionConfig.ShouldRenderCameraOverlay
struct UARSessionConfig_ShouldRenderCameraOverlay_Params
{
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableCameraTracking
struct UARSessionConfig_ShouldEnableCameraTracking_Params
{
};

// Function AugmentedReality.ARSessionConfig.ShouldEnableAutoFocus
struct UARSessionConfig_ShouldEnableAutoFocus_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetWorldMapData
struct UARSessionConfig_SetWorldMapData_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetSessionTrackingFeatureToEnable
struct UARSessionConfig_SetSessionTrackingFeatureToEnable_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetResetTrackedObjects
struct UARSessionConfig_SetResetTrackedObjects_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetResetCameraTracking
struct UARSessionConfig_SetResetCameraTracking_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingUpdate
struct UARSessionConfig_SetFaceTrackingUpdate_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetFaceTrackingDirection
struct UARSessionConfig_SetFaceTrackingDirection_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetEnableAutoFocus
struct UARSessionConfig_SetEnableAutoFocus_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetDesiredVideoFormat
struct UARSessionConfig_SetDesiredVideoFormat_Params
{
};

// Function AugmentedReality.ARSessionConfig.SetCandidateObjectList
struct UARSessionConfig_SetCandidateObjectList_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetWorldMapData
struct UARSessionConfig_GetWorldMapData_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetWorldAlignment
struct UARSessionConfig_GetWorldAlignment_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetSessionType
struct UARSessionConfig_GetSessionType_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetPlaneDetectionMode
struct UARSessionConfig_GetPlaneDetectionMode_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetMaxNumSimultaneousImagesTracked
struct UARSessionConfig_GetMaxNumSimultaneousImagesTracked_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetLightEstimationMode
struct UARSessionConfig_GetLightEstimationMode_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetFrameSyncMode
struct UARSessionConfig_GetFrameSyncMode_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingUpdate
struct UARSessionConfig_GetFaceTrackingUpdate_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetFaceTrackingDirection
struct UARSessionConfig_GetFaceTrackingDirection_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetEnvironmentCaptureProbeType
struct UARSessionConfig_GetEnvironmentCaptureProbeType_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetEnabledSessionTrackingFeature
struct UARSessionConfig_GetEnabledSessionTrackingFeature_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetDesiredVideoFormat
struct UARSessionConfig_GetDesiredVideoFormat_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetCandidateObjectList
struct UARSessionConfig_GetCandidateObjectList_Params
{
};

// Function AugmentedReality.ARSessionConfig.GetCandidateImageList
struct UARSessionConfig_GetCandidateImageList_Params
{
};

// Function AugmentedReality.ARSessionConfig.AddCandidateObject
struct UARSessionConfig_AddCandidateObject_Params
{
};

// Function AugmentedReality.ARSessionConfig.AddCandidateImage
struct UARSessionConfig_AddCandidateImage_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData
struct AARSharedWorldGameMode_SetPreviewImageData_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady
struct AARSharedWorldGameMode_SetARWorldSharingIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData
struct AARSharedWorldGameMode_SetARSharedWorldData_Params
{
};

// Function AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState
struct AARSharedWorldGameMode_GetARSharedWorldGameState_Params
{
};

// Function AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady
struct AARSharedWorldGameState_K2_OnARWorldMapIsReady_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ServerMarkReadyForReceiving
struct AARSharedWorldPlayerController_ServerMarkReadyForReceiving_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdatePreviewImageData
struct AARSharedWorldPlayerController_ClientUpdatePreviewImageData_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientUpdateARWorldData
struct AARSharedWorldPlayerController_ClientUpdateARWorldData_Params
{
};

// Function AugmentedReality.ARSharedWorldPlayerController.ClientInitSharedWorld
struct AARSharedWorldPlayerController_ClientInitSharedWorld_Params
{
};

// Function AugmentedReality.ARSkyLight.SetEnvironmentCaptureProbe
struct AARSkyLight_SetEnvironmentCaptureProbe_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.IsTracked
struct UARTrackedGeometry_IsTracked_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetUnderlyingMesh
struct UARTrackedGeometry_GetUnderlyingMesh_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetTrackingState
struct UARTrackedGeometry_GetTrackingState_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetObjectClassification
struct UARTrackedGeometry_GetObjectClassification_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToWorldTransform
struct UARTrackedGeometry_GetLocalToWorldTransform_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetLocalToTrackingTransform
struct UARTrackedGeometry_GetLocalToTrackingTransform_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateTimestamp
struct UARTrackedGeometry_GetLastUpdateTimestamp_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetLastUpdateFrameNumber
struct UARTrackedGeometry_GetLastUpdateFrameNumber_Params
{
};

// Function AugmentedReality.ARTrackedGeometry.GetDebugName
struct UARTrackedGeometry_GetDebugName_Params
{
};

// Function AugmentedReality.ARPlaneGeometry.GetSubsumedBy
struct UARPlaneGeometry_GetSubsumedBy_Params
{
};

// Function AugmentedReality.ARPlaneGeometry.GetOrientation
struct UARPlaneGeometry_GetOrientation_Params
{
};

// Function AugmentedReality.ARPlaneGeometry.GetExtent
struct UARPlaneGeometry_GetExtent_Params
{
};

// Function AugmentedReality.ARPlaneGeometry.GetCenter
struct UARPlaneGeometry_GetCenter_Params
{
};

// Function AugmentedReality.ARPlaneGeometry.GetBoundaryPolygonInLocalSpace
struct UARPlaneGeometry_GetBoundaryPolygonInLocalSpace_Params
{
};

// Function AugmentedReality.ARTrackedImage.GetEstimateSize
struct UARTrackedImage_GetEstimateSize_Params
{
};

// Function AugmentedReality.ARTrackedImage.GetDetectedImage
struct UARTrackedImage_GetDetectedImage_Params
{
};

// Function AugmentedReality.ARFaceGeometry.GetWorldSpaceEyeTransform
struct UARFaceGeometry_GetWorldSpaceEyeTransform_Params
{
};

// Function AugmentedReality.ARFaceGeometry.GetLocalSpaceEyeTransform
struct UARFaceGeometry_GetLocalSpaceEyeTransform_Params
{
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapeValue
struct UARFaceGeometry_GetBlendShapeValue_Params
{
};

// Function AugmentedReality.ARFaceGeometry.GetBlendShapes
struct UARFaceGeometry_GetBlendShapes_Params
{
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetExtent
struct UAREnvironmentCaptureProbe_GetExtent_Params
{
};

// Function AugmentedReality.AREnvironmentCaptureProbe.GetEnvironmentCaptureTexture
struct UAREnvironmentCaptureProbe_GetEnvironmentCaptureTexture_Params
{
};

// Function AugmentedReality.ARTrackedObject.GetDetectedObject
struct UARTrackedObject_GetDetectedObject_Params
{
};

// Function AugmentedReality.ARTrackedPose.GetTrackedPoseData
struct UARTrackedPose_GetTrackedPoseData_Params
{
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalWidth
struct UARCandidateImage_GetPhysicalWidth_Params
{
};

// Function AugmentedReality.ARCandidateImage.GetPhysicalHeight
struct UARCandidateImage_GetPhysicalHeight_Params
{
};

// Function AugmentedReality.ARCandidateImage.GetOrientation
struct UARCandidateImage_GetOrientation_Params
{
};

// Function AugmentedReality.ARCandidateImage.GetFriendlyName
struct UARCandidateImage_GetFriendlyName_Params
{
};

// Function AugmentedReality.ARCandidateImage.GetCandidateTexture
struct UARCandidateImage_GetCandidateTexture_Params
{
};

// Function AugmentedReality.ARCandidateObject.SetFriendlyName
struct UARCandidateObject_SetFriendlyName_Params
{
};

// Function AugmentedReality.ARCandidateObject.SetCandidateObjectData
struct UARCandidateObject_SetCandidateObjectData_Params
{
};

// Function AugmentedReality.ARCandidateObject.SetBoundingBox
struct UARCandidateObject_SetBoundingBox_Params
{
};

// Function AugmentedReality.ARCandidateObject.GetFriendlyName
struct UARCandidateObject_GetFriendlyName_Params
{
};

// Function AugmentedReality.ARCandidateObject.GetCandidateObjectData
struct UARCandidateObject_GetCandidateObjectData_Params
{
};

// Function AugmentedReality.ARCandidateObject.GetBoundingBox
struct UARCandidateObject_GetBoundingBox_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
