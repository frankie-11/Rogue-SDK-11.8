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

// WidgetBlueprintGeneratedClass ResultScreen.ResultScreen_C
// 0xFFFFFFFFC692D980 (0x24491480 - 0x5DB63B00)
class UResultScreen_C : public UKSMatchResult
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ResultScreen.ResultScreen_C");
		return ptr;
	}


	void ResetAndHandleEndOfMatch();
	void SetColors();
	void ResetAnims();
	void OnRoundCycle();
	void ShowScreen();
	void Auto_Return_To_Lobby();
	void Construct();
	void ShowKillCamHUD();
	void ShowScoreAnim();
	void FailSafeReturnToLobby();
	void OnInitRoundSetup();
	void HandlePhaseChanged();
	void HandleRoundInfoChanged();
	void HandleResultReceived();
	void ShowSurrenderUI();
	void ExecuteUbergraph_ResultScreen();
	void ToggleTopBar__DelegateSignature();
	void HideHUD__DelegateSignature();
	void ShowHUD__DelegateSignature();
	void ReturnToHome__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
