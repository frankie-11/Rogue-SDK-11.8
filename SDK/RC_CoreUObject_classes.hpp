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

// Class CoreUObject.Object
// 0x0000
class UObject
{
public:
	static FUObjectArray*                              GObjects;                                                 // 0x0000(0x0000)
	void*                                              Vtable;                                                   // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            ObjectFlags;                                              // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            InternalIndex;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UClass*                                      Class;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	FName                                              Name;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UObject*                                     Outer;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static inline TUObjectArray& GetGlobalObjects()
	{
		return GObjects->ObjObjects;
	}

	std::string GetName() const;

	std::string GetFullName() const;

	template<typename T>
	static T* FindObject(const std::string& name)
	{
		for (int i = 0; i < GetGlobalObjects().Num(); ++i)
		{
			auto object = GetGlobalObjects().GetByIndex(i);
	
			if (object == nullptr)
			{
				continue;
			}
	
			if (object->GetFullName() == name)
			{
				return static_cast<T*>(object);
			}
		}
		return nullptr;
	}

	static UClass* FindClass(const std::string& name)
	{
		return FindObject<UClass>(name);
	}

	template<typename T>
	static T* GetObjectCasted(std::size_t index)
	{
		return static_cast<T*>(GetGlobalObjects().GetByIndex(index));
	}

	bool IsA(UClass* cmp) const;

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Object");
		return ptr;
	}


	void ExecuteUbergraph();
};


// Class CoreUObject.Interface
// 0x0000
class UInterface : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Interface");
		return ptr;
	}

};


// Class CoreUObject.GCObjectReferencer
// 0x0000
class UGCObjectReferencer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.GCObjectReferencer");
		return ptr;
	}

};


// Class CoreUObject.TextBuffer
// 0x0000
class UTextBuffer : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextBuffer");
		return ptr;
	}

};


// Class CoreUObject.Field
// 0x0000
class UField : public UObject
{
public:
	class UField*                                      Next;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Field");
		return ptr;
	}

};


// Class CoreUObject.Struct
// 0x0000
class UStruct : public UField
{
public:
	unsigned char                                      pad0[16];                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UStruct*                                     SuperField;                                               // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UField*                                      Children;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            PropertySize;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            MinAlignment;                                             // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad1[64];                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Struct");
		return ptr;
	}

};


// Class CoreUObject.ScriptStruct
// 0x0000
class UScriptStruct : public UStruct
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ScriptStruct");
		return ptr;
	}

};


// Class CoreUObject.Package
// 0x0000
class UPackage : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Package");
		return ptr;
	}

};


// Class CoreUObject.Class
// 0x0000
class UClass : public UStruct
{
public:

	template<typename T>
	inline T* CreateDefaultObject()
	{
		return static_cast<T*>(CreateDefaultObject());
	}

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Class");
		return ptr;
	}

};


// Class CoreUObject.Function
// 0x0000
class UFunction : public UStruct
{
public:
	int32_t                                            FunctionFlags;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RepOffset;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int8_t                                             NumParms;                                                 // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	unsigned char                                      pad1[1];                                                  // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ParmsSize;                                                // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            ReturnValueOffset;                                        // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCId;                                                    // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int16_t                                            RPCResponseId;                                            // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UProperty*                                   FirstPropertyToInit;                                      // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	class UFunction*                                   EventGraphFunction;                                       // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	int32_t                                            EventGraphCallOffset;                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY
	void*                                              Func;                                                     // 0x0000(0x0000) NOT AUTO-GENERATED PROPERTY

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Function");
		return ptr;
	}

};


// Class CoreUObject.DelegateFunction
// 0x0000
class UDelegateFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateFunction");
		return ptr;
	}

};


// Class CoreUObject.SparseDelegateFunction
// 0x0000
class USparseDelegateFunction : public UDelegateFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SparseDelegateFunction");
		return ptr;
	}

};


// Class CoreUObject.DynamicClass
// 0x0000
class UDynamicClass : public UClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DynamicClass");
		return ptr;
	}

};


// Class CoreUObject.PackageMap
// 0x0000
class UPackageMap : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PackageMap");
		return ptr;
	}

};


// Class CoreUObject.Enum
// 0x0000
class UEnum : public UField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Enum");
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderClass
// 0x0000
class ULinkerPlaceholderClass : public UClass
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderClass");
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderExportObject
// 0x0000
class ULinkerPlaceholderExportObject : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderExportObject");
		return ptr;
	}

};


// Class CoreUObject.LinkerPlaceholderFunction
// 0x0000
class ULinkerPlaceholderFunction : public UFunction
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LinkerPlaceholderFunction");
		return ptr;
	}

};


// Class CoreUObject.MetaData
// 0x0000
class UMetaData : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MetaData");
		return ptr;
	}

};


