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

// BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C
// 0x635C1700
class UReloadOnDodgeRollModInst_C : public UKSModInst_OnDodgeRoll
{
public:
	unsigned char                                      UnknownData00[0x635C1700];                                // 0x0000(0x635C1700) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ReloadOnDodgeRollModInst.ReloadOnDodgeRollModInst_C");
		return ptr;
	}


	void MagDropForDodgeReload();
	void StopAnimationFromEvent();
	void ReactsToAnimationEvent();
	void OnDodgeRoll();
	void RemotePlayerAudio();
	void Dodge_Reload_Mod_Notified();
	void ExecuteUbergraph_ReloadOnDodgeRollModInst();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
