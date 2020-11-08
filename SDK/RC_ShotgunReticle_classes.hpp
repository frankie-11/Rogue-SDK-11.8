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

// WidgetBlueprintGeneratedClass ShotgunReticle.ShotgunReticle_C
// 0x1E80 (0x217B5180 - 0x217B3300)
class UShotgunReticle_C : public UReticleBase_C
{
public:
	unsigned char                                      UnknownData00[0x1E80];                                    // 0x217B3300(0x1E80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ShotgunReticle.ShotgunReticle_C");
		return ptr;
	}


	void IsValidWeaponType();
	void ShouldHideAmmoGauge();
	void UpdateReloadBarPosition();
	void UpdateCrosshairDisplay();
	void ColorSet();
	void FadeClipMeter();
	void UpdateOffset();
	void ChangeADS();
	void ForceADS();
	void HitConfirm();
	void Headshot();
	void KillConfirm();
	void GrenadeCook();
	void GrenadeTick();
	void UpdateAmmoGauge();
	void ExecuteUbergraph_ShotgunReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
