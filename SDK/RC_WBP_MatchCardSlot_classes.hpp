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

// WidgetBlueprintGeneratedClass WBP_MatchCardSlot.WBP_MatchCardSlot_C
// 0xFFFFFFFFCD661880 (0x28251B00 - 0x5ABF0280)
class UWBP_MatchCardSlot_C : public UUserWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_MatchCardSlot.WBP_MatchCardSlot_C");
		return ptr;
	}


	void PopulateWithPlayerStats();
	void Construct();
	void AnimateIn();
	void PreConstruct();
	void ExecuteUbergraph_WBP_MatchCardSlot();
	void StartAnimation__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
