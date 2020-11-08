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

// WidgetBlueprintGeneratedClass WBP_KillCardSide.WBP_KillCardSide_C
// 0xFFFFFFFFAF152F80 (0xCCB3C00 - 0x5DB60C80)
class UWBP_KillCardSide_C : public UKSKillCardWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_KillCardSide.WBP_KillCardSide_C");
		return ptr;
	}


	void Finished_2DD541CD4C1FE604911B05945E4C5727();
	void Show_Sequence();
	void ShowPlayerAndMessage();
	void Display_Duration_Finished();
	void ClearMessage();
	void ExecuteUbergraph_WBP_KillCardSide();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
