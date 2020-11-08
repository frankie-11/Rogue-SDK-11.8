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

// WidgetBlueprintGeneratedClass WBP_StoreSection.WBP_StoreSection_C
// 0xFFFFFFFFCE898700 (0x2948D080 - 0x5ABF4980)
class UWBP_StoreSection_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_StoreSection.WBP_StoreSection_C");
		return ptr;
	}


	void OnStoreTimerTick();
	void ShowCTA();
	void UpdateSectionTimer();
	void FindTaxInfo();
	void SetItemSelected();
	void SetupSectionNavigation();
	void SetSectionData();
	void ClearContents();
	void AddItemToSection();
	void Construct();
	void Tick();
	void ExecuteUbergraph_WBP_StoreSection();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
