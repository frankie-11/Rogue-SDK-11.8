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

// Class Niagara.MovieSceneNiagaraTrack
// 0x5B1975E0
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x5B1975E0];                                // 0x0000(0x5B1975E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraParameterTrack
// 0x51320 (0x5B1E8900 - 0x5B1975E0)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	unsigned char                                      UnknownData00[0x51320];                                   // 0x5B1975E0(0x51320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraBoolParameterTrack
// 0xFFFFFFFFA4E17700 (0x0000 - 0x5B1E8900)
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraBoolParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraColorParameterTrack
// 0xFFFFFFFFA4E17700 (0x0000 - 0x5B1E8900)
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraColorParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraFloatParameterTrack
// 0xFFFFFFFFA4E17700 (0x0000 - 0x5B1E8900)
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraFloatParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
// 0xFFFFFFFFA4E17700 (0x0000 - 0x5B1E8900)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraIntegerParameterTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemSpawnSection
// 0xFFFFFFFFFFFEC560 (0x5B197360 - 0x5B1AAE00)
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemSpawnSection");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraSystemTrack
// 0xFFFFFFFFA4E68A20 (0x0000 - 0x5B1975E0)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraSystemTrack");
		return ptr;
	}

};


// Class Niagara.MovieSceneNiagaraVectorParameterTrack
// 0xFFFFFFFFFFFFFD80 (0x5B1E8680 - 0x5B1E8900)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.MovieSceneNiagaraVectorParameterTrack");
		return ptr;
	}

};


// Class Niagara.NiagaraActor
// 0x24A480 (0x5B1E8480 - 0x5AF9E000)
class ANiagaraActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x24A480];                                  // 0x5AF9E000(0x24A480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraActor");
		return ptr;
	}


	void SetDestroyOnSystemFinish();
	void OnNiagaraSystemFinished();
};


// Class Niagara.NiagaraComponent
// 0x5B1ED000
class UNiagaraComponent : public UFXSystemComponent
{
public:
	unsigned char                                      UnknownData00[0x5B1ED000];                                // 0x0000(0x5B1ED000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponent");
		return ptr;
	}


	void SetVariableVec4();
	void SetVariableVec3();
	void SetVariableVec2();
	void SetVariableQuat();
	void SetVariableObject();
	void SetVariableMaterial();
	void SetVariableLinearColor();
	void SetVariableInt();
	void SetVariableFloat();
	void SetVariableBool();
	void SetVariableActor();
	void SetSeekDelta();
	void SetRenderingEnabled();
	void SetPreviewLODDistance();
	void SetPaused();
	void SetNiagaraVariableVec4();
	void SetNiagaraVariableVec3();
	void SetNiagaraVariableVec2();
	void SetNiagaraVariableQuat();
	void SetNiagaraVariableObject();
	void SetNiagaraVariableLinearColor();
	void SetNiagaraVariableInt();
	void SetNiagaraVariableFloat();
	void SetNiagaraVariableBool();
	void SetNiagaraVariableActor();
	void SetMaxSimTime();
	void SetForceSolo();
	void SetDesiredAge();
	void SetCanRenderWhileSeeking();
	void SetAutoDestroy();
	void SetAsset();
	void SetAllowScalability();
	void SetAgeUpdateMode();
	void SeekToDesiredAge();
	void ResetSystem();
	void ReinitializeSystem();
	void IsPaused();
	void GetSeekDelta();
	void GetPreviewLODDistanceEnabled();
	void GetPreviewLODDistance();
	void GetNiagaraParticleValueVec3_DebugOnly();
	void GetNiagaraParticleValues_DebugOnly();
	void GetNiagaraParticlePositions_DebugOnly();
	void GetMaxSimTime();
	void GetForceSolo();
	void GetDesiredAge();
	void GetDataInterface();
	void GetAsset();
	void GetAgeUpdateMode();
	void AdvanceSimulationByTime();
	void AdvanceSimulation();
};


// Class Niagara.NiagaraComponentPool
// 0x5B0E34C0
class UNiagaraComponentPool : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B0E34C0];                                // 0x0000(0x5B0E34C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraComponentPool");
		return ptr;
	}

};


// Class Niagara.NiagaraConvertInPlaceUtilityBase
// 0x0000
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraConvertInPlaceUtilityBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterface
// 0x0000
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterface");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSubmix
// 0x5B1ECE80
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1ECE80];                                // 0x0000(0x5B1ECE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSubmix");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
// 0x5B1ECD00
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1ECD00];                                // 0x0000(0x5B1ECD00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioOscilloscope");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceAudioSpectrum
// 0xFFFFFFFFFFFFFC80 (0x5B1ECB00 - 0x5B1ECE80)
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceAudioSpectrum");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCamera
// 0x5B1ECA80
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1ECA80];                                // 0x0000(0x5B1ECA80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCamera");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCollisionQuery
// 0x0000
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCollisionQuery");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurveBase
// 0x5B196B40
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B196B40];                                // 0x0000(0x5B196B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurveBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceColorCurve
// 0x57B40 (0x5B1EE680 - 0x5B196B40)
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	unsigned char                                      UnknownData00[0x57B40];                                   // 0x5B196B40(0x57B40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceColorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurlNoise
// 0x5B1EE600
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EE600];                                // 0x0000(0x5B1EE600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurlNoise");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceCurve
// 0x57A40 (0x5B1EE580 - 0x5B196B40)
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	unsigned char                                      UnknownData00[0x57A40];                                   // 0x5B196B40(0x57A40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraParticleCallbackHandler
// 0x0000
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParticleCallbackHandler");
		return ptr;
	}


	void ReceiveParticleData();
};


