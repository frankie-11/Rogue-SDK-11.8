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

// WidgetBlueprintGeneratedClass WBP_VoteChoice.WBP_VoteChoice_C
// 0xFFFFFFFFC998E400 (0x24582D80 - 0x5ABF4980)
class UWBP_VoteChoice_C : public UKSWidget
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_VoteChoice.WBP_VoteChoice_C");
		return ptr;
	}


	void PreConstruct();
	void Construct();
	void UpdateVoteFill();
	void ResetFill();
	void ExecuteUbergraph_WBP_VoteChoice();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
