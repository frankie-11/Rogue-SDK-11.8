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

// WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C
// 0xFFFFFFFFC7E9D000 (0x25A2A980 - 0x5DB8D980)
class UWBP_Social_Search_Tab_C : public UKSSocialSearchPanel
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_Social_Search_Tab.WBP_Social_Search_Tab_C");
		return ptr;
	}


	void ClearListFocus();
	void TryRecoverLastKnownListFocus();
	void GetFirstVisibleItem();
	void OnKeyUp();
	void GetFocusTargets();
	void ClearSearch();
	void HandlePlayerCardClicked();
	void InitializeWidget();
	void UninitializeWidget();
	void OnHide();
	void BndEvt__Results_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature();
	void BndEvt__Results_K2Node_ComponentBoundEvent_1_SimpleListItemEventDynamic__DelegateSignature();
	void OnInputStateChange();
	void InitializeWidgetNavigation();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_2_OnHovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_3_OnUnhovered__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_4_OnSearchTermChange__DelegateSignature();
	void ExecuteUbergraph_WBP_Social_Search_Tab();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
