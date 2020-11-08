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

// WidgetBlueprintGeneratedClass WBP_RegionSelect.WBP_RegionSelect_C
// 0xFFFFFFFFCB533A80 (0x26128400 - 0x5ABF4980)
class UWBP_RegionSelect_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RegionSelect.WBP_RegionSelect_C");
		return ptr;
	}


	void GetRegionSelectEntries();
	void PreConstruct();
	void Construct();
	void LoginState();
	void Populate_Regions();
	void OnChildButtonSelectedRegion();
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_0_CloseButtonClicked__DelegateSignature();
	void InitializeWidget();
	void OnShown();
	void ExecuteUbergraph_WBP_RegionSelect();
	void OnRegionSelectEntriesCreated__DelegateSignature();
	void OnRegionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
