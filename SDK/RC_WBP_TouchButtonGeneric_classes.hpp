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

// WidgetBlueprintGeneratedClass WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C
// 0xFFFFFFFFC964D300 (0x2423D580 - 0x5ABF0280)
class UWBP_TouchButtonGeneric_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_TouchButtonGeneric.WBP_TouchButtonGeneric_C");
		return ptr;
	}


	void TriggerInputAction();
	void PreConstruct();
	void Construct();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__HitTarget_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_TouchButtonGeneric();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
