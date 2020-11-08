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

// WidgetBlueprintGeneratedClass ContextualPingMarker.ContextualPingMarker_C
// 0xFFFFFFFFCB939180 (0x29480580 - 0x5DB47400)
class UContextualPingMarker_C : public UKSContextualPingMarkerWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ContextualPingMarker.ContextualPingMarker_C");
		return ptr;
	}


	void MovePing();
	void Construct();
	void HandlePingRemoved();
	void SetScreenRegion();
	void SetArrowAngle();
	void SetupPingOnReady();
	void PlayActivationAnim();
	void PlayActiveStateAnim();
	void UpdateMetersAway();
	void HandlePingChanged();
	void ExecuteUbergraph_ContextualPingMarker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
