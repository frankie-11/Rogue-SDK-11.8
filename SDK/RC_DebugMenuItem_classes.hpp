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

// WidgetBlueprintGeneratedClass DebugMenuItem.DebugMenuItem_C
// 0xFFFFFFFFC968A200 (0x2427EB80 - 0x5ABF4980)
class UDebugMenuItem_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugMenuItem.DebugMenuItem_C");
		return ptr;
	}


	void NavigateConfirm();
	void Construct();
	void GamepadHover();
	void GamepadUnhover();
	void ExecuteUbergraph_DebugMenuItem();
	void ItemSelected__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