// Class Niagara.NiagaraDataInterfaceExport
// 0x5B1EE400
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EE400];                                // 0x0000(0x5B1EE400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceExport");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceRWBase
// 0x5B196960
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B196960];                                // 0x0000(0x5B196960) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceRWBase");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2D
// 0x576A0 (0x5B1EE000 - 0x5B196960)
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	unsigned char                                      UnknownData00[0x576A0];                                   // 0x5B196960(0x576A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceGrid2DCollection
// 0xFFFFFFFFA4E12000 (0x0000 - 0x5B1EE000)
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid2DCollection");
		return ptr;
	}


	void GetTextureSize();
	void GetRawTextureSize();
	void FillTexture2D();
	void FillRawTexture2D();
};


// Class Niagara.NiagaraDataInterfaceGrid3D
// 0x58E20 (0x5B1EF780 - 0x5B196960)
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	unsigned char                                      UnknownData00[0x58E20];                                   // 0x5B196960(0x58E20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
// 0xFFFFFFFFFFFFFF80 (0x5B1EF700 - 0x5B1EF780)
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceNeighborGrid3D");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceOcclusion
// 0x0000
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceOcclusion");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceParticleRead
// 0x5B1EF680
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EF680];                                // 0x0000(0x5B1EF680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceParticleRead");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSimpleCounter
// 0x0000
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSimpleCounter");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSkeletalMesh
// 0x5B1EF180
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EF180];                                // 0x0000(0x5B1EF180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSkeletalMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceSpline
// 0x5B1EF100
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EF100];                                // 0x0000(0x5B1EF100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceSpline");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceStaticMesh
// 0x5B1EEF00
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EEF00];                                // 0x0000(0x5B1EEF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceStaticMesh");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceTexture
// 0x5B1EEE80
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EEE80];                                // 0x0000(0x5B1EEE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector2DCurve
// 0x58240 (0x5B1EED80 - 0x5B196B40)
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	unsigned char                                      UnknownData00[0x58240];                                   // 0x5B196B40(0x58240) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector2DCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVector4Curve
// 0x58040 (0x5B1EEB80 - 0x5B196B40)
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	unsigned char                                      UnknownData00[0x58040];                                   // 0x5B196B40(0x58040) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVector4Curve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorCurve
// 0x57EC0 (0x5B1EEA00 - 0x5B196B40)
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	unsigned char                                      UnknownData00[0x57EC0];                                   // 0x5B196B40(0x57EC0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorCurve");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVectorField
// 0x5B1EE800
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EE800];                                // 0x0000(0x5B1EE800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVectorField");
		return ptr;
	}

};


// Class Niagara.NiagaraDataInterfaceVolumeTexture
// 0x5B1EE780
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	unsigned char                                      UnknownData00[0x5B1EE780];                                // 0x0000(0x5B1EE780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraDataInterfaceVolumeTexture");
		return ptr;
	}

};


// Class Niagara.NiagaraEditorDataBase
// 0x0000
class UNiagaraEditorDataBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEditorDataBase");
		return ptr;
	}

};


// Class Niagara.NiagaraEffectType
// 0x5B198E40
class UNiagaraEffectType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B198E40];                                // 0x0000(0x5B198E40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEffectType");
		return ptr;
	}

};


// Class Niagara.NiagaraEmitter
// 0x5B1F0500
class UNiagaraEmitter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1F0500];                                // 0x0000(0x5B1F0500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEmitter");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction
// 0x0000
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction");
		return ptr;
	}

};


// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
// 0x5B1F0480
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	unsigned char                                      UnknownData00[0x5B1F0480];                                // 0x0000(0x5B1F0480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles");
		return ptr;
	}

};


// Class Niagara.NiagaraFunctionLibrary
// 0x0000
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraFunctionLibrary");
		return ptr;
	}


	void SpawnSystemAttached();
	void SpawnSystemAtLocation();
	void SetVolumeTextureObject();
	void SetTextureObject();
	void OverrideSystemUserVariableStaticMeshComponent();
	void OverrideSystemUserVariableStaticMesh();
	void OverrideSystemUserVariableSkeletalMeshComponent();
	void GetNiagaraParameterCollection();
};


