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

// WidgetBlueprintGeneratedClass WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C
// 0xFFFFFFFFC86DA280 (0x232CEC00 - 0x5ABF4980)
class UWBP_PlayerIDCustomize_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_PlayerIDCustomize.WBP_PlayerIDCustomize_C");
		return ptr;
	}


	void OnPreviousTab();
	void OnNextTab();
	void SetInfoFieldData();
	void Construct();
	void InitializeWidget();
	void PreConstruct();
	void Update_Player_Identity();
	void OnButtonsCreated();
	void ExecuteUbergraph_WBP_PlayerIDCustomize();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
