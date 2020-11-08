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

// AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C
// 0x807B880 (0x65B97C80 - 0x5DB1C400)
class UABP_GAD_ZiplineDevice_C : public UKSZiplineAnimInst
{
public:
	unsigned char                                      UnknownData00[0x807B880];                                 // 0x5DB1C400(0x807B880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_GAD_ZiplineDevice.ABP_GAD_ZiplineDevice_C");
		return ptr;
	}


	void AnimGraph();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_ABP_GAD_ZiplineDevice();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
