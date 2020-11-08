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

// DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature
// ()

void UAsyncTraceUtilBPLibrary::OnMultiAsyncTraceResult__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("DelegateFunction AsyncTraceUtil.AsyncTraceUtilBPLibrary.OnMultiAsyncTraceResult__DelegateSignature");

	UAsyncTraceUtilBPLibrary_OnMultiAsyncTraceResult__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync
// ()

void UAsyncTraceUtilBPLibrary::MultipleLineTraceAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultipleLineTraceAsync");

	UAsyncTraceUtilBPLibrary_MultipleLineTraceAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync
// ()

void UAsyncTraceUtilBPLibrary::MultiLineTraceByChannelAsync()
{
	static auto fn = UObject::FindObject<UFunction>("Function AsyncTraceUtil.AsyncTraceUtilBPLibrary.MultiLineTraceByChannelAsync");

	UAsyncTraceUtilBPLibrary_MultiLineTraceByChannelAsync_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
