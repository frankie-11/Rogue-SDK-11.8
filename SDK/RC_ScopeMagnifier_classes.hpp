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

// WidgetBlueprintGeneratedClass ScopeMagnifier.ScopeMagnifier_C
// 0x24231600
class UScopeMagnifier_C : public UKSViewedActiveWeaponWidget
{
public:
	unsigned char                                      UnknownData00[0x24231600];                                // 0x0000(0x24231600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ScopeMagnifier.ScopeMagnifier_C");
		return ptr;
	}


	void OnPlayerHealthChanged();
	void OnAimStateChanged();
	void DetermineScope();
	void HandleInputModeChanged();
	void SetPromptImage();
	void Get_PostPromptText_Text_1();
	void Get_PrePromptText_Text_1();
	void SplitPrompt();
	void PostSetWeapon();
	void PreClearWeapon();
	void InitializeWidget();
	void Construct();
	void ExecuteUbergraph_ScopeMagnifier();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
