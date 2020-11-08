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

// WidgetBlueprintGeneratedClass ExpDisplay.ExpDisplay_C
// 0xFFFFFFFFB4A0C580 (0x12557080 - 0x5DB4AB00)
class UExpDisplay_C : public UKSExpDisplayWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExpDisplay.ExpDisplay_C");
		return ptr;
	}


	void Make_Cash_Message();
	void MakePopup();
	void Construct();
	void OnScoreChanged();
	void OnUIRelevantPlayerStateChanged();
	void DisplayExpInfo();
	void ShowNextQueue();
	void PreConstruct();
	void OnCashChange();
	void ExecuteUbergraph_ExpDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
