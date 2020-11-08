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

// WidgetBlueprintGeneratedClass NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C
// 0xFFFFFFFFA5795300 (0x389C80 - 0x5ABF4980)
class UNewWBP_LobbyNameplate_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass NewWBP_LobbyNameplate.NewWBP_LobbyNameplate_C");
		return ptr;
	}


	void OnPossession();
	void OnHovered();
	void OnUnhovered();
	void Construct();
	void SetName();
	void SetIcons();
	void InitializeWidget();
	void PreConstruct();
	void ExecuteUbergraph_NewWBP_LobbyNameplate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
