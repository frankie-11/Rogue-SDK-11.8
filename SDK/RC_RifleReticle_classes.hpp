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

// WidgetBlueprintGeneratedClass RifleReticle.RifleReticle_C
// 0x1000 (0x217B4300 - 0x217B3300)
class URifleReticle_C : public UReticleBase_C
{
public:
	unsigned char                                      UnknownData00[0x1000];                                    // 0x217B3300(0x1000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass RifleReticle.RifleReticle_C");
		return ptr;
	}


	void HideAmmoProgressCircle();
	void IsValidWeaponType();
	void ShouldHideAmmoGauge();
	void ColorSet();
	void UpdateReticleDisplay();
	void Construct();
	void UpdateOffset();
	void ChangeADS();
	void ForceADS();
	void HitConfirm();
	void Headshot();
	void KillConfirm();
	void GrenadeCook();
	void GrenadeTick();
	void UpdateAmmoGauge();
	void UpdateMagazineOffset();
	void ExecuteUbergraph_RifleReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
