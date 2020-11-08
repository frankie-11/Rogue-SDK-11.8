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

// WidgetBlueprintGeneratedClass AllyDeathMinimapIcon.AllyDeathMinimapIcon_C
// 0xFFFFFFFFC5682000 (0x231C5C00 - 0x5DB43C00)
class UAllyDeathMinimapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AllyDeathMinimapIcon.AllyDeathMinimapIcon_C");
		return ptr;
	}


	void ShouldUpdate();
	void Construct();
	void Start_Fade();
	void UpdateMeetsHeightThreshold();
	void ExecuteUbergraph_AllyDeathMinimapIcon();
	void PingExpired__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
