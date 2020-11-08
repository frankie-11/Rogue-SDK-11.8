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

// WidgetBlueprintGeneratedClass DualARReticle.DualARReticle_C
// 0x3800 (0x217B6B00 - 0x217B3300)
class UDualARReticle_C : public UReticleBase_C
{
public:
	unsigned char                                      UnknownData00[0x3800];                                    // 0x217B3300(0x3800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DualARReticle.DualARReticle_C");
		return ptr;
	}


	void ChangeADS();
	void ForceADS();
	void HitConfirm();
	void Headshot();
	void KillConfirm();
	void GrenadeCook();
	void GrenadeTick();
	void UpdateOffset();
	void ExecuteUbergraph_DualARReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
