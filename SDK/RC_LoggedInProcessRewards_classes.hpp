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

// WidgetBlueprintGeneratedClass LoggedInProcessRewards.LoggedInProcessRewards_C
// 0x2567FC00
class ULoggedInProcessRewards_C : public UKSLoginProcessRewards
{
public:
	unsigned char                                      UnknownData00[0x2567FC00];                                // 0x0000(0x2567FC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LoggedInProcessRewards.LoggedInProcessRewards_C");
		return ptr;
	}


	void OnShown();
	void ExecuteUbergraph_LoggedInProcessRewards();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
