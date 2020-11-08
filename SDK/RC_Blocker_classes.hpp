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

// WidgetBlueprintGeneratedClass Blocker.Blocker_C
// 0xFFFFFFFFC9B96780 (0x2478B100 - 0x5ABF4980)
class UBlocker_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Blocker.Blocker_C");
		return ptr;
	}


	void BndEvt__Closer_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
	void Bind();
	void InitializeWidget();
	void HandleBlockerChange();
	void ExecuteUbergraph_Blocker();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
