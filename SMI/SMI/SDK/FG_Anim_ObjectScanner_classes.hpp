#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_ObjectScanner_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_ObjectScanner.Anim_ObjectScanner_C
// 0x0298 (0x05F8 - 0x0360)
class UAnim_ObjectScanner_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F0FAE593427112AEFF94B3AD3AEF42DE;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_CE0579D04C5EF922D132EEA15EF77B78;      // 0x03B0(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F2DC6AD542C2061BFC5B618A487916CB;// 0x0420(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_145186F84C263E142BEE2EA17D1F7E23;// 0x04D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_76AE62774F9C44F930CB1C825477264E;// 0x0518(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_ObjectScanner.Anim_ObjectScanner_C");
		return ptr;
	}


	void ExecuteUbergraph_Anim_ObjectScanner(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
