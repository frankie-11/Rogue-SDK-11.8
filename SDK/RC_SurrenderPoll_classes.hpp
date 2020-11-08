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

// BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C
// 0xFFFFFFFFCD87FC40 (0x2B26BF00 - 0x5D9EC2C0)
class USurrenderPoll_C : public UKSPollBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SurrenderPoll.SurrenderPoll_C");
		return ptr;
	}


	void CanPlayerProposeThisPoll();
	void OnPollPassed();
	void OnPollFailed();
	void OnPollStarted();
	void ExecuteUbergraph_SurrenderPoll();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
