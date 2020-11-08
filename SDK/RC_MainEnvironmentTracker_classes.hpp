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

// DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C
// 0x8343480 (0x63579520 - 0x5B2360A0)
class UMainEnvironmentTracker_C : public UEnvironmentTrackerComponent
{
public:
	unsigned char                                      UnknownData00[0x8343480];                                 // 0x5B2360A0(0x8343480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass MainEnvironmentTracker.MainEnvironmentTracker_C");
		return ptr;
	}


	void BlueprintEnvironmentChanged();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
