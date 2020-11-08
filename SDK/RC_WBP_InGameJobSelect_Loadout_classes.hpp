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

// WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C
// 0xFFFFFFFFC9DAA000 (0x2499E980 - 0x5ABF4980)
class UWBP_InGameJobSelect_Loadout_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_InGameJobSelect_Loadout.WBP_InGameJobSelect_Loadout_C");
		return ptr;
	}


	void GetLoadoutPerkButtons();
	void GetLoadoutPerks();
	void GetCurrentJobLoadoutSlotItemInfo();
	void InitializeLoadoutButtons();
	void PopulateLoadoutInfo();
	void PopulateJobInfo();
	void PopulateJobLoadout();
	void OnLoaded_0479943548EBDC9F20CA8D8C126D74BE();
	void InitializeWidget();
	void OnShown();
	void OnHide();
	void LoadAndPopulateFirstPassive();
	void PreConstruct();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_InGameJobSelect_Loadout();
	void OnNavBack__DelegateSignature();
	void OnJobLockInClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
