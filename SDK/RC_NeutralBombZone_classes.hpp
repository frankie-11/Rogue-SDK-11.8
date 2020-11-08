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

// BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C
// 0x81D7180 (0x65C1ED80 - 0x5DA47C00)
class ANeutralBombZone_C : public AKSNeutralBombZone
{
public:
	unsigned char                                      UnknownData00[0x81D7180];                                 // 0x5DA47C00(0x81D7180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NeutralBombZone.NeutralBombZone_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void UpdateZoneMaterial();
	void RoundSetup();
	void TeamUpdated();
	void Activated();
	void BombStateChanged();
	void ExecuteUbergraph_NeutralBombZone();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
