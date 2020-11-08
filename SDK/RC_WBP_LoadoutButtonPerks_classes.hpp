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

// WidgetBlueprintGeneratedClass WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C
// 0xFFFFFFFFCF150A80 (0x29D40D00 - 0x5ABF0280)
class UWBP_LoadoutButtonPerks_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoadoutButtonPerks.WBP_LoadoutButtonPerks_C");
		return ptr;
	}


	void PopulateLoadoutButton();
	void SetLoadoutPerks();
	void PreConstruct();
	void Construct();
	void OnBtnHovered();
	void OnBtnClicked();
	void SetIsActive();
	void ExecuteUbergraph_WBP_LoadoutButtonPerks();
	void OnClicked__DelegateSignature();
	void OnHovered__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
