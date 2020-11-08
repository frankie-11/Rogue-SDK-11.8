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

// WidgetBlueprintGeneratedClass WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C
// 0xFFFFFFFFD0BFF280 (0x2B7EF500 - 0x5ABF0280)
class UWBP_ShotgunHitConfirm_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShotgunHitConfirm.WBP_ShotgunHitConfirm_C");
		return ptr;
	}


	void Construct();
	void PlayFadeOut();
	void HandleFadeoutFinished();
	void PlayEliminationFlourish();
	void ExecuteUbergraph_WBP_ShotgunHitConfirm();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
