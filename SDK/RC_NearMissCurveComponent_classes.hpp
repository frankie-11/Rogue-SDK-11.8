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

// BlueprintGeneratedClass NearMissCurveComponent.NearMissCurveComponent_C
// 0x5EEB6B00
class UNearMissCurveComponent_C : public UKSNearMissComponent
{
public:
	unsigned char                                      UnknownData00[0x5EEB6B00];                                // 0x0000(0x5EEB6B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NearMissCurveComponent.NearMissCurveComponent_C");
		return ptr;
	}


	void UpdateScalarTrack();
	void ExecuteUbergraph_NearMissCurveComponent();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
