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

// Class GameplayTags.BlueprintGameplayTagLibrary
// 0x0000
class UBlueprintGameplayTagLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.BlueprintGameplayTagLibrary");
		return ptr;
	}


	void RemoveGameplayTag();
	void NotEqual_TagTag();
	void NotEqual_TagContainerTagContainer();
	void NotEqual_GameplayTagContainer();
	void NotEqual_GameplayTag();
	void MatchesTag();
	void MatchesAnyTags();
	void MakeLiteralGameplayTagContainer();
	void MakeLiteralGameplayTag();
	void MakeGameplayTagQuery();
	void MakeGameplayTagContainerFromTag();
	void MakeGameplayTagContainerFromArray();
	void IsTagQueryEmpty();
	void IsGameplayTagValid();
	void HasTag();
	void HasAnyTags();
	void HasAllTags();
	void HasAllMatchingGameplayTags();
	void GetTagName();
	void GetNumGameplayTagsInContainer();
	void GetDebugStringFromGameplayTagContainer();
	void GetDebugStringFromGameplayTag();
	void GetAllActorsOfClassMatchingTagQuery();
	void EqualEqual_GameplayTagContainer();
	void EqualEqual_GameplayTag();
	void DoesTagAssetInterfaceHaveTag();
	void DoesContainerMatchTagQuery();
	void BreakGameplayTagContainer();
	void AppendGameplayTagContainers();
	void AddGameplayTag();
};


// Class GameplayTags.GameplayTagAssetInterface
// 0x0000
class UGameplayTagAssetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagAssetInterface");
		return ptr;
	}


	void HasMatchingGameplayTag();
	void HasAnyMatchingGameplayTags();
	void HasAllMatchingGameplayTags();
	void GetOwnedGameplayTags();
};


// Class GameplayTags.EditableGameplayTagQuery
// 0x5DC8C100
class UEditableGameplayTagQuery : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC8C100];                                // 0x0000(0x5DC8C100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQuery");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression
// 0x0000
class UEditableGameplayTagQueryExpression : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch
// 0x5DC8C080
class UEditableGameplayTagQueryExpression_AnyTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DC8C080];                                // 0x0000(0x5DC8C080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch
// 0x5DC8C000
class UEditableGameplayTagQueryExpression_AllTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DC8C000];                                // 0x0000(0x5DC8C000) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch
// 0x5DC8BF80
class UEditableGameplayTagQueryExpression_NoTagsMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DC8BF80];                                // 0x0000(0x5DC8BF80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoTagsMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch
// 0x5DBEACE0
class UEditableGameplayTagQueryExpression_AnyExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DBEACE0];                                // 0x0000(0x5DBEACE0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AnyExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch
// 0x5DBEAC40
class UEditableGameplayTagQueryExpression_AllExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DBEAC40];                                // 0x0000(0x5DBEAC40) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_AllExprMatch");
		return ptr;
	}

};


// Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch
// 0x5DBEABA0
class UEditableGameplayTagQueryExpression_NoExprMatch : public UEditableGameplayTagQueryExpression
{
public:
	unsigned char                                      UnknownData00[0x5DBEABA0];                                // 0x0000(0x5DBEABA0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.EditableGameplayTagQueryExpression_NoExprMatch");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsManager
// 0x5DBEAA60
class UGameplayTagsManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DBEAA60];                                // 0x0000(0x5DBEAA60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsManager");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsList
// 0x5DC8BC00
class UGameplayTagsList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC8BC00];                                // 0x0000(0x5DC8BC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.RestrictedGameplayTagsList
// 0x5DC8BB00
class URestrictedGameplayTagsList : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC8BB00];                                // 0x0000(0x5DC8BB00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.RestrictedGameplayTagsList");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsSettings
// 0x1A80 (0x5DC8D680 - 0x5DC8BC00)
class UGameplayTagsSettings : public UGameplayTagsList
{
public:
	unsigned char                                      UnknownData00[0x1A80];                                    // 0x5DC8BC00(0x1A80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsSettings");
		return ptr;
	}

};


// Class GameplayTags.GameplayTagsDeveloperSettings
// 0x5DC8D600
class UGameplayTagsDeveloperSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5DC8D600];                                // 0x0000(0x5DC8D600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GameplayTags.GameplayTagsDeveloperSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
