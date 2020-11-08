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

// BlueprintGeneratedClass CamMod_Master.CamMod_Master_C
// 0xA945000 (0x65C1A500 - 0x5B2D5500)
class UCamMod_Master_C : public UCameraModifier
{
public:
	unsigned char                                      UnknownData00[0xA945000];                                 // 0x5B2D5500(0xA945000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_Master.CamMod_Master_C");
		return ptr;
	}


	void OnCamModFinished();
	void PlayTimeline();
	void ShouldModifyCamera();
	void UpdateValues();
	void GetKSCharacterData();
	void BlueprintModifyCamera();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
