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

// WidgetBlueprintGeneratedClass PistolReticle.PistolReticle_C
// 0x2100 (0x217B5400 - 0x217B3300)
class UPistolReticle_C : public UReticleBase_C
{
public:
	unsigned char                                      UnknownData00[0x2100];                                    // 0x217B3300(0x2100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PistolReticle.PistolReticle_C");
		return ptr;
	}


	void UpdateOffset();
	void ChangeADS();
	void ForceADS();
	void HitConfirm();
	void Headshot();
	void KillConfirm();
	void GrenadeTick();
	void GrenadeCook();
	void ExecuteUbergraph_PistolReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
