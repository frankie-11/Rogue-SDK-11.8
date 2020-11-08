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

// Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array
// (BlueprintCosmetic)

void AMusicAudioPlayer_C::Append_String_to_Event_Array()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.Append String to Event Array");

	AMusicAudioPlayer_C_Append_String_to_Event_Array_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray
// (BlueprintCosmetic)

void AMusicAudioPlayer_C::PrependStringToEventArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.PrependStringToEventArray");

	AMusicAudioPlayer_C_PrependStringToEventArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray
// (RequiredAPI, BlueprintAuthorityOnly)

void AMusicAudioPlayer_C::ComposeEventNamePriorityArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeEventNamePriorityArray");

	AMusicAudioPlayer_C_ComposeEventNamePriorityArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray
// (RequiredAPI, BlueprintAuthorityOnly)

void AMusicAudioPlayer_C::ComposeBankNamePriorityArray()
{
	static auto fn = UObject::FindObject<UFunction>("Function MusicAudioPlayer.MusicAudioPlayer_C.ComposeBankNamePriorityArray");

	AMusicAudioPlayer_C_ComposeBankNamePriorityArray_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
