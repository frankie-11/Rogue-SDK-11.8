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

// Class AsyncTraceUtil.AsyncTraceUtilBPLibrary
// 0x0000
class UAsyncTraceUtilBPLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AsyncTraceUtil.AsyncTraceUtilBPLibrary");
		return ptr;
	}


	void OnMultiAsyncTraceResult__DelegateSignature();
	void MultipleLineTraceAsync();
	void MultiLineTraceByChannelAsync();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
