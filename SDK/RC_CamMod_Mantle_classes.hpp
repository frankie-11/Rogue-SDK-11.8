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

// BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C
// 0xFFFFFFFFF9BACD80 (0x5F7C7280 - 0x65C1A500)
class UCamMod_Mantle_C : public UCamMod_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CamMod_Mantle.CamMod_Mantle_C");
		return ptr;
	}


	void ShouldModifyCamera();
	void PlayTimeline();
	void ExecuteUbergraph_CamMod_Mantle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
