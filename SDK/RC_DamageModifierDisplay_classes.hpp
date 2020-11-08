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

// WidgetBlueprintGeneratedClass DamageModifierDisplay.DamageModifierDisplay_C
// 0xFFFFFFFFB796B000 (0x1255F980 - 0x5ABF4980)
class UDamageModifierDisplay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DamageModifierDisplay.DamageModifierDisplay_C");
		return ptr;
	}


	void InitializeWidget();
	void ExecuteUbergraph_DamageModifierDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
