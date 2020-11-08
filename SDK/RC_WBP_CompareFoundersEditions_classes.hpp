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

// WidgetBlueprintGeneratedClass WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C
// 0xFFFFFFFFD0FA7180 (0x2BB9BB00 - 0x5ABF4980)
class UWBP_CompareFoundersEditions_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CompareFoundersEditions.WBP_CompareFoundersEditions_C");
		return ptr;
	}


	void OnClickedOtherClosed();
	void NavigateBack();
	void OnCloseClicked();
	void OnShown();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_WBP_CompareFoundersEditions();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
