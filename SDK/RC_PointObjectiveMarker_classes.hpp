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

// WidgetBlueprintGeneratedClass PointObjectiveMarker.PointObjectiveMarker_C
// 0xCCBBE80
class UPointObjectiveMarker_C : public UKSPointObjectiveMarkerWidget
{
public:
	unsigned char                                      UnknownData00[0xCCBBE80];                                 // 0x0000(0xCCBBE80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PointObjectiveMarker.PointObjectiveMarker_C");
		return ptr;
	}


	void UpdateControlPointScoreProgress();
	void UpdateControlPointCaptureProgress();
	void UpdateControlPointState();
	void SetContestedColor();
	void GetOwningTeamColor();
	void Update();
	void Get_Neutral_Color();
	void ViewSetCaptureProgress();
	void SetView();
	void SetScreenRegion();
	void SetArrowAngle();
	void ViewApplyTimerValue();
	void UpdateMetersAway();
	void Construct();
	void ControlPointStateUpdated();
	void OnControlTeamScoreUpdated();
	void ExecuteUbergraph_PointObjectiveMarker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
