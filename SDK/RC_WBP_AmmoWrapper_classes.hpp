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

// WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C
// 0x105FB380 (0x6B1EB600 - 0x5ABF0280)
class UWBP_AmmoWrapper_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x105FB380];                                // 0x5ABF0280(0x105FB380) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AmmoWrapper.WBP_AmmoWrapper_C");
		return ptr;
	}


	void GetAmmoWidgets();
	void OnAmmoChanged();
	void SetInitialAmmoCount();
	void AddAmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
