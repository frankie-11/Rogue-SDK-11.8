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

// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C
// 0xFFFFFFFFC86D8600 (0x232CCF80 - 0x5ABF4980)
class UWBP_CosmeticItem_Avatar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticItem_Avatar.WBP_CosmeticItem_Avatar_C");
		return ptr;
	}


	void NavigateConfirm();
	void SetAvatarItemSlot();
	void OnHoverSound();
	void OnClickSound();
	void Construct();
	void InitializeWidget();
	void PopulateSlot();
	void OnAvatarHover();
	void OnAvatarUnhover();
	void OnAvatarClick();
	void GamepadHover();
	void GamepadUnhover();
	void SetAvatarActive();
	void ExecuteUbergraph_WBP_CosmeticItem_Avatar();
	void OnItemClicked__DelegateSignature();
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
