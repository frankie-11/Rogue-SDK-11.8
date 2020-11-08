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

// Class GeometryCache.GeometryCache
// 0x5B19C540
class UGeometryCache : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B19C540];                                // 0x0000(0x5B19C540) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCache");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheActor
// 0x26BA00 (0x5B209A00 - 0x5AF9E000)
class AGeometryCacheActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x26BA00];                                  // 0x5AF9E000(0x26BA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheActor");
		return ptr;
	}


	void GetGeometryCacheComponent();
};


// Class GeometryCache.GeometryCacheCodecBase
// 0x5B19C4A0
class UGeometryCacheCodecBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B19C4A0];                                // 0x0000(0x5B19C4A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecBase");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheCodecRaw
// 0x6D460 (0x5B209900 - 0x5B19C4A0)
class UGeometryCacheCodecRaw : public UGeometryCacheCodecBase
{
public:
	unsigned char                                      UnknownData00[0x6D460];                                   // 0x5B19C4A0(0x6D460) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecRaw");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheCodecV1
// 0xFFFFFFFFA4E63B60 (0x0000 - 0x5B19C4A0)
class UGeometryCacheCodecV1 : public UGeometryCacheCodecBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheCodecV1");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheComponent
// 0xA5CBEE0 (0x5B20AB80 - 0x50C3ECA0)
class UGeometryCacheComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA5CBEE0];                                 // 0x50C3ECA0(0xA5CBEE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheComponent");
		return ptr;
	}


	void TickAtThisTime();
	void Stop();
	void SetStartTimeOffset();
	void SetPlaybackSpeed();
	void SetLooping();
	void SetGeometryCache();
	void PlayReversedFromEnd();
	void PlayReversed();
	void PlayFromStart();
	void Play();
	void Pause();
	void IsPlayingReversed();
	void IsPlaying();
	void IsLooping();
	void GetStartTimeOffset();
	void GetPlaybackSpeed();
	void GetPlaybackDirection();
	void GetNumberOfFrames();
	void GetDuration();
	void GetAnimationTime();
};


// Class GeometryCache.GeometryCacheTrack
// 0x5B20AB00
class UGeometryCacheTrack : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B20AB00];                                // 0x0000(0x5B20AB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0xFFFFFFFFFFFFFE80 (0x5B20A980 - 0x5B20AB00)
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_FlipbookAnimation");
		return ptr;
	}


	void AddMeshSample();
};


// Class GeometryCache.GeometryCacheTrackStreamable
// 0xFFFFFFFFFFFFFD80 (0x5B20A880 - 0x5B20AB00)
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrackStreamable");
		return ptr;
	}

};


// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0xFFFFFFFFA4DF5500 (0x0000 - 0x5B20AB00)
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformAnimation");
		return ptr;
	}


	void SetMesh();
};


// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0xFFFFFFFFA4DF5500 (0x0000 - 0x5B20AB00)
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation");
		return ptr;
	}


	void SetMesh();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
