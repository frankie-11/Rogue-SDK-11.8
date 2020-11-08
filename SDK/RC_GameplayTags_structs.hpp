#pragma once

// RogueCompany (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum GameplayTags.EGameplayTagQueryExprType
enum class EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7
};


// Enum GameplayTags.EGameplayTagEventType
enum class EGameplayTagEventType : uint8_t
{
	EGameplayTagEventType__NewOrRemoved = 0,
	EGameplayTagEventType__AnyCountChange = 1,
	EGameplayTagEventType__EGameplayTagEventType_MAX = 2
};


// Enum GameplayTags.EGameplayContainerMatchType
enum class EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagMatchType
enum class EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2
};


// Enum GameplayTags.EGameplayTagSelectionType
enum class EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4
};


// Enum GameplayTags.EGameplayTagSourceType
enum class EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTag
// 0x5A927880
struct FGameplayTag
{
	unsigned char                                      UnknownData00[0x5A927880];                                // 0x0000(0x5A927880) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x5AEF7500
struct FGameplayTagQuery
{
	unsigned char                                      UnknownData00[0x5AEF7500];                                // 0x0000(0x5AEF7500) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x5AF5B500
struct FGameplayTagContainer
{
	unsigned char                                      UnknownData00[0x5AF5B500];                                // 0x0000(0x5AF5B500) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0000
struct FGameplayTagCreationWidgetHelper
{

};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0000
struct FGameplayTagReferenceHelper
{

};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0000
struct FGameplayTagNode
{

};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x5B02EC00
struct FGameplayTagSource
{
	unsigned char                                      UnknownData00[0x5B02EC00];                                // 0x0000(0x5B02EC00) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x5B02EB00
struct FGameplayTagTableRow : public FTableRowBase
{
	unsigned char                                      UnknownData00[0x5B02EB00];                                // 0x0000(0x5B02EB00) MISSED OFFSET
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0xFFFFFFFFFFFFFF80 (0x5B02EA80 - 0x5B02EB00)
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{

};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x5B02E980
struct FRestrictedConfigInfo
{
	unsigned char                                      UnknownData00[0x5B02E980];                                // 0x0000(0x5B02E980) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x5B02E880
struct FGameplayTagCategoryRemap
{
	unsigned char                                      UnknownData00[0x5B02E880];                                // 0x0000(0x5B02E880) MISSED OFFSET
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x5B02E780
struct FGameplayTagRedirect
{
	unsigned char                                      UnknownData00[0x5B02E780];                                // 0x0000(0x5B02E780) MISSED OFFSET
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
