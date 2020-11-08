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

// BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C
// 0x121A880 (0x66E34D80 - 0x65C1A500)
class UCamMod_JumpStart_C : public UCamMod_Master_C
{
public:
	unsigned char                                      UnknownData00[0x121A880];                                 // 0x65C1A500(0x121A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_JumpStart.CamMod_JumpStart_C");
		return ptr;
	}


	void ShouldModifyCamera();
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_JumpStart();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
