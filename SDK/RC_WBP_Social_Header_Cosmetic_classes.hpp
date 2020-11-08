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

// WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C
// 0xFFFFFFFFD2130E00 (0x2CD25780 - 0x5ABF4980)
class UWBP_Social_Header_Cosmetic_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Header_Cosmetic.WBP_Social_Header_Cosmetic_C");
		return ptr;
	}


	void BindContextMenu();
	void UpdateName();
	void UpdateAfterInfoChange();
	void UpdateBanner();
	void UpdateAvatar();
	void SetData();
	void PreConstruct();
	void InitializeWidget();
	void BndEvt__DNDToggleBtn_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void HandleInputStateChanged();
	void ToggleDND();
	void HandleReadyNavigation();
	void HandleMenuStart();
	void HandleMenuHidden();
	void HideStatusMenu();
	void ExecuteUbergraph_WBP_Social_Header_Cosmetic();
	void OnMenuHidden__DelegateSignature();
	void OnMenuShown__DelegateSignature();
	void OnNavigationReady__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
