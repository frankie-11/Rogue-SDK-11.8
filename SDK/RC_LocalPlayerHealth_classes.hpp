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

// WidgetBlueprintGeneratedClass LocalPlayerHealth.LocalPlayerHealth_C
// 0xFFFFFFFFC6A1D780 (0x24587600 - 0x5DB69E80)
class ULocalPlayerHealth_C : public UKSPlayerHealthWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LocalPlayerHealth.LocalPlayerHealth_C");
		return ptr;
	}


	void ResetVisbility();
	void TriggerFadeAnim();
	void OnOverhealChanged();
	void Construct();
	void View_OnDeathStateChanged();
	void InitializeWidget();
	void OnHealthMeterStateChanged();
	void SetHealthText();
	void OnJobChanged();
	void OnHealthDecreased();
	void PostSetPawn();
	void ExecuteUbergraph_LocalPlayerHealth();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
