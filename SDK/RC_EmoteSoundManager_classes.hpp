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

// BlueprintGeneratedClass EmoteSoundManager.EmoteSoundManager_C
// 0x820CA00 (0x65B95E80 - 0x5D989480)
class AEmoteSoundManager_C : public AKSEmoteMusicManager
{
public:
	unsigned char                                      UnknownData00[0x820CA00];                                 // 0x5D989480(0x820CA00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EmoteSoundManager.EmoteSoundManager_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
