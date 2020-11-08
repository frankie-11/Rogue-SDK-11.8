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

// WidgetBlueprintGeneratedClass WBP_LoadoutButton.WBP_LoadoutButton_C
// 0xFFFFFFFFC9F66780 (0x24B56A00 - 0x5ABF0280)
class UWBP_LoadoutButton_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutButton.WBP_LoadoutButton_C");
		return ptr;
	}


	void PopulateLoadoutButton();
	void SetLoadoutItem();
	void PreConstruct();
	void Construct();
	void OnClick();
	void OnHover();
	void SetIsActive();
	void ExecuteUbergraph_WBP_LoadoutButton();
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
