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

// Class ImgMedia.ImgMediaSource
// 0xFFFFFFFFFFFFFD00 (0x5B22C180 - 0x5B22C480)
class UImgMediaSource : public UBaseMediaSource
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ImgMedia.ImgMediaSource");
		return ptr;
	}


	void SetSequencePath();
	void GetSequencePath();
	void GetProxies();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
