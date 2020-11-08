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

// WidgetBlueprintGeneratedClass WBP_TelemetryWidget.WBP_TelemetryWidget_C
// 0xFFFFFFFFC8751500 (0x23345E80 - 0x5ABF4980)
class UWBP_TelemetryWidget_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TelemetryWidget.WBP_TelemetryWidget_C");
		return ptr;
	}


	void UpdateOutgoingDisplay();
	void UpdateIncomingDisplay();
	void UpdateFPSDisplay();
	void UpdatePingDisplay();
	void InitializeWidget();
	void UpdateVisibility();
	void Tick();
	void ExecuteUbergraph_WBP_TelemetryWidget();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
