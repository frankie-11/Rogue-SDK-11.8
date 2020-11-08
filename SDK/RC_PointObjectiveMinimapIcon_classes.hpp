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

// WidgetBlueprintGeneratedClass PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C
// 0xFFFFFFFFC6E4EC80 (0x24992880 - 0x5DB43C00)
class UPointObjectiveMinimapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PointObjectiveMinimapIcon.PointObjectiveMinimapIcon_C");
		return ptr;
	}


	void Update();
	void ShouldUpdate();
	void Update_From_Objective();
	void Construct();
	void UpdateMeetsHeightThreshold();
	void ExecuteUbergraph_PointObjectiveMinimapIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
