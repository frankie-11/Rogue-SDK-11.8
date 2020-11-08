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

// WidgetBlueprintGeneratedClass WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C
// 0xFFFFFFFFCC915E00 (0x2750A780 - 0x5ABF4980)
class UWBP_AttackerDefenderScreen_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AttackerDefenderScreen.WBP_AttackerDefenderScreen_C");
		return ptr;
	}


	void SetRounds();
	void ResetPreRoundScreen();
	void Get_Pre_Round_Text();
	void IsAttackerRole();
	void HandlePhaseChanged();
	void PreRoundAnimComplete();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_AttackerDefenderScreen();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
