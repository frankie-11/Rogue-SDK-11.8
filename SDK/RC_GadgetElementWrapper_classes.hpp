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

// WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C
// 0xFFFFFFFFB49AB380 (0x12563E80 - 0x5DBB8B00)
class UGadgetElementWrapper_C : public UKSViewedPawnInventoryWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GadgetElementWrapper.GadgetElementWrapper_C");
		return ptr;
	}


	void Get_Current_Cannot_Fire_Now();
	void Set_Jammed();
	void InitializeWidget();
	void PostSetPawn();
	void OnWeaponInventoryChanged();
	void GadgetSwapped();
	void OnSetCannotFireNow();
	void ExecuteUbergraph_GadgetElementWrapper();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
