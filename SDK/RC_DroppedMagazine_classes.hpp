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

// BlueprintGeneratedClass DroppedMagazine.DroppedMagazine_C
// 0xBA18900 (0x669B6900 - 0x5AF9E000)
class ADroppedMagazine_C : public AActor
{
public:
	unsigned char                                      UnknownData00[0xBA18900];                                 // 0x5AF9E000(0xBA18900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DroppedMagazine.DroppedMagazine_C");
		return ptr;
	}


	void ReceiveBeginPlay();
	void SetMesh();
	void SetVelocity();
	void ExecuteUbergraph_DroppedMagazine();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
