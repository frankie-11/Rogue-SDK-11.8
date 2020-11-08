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

// WidgetBlueprintGeneratedClass WBP_CustomizeBorder.WBP_CustomizeBorder_C
// 0x2C793880
class UWBP_CustomizeBorder_C : public UKSPlayerCosmeticWidget
{
public:
	unsigned char                                      UnknownData00[0x2C793880];                                // 0x0000(0x2C793880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomizeBorder.WBP_CustomizeBorder_C");
		return ptr;
	}


	void OnSortRarityDescNameAsc();
	void OnKeyDown();
	void NavigateBack();
	void AddEmptySlots();
	void SetActiveStates();
	void RegisterNavigation();
	void IsBorderItemEquipped();
	void ResetBorderSelection();
	void SetContextBar();
	void SetBorderSelection();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void OnShown();
	void OnHide();
	void OnBackPrompt();
	void OnBorderHover();
	void OnBorderUnhover();
	void OnBorderClick();
	void OnBorderGamepadHover();
	void ExecuteUbergraph_WBP_CustomizeBorder();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
