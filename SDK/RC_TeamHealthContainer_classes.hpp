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

// WidgetBlueprintGeneratedClass TeamHealthContainer.TeamHealthContainer_C
// 0xFFFFFFFFCCAFA800 (0x276EAA80 - 0x5ABF0280)
class UTeamHealthContainer_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeamHealthContainer.TeamHealthContainer_C");
		return ptr;
	}


	void Construct();
	void UpdateTeammateHealthBars();
	void HandlePlayerSpawn();
	void HandlePhaseChnage();
	void HandleSetupStart();
	void ExecuteUbergraph_TeamHealthContainer();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
