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

// Class VariantManagerContent.LevelVariantSets
// 0x5B19CD60
class ULevelVariantSets : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B19CD60];                                // 0x0000(0x5B19CD60) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSets");
		return ptr;
	}


	void GetVariantSetByName();
	void GetVariantSet();
	void GetNumVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsActor
// 0x26B180 (0x5B209180 - 0x5AF9E000)
class ALevelVariantSetsActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x26B180];                                  // 0x5AF9E000(0x26B180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsActor");
		return ptr;
	}


	void SwitchOnVariantByName();
	void SwitchOnVariantByIndex();
	void SetLevelVariantSets();
	void GetLevelVariantSets();
};


// Class VariantManagerContent.LevelVariantSetsFunctionDirector
// 0x0000
class ULevelVariantSetsFunctionDirector : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.LevelVariantSetsFunctionDirector");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValue
// 0x5B19C9A0
class UPropertyValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B19C9A0];                                // 0x0000(0x5B19C9A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValue");
		return ptr;
	}


	void HasRecordedData();
	void GetPropertyTooltip();
	void GetFullDisplayString();
};


// Class VariantManagerContent.PropertyValueTransform
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueTransform : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueTransform");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueVisibility
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueVisibility : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueVisibility");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueColor
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueColor : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueColor");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueMaterial
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueMaterial : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueMaterial");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueOption
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueOption : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueOption");
		return ptr;
	}

};


// Class VariantManagerContent.PropertyValueSoftObject
// 0xFFFFFFFFA4E63660 (0x0000 - 0x5B19C9A0)
class UPropertyValueSoftObject : public UPropertyValue
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.PropertyValueSoftObject");
		return ptr;
	}

};


// Class VariantManagerContent.SwitchActor
// 0x26A880 (0x5B208880 - 0x5AF9E000)
class ASwitchActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x26A880];                                  // 0x5AF9E000(0x26A880) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.SwitchActor");
		return ptr;
	}


	void SelectOption();
	void GetSelectedOption();
	void GetOptions();
};


// Class VariantManagerContent.Variant
// 0x5B20A480
class UVariant : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B20A480];                                // 0x0000(0x5B20A480) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.Variant");
		return ptr;
	}


	void SwitchOn();
	void SetDisplayText();
	void IsActive();
	void GetThumbnail();
	void GetNumActors();
	void GetDisplayText();
	void GetActor();
};


// Class VariantManagerContent.VariantObjectBinding
// 0x5B20A200
class UVariantObjectBinding : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B20A200];                                // 0x0000(0x5B20A200) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantObjectBinding");
		return ptr;
	}

};


// Class VariantManagerContent.VariantSet
// 0x5B209D00
class UVariantSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5B209D00];                                // 0x0000(0x5B209D00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class VariantManagerContent.VariantSet");
		return ptr;
	}


	void SetDisplayText();
	void GetVariantByName();
	void GetVariant();
	void GetNumVariants();
	void GetDisplayText();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
