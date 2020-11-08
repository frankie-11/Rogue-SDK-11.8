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

// WidgetBlueprintGeneratedClass WBP_WaitForPlayers.WBP_WaitForPlayers_C
// 0xFFFFFFFFC6DFED00 (0x219F3680 - 0x5ABF4980)
class UWBP_WaitForPlayers_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_WaitForPlayers.WBP_WaitForPlayers_C");
		return ptr;
	}


	void Construct();
	void HandlePhaseChange();
	void ExecuteUbergraph_WBP_WaitForPlayers();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
