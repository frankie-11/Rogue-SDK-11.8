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

// Function TemplateSequence.TemplateSequenceActor.SetSequence
// ()

void ATemplateSequenceActor::SetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetSequence");

	ATemplateSequenceActor_SetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.SetBinding
// ()

void ATemplateSequenceActor::SetBinding()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.SetBinding");

	ATemplateSequenceActor_SetBinding_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.LoadSequence
// ()

void ATemplateSequenceActor::LoadSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.LoadSequence");

	ATemplateSequenceActor_LoadSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
// ()

void ATemplateSequenceActor::GetSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer");

	ATemplateSequenceActor_GetSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequenceActor.GetSequence
// ()

void ATemplateSequenceActor::GetSequence()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequenceActor.GetSequence");

	ATemplateSequenceActor_GetSequence_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
// ()

void UTemplateSequencePlayer::CreateTemplateSequencePlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer");

	UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
