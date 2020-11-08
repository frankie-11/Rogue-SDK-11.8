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

// BlueprintGeneratedClass TrendedKick.TrendedKick_C
// 0xC6CF740
class UTrendedKick_C : public UKickbackModule
{
public:
	unsigned char                                      UnknownData00[0xC6CF740];                                 // 0x0000(0xC6CF740) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TrendedKick.TrendedKick_C");
		return ptr;
	}


	void GetMaximumHorizontalKick();
	void GetMaximumVerticalKick();
	void GetCurrentTrendProfile();
	void MakeKickbackInstance();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
