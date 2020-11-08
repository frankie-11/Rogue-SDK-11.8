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

// Class CableComponent.CableActor
// 0x2A3700 (0x5B241700 - 0x5AF9E000)
class ACableActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x2A3700];                                  // 0x5AF9E000(0x2A3700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableActor");
		return ptr;
	}

};


// Class CableComponent.CableComponent
// 0xA603E60 (0x5B242B00 - 0x50C3ECA0)
class UCableComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData00[0xA603E60];                                 // 0x50C3ECA0(0xA603E60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CableComponent.CableComponent");
		return ptr;
	}


	void SetAttachEndToComponent();
	void SetAttachEndTo();
	void GetCableParticleLocations();
	void GetAttachedComponent();
	void GetAttachedActor();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
