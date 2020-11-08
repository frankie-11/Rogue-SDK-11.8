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

// DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C
// 0x650673C0
class UMainCharacterThreatComponent_C : public UConfigurableThreatComponent_C
{
public:
	unsigned char                                      UnknownData00[0x650673C0];                                // 0x0000(0x650673C0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainCharacterThreatComponent.MainCharacterThreatComponent_C");
		return ptr;
	}


	void ReceiveTick();
	void DebugThreatLevels();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
