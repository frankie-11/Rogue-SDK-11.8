#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// 0x5B030380
struct FSolverBreakingFilterSettings
{
	unsigned char                                      UnknownData00[0x5B030380];                                // 0x0000(0x5B030380) MISSED OFFSET
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// 0x5B030180
struct FSolverCollisionFilterSettings
{
	unsigned char                                      UnknownData00[0x5B030180];                                // 0x0000(0x5B030180) MISSED OFFSET
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// 0x5B032080
struct FSolverTrailingFilterSettings
{
	unsigned char                                      UnknownData00[0x5B032080];                                // 0x0000(0x5B032080) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
