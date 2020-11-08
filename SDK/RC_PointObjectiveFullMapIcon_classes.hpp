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

// WidgetBlueprintGeneratedClass PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C
// 0xFFFFFFFFC6E53180 (0x24996D80 - 0x5DB43C00)
class UPointObjectiveFullMapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PointObjectiveFullMapIcon.PointObjectiveFullMapIcon_C");
		return ptr;
	}


	void ShouldUpdate();
	void DoCaptureAnimation();
	void SetProgressValue();
	void SetProgressColors();
	void Tick();
	void Objective_State_Change();
	void Construct();
	void OnCaptureAnimFinished();
	void ExecuteUbergraph_PointObjectiveFullMapIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
