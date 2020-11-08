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

// BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C
// 0xAF18300 (0x68AA4480 - 0x5DB8C180)
class USettingsInfo_Language_C : public UKSSettingsInfoBase
{
public:
	unsigned char                                      UnknownData00[0xAF18300];                                 // 0x5DB8C180(0xAF18300) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SettingsInfo_Language.SettingsInfo_Language_C");
		return ptr;
	}


	void FixupInvalidInt();
	void IsValidValueInt();
	void GetCultureStringFromTextOptionIndex();
	void GetLanguageTextOptionIndex();
	void SetUpLanguageOptions();
	void SaveIntValue();
	void ApplyIntValue();
	void InitializeValue();
	void HandleOnDisplayLanguageApplied();
	void HandleOnDisplayLanguageSaved();
	void RevertSettingToDefault();
	void ExecuteUbergraph_SettingsInfo_Language();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
