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

// DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C
// 0x5C46900 (0x635CEE80 - 0x5D988580)
class UCharacterEmotionComponent_C : public UKSEmotionComponent
{
public:
	unsigned char                                      UnknownData00[0x5C46900];                                 // 0x5D988580(0x5C46900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass CharacterEmotionComponent.CharacterEmotionComponent_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void Player_Downed_Changed();
	void Check_Death_State();
	void Character_Health_Changed();
	void Character_Aim_State_Changed();
	void OnHealthChanged__DelegateSignature();
	void OnDeathStateChanged__DelegateSignature();
	void OnCharacterDownedChanged__DelegateSignature();
	void OnAimStateChange__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
