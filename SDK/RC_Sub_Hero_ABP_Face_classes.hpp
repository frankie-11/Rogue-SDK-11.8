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

// DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C
// 0x66E39680
class USub_Hero_ABP_Face_C : public UKSFaceAnimInst
{
public:
	unsigned char                                      UnknownData00[0x66E39680];                                // 0x0000(0x66E39680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("DynamicClass Sub_Hero_ABP_Face.Sub_Hero_ABP_Face_C");
		return ptr;
	}


	void ExecuteUbergraph_Sub_Hero_ABP_Face();
	void AnimGraph();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
