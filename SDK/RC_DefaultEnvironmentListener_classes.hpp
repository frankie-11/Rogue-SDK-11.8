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

// BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C
// 0xB76A100 (0x669B9200 - 0x5B24F100)
class UDefaultEnvironmentListener_C : public UEnvironmentListenerComponent
{
public:
	unsigned char                                      UnknownData00[0xB76A100];                                 // 0x5B24F100(0xB76A100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DefaultEnvironmentListener.DefaultEnvironmentListener_C");
		return ptr;
	}


	void OnEnvironmentChanged();
	void Print_State();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_DefaultEnvironmentListener();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
