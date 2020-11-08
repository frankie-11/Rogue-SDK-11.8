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

// BlueprintGeneratedClass TextTypeEffect.TextTypeEffect_C
// 0x1F288C80
class UTextTypeEffect_C : public UObject
{
public:
	unsigned char                                      UnknownData00[0x1F288C80];                                // 0x0000(0x1F288C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TextTypeEffect.TextTypeEffect_C");
		return ptr;
	}


	void SetText();
	void Tick();
	void StartType();
	void ExecuteUbergraph_TextTypeEffect();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
