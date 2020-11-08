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

// WidgetBlueprintGeneratedClass WBP_AmmoCount.WBP_AmmoCount_C
// 0x105FBF80 (0x6B1EC200 - 0x5ABF0280)
class UWBP_AmmoCount_C : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x105FBF80];                                // 0x5ABF0280(0x105FBF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_AmmoCount.WBP_AmmoCount_C");
		return ptr;
	}


	void Construct();
	void SetAmmoActive();
	void SetAmmoColor();
	void ExecuteUbergraph_WBP_AmmoCount();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
