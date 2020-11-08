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

// WidgetBlueprintGeneratedClass WBP_Store.WBP_Store_C
// 0x2BB9B080
class UWBP_Store_C : public UKSStoreWidget
{
public:
	unsigned char                                      UnknownData00[0x2BB9B080];                                // 0x0000(0x2BB9B080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Store.WBP_Store_C");
		return ptr;
	}


	void GetKSStoreItemHelper();
	void GotoPendingSection();
	void OnKeyDown();
	void OnPrevSection();
	void OnNextSection();
	void OnStoreSectionSelected();
	void AddSectionsToStore();
	void NavigateBack();
	void PopulateStore();
	void OnVendorsReceived();
	void InitializeWidget();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void OnOpenCodeRedeem();
	void FocusGroupNavigateLeftFailure();
	void FocusGroupNavigateRightFailure();
	void OnPortalOffersReceived();
	void ExecuteUbergraph_WBP_Store();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
