#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_WormAnim_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass BP_WormAnim.BP_WormAnim_C
// 0x0A51 (0x0DB1 - 0x0360)
class UBP_WormAnim_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0360(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_98A28E0D4D0C6653636CB0B476B817DB;// 0x0368(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0135D6494FF609027FDCF5A54DD50226;// 0x0448(0x00E0)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_5B4491674CE63FA6429F2EA743850953;// 0x0528(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_1F742DE847BC57C9078AD28786E43678;// 0x05B8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_582D20584F07D9726E19C28393391F32;// 0x0600(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_4066560D43FD5518C2E49A86967F210F;// 0x06E0(0x0118)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0E05E36D4A635C5D3063EB94AC858495;// 0x07F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7FB767554F92EA91BECCB7937581C972;// 0x0840(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_3F246D9C4E3420E8545604A98B9F40D4;// 0x0888(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DEA49E264A315C7A38885C8B11DB37D3;// 0x08D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_817AECB44FAB34A2235F97B43BB203B0;// 0x0980(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_102A9F07401C752255DB7C965050CFBD;// 0x09C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_AECCA4B84EA431E141993EB1D2E8C46A;// 0x0A78(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_EDB92703482AEF3BFCC37EB8DA242EBA;// 0x0AC0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_D2FCD90C4FAF9960304E3FB7BC37B984;// 0x0B50(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_36C322CB40650746048D56BA60B9310A;// 0x0B98(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_A23E827949B9183F11D018A8A87148D7;// 0x0C78(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_Root_F763FE264A779F04443696BC9776F9D6;      // 0x0D58(0x0048)
	float                                              mScaleMesh;                                               // 0x0DA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mMeshRotator;                                             // 0x0DA4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               mSubmerge;                                                // 0x0DB0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_WormAnim.BP_WormAnim_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WormAnim_AnimGraphNode_TransitionResult_7FB767554F92EA91BECCB7937581C972();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WormAnim_AnimGraphNode_TransitionResult_0E05E36D4A635C5D3063EB94AC858495();
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_BP_WormAnim_AnimGraphNode_TransitionResult_3F246D9C4E3420E8545604A98B9F40D4();
	void ExecuteUbergraph_BP_WormAnim(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
