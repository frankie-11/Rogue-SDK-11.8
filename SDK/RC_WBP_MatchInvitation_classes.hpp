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

// WidgetBlueprintGeneratedClass WBP_MatchInvitation.WBP_MatchInvitation_C
// 0xFFFFFFFFC91C4E00 (0x26D27000 - 0x5DB62200)
class UWBP_MatchInvitation_C : public UKSMatchInvitationModal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchInvitation.WBP_MatchInvitation_C");
		return ptr;
	}


	void BndEvt__Confirm_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__Decline_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void ShowInvitation();
	void ShowError();
	void StartShowSequence();
	void StartHideSequence();
	void InitializeWidgetNavigation();
	void OnHideAnimFinished();
	void ExecuteUbergraph_WBP_MatchInvitation();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
