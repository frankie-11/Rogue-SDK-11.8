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

// WidgetBlueprintGeneratedClass WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C
// 0xFFFFFFFFC875C680 (0x2334C900 - 0x5ABF0280)
class UWBP_HeadstrongPerkActive_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_HeadstrongPerkActive.WBP_HeadstrongPerkActive_C");
		return ptr;
	}


	void SetDisabledState();
	void SetActiveState();
	void OnRepairableArmorEquipped();
	void OnArmorInteractAvailable();
	void OnPawnSet();
	void Initialize_Widget();
	void OnPawnCleared();
	void ExecuteUbergraph_WBP_HeadstrongPerkActive();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
