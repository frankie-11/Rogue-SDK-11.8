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

// WidgetBlueprintGeneratedClass HitIndicatorSub.HitIndicatorSub_C
// 0x1F283C80
class UHitIndicatorSub_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x1F283C80];                                // 0x0000(0x1F283C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitIndicatorSub.HitIndicatorSub_C");
		return ptr;
	}


	void Tick();
	void WidgetAnimationEvt_Fade_K2Node_WidgetAnimationEvent_1();
	void StartDamageAnim();
	void ExecuteUbergraph_HitIndicatorSub();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
