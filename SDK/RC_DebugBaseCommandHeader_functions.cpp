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

// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct
// (Final)

void UDebugBaseCommandHeader_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.Construct");

	UDebugBaseCommandHeader_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex
// (Final)

void UDebugBaseCommandHeader_C::EstablishIndex()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.EstablishIndex");

	UDebugBaseCommandHeader_C_EstablishIndex_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader
// (BlueprintAuthorityOnly)

void UDebugBaseCommandHeader_C::ExecuteUbergraph_DebugBaseCommandHeader()
{
	static auto fn = UObject::FindObject<UFunction>("Function DebugBaseCommandHeader.DebugBaseCommandHeader_C.ExecuteUbergraph_DebugBaseCommandHeader");

	UDebugBaseCommandHeader_C_ExecuteUbergraph_DebugBaseCommandHeader_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
