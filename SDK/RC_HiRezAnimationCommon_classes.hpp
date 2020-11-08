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

// Class HiRezAnimationCommon.HiRezAnimationStatics
// 0x0000
class UHiRezAnimationStatics : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HiRezAnimationCommon.HiRezAnimationStatics");
		return ptr;
	}


	void FindPositionFromDistanceCurve();
};


// Class HiRezAnimationCommon.HRA_AnimNotify_PlayCameraAnim
// 0x5B194520
class UHRA_AnimNotify_PlayCameraAnim : public UAnimNotify
{
public:
	unsigned char                                      UnknownData00[0x5B194520];                                // 0x0000(0x5B194520) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class HiRezAnimationCommon.HRA_AnimNotify_PlayCameraAnim");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
