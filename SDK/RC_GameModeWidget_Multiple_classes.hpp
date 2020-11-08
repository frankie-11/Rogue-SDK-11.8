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

// WidgetBlueprintGeneratedClass GameModeWidget_Multiple.GameModeWidget_Multiple_C
// 0xFFFFFFFFB795F180 (0x12553B00 - 0x5ABF4980)
class UGameModeWidget_Multiple_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GameModeWidget_Multiple.GameModeWidget_Multiple_C");
		return ptr;
	}


	void Bind_Killcam();
	void InitializeHudWidgets();
	void InitializeMapWidgets();
	void Tick();
	void SetListenersActive();
	void BndEvt__VehicleOverlay_K2Node_ComponentBoundEvent_0_Vehicle_State_Changed__DelegateSignature();
	void HandleKillCamEnabled();
	void ShowHUD();
	void HideHUD();
	void ToggleTopBarHUD();
	void ToggleMiniMap();
	void InitializeWidget();
	void Handle_Swimming_Changed();
	void HandleRoundSetup();
	void ExecuteUbergraph_GameModeWidget_Multiple();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
