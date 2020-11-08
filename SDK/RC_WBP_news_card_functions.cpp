// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function WBP_news_card.WBP_news_card_C.SetCardData
// ()

void UWBP_news_card_C::SetCardData()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.SetCardData");

	UWBP_news_card_C_SetCardData_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_card.WBP_news_card_C.PreConstruct
// (Final)

void UWBP_news_card_C::PreConstruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.PreConstruct");

	UWBP_news_card_C_PreConstruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card
// (RequiredAPI)

void UWBP_news_card_C::ExecuteUbergraph_WBP_news_card()
{
	static auto fn = UObject::FindObject<UFunction>("Function WBP_news_card.WBP_news_card_C.ExecuteUbergraph_WBP_news_card");

	UWBP_news_card_C_ExecuteUbergraph_WBP_news_card_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
