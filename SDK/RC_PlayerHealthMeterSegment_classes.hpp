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

// WidgetBlueprintGeneratedClass PlayerHealthMeterSegment.PlayerHealthMeterSegment_C
// 0xB02E780 (0x65C1EA00 - 0x5ABF0280)
class UPlayerHealthMeterSegment_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0xB02E780];                                 // 0x5ABF0280(0xB02E780) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHealthMeterSegment.PlayerHealthMeterSegment_C");
		return ptr;
	}


	void SetDotVisibility();
	void PlayDamagePulse();
	void SetBonusState();
	void SetSliceValues();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
