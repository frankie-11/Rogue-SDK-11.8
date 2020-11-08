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

// WidgetBlueprintGeneratedClass WBP_CustomizeAvatar.WBP_CustomizeAvatar_C
// 0x2C79F680
class UWBP_CustomizeAvatar_C : public UKSPlayerCosmeticWidget
{
public:
	unsigned char                                      UnknownData00[0x2C79F680];                                // 0x0000(0x2C79F680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomizeAvatar.WBP_CustomizeAvatar_C");
		return ptr;
	}


	void OnSortRarityDescNameAsc();
	void NavigateBack();
	void OnKeyDown();
	void AddEmptySlots();
	void SetActiveStates();
	void RegisterNavigation();
	void IsAvatarItemEquipped();
	void ResetAvatarSelection();
	void SetContextBar();
	void SetAvatarSelection();
	void OnShown();
	void OnBackPrompt();
	void InitializeWidgetNavigation();
	void InitializeWidget();
	void OnAvatarHover();
	void OnAvatarUnhover();
	void OnAvatarSelected();
	void OnAvatarGamepadHover();
	void OnHide();
	void ExecuteUbergraph_WBP_CustomizeAvatar();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
