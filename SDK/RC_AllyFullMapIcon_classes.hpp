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

// WidgetBlueprintGeneratedClass AllyFullMapIcon.AllyFullMapIcon_C
// 0xFFFFFFFFCA70D400 (0x28251000 - 0x5DB43C00)
class UAllyFullMapIcon_C : public UKSMapIconWidgetBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass AllyFullMapIcon.AllyFullMapIcon_C");
		return ptr;
	}


	void GetWorldPosition();
	void GetWorldYaw();
	void ShouldUpdate();
	void Construct();
	void Ally_State();
	void ExecuteUbergraph_AllyFullMapIcon();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
