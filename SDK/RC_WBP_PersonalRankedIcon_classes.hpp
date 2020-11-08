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

// WidgetBlueprintGeneratedClass WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C
// 0xFFFFFFFFD06B2D80 (0x2B2A7700 - 0x5ABF4980)
class UWBP_PersonalRankedIcon_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PersonalRankedIcon.WBP_PersonalRankedIcon_C");
		return ptr;
	}


	void UpdatePlayerRankInfo();
	void Construct();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_PersonalRankedIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
