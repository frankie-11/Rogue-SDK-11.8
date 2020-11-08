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

// BlueprintGeneratedClass IKSContextMenuTarget.IKSContextMenuTarget_C
// 0x0000
class UIKSContextMenuTarget_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IKSContextMenuTarget.IKSContextMenuTarget_C");
		return ptr;
	}


	void OnContextMenuOpen();
	void OnContextMenuClose();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
