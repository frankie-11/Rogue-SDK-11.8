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

// WidgetBlueprintGeneratedClass SwimmingHUD.SwimmingHUD_C
// 0x2423E600
class USwimmingHUD_C : public UKSViewedPawnWidget
{
public:
	unsigned char                                      UnknownData00[0x2423E600];                                // 0x0000(0x2423E600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass SwimmingHUD.SwimmingHUD_C");
		return ptr;
	}


	void Construct();
	void SwimmingChanged();
	void PostSetPawn();
	void PreClearPawn();
	void ExecuteUbergraph_SwimmingHUD();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
