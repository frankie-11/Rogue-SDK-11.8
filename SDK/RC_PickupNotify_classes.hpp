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

// WidgetBlueprintGeneratedClass PickupNotify.PickupNotify_C
// 0x2B26F080
class UPickupNotify_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x2B26F080];                                // 0x0000(0x2B26F080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PickupNotify.PickupNotify_C");
		return ptr;
	}


	void Should_Show_Interaction();
	void IsBombDropInteraction();
	void BindInteractAction();
	void UnBindInteractAction();
	void SetItemIcon();
	void DisplayTimeRemaining();
	void OnSkydiveEarlyOutChanged();
	void Bind_PostButtonText();
	void GetSplitPrompt();
	void Bind_PreButtonText();
	void Bind_RootVisibility();
	void OnHoveredInteractableChanged();
	void Get_Pickup_Text();
	void PreClearPawn();
	void PostSetPawn();
	void InitializeWidget();
	void ModeChange();
	void Construct();
	void HandleKillCamChange();
	void OnKeyBindSettingChanged();
	void StartInteract();
	void StartAction();
	void Tick();
	void end();
	void Handle_Bomb_State_Changed();
	void ExecuteUbergraph_PickupNotify();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
