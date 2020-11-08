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

// WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C
// 0x219FF580
class UStatusEffectPermant_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x219FF580];                                // 0x0000(0x219FF580) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass StatusEffectPermant.StatusEffectPermant_C");
		return ptr;
	}


	void CustomEvent_1();
	void PreClearPawn();
	void RevealStatus();
	void PostSetPawn();
	void CustomEvent_2();
	void Construct();
	void ExecuteUbergraph_StatusEffectPermant();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
