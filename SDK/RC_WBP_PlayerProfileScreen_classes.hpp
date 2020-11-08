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

// WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C
// 0xFFFFFFFFD1770300 (0x2C364C80 - 0x5ABF4980)
class UWBP_PlayerProfileScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerProfileScreen.WBP_PlayerProfileScreen_C");
		return ptr;
	}


	void GetPlatformIcon();
	void SetPlayerHint();
	void ClearPlayerHint();
	void NavigateBack();
	void Construct();
	void OnShown();
	void InitializeWidget();
	void AwardButtonClicked();
	void StatsButtonClicked();
	void CustomizeButtonClicked();
	void InitializeWidgetNavigation();
	void OnBackPrompt();
	void HandleLoginStateChange();
	void ExecuteUbergraph_WBP_PlayerProfileScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
