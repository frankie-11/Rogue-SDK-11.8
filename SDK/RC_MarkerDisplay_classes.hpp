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

// WidgetBlueprintGeneratedClass MarkerDisplay.MarkerDisplay_C
// 0x2B26F900
class UMarkerDisplay_C : public UKSMarkerDisplayBase
{
public:
	unsigned char                                      UnknownData00[0x2B26F900];                                // 0x0000(0x2B26F900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass MarkerDisplay.MarkerDisplay_C");
		return ptr;
	}


	void CreateNewIconWidget();
	void Receive_Loot_Inspect_Off_From_Marker();
	void Receive_Loot_Inspect_Request_From_Marker();
	void InitializeTickAnimations();
	void Inspect_Anim_Update();
	void Inspect_Anim_Finished();
	void InitializeWidget();
	void OnScrambleStateChanged();
	void Handle_Loot_Site_State_Changed();
	void Tick();
	void ExecuteUbergraph_MarkerDisplay();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
