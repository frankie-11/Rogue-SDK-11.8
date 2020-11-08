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

// WidgetBlueprintGeneratedClass WBP_ShotgunPellet.WBP_ShotgunPellet_C
// 0xFFFFFFFFD0BFF500 (0x2B7EF780 - 0x5ABF0280)
class UWBP_ShotgunPellet_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_ShotgunPellet.WBP_ShotgunPellet_C");
		return ptr;
	}


	void Construct();
	void PlayEliminationAnim();
	void ExecuteUbergraph_WBP_ShotgunPellet();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
