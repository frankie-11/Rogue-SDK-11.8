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

// WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C
// 0xFFFFFFFFCE497E80 (0x2BFFB680 - 0x5DB63800)
class UWBP_LaunchCinematic_C : public UKSMediaPlayerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LaunchCinematic.WBP_LaunchCinematic_C");
		return ptr;
	}


	void IsActiveView();
	void StopVideoPlayback();
	void StopAudioPlayback();
	void HandleOnClicked();
	void PlayAnimationSmoothly();
	void FinishPlayback();
	void OnKeyDown();
	void SetPromptKeyDisplay();
	void GetPromptKeys();
	void IsSkipKey();
	void TogglePromptDisplay();
	void WhenCinematicDone();
	void OnReadyForPlayback();
	void OnShouldShowPromptChanged();
	void InitializeWidgetNavigation();
	void HandleInputStateChanged();
	void OnShown();
	void FadeTextureIn();
	void FadeTextureOut();
	void HandleFadeOutAnimFinished();
	void OnBeginLoadingPlaylist();
	void OnEndLoadingPlaylist();
	void OnHide();
	void HandleOnMediaOpened();
	void HandleOnMediaOpenFailed();
	void ExecuteUbergraph_WBP_LaunchCinematic();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
