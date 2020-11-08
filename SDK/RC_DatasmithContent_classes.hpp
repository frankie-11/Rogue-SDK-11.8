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

// Class DatasmithContent.DatasmithObjectTemplate
// 0x0000
class UDatasmithObjectTemplate : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithObjectTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithActorTemplate
// 0x5B19B320
class UDatasmithActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B19B320];                                // 0x0000(0x5B19B320) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAdditionalData
// 0x0000
class UDatasmithAdditionalData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAdditionalData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActor
// 0x1FD140 (0x5B19B140 - 0x5AF9E000)
class ADatasmithAreaLightActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1FD140];                                  // 0x5AF9E000(0x1FD140) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAreaLightActorTemplate
// 0x5B19AF60
class UDatasmithAreaLightActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B19AF60];                                // 0x0000(0x5B19AF60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAreaLightActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetImportData
// 0x0000
class UDatasmithAssetImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshImportData
// 0x0000
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshCADImportData
// 0x0000
class UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshCADImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneImportData
// 0x0000
class UDatasmithSceneImportData : public UAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithTranslatedSceneImportData
// 0x0000
class UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithTranslatedSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCADImportSceneData
// 0x0000
class UDatasmithCADImportSceneData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCADImportSceneData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMDLSceneImportData
// 0x0000
class UDatasmithMDLSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMDLSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithGLTFSceneImportData
// 0x5B204A80
class UDatasmithGLTFSceneImportData : public UDatasmithSceneImportData
{
public:
	unsigned char                                      UnknownData00[0x5B204A80];                                // 0x0000(0x5B204A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithGLTFSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// 0x5B204A00
class UDatasmithStaticMeshGLTFImportData : public UDatasmithStaticMeshImportData
{
public:
	unsigned char                                      UnknownData00[0x5B204A00];                                // 0x0000(0x5B204A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshGLTFImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithFBXSceneImportData
// 0x5B204800
class UDatasmithFBXSceneImportData : public UDatasmithSceneImportData
{
public:
	unsigned char                                      UnknownData00[0x5B204800];                                // 0x0000(0x5B204800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithFBXSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// 0x0000
class UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// 0xFFFFFFFFFFFFFB00 (0x5B204300 - 0x5B204800)
class UDatasmithDeltaGenSceneImportData : public UDatasmithFBXSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithDeltaGenSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDAssetImportData
// 0x0000
class UDatasmithVREDAssetImportData : public UDatasmithAssetImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDAssetImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithVREDSceneImportData
// 0x1680 (0x5B205E80 - 0x5B204800)
class UDatasmithVREDSceneImportData : public UDatasmithFBXSceneImportData
{
public:
	unsigned char                                      UnknownData00[0x1680];                                    // 0x5B204800(0x1680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithVREDSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithIFCSceneImportData
// 0x0000
class UDatasmithIFCSceneImportData : public UDatasmithSceneImportData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithIFCSceneImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// 0x5B205E00
class UDatasmithStaticMeshIFCImportData : public UDatasmithStaticMeshImportData
{
public:
	unsigned char                                      UnknownData00[0x5B205E00];                                // 0x0000(0x5B205E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshIFCImportData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithAssetUserData
// 0x5B0E3400
class UDatasmithAssetUserData : public UAssetUserData
{
public:
	unsigned char                                      UnknownData00[0x5B0E3400];                                // 0x0000(0x5B0E3400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithAssetUserData");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraActorTemplate
// 0x5B205C80
class UDatasmithCineCameraActorTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B205C80];                                // 0x0000(0x5B205C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraActorTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// 0x5B205980
class UDatasmithCineCameraComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B205980];                                // 0x0000(0x5B205980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCineCameraComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithContentBlueprintLibrary
// 0x0000
class UDatasmithContentBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithContentBlueprintLibrary");
		return ptr;
	}


	void GetDatasmithUserDataValueForKey();
	void GetDatasmithUserDataKeysAndValuesForValue();
	void GetDatasmithUserData();
};


// Class DatasmithContent.DatasmithCustomActionBase
// 0x0000
class UDatasmithCustomActionBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCustomActionBase");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportedSequencesActor
// 0x1FCD80 (0x5B19AD80 - 0x5AF9E000)
class ADatasmithImportedSequencesActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x1FCD80];                                  // 0x5AF9E000(0x1FCD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportedSequencesActor");
		return ptr;
	}


	void PlayLevelSequence();
};


// Class DatasmithContent.DatasmithOptionsBase
// 0x0000
class UDatasmithOptionsBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithOptionsBase");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithCommonTessellationOptions
// 0x5B205380
class UDatasmithCommonTessellationOptions : public UDatasmithOptionsBase
{
public:
	unsigned char                                      UnknownData00[0x5B205380];                                // 0x0000(0x5B205380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithCommonTessellationOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithImportOptions
// 0x5B19A880
class UDatasmithImportOptions : public UDatasmithOptionsBase
{
public:
	unsigned char                                      UnknownData00[0x5B19A880];                                // 0x0000(0x5B19A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithImportOptions");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLandscapeTemplate
// 0x5B206D80
class UDatasmithLandscapeTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B206D80];                                // 0x0000(0x5B206D80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLandscapeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithLightComponentTemplate
// 0x5B206880
class UDatasmithLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B206880];                                // 0x0000(0x5B206880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// 0x5B206480
class UDatasmithMaterialInstanceTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B206480];                                // 0x0000(0x5B206480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithMaterialInstanceTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPointLightComponentTemplate
// 0x5B19A7E0
class UDatasmithPointLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B19A7E0];                                // 0x0000(0x5B19A7E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPointLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// 0x5B208200
class UDatasmithPostProcessVolumeTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B208200];                                // 0x0000(0x5B208200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithPostProcessVolumeTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithScene
// 0x0000
class UDatasmithScene : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithScene");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneActor
// 0x26A080 (0x5B208080 - 0x5AF9E000)
class ADatasmithSceneActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x26A080];                                  // 0x5AF9E000(0x26A080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneActor");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSceneComponentTemplate
// 0x5B207E80
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B207E80];                                // 0x0000(0x5B207E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSceneComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// 0x5B207D00
class UDatasmithSkyLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B207D00];                                // 0x0000(0x5B207D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSkyLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// 0x5B207C00
class UDatasmithSpotLightComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B207C00];                                // 0x0000(0x5B207C00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithSpotLightComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// 0x5B207B00
class UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B207B00];                                // 0x0000(0x5B207B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshComponentTemplate");
		return ptr;
	}

};


// Class DatasmithContent.DatasmithStaticMeshTemplate
// 0x5B207880
class UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate
{
public:
	unsigned char                                      UnknownData00[0x5B207880];                                // 0x0000(0x5B207880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class DatasmithContent.DatasmithStaticMeshTemplate");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
