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

// WidgetBlueprintGeneratedClass WBP_DurationBar.WBP_DurationBar_C
// 0xFFFFFFFFCC646B00 (0x2723B480 - 0x5ABF4980)
class UWBP_DurationBar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_DurationBar.WBP_DurationBar_C");
		return ptr;
	}


	void SetDurationBar();
	void Construct();
	void Tick();
	void OpenUpdateGate();
	void CloseUpdateGate();
	void HandleModActivated();
	void UpdateDurationDisplay();
	void HideDurationBar();
	void HandleProjectileFired();
	void InitializeWidget();
	void SetupDurationBar();
	void ExecuteUbergraph_WBP_DurationBar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
