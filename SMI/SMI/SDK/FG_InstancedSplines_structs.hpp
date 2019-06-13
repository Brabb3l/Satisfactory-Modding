#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Basic.hpp"
#include "FG_Engine_classes.hpp"
#include "FG_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct InstancedSplines.InstancedSplineInstanceData
// 0x0030
struct FInstancedSplineInstanceData
{
	struct FVector                                     StartPos;                                                 // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     StartTangent;                                             // 0x000C(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     EndPos;                                                   // 0x0018(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     EndTangent;                                               // 0x0024(0x000C) (Edit, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
