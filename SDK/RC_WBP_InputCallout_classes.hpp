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

// WidgetBlueprintGeneratedClass WBP_InputCallout.WBP_InputCallout_C
// 0xFFFFFFFFC5B6A200 (0x2075DB00 - 0x5ABF3900)
class UWBP_InputCallout_C : public UPUMG_Widget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InputCallout.WBP_InputCallout_C");
		return ptr;
	}


	void GetActionKeys();
	void UpdateComboIndicator();
	void IsValidActionNameForCurrentInput();
	void ResetHoldProgress();
	void SetHoldProgress();
	void SetSecondaryKey();
	void SetPrimaryKey();
	void OnKeyBindSettingChanged();
	void InitializeWidget();
	void ModeChange();
	void SetActionName();
	void RemoveActionName();
	void ClearAllActionName();
	void ExecuteUbergraph_WBP_InputCallout();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
