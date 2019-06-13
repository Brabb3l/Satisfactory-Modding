#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_3pRebargun_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_3pRebargun.Anim_3pRebargun_C
// 0x039A (0x06FA - 0x0360)
class UAnim_3pRebargun_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_B13E5EE745622B6BB933FA8602BC1B3A;      // 0x0368(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_187C05FF4425F7105E63A09A059DC65B;      // 0x03B0(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_CCE8230A4314C6A657E23599D40A2B13;// 0x0420(0x0070)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_9CC9E8634ADABB02ED8DA5A5D0700838;// 0x0490(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8D2ED78C40534FA16432CFA35EF25465;// 0x0500(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_3E3531794930B7ADC67774A39212B3B5;// 0x05D0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_C3DAD63D4A526C4D9ACEE590F61FDADA;// 0x0618(0x00E0)
	bool                                               mIsEquipped;                                              // 0x06F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsLoaded;                                                // 0x06F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_3pRebargun.Anim_3pRebargun_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3pRebargun_AnimGraphNode_BlendListByBool_8D2ED78C40534FA16432CFA35EF25465();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_RebarGunIsLoaded3p();
	void AnimNotify_RebarGunIsNotLoaded3p();
	void ExecuteUbergraph_Anim_3pRebargun(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
