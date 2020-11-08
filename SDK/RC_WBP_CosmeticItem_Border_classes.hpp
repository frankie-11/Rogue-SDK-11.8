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

// WidgetBlueprintGeneratedClass WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C
// 0xFFFFFFFFCD662500 (0x28256E80 - 0x5ABF4980)
class UWBP_CosmeticItem_Border_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CosmeticItem_Border.WBP_CosmeticItem_Border_C");
		return ptr;
	}


	void NavigateConfirm();
	void SetBorderItemSlot();
	void OnHoverSound();
	void OnClickSound();
	void Construct();
	void InitializeWidget();
	void PopulateSlot();
	void OnBorderHover();
	void OnBorderUnhover();
	void OnBorderClick();
	void GamepadHover();
	void GamepadUnhover();
	void SetBorderActive();
	void ExecuteUbergraph_WBP_CosmeticItem_Border();
	void OnItemClicked__DelegateSignature();
	void OnItemUnhovered__DelegateSignature();
	void OnItemHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
