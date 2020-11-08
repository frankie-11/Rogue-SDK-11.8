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

// WidgetBlueprintGeneratedClass WBP_AccoladeMedal.WBP_AccoladeMedal_C
// 0xFFFFFFFFCA29C700 (0x24E91080 - 0x5ABF4980)
class UWBP_AccoladeMedal_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AccoladeMedal.WBP_AccoladeMedal_C");
		return ptr;
	}


	void SequenceEvent__ENTRYPOINTWBP_AccoladeMedal_4();
	void SequenceEvent__ENTRYPOINTWBP_AccoladeMedal_3();
	void SequenceEvent__ENTRYPOINTWBP_AccoladeMedal_2();
	void SequenceEvent__ENTRYPOINTWBP_AccoladeMedal_1();
	void ResetAnimations();
	void TickShowNextDelay();
	void ShowNextAccolade();
	void TickFadeOutDelay();
	void SetPresentationSpeed();
	void PlayThudSFX();
	void StartSheenAnim();
	void OnShowFinish();
	void OnSheenStart();
	void OnShowStart();
	void PreConstruct();
	void Construct();
	void PlayShowAnim();
	void PlayMoveAccoladeAnim();
	void Tick();
	void StartMoveAnim();
	void CloseMoveAnim();
	void HandleRemoveSelf();
	void PlayFadeOutAnim();
	void PlayTransitionOutAnim();
	void HandleAnimationStarted();
	void ExecuteUbergraph_WBP_AccoladeMedal();
	void OnShowAnimFinished__DelegateSignature();
	void OnShowAnimStarted__DelegateSignature();
	void OnRemoveAccolade__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
