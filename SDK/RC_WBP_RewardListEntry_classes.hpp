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

// WidgetBlueprintGeneratedClass WBP_RewardListEntry.WBP_RewardListEntry_C
// 0xFFFFFFFFCEFB4F00 (0x29BA9880 - 0x5ABF4980)
class UWBP_RewardListEntry_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RewardListEntry.WBP_RewardListEntry_C");
		return ptr;
	}


	void BndEvt__HitTest_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__HitTest_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void PopulateSlot();
	void ExecuteUbergraph_WBP_RewardListEntry();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
