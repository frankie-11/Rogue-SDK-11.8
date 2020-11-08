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

// DynamicClass PlayerHealthMeter.PlayerHealthMeter_C
// 0x65B90B00
class UPlayerHealthMeter_C : public UKSPlayerHealthMeterBase
{
public:
	unsigned char                                      UnknownData00[0x65B90B00];                                // 0x0000(0x65B90B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass PlayerHealthMeter.PlayerHealthMeter_C");
		return ptr;
	}


	void SetHealthMeterState();
	void PreConstruct();
	void PlayDamagePulse();
	void Construct();
	void Apply_State_To_Segments();
	void Add_Segments_If_Needed();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
