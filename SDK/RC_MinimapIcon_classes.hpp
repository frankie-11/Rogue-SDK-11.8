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

// WidgetBlueprintGeneratedClass MinimapIcon.MinimapIcon_C
// 0xFFFFFFFFCEFB7F80 (0x29BA8200 - 0x5ABF0280)
class UMinimapIcon_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MinimapIcon.MinimapIcon_C");
		return ptr;
	}


	void SetupEnemyPing();
	void SetupAlly();
	void SetupLocalPlayer();
	void SetObjectiveIcon();
	void AllyStateChange();
	void ObjectiveUpdated();
	void SetRelativeHeight();
	void ResetHeightIndicators();
	void OnLootSiteStateChanged();
	void SetupObjective();
	void SetupLootSite();
	void Update();
	void Construct();
	void ExecuteUbergraph_MinimapIcon();
	void PingExpired__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
