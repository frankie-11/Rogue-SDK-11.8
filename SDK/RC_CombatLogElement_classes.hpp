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

// WidgetBlueprintGeneratedClass CombatLogElement.CombatLogElement_C
// 0xFFFFFFFFC2BCCA80 (0x20752C00 - 0x5DB86180)
class UCombatLogElement_C : public UKSScreenLogWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CombatLogElement.CombatLogElement_C");
		return ptr;
	}


	void ClearInfo();
	void OnSetInfo();
	void SetMessageData();
	void GetVictimTextColor();
	void GetInstigatorTextColor();
	void OnIconUpdated();
	void Transition();
	void OnIconUpdated_Event_1();
	void OnFadeOutAnimFinished();
	void Construct();
	void FadeOut();
	void StopAnimsAndTimers();
	void ExecuteUbergraph_CombatLogElement();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
