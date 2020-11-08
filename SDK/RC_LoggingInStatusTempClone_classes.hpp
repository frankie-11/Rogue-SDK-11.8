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

// WidgetBlueprintGeneratedClass LoggingInStatusTempClone.LoggingInStatusTempClone_C
// 0xFFFFFFFFD1B9B500 (0x2C78FE80 - 0x5ABF4980)
class ULoggingInStatusTempClone_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoggingInStatusTempClone.LoggingInStatusTempClone_C");
		return ptr;
	}


	void SetWaitQueueMessage();
	void InitializeWidget();
	void InitializeWidgetNavigation();
	void BndEvt__LogOffBtn_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
	void ExecuteUbergraph_LoggingInStatusTempClone();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
