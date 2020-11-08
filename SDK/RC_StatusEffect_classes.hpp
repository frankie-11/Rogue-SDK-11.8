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

// WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C
// 0x219FE800
class UStatusEffect_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x219FE800];                                // 0x0000(0x219FE800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffect.StatusEffect_C");
		return ptr;
	}


	void StopHideTimer();
	void StartHideTimer();
	void PreClearPawn();
	void PostSetPawn();
	void RevealStatus();
	void OnStuck();
	void HideTimeExpired();
	void UpdateRevealStatus();
	void ExecuteUbergraph_StatusEffect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
