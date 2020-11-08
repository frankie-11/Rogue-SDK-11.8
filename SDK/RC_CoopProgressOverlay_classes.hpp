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

// WidgetBlueprintGeneratedClass CoopProgressOverlay.CoopProgressOverlay_C
// 0xFFFFFFFFC468B800 (0x1F280180 - 0x5ABF4980)
class UCoopProgressOverlay_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass CoopProgressOverlay.CoopProgressOverlay_C");
		return ptr;
	}


	void Refresh_Appearance();
	void InitializeWidget();
	void Handle_Round_Start();
	void Handle_Coop_Pickup();
	void Handle_Computers_Unlocked();
	void Handle_Successful_Hack();
	void Handle_Escape_Point_Changed();
	void Handle_Phase_Change();
	void Handle_Timer_Second_Tick();
	void Handle_Player_Downed_Changed();
	void Handle_Player_Death();
	void ExecuteUbergraph_CoopProgressOverlay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
