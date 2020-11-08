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

// Function VoicelineNotify.VoicelineNotify_C.GetNotifyName
// (RequiredAPI)

void UVoicelineNotify_C::GetNotifyName()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoicelineNotify.VoicelineNotify_C.GetNotifyName");

	UVoicelineNotify_C_GetNotifyName_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function VoicelineNotify.VoicelineNotify_C.Received_Notify
// (Final, BlueprintAuthorityOnly)

void UVoicelineNotify_C::Received_Notify()
{
	static auto fn = UObject::FindObject<UFunction>("Function VoicelineNotify.VoicelineNotify_C.Received_Notify");

	UVoicelineNotify_C_Received_Notify_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
