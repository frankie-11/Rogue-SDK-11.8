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

// WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C
// 0xFFFFFFFFCF22D140 (0x2CD28C80 - 0x5DAFBB40)
class UWBP_Social_Friends_Tab_C : public UKSSocialFriendsPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Friends_Tab.WBP_Social_Friends_Tab_C");
		return ptr;
	}


	void FocusFirstItem();
	void TryGetFirstItemForCategory();
	void FindFirstOnlinePlayerOrDefault();
	void FocusFirstOnlinePlayer();
	void OnFocusReceived();
	void HandleItemClicked();
	void NavigateConfirm();
	void GetFocusTarget();
	void InitializeWidget();
	void UninitializeWidget();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_OnItemIsHoveredChangedDynamic__DelegateSignature();
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature();
	void OnInputStateChanged();
	void InitializeWidgetNavigation();
	void OnListScrolled();
	void ExecuteUbergraph_WBP_Social_Friends_Tab();
	void OnPlayerListScrolled__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
