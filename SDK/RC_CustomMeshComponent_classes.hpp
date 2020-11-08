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

// Class CustomMeshComponent.CustomMeshComponent
// 0xFFFFFFFFAF3C1360 (0x0000 - 0x50C3ECA0)
class UCustomMeshComponent : public UMeshComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CustomMeshComponent.CustomMeshComponent");
		return ptr;
	}


	void SetCustomMeshTriangles();
	void ClearCustomMeshTriangles();
	void AddCustomMeshTriangles();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
