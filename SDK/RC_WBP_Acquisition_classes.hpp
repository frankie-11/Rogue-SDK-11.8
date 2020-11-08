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

// WidgetBlueprintGeneratedClass WBP_Acquisition.WBP_Acquisition_C
// 0x2BFF5E00
class UWBP_Acquisition_C : public UKSPurchaseConfirmationWidget
{
public:
	unsigned char                                      UnknownData00[0x2BFF5E00];                                // 0x0000(0x2BFF5E00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Acquisition.WBP_Acquisition_C");
		return ptr;
	}


	void Set_Preview_Image();
	void GetJobForItem();
	void TrySetPreferredDefaultSkin();
	void SetEmote();
	void OnGamepadItemHover();
	void DisplayStoreItem();
	void DisplayModelOrImageForItem();
	void SetSkinOrRogueModel();
	void ClearModels();
	void SetAcquisitionDisplay();
	void NavigateBack();
	void PreConstruct();
	void InitializeWidget();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void ExecuteUbergraph_WBP_Acquisition();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
