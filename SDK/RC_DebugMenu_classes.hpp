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

// WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C
// 0xFFFFFFFFCF0E42E0 (0x2CBD9C00 - 0x5DAF5920)
class UDebugMenu_C : public UKSDebugMenu
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DebugMenu.DebugMenu_C");
		return ptr;
	}


	void GetParamTypeForSubCommand();
	void AddBaseCommandHeader();
	void NavigateBack();
	void CommandSelected();
	void MakeBoolSubmenu();
	void InternalPopulate();
	void PopulateList();
	void Construct();
	void OnShown();
	void OnHide();
	void InitializeWidgetNavigation();
	void ExecuteUbergraph_DebugMenu();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
