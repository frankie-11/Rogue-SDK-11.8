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

// WidgetBlueprintGeneratedClass WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C
// 0xFFFFFFFFC98AAA00 (0x2449F380 - 0x5ABF4980)
class UWBP_ReportMenuCommentField_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ReportMenuCommentField.WBP_ReportMenuCommentField_C");
		return ptr;
	}


	void NavigateConfirm();
	void ClearText();
	void GetText();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_WBP_ReportMenuCommentField();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
