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

// WidgetBlueprintGeneratedClass HitReticle.HitReticle_C
// 0xFFFFFFFFC999AB80 (0x2458AE00 - 0x5ABF0280)
class UHitReticle_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HitReticle.HitReticle_C");
		return ptr;
	}


	void OnHitAnimationFinished();
	void ResetHitReticle();
	void ExecuteUbergraph_HitReticle();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
