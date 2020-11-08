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

// DynamicClass AllyMinimapIcon.AllyMinimapIcon_C
// 0xFFFFFFFFC6734380 (0x24277F80 - 0x5DB43C00)
class UAllyMinimapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass AllyMinimapIcon.AllyMinimapIcon_C");
		return ptr;
	}


	void UIRelevantChanged();
	void Tick();
	void OnSetupStart();
	void OnPlayerRevived();
	void OnPlayerDown();
	void Handle_Bomb_State_Changed();
	void Construct();
	void PlayerReviveDelegate__DelegateSignature();
	void PlayerDownInfo__DelegateSignature();
	void OnUIRelevantPlayerStateChanged__DelegateSignature();
	void OnSetupPhaseStart__DelegateSignature();
	void OnNeutralBombStateChanged__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
