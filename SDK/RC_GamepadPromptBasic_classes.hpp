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

// WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C
// 0xFFFFFFFFCE89B300 (0x2948B580 - 0x5ABF0280)
class UGamepadPromptBasic_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass GamepadPromptBasic.GamepadPromptBasic_C");
		return ptr;
	}


	void SetPrompt();
	void Populate();
	void Construct();
	void ExecuteUbergraph_GamepadPromptBasic();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
