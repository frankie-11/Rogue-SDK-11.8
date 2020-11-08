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

// WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C
// 0x105FE480 (0x6B1EE700 - 0x5ABF0280)
class UWBP_InWorld_ReticleComponents_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x105FE480];                                // 0x5ABF0280(0x105FE480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InWorld_ReticleComponents.WBP_InWorld_ReticleComponents_C");
		return ptr;
	}


	void SetWeaponComponent();
	void SetPlayerState();
	void SetAmmoColor();
	void OnPossession();
	void OnWeaponSet();
	void OnModActivated();
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_InWorld_ReticleComponents();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
