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

// WidgetBlueprintGeneratedClass KillCam.KillCam_C
// 0xCCBF480
class UKillCam_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0xCCBF480];                                 // 0x0000(0xCCBF480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass KillCam.KillCam_C");
		return ptr;
	}


	void PostSetPlayerState();
	void SetPlayerStateUIRelevanceChanged();
	void ExecuteUbergraph_KillCam();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
