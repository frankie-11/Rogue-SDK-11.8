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

// BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C
// 0xFFFFFFFFA4F18700 (0x0000 - 0x5B0E7900)
class AMusicAudioPlayer_C : public AKSAudioPlayer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MusicAudioPlayer.MusicAudioPlayer_C");
		return ptr;
	}


	void Append_String_to_Event_Array();
	void PrependStringToEventArray();
	void ComposeEventNamePriorityArray();
	void ComposeBankNamePriorityArray();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
