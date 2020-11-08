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

// Class CinematicCamera.CineCameraActor
// 0xFFFFFFFFFFFFFF00 (0x5DA24300 - 0x5DA24400)
class ACineCameraActor : public ACameraActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return ptr;
	}


	void GetCineCameraComponent();
};


// Class CinematicCamera.CameraRig_Crane
// 0x2CE2B00 (0x5DC80B00 - 0x5AF9E000)
class ACameraRig_Crane : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2CE2B00];                                 // 0x5AF9E000(0x2CE2B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return ptr;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x2CE2800 (0x5DC80800 - 0x5AF9E000)
class ACameraRig_Rail : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2CE2800];                                 // 0x5AF9E000(0x2CE2800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return ptr;
	}


	void GetRailSplineComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x1580 (0x5DC83180 - 0x5DC81C00)
class UCineCameraComponent : public UCameraComponent
{
public:
	unsigned char                                      UnknownData00[0x1580];                                    // 0x5DC81C00(0x1580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return ptr;
	}


	void SetLensPresetByName();
	void SetFilmbackPresetByName();
	void SetCurrentFocalLength();
	void GetVerticalFieldOfView();
	void GetLensPresetsCopy();
	void GetLensPresetName();
	void GetHorizontalFieldOfView();
	void GetFilmbackPresetName();
	void GetDefaultFilmbackPresetName();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
