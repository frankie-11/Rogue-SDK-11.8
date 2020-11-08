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

// WidgetBlueprintGeneratedClass WBP_InWorld_Reticle.WBP_InWorld_Reticle_C
// 0x105FEB00 (0x6B1EED80 - 0x5ABF0280)
class UWBP_InWorld_Reticle_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x105FEB00];                                // 0x5ABF0280(0x105FEB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InWorld_Reticle.WBP_InWorld_Reticle_C");
		return ptr;
	}


	void SetPlayerState();
	void SetReticleImageColor();
	void OnWeaponSet();
	void Construct();
	void OnPossession();
	void OnModActivated();
	void Destruct();
	void SetWeaponComponent();
	void ExecuteUbergraph_WBP_InWorld_Reticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