// Class Niagara.NiagaraRendererProperties
// 0x5B1F3180
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	unsigned char                                      UnknownData00[0x5B1F3180];                                // 0x0000(0x5B1F3180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraLightRendererProperties
// 0xFFFFFFFFFFFFFA80 (0x5B1F2C00 - 0x5B1F3180)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraLightRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraMeshRendererProperties
// 0x0F00 (0x5B1F4080 - 0x5B1F3180)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      UnknownData00[0xF00];                                     // 0x5B1F3180(0x0F00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraMeshRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraParameterCollectionInstance
// 0x5B1F5000
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1F5000];                                // 0x0000(0x5B1F5000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollectionInstance");
		return ptr;
	}


	void SetVectorParameter();
	void SetVector4Parameter();
	void SetVector2DParameter();
	void SetQuatParameter();
	void SetIntParameter();
	void SetFloatParameter();
	void SetColorParameter();
	void SetBoolParameter();
	void GetVectorParameter();
	void GetVector4Parameter();
	void GetVector2DParameter();
	void GetQuatParameter();
	void GetIntParameter();
	void GetFloatParameter();
	void GetColorParameter();
	void GetBoolParameter();
};


// Class Niagara.NiagaraParameterCollection
// 0x5B1F4E00
class UNiagaraParameterCollection : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1F4E00];                                // 0x0000(0x5B1F4E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraParameterCollection");
		return ptr;
	}

};


// Class Niagara.NiagaraPrecompileContainer
// 0x5B198440
class UNiagaraPrecompileContainer : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B198440];                                // 0x0000(0x5B198440) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPrecompileContainer");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewBase
// 0xFFFFFFFFA5062000 (0x0000 - 0x5AF9E000)
class ANiagaraPreviewBase : public AActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewBase");
		return ptr;
	}


	void SetSystem();
	void SetLabelText();
};


// Class Niagara.NiagaraPreviewAxis
// 0x0000
class UNiagaraPreviewAxis : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis");
		return ptr;
	}


	void Num();
	void ApplyToPreview();
};


// Class Niagara.NiagaraPreviewAxis_InterpParamBase
// 0x5B1F4800
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	unsigned char                                      UnknownData00[0x5B1F4800];                                // 0x0000(0x5B1F4800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamBase");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
// 0xFFFFFFFFFFFFFF00 (0x5B1F4700 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamInt32");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
// 0xFFFFFFFFFFFFFE00 (0x5B1F4600 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamFloat");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
// 0xFFFFFFFFFFFFFD00 (0x5B1F4500 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector2D");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector
// 0xFFFFFFFFFFFFFC00 (0x5B1F4400 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
// 0xFFFFFFFFFFFFFB00 (0x5B1F4300 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamVector4");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
// 0x1B00 (0x5B1F6300 - 0x5B1F4800)
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	unsigned char                                      UnknownData00[0x1B00];                                    // 0x5B1F4800(0x1B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor");
		return ptr;
	}

};


// Class Niagara.NiagaraPreviewGrid
// 0x257D00 (0x5B1F5D00 - 0x5AF9E000)
class ANiagaraPreviewGrid : public AActor
{
public:
	unsigned char                                      UnknownData00[0x257D00];                                  // 0x5AF9E000(0x257D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraPreviewGrid");
		return ptr;
	}


	void SetPaused();
	void GetPreviews();
	void DeactivatePreviews();
	void ActivatePreviews();
};


// Class Niagara.NiagaraRibbonRendererProperties
// 0x3C80 (0x5B1F6E00 - 0x5B1F3180)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      UnknownData00[0x3C80];                                    // 0x5B1F3180(0x3C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraRibbonRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraScript
// 0x5B197C20
class UNiagaraScript : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B197C20];                                // 0x0000(0x5B197C20) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScript");
		return ptr;
	}


	void RaiseOnGPUCompilationComplete();
};


// Class Niagara.NiagaraScriptSourceBase
// 0x0000
class UNiagaraScriptSourceBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraScriptSourceBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSettings
// 0x5B19A2E0
class UNiagaraSettings : public UDeveloperSettings
{
public:
	unsigned char                                      UnknownData00[0x5B19A2E0];                                // 0x0000(0x5B19A2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSettings");
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageBase
// 0x5B1F6500
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	unsigned char                                      UnknownData00[0x5B1F6500];                                // 0x0000(0x5B1F6500) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageBase");
		return ptr;
	}

};


// Class Niagara.NiagaraSimulationStageGeneric
// 0xFFFFFFFFFFFA3D40 (0x5B19A240 - 0x5B1F6500)
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSimulationStageGeneric");
		return ptr;
	}

};


// Class Niagara.NiagaraSpriteRendererProperties
// 0x4400 (0x5B1F7580 - 0x5B1F3180)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	unsigned char                                      UnknownData00[0x4400];                                    // 0x5B1F3180(0x4400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSpriteRendererProperties");
		return ptr;
	}

};


// Class Niagara.NiagaraSystem
// 0x1700 (0x5B1F8C00 - 0x5B1F7500)
class UNiagaraSystem : public UFXSystemAsset
{
public:
	unsigned char                                      UnknownData00[0x1700];                                    // 0x5B1F7500(0x1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class Niagara.NiagaraSystem");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
