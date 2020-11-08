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

// WidgetBlueprintGeneratedClass WBP_CustomMassInvite.WBP_CustomMassInvite_C
// 0xFFFFFFFFDB723780 (0x2C361980 - 0x50C3E200)
class UWBP_CustomMassInvite_C : public UKSMassInviteModal
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomMassInvite.WBP_CustomMassInvite_C");
		return ptr;
	}


	void FocusFirstPlayer();
	void List_HandleItemClicked();
	void List_HandleItemInitialized();
	void List_HandleListItemHover();
	void ShowLoadAnimImpl();
	void ShowSearchListLoading();
	void HandleReceiveSearchPlayers();
	void GetQueryDataFactory();
	void SetTab();
	void OnKeyUp();
	void ShowAutoListLoading();
	void OnBlockerClick();
	void List_OnGetItemChildren();
	void NavigateBack();
	void OnShown();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_0_SimpleListItemEventDynamic__DelegateSignature();
	void OnReceivePlayers();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_2_OnListEntryInitializedDynamic__DelegateSignature();
	void InitializeWidgetNavigation();
	void BndEvt__WBP_ModalPopupContainer_K2Node_ComponentBoundEvent_3_CloseButtonClicked__DelegateSignature();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_5_OnItemIsHoveredChangedDynamic__DelegateSignature();
	void BndEvt__PlayerList_K2Node_ComponentBoundEvent_6_OnListItemSelectionChangedDynamic__DelegateSignature();
	void BndEvt__BlockerButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void OnInitialized();
	void OnLoadingAnimationStart();
	void OnLoadingAnimationEnd();
	void OnInputStateChanged();
	void InitializeWidget();
	void BndEvt__AutoTab_K2Node_ComponentBoundEvent_7_On_Tab_Selected__DelegateSignature();
	void BndEvt__SearchTab_K2Node_ComponentBoundEvent_8_On_Tab_Selected__DelegateSignature();
	void BndEvt__SearchBar_K2Node_ComponentBoundEvent_9_OnSearchTermChange__DelegateSignature();
	void OnHide();
	void OnLoadingSearchStart();
	void OnLoadingSearchEnd();
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_10_OnListEntryInitializedDynamic__DelegateSignature();
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_11_SimpleListItemEventDynamic__DelegateSignature();
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_12_OnListItemSelectionChangedDynamic__DelegateSignature();
	void BndEvt__SearchList_K2Node_ComponentBoundEvent_13_OnItemIsHoveredChangedDynamic__DelegateSignature();
	void BndEvt__SubmitBtn_K2Node_ComponentBoundEvent_14_OnClicked__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomMassInvite();
	void OnSelect__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
