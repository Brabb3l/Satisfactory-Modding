#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_DropPod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_DropPod.Anim_DropPod_C
// 0x0768 (0x0AC8 - 0x0360)
class UAnim_DropPod_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0368(0x0008) MISSED OFFSET
	struct FAnimNode_RigidBody                         AnimGraphNode_RigidBody_29EFCDE446085BBC8268A49E11B0246E; // 0x0370(0x05A0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_B692E03E4F26998E919525A060050EED;// 0x0910(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_Root_3465D75E44606742583613BE1452BA8B;      // 0x0958(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_AE37E43E45A4BF53ED3FC3AC51D0C0BE;      // 0x09A0(0x0070)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_A7B70CC0497650BCF5DD9A8BFD4759CA;// 0x0A10(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_55BE506545B438A12AD8B880CCD30AD8;// 0x0A58(0x0070)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_DropPod.Anim_DropPod_C");
		return ptr;
	}


	void ExecuteUbergraph_Anim_DropPod(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
