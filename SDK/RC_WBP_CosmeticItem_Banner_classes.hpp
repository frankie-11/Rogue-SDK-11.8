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

// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C
// 0xFFFFFFFFCD65F200 (0x28253B80 - 0x5ABF4980)
class UWBP_CosmeticItem_Banner_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticItem_Banner.WBP_CosmeticItem_Banner_C");
		return ptr;
	}


	void NavigateConfirm();
	void SetBannerItemSlot();
	void OnHoverSound();
	void OnClickSound();
	void Construct();
	void PopulateSlot();
	void OnBannerHover();
	void OnBannerUnhover();
	void OnBannerClick();
	void GamepadHover();
	void GamepadUnhover();
	void SetBannerActive();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_CosmeticItem_Banner();
	void OnItemClicked__DelegateSignature();
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
