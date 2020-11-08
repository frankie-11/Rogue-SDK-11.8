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

// WidgetBlueprintGeneratedClass WBP_SectionListingBar.WBP_SectionListingBar_C
// 0xFFFFFFFFD0677A00 (0x2B26C380 - 0x5ABF4980)
class UWBP_SectionListingBar_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_SectionListingBar.WBP_SectionListingBar_C");
		return ptr;
	}


	void SetActiveButton();
	void OnInputStateChanged();
	void OnSectionButton();
	void SetSections();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_SectionListingBar();
	void OnSectionSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
