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

// BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C
// 0xFF10700 (0x6B1E7400 - 0x5B2D6D00)
class UBloodEffectCurveComponent_C : public UKSBloodSplatterComponent
{
public:
	unsigned char                                      UnknownData00[0xFF10700];                                 // 0x5B2D6D00(0xFF10700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BloodEffectCurveComponent.BloodEffectCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack();
	void ExecuteUbergraph_BloodEffectCurveComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
