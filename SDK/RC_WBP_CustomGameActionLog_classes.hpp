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

// WidgetBlueprintGeneratedClass WBP_CustomGameActionLog.WBP_CustomGameActionLog_C
// 0xFFFFFFFFCE899300 (0x29489580 - 0x5ABF0280)
class UWBP_CustomGameActionLog_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_CustomGameActionLog.WBP_CustomGameActionLog_C");
		return ptr;
	}


	void ClearLog();
	void AddLog();
	void PreConstruct();
	void Construct();
	void HandleScrollBottom();
	void BndEvt__ScrollContainer_K2Node_ComponentBoundEvent_0_OnUserScrolledEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_CustomGameActionLog();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
