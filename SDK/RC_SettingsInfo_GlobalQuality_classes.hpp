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

// BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C
// 0xAFA61E0 (0x68AA2680 - 0x5DAFC4A0)
class USettingsInfo_GlobalQuality_C : public UKSSettingsInfo_Generic
{
public:
	unsigned char                                      UnknownData00[0xAFA61E0];                                 // 0x5DAFC4A0(0xAFA61E0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_GlobalQuality.SettingsInfo_GlobalQuality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_GlobalQuality();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
