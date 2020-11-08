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

// Class EyeTracker.EyeTrackerFunctionLibrary
// 0x0000
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class EyeTracker.EyeTrackerFunctionLibrary");
		return ptr;
	}


	void SetEyeTrackedPlayer();
	void IsStereoGazeDataAvailable();
	void IsEyeTrackerConnected();
	void GetStereoGazeData();
	void GetGazeData();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
