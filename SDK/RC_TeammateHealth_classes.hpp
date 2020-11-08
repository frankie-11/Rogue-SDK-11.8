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

// WidgetBlueprintGeneratedClass TeammateHealth.TeammateHealth_C
// 0xFFFFFFFFD0BF8880 (0x2B7E8B00 - 0x5ABF0280)
class UTeammateHealth_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass TeammateHealth.TeammateHealth_C");
		return ptr;
	}


	void Construct();
	void HandleHealthChanged();
	void HandleOnDowned();
	void HandleOnElimated();
	void HandleOnPlayerSet();
	void ResetPlayerHealth();
	void ExecuteUbergraph_TeammateHealth();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
