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

// WidgetBlueprintGeneratedClass WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C
// 0xFFFFFFFFD1401F80 (0x2BFF6900 - 0x5ABF4980)
class UWBP_JoinMatchBlocker_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_JoinMatchBlocker.WBP_JoinMatchBlocker_C");
		return ptr;
	}


	void OnKeyUp();
	void OnKeyDown();
	void InitializeWidgetNavigation();
	void StartShowSequence();
	void StartHideSequence();
	void OnInitialized();
	void OnShowAnimFinish();
	void OnShowAnimStart();
	void ExecuteUbergraph_WBP_JoinMatchBlocker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
