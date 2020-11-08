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

// Class LiveLink.LiveLinkBasicFrameInterpolationProcessor
// 0x5B1E3800
class ULiveLinkBasicFrameInterpolationProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	unsigned char                                      UnknownData00[0x5B1E3800];                                // 0x0000(0x5B1E3800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBasicFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor
// 0xFFFFFFFFA4E1C800 (0x0000 - 0x5B1E3800)
class ULiveLinkAnimationFrameInterpolationProcessor : public ULiveLinkBasicFrameInterpolationProcessor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationFrameInterpolationProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationRoleToTransform
// 0x5B1E3780
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	unsigned char                                      UnknownData00[0x5B1E3780];                                // 0x0000(0x5B1E3780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationRoleToTransform");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationVirtualSubject
// 0x4D2E0 (0x5B1E3600 - 0x5B196320)
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	unsigned char                                      UnknownData00[0x4D2E0];                                   // 0x5B196320(0x4D2E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationVirtualSubject");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor
// 0x5B195F60
class ULiveLinkTransformAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	unsigned char                                      UnknownData00[0x5B195F60];                                // 0x0000(0x5B195F60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTransformAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor
// 0xFFFFFFFFA4E6A0A0 (0x0000 - 0x5B195F60)
class ULiveLinkAnimationAxisSwitchPreProcessor : public ULiveLinkTransformAxisSwitchPreProcessor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkAnimationAxisSwitchPreProcessor");
		return ptr;
	}

};


// Class LiveLink.LiveLinkBlueprintLibrary
// 0x0000
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkBlueprintLibrary");
		return ptr;
	}


	void TransformNames();
	void TransformName();
	void SetLiveLinkSubjectEnabled();
	void RemoveSource();
	void ParentBoneSpaceTransform();
	void NumberOfTransforms();
	void IsSpecificLiveLinkSubjectEnabled();
	void IsSourceStillValid();
	void IsLiveLinkSubjectEnabled();
	void HasParent();
	void GetTransformByName();
	void GetTransformByIndex();
	void GetSpecificLiveLinkSubjectRole();
	void GetSourceType();
	void GetSourceStatus();
	void GetSourceMachineName();
	void GetRootTransform();
	void GetPropertyValue();
	void GetParent();
	void GetMetadata();
	void GetLiveLinkSubjects();
	void GetLiveLinkSubjectRole();
	void GetLiveLinkEnabledSubjectNames();
	void GetCurves();
	void GetChildren();
	void GetBasicData();
	void EvaluateLiveLinkFrameWithSpecificRole();
	void EvaluateLiveLinkFrameAtWorldTimeOffset();
	void EvaluateLiveLinkFrameAtSceneTime();
	void EvaluateLiveLinkFrame();
	void ComponentSpaceTransform();
	void ChildCount();
};


// Class LiveLink.LiveLinkComponent
// 0xA636A80 (0x5B1E6900 - 0x50BAFE80)
class ULiveLinkComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA636A80];                                 // 0x50BAFE80(0xA636A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkComponent");
		return ptr;
	}


	void GetSubjectDataAtWorldTime();
	void GetSubjectDataAtSceneTime();
	void GetSubjectData();
	void GetAvailableSubjectNames();
};


// Class LiveLink.LiveLinkDrivenComponent
// 0xA636880 (0x5B1E6700 - 0x50BAFE80)
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xA636880];                                 // 0x50BAFE80(0xA636880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkDrivenComponent");
		return ptr;
	}

};


// Class LiveLink.LiveLinkInstance
// 0x17780 (0x5B1E6680 - 0x5B1CEF00)
class ULiveLinkInstance : public UAnimInstance
{
public:
	unsigned char                                      UnknownData00[0x17780];                                   // 0x5B1CEF00(0x17780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkInstance");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusFinder
// 0x0000
class ULiveLinkMessageBusFinder : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusFinder");
		return ptr;
	}


	void GetAvailableProviders();
	void ConstructMessageBusFinder();
	void ConnectToProvider();
};


// Class LiveLink.LiveLinkMessageBusSourceFactory
// 0x0000
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceFactory");
		return ptr;
	}

};


// Class LiveLink.LiveLinkMessageBusSourceSettings
// 0xFFFFFFFFA4E6A8C0 (0x0000 - 0x5B195740)
class ULiveLinkMessageBusSourceSettings : public ULiveLinkSourceSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkMessageBusSourceSettings");
		return ptr;
	}

};


// Class LiveLink.LiveLinkPreset
// 0x5B195600
class ULiveLinkPreset : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B195600];                                // 0x0000(0x5B195600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkPreset");
		return ptr;
	}


	void BuildFromClient();
	void ApplyToClient();
};


// Class LiveLink.LiveLinkRetargetAsset
// 0x0000
class ULiveLinkRetargetAsset : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRetargetAsset");
		return ptr;
	}

};


// Class LiveLink.LiveLinkRemapAsset
// 0x0000
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkRemapAsset");
		return ptr;
	}


	void RemapCurveElements();
	void GetRemappedCurveName();
	void GetRemappedBoneName();
};


// Class LiveLink.LiveLinkSettings
// 0x5B195420
class ULiveLinkSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B195420];                                // 0x0000(0x5B195420) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkSettings");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimecodeProvider
// 0xDFD80 (0x5B1E7480 - 0x5B107700)
class ULiveLinkTimecodeProvider : public UTimecodeProvider
{
public:
	unsigned char                                      UnknownData00[0xDFD80];                                   // 0x5B107700(0xDFD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimecodeProvider");
		return ptr;
	}

};


// Class LiveLink.LiveLinkTimeSynchronizationSource
// 0xFFFFFFFFFFFFFF80 (0x5B1E9400 - 0x5B1E9480)
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkTimeSynchronizationSource");
		return ptr;
	}

};


// Class LiveLink.LiveLinkVirtualSubjectSourceSettings
// 0x53C40 (0x5B1E9380 - 0x5B195740)
class ULiveLinkVirtualSubjectSourceSettings : public ULiveLinkSourceSettings
{
public:
	unsigned char                                      UnknownData00[0x53C40];                                   // 0x5B195740(0x53C40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class LiveLink.LiveLinkVirtualSubjectSourceSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
