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

// BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C
// 0xFFFFFFFFF8D5A600 (0x5E974B00 - 0x65C1A500)
class UCamMod_JumpLanding_C : public UCamMod_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_JumpLanding.CamMod_JumpLanding_C");
		return ptr;
	}


	void ShouldModifyCamera();
	void PlayTimeline();
	void OnCamModFinished();
	void ExecuteUbergraph_CamMod_JumpLanding();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
