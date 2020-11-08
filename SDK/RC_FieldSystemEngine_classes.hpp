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

// Class FieldSystemEngine.FieldSystemActor
// 0x346F900 (0x5E40D900 - 0x5AF9E000)
class AFieldSystemActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x346F900];                                 // 0x5AF9E000(0x346F900) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemActor");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystem
// 0x0000
class UFieldSystem : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystem");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemComponent
// 0x3607400 (0x5E40E980 - 0x5AE07580)
class UFieldSystemComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x3607400];                                 // 0x5AE07580(0x3607400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemComponent");
		return ptr;
	}


	void ResetFieldSystem();
	void ApplyUniformVectorFalloffForce();
	void ApplyStrainField();
	void ApplyStayDynamicField();
	void ApplyRadialVectorFalloffForce();
	void ApplyRadialForce();
	void ApplyPhysicsField();
	void ApplyLinearForce();
	void AddFieldCommand();
};


// Class FieldSystemEngine.FieldSystemMetaData
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UFieldSystemMetaData : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaData");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldSystemMetaDataIteration
// 0x5E40E800
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData
{
public:
	unsigned char                                      UnknownData00[0x5E40E800];                                // 0x0000(0x5E40E800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataIteration");
		return ptr;
	}


	void SetMetaDataIteration();
};


// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// 0x5E40FF00
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData
{
public:
	unsigned char                                      UnknownData00[0x5E40FF00];                                // 0x0000(0x5E40FF00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution");
		return ptr;
	}


	void SetMetaDataaProcessingResolutionType();
};


// Class FieldSystemEngine.FieldNodeBase
// 0xFFFFFFFFAF450180 (0x0000 - 0x50BAFE80)
class UFieldNodeBase : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeBase");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeInt
// 0x0000
class UFieldNodeInt : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeInt");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeFloat
// 0x0000
class UFieldNodeFloat : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeFloat");
		return ptr;
	}

};


// Class FieldSystemEngine.FieldNodeVector
// 0x0000
class UFieldNodeVector : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.FieldNodeVector");
		return ptr;
	}

};


// Class FieldSystemEngine.UniformInteger
// 0x5E40FD80
class UUniformInteger : public UFieldNodeInt
{
public:
	unsigned char                                      UnknownData00[0x5E40FD80];                                // 0x0000(0x5E40FD80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformInteger");
		return ptr;
	}


	void SetUniformInteger();
};


// Class FieldSystemEngine.RadialIntMask
// 0x5E40F800
class URadialIntMask : public UFieldNodeInt
{
public:
	unsigned char                                      UnknownData00[0x5E40F800];                                // 0x0000(0x5E40F800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialIntMask");
		return ptr;
	}


	void SetRadialIntMask();
};


// Class FieldSystemEngine.UniformScalar
// 0x5E410F80
class UUniformScalar : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E410F80];                                // 0x0000(0x5E410F80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformScalar");
		return ptr;
	}


	void SetUniformScalar();
};


// Class FieldSystemEngine.RadialFalloff
// 0x5E410800
class URadialFalloff : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E410800];                                // 0x0000(0x5E410800) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialFalloff");
		return ptr;
	}


	void SetRadialFalloff();
};


// Class FieldSystemEngine.PlaneFalloff
// 0x5E412080
class UPlaneFalloff : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E412080];                                // 0x0000(0x5E412080) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.PlaneFalloff");
		return ptr;
	}


	void SetPlaneFalloff();
};


// Class FieldSystemEngine.BoxFalloff
// 0x5E411A00
class UBoxFalloff : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E411A00];                                // 0x0000(0x5E411A00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.BoxFalloff");
		return ptr;
	}


	void SetBoxFalloff();
};


// Class FieldSystemEngine.NoiseField
// 0x5E411680
class UNoiseField : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E411680];                                // 0x0000(0x5E411680) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.NoiseField");
		return ptr;
	}


	void SetNoiseField();
};


// Class FieldSystemEngine.UniformVector
// 0x5E411400
class UUniformVector : public UFieldNodeVector
{
public:
	unsigned char                                      UnknownData00[0x5E411400];                                // 0x0000(0x5E411400) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.UniformVector");
		return ptr;
	}


	void SetUniformVector();
};


// Class FieldSystemEngine.RadialVector
// 0x5E411180
class URadialVector : public UFieldNodeVector
{
public:
	unsigned char                                      UnknownData00[0x5E411180];                                // 0x0000(0x5E411180) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RadialVector");
		return ptr;
	}


	void SetRadialVector();
};


// Class FieldSystemEngine.RandomVector
// 0x5E413100
class URandomVector : public UFieldNodeVector
{
public:
	unsigned char                                      UnknownData00[0x5E413100];                                // 0x0000(0x5E413100) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.RandomVector");
		return ptr;
	}


	void SetRandomVector();
};


// Class FieldSystemEngine.OperatorField
// 0x5E412C80
class UOperatorField : public UFieldNodeBase
{
public:
	unsigned char                                      UnknownData00[0x5E412C80];                                // 0x0000(0x5E412C80) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.OperatorField");
		return ptr;
	}


	void SetOperatorField();
};


// Class FieldSystemEngine.ToIntegerField
// 0x5E412B00
class UToIntegerField : public UFieldNodeInt
{
public:
	unsigned char                                      UnknownData00[0x5E412B00];                                // 0x0000(0x5E412B00) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToIntegerField");
		return ptr;
	}


	void SetToIntegerField();
};


// Class FieldSystemEngine.ToFloatField
// 0x5E412980
class UToFloatField : public UFieldNodeFloat
{
public:
	unsigned char                                      UnknownData00[0x5E412980];                                // 0x0000(0x5E412980) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ToFloatField");
		return ptr;
	}


	void SetToFloatField();
};


// Class FieldSystemEngine.CullingField
// 0x5E412600
class UCullingField : public UFieldNodeBase
{
public:
	unsigned char                                      UnknownData00[0x5E412600];                                // 0x0000(0x5E412600) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.CullingField");
		return ptr;
	}


	void SetCullingField();
};


// Class FieldSystemEngine.ReturnResultsTerminal
// 0x0000
class UReturnResultsTerminal : public UFieldNodeBase
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class FieldSystemEngine.ReturnResultsTerminal");
		return ptr;
	}


	void SetReturnResultsTerminal();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
