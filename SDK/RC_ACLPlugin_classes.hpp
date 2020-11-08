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

// Class ACLPlugin.ACLStatsDumpCommandlet
// 0xFFFFFFFFA4E01300 (0x0000 - 0x5B1FED00)
class UACLStatsDumpCommandlet : public UCommandlet
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.ACLStatsDumpCommandlet");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLBase
// 0xFFFFFFFFA4E01380 (0x0000 - 0x5B1FEC80)
class UAnimBoneCompressionCodec_ACLBase : public UAnimBoneCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLBase");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACL
// 0x5B1FEC00
class UAnimBoneCompressionCodec_ACL : public UAnimBoneCompressionCodec_ACLBase
{
public:
	unsigned char                                      UnknownData00[0x5B1FEC00];                                // 0x0000(0x5B1FEC00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACL");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom
// 0x0000
class UAnimBoneCompressionCodec_ACLCustom : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLCustom");
		return ptr;
	}

};


// Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe
// 0x0000
class UAnimBoneCompressionCodec_ACLSafe : public UAnimBoneCompressionCodec_ACLBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimBoneCompressionCodec_ACLSafe");
		return ptr;
	}

};


// Class ACLPlugin.AnimCurveCompressionCodec_ACL
// 0x0000
class UAnimCurveCompressionCodec_ACL : public UAnimCurveCompressionCodec
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ACLPlugin.AnimCurveCompressionCodec_ACL");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
