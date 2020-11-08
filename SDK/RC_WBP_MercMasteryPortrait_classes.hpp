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

// WidgetBlueprintGeneratedClass WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C
// 0xFFFFFFFFD1FEFD00 (0x2CBDFF80 - 0x5ABF0280)
class UWBP_MercMasteryPortrait_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MercMasteryPortrait.WBP_MercMasteryPortrait_C");
		return ptr;
	}


	void SetMasteryFrameToLevel();
	void OnJobMasteryLevelUpdated();
	void SetJobPortraitFromSoftTexture();
	void Set_Mastery_Frame();
	void SetPlayerOwner();
	void SetJobInformation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif