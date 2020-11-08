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

// WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C
// 0xCCB3700
class UWBP_KillstreakDurationBars_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0xCCB3700];                                 // 0x0000(0xCCB3700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillstreakDurationBars.WBP_KillstreakDurationBars_C");
		return ptr;
	}


	void OnAimStateChanged();
	void DestroyUnusedDurationBars();
	void GetDurationBarForModInstance();
	void PostSetPawn();
	void CloseGate_PawnRetry();
	void HandleModsUpdated();
	void HandlePlayerDownedOrEliminated();
	void PreClearPawn();
	void OnKilled();
	void HandleOnViewedPawnChanged();
	void HandleProjectileFired();
	void CustomEvent_1();
	void ResetDurationBars();
	void ExecuteUbergraph_WBP_KillstreakDurationBars();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
