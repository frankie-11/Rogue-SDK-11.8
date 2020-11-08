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

// WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C
// 0x24E9AC80
class UHitIndictor_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x24E9AC80];                                // 0x0000(0x24E9AC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitIndictor.HitIndictor_C");
		return ptr;
	}


	void ReturnToPool();
	void Init_Indicator_Pool();
	void CreateHitIndicator();
	void Construct();
	void On_Viewed_Pawn_Take_Damage();
	void HandleViewedPawnTakeArmorDamage();
	void ExecuteUbergraph_HitIndictor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
