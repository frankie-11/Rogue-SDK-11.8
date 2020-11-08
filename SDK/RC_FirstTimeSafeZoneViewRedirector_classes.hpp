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

// BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C
// 0xFFFFFFFFA2447800 (0x0000 - 0x5DBB8800)
class UFirstTimeSafeZoneViewRedirector_C : public UKSViewRedirector_LocalSetting
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass FirstTimeSafeZoneViewRedirector.FirstTimeSafeZoneViewRedirector_C");
		return ptr;
	}


	void DoesLocalSettingApply();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
