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

// WidgetBlueprintGeneratedClass WBP_AbilityDurationBar.WBP_AbilityDurationBar_C
// 0x105FAF80 (0x6B1EB200 - 0x5ABF0280)
class UWBP_AbilityDurationBar_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x105FAF80];                                // 0x5ABF0280(0x105FAF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AbilityDurationBar.WBP_AbilityDurationBar_C");
		return ptr;
	}


	void SetDurationBar();
	void Tick();
	void OpenUpdateGate();
	void CloseUpdateGate();
	void UpdateDurationDisplay();
	void HideDurationBar();
	void HandleModActivated();
	void SetupDurationBar();
	void ExecuteUbergraph_WBP_AbilityDurationBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
