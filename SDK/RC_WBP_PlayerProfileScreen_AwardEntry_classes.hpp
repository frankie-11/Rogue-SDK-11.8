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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C
// 0xFFFFFFFFCE897980 (0x29487C00 - 0x5ABF0280)
class UWBP_PlayerProfileScreen_AwardEntry_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen_AwardEntry.WBP_PlayerProfileScreen_AwardEntry_C");
		return ptr;
	}


	void GetRewardInfo();
	void UpdateBar();
	void ResetState();
	void PlayShowAnimInternal();
	void PlayShowAnim();
	void UpdateValue();
	void UpdateIcon();
	void SetActivityInstance();
	void Construct();
	void Tick();
	void PreConstruct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_PlayerProfileScreen_AwardEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
