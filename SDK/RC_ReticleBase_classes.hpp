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

// WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C
// 0xFFFFFFFFC6BC3080 (0x217B3300 - 0x5ABF0280)
class UReticleBase_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReticleBase.ReticleBase_C");
		return ptr;
	}


	void GetAmmoState();
	void HitConfirm();
	void ForceADS();
	void GrenadeCook();
	void ChangeADS();
	void KillConfirm();
	void Headshot();
	void UpdateOffset();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
