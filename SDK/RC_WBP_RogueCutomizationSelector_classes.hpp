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

// WidgetBlueprintGeneratedClass WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C
// 0x2337EC80
class UWBP_RogueCutomizationSelector_C : public UKSCustomizationSelection
{
public:
	unsigned char                                      UnknownData00[0x2337EC80];                                // 0x0000(0x2337EC80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RogueCutomizationSelector.WBP_RogueCutomizationSelector_C");
		return ptr;
	}


	void OnSortRarityDescNameAsc();
	void IsEquipAllAllowed();
	void DisplayEquipAllPrompt();
	void OnEquipAll();
	void OnKeyUp();
	void SetEmoteModel();
	void SetEquippedItem();
	void SetOwnedItem();
	void BindItemHelper();
	void OnPurchaseItem();
	void AddClearCosmeticSlot();
	void IsItemEquipped();
	void Set_Active_States();
	void SetEquipBtn();
	void SetWingSuitModel();
	void ResetSprayIcon();
	void ResetModels();
	void SetEmoteImage();
	void ResetCharacter();
	void SetWeapon();
	void SetModelViewer();
	void SetCharacterSkin();
	void NavigateBack();
	void SetContextBar();
	void RegisterNavigation();
	void ResetCosmeticSelection();
	void SetCosmeticSelection();
	void InitializeWidget();
	void OnHover();
	void OnUnhover();
	void OnSelectCosmetic();
	void OnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void EquipCosmetic();
	void OnHide();
	void HandleInputStateChanged();
	void HandleOnPurchasedItem();
	void BndEvt__AcceptEquipAll_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void BndEvt__CancelEquipAll_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
	void On_Close_Button_Clicked();
	void OnItemGamepadHovered();
	void ExecuteUbergraph_WBP_RogueCutomizationSelector();
	void OnEquipCosmeticItem__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
