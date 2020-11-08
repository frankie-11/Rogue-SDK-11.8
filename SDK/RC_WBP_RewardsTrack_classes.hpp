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

// WidgetBlueprintGeneratedClass WBP_RewardsTrack.WBP_RewardsTrack_C
// 0xFFFFFFFFCEFB5900 (0x29BAA280 - 0x5ABF4980)
class UWBP_RewardsTrack_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_RewardsTrack.WBP_RewardsTrack_C");
		return ptr;
	}


	void InitializeWithActivityInstance();
	void InitializeWidget();
	void ExecuteUbergraph_WBP_RewardsTrack();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
