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

// Class TimeManagement.TimeSynchronizationSource
// 0x5B1E9480
class UTimeSynchronizationSource : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B1E9480];                                // 0x0000(0x5B1E9480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeSynchronizationSource");
		return ptr;
	}

};


// Class TimeManagement.FixedFrameRateCustomTimeStep
// 0x5DC1D400
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:
	unsigned char                                      UnknownData00[0x5DC1D400];                                // 0x0000(0x5DC1D400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.FixedFrameRateCustomTimeStep");
		return ptr;
	}

};


// Class TimeManagement.TimeManagementBlueprintLibrary
// 0x0000
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TimeManagement.TimeManagementBlueprintLibrary");
		return ptr;
	}


	void TransformTime();
	void Subtract_FrameNumberInteger();
	void Subtract_FrameNumberFrameNumber();
	void SnapFrameTimeToRate();
	void Multiply_SecondsFrameRate();
	void Multiply_FrameNumberInteger();
	void IsValid_MultipleOf();
	void IsValid_Framerate();
	void GetTimecodeFrameRate();
	void GetTimecode();
	void Divide_FrameNumberInteger();
	void Conv_TimecodeToString();
	void Conv_QualifiedFrameTimeToSeconds();
	void Conv_FrameRateToSeconds();
	void Conv_FrameNumberToInteger();
	void Add_FrameNumberInteger();
	void Add_FrameNumberFrameNumber();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
