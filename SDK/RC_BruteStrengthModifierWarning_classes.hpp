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

// WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C
// 0xFFFFFFFFCE88BC80 (0x29480600 - 0x5ABF4980)
class UBruteStrengthModifierWarning_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BruteStrengthModifierWarning.BruteStrengthModifierWarning_C");
		return ptr;
	}


	void InitializeWidget();
	void OnHide();
	void OnFade();
	void ExecuteUbergraph_BruteStrengthModifierWarning();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