// Class CoreUObject.ObjectRedirector
// 0x0000
class UObjectRedirector : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectRedirector");
		return ptr;
	}

};


// Class CoreUObject.Property
// 0x0000
class UProperty : public UField
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Property");
		return ptr;
	}

};


// Class CoreUObject.EnumProperty
// 0x0000
class UEnumProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.EnumProperty");
		return ptr;
	}

};


// Class CoreUObject.ArrayProperty
// 0x0000
class UArrayProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ArrayProperty");
		return ptr;
	}

};


// Class CoreUObject.ObjectPropertyBase
// 0x0000
class UObjectPropertyBase : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectPropertyBase");
		return ptr;
	}

};


// Class CoreUObject.BoolProperty
// 0x0000
class UBoolProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.BoolProperty");
		return ptr;
	}

};


// Class CoreUObject.NumericProperty
// 0x0000
class UNumericProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NumericProperty");
		return ptr;
	}

};


// Class CoreUObject.ByteProperty
// 0x0000
class UByteProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ByteProperty");
		return ptr;
	}

};


// Class CoreUObject.ObjectProperty
// 0x0000
class UObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.ClassProperty
// 0x0000
class UClassProperty : public UObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.ClassProperty");
		return ptr;
	}

};


// Class CoreUObject.DelegateProperty
// 0x0000
class UDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.DoubleProperty
// 0x0000
class UDoubleProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.DoubleProperty");
		return ptr;
	}

};


// Class CoreUObject.FloatProperty
// 0x0000
class UFloatProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.FloatProperty");
		return ptr;
	}

};


// Class CoreUObject.IntProperty
// 0x0000
class UIntProperty : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.IntProperty");
		return ptr;
	}

};


// Class CoreUObject.Int8Property
// 0x0000
class UInt8Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int8Property");
		return ptr;
	}

};


// Class CoreUObject.Int16Property
// 0x0000
class UInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int16Property");
		return ptr;
	}

};


// Class CoreUObject.Int64Property
// 0x0000
class UInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.Int64Property");
		return ptr;
	}

};


// Class CoreUObject.InterfaceProperty
// 0x0000
class UInterfaceProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.InterfaceProperty");
		return ptr;
	}

};


// Class CoreUObject.LazyObjectProperty
// 0x0000
class ULazyObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.LazyObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.MapProperty
// 0x0000
class UMapProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MapProperty");
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegateProperty
// 0x0000
class UMulticastDelegateProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.MulticastInlineDelegateProperty
// 0x0000
class UMulticastInlineDelegateProperty : public UMulticastDelegateProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.MulticastSparseDelegateProperty
// 0x0000
class UMulticastSparseDelegateProperty : public UMulticastDelegateProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastSparseDelegateProperty");
		return ptr;
	}

};


// Class CoreUObject.NameProperty
// 0x0000
class UNameProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.NameProperty");
		return ptr;
	}

};


// Class CoreUObject.SetProperty
// 0x0000
class USetProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SetProperty");
		return ptr;
	}

};


// Class CoreUObject.SoftObjectProperty
// 0x0000
class USoftObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.SoftClassProperty
// 0x0000
class USoftClassProperty : public USoftObjectProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.SoftClassProperty");
		return ptr;
	}

};


// Class CoreUObject.StrProperty
// 0x0000
class UStrProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StrProperty");
		return ptr;
	}

};


// Class CoreUObject.StructProperty
// 0x0000
class UStructProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.StructProperty");
		return ptr;
	}

};


// Class CoreUObject.UInt16Property
// 0x0000
class UUInt16Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt16Property");
		return ptr;
	}

};


// Class CoreUObject.UInt32Property
// 0x0000
class UUInt32Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt32Property");
		return ptr;
	}

};


// Class CoreUObject.UInt64Property
// 0x0000
class UUInt64Property : public UNumericProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.UInt64Property");
		return ptr;
	}

};


// Class CoreUObject.WeakObjectProperty
// 0x0000
class UWeakObjectProperty : public UObjectPropertyBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.WeakObjectProperty");
		return ptr;
	}

};


// Class CoreUObject.TextProperty
// 0x0000
class UTextProperty : public UProperty
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.TextProperty");
		return ptr;
	}

};


// Class CoreUObject.PropertyWrapper
// 0x0000
class UPropertyWrapper : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.PropertyWrapper");
		return ptr;
	}

};


// Class CoreUObject.MulticastDelegatePropertyWrapper
// 0x0000
class UMulticastDelegatePropertyWrapper : public UPropertyWrapper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastDelegatePropertyWrapper");
		return ptr;
	}

};


// Class CoreUObject.MulticastInlineDelegatePropertyWrapper
// 0x0000
class UMulticastInlineDelegatePropertyWrapper : public UMulticastDelegatePropertyWrapper
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class CoreUObject.MulticastInlineDelegatePropertyWrapper");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
