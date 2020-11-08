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

// Class StaticMeshDescription.StaticMeshDescription
// 0x0000
class UStaticMeshDescription : public UMeshDescriptionBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class StaticMeshDescription.StaticMeshDescription");
		return ptr;
	}


	void SetVertexInstanceUV();
	void SetPolygonGroupMaterialSlotName();
	void GetVertexInstanceUV();
	void CreateCube();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
