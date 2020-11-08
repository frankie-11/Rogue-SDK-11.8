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

// BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C
// 0xAFA5E60 (0x68AA2300 - 0x5DAFC4A0)
class USettingsInfo_Quality_C : public UKSSettingsInfo_Generic
{
public:
	unsigned char                                      UnknownData00[0xAFA5E60];                                 // 0x5DAFC4A0(0xAFA5E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_Quality.SettingsInfo_Quality_C");
		return ptr;
	}


	void InitializeValue();
	void ExecuteUbergraph_SettingsInfo_Quality();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
