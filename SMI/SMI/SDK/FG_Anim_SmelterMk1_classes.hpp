#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_SmelterMk1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_SmelterMk1.Anim_SmelterMk1_C
// 0x0CE8 (0x1698 - 0x09B0)
class UAnim_SmelterMk1_C : public UFGFAnimInstanceFactory
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x09B0(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E261B9FD4F11D9ABB440B2B52CDE8B22;      // 0x09B8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0F34F7BD4CEE6A5594C69097CCE52E17;// 0x0A00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_2DB75E584ABD638740D083B155BA2681;// 0x0A48(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_A6CBFC7447DD59499E75619712C30397;// 0x0A90(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D48F108A43361E8AF7D00EA66DCD6902;// 0x0AD8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9E9EDADE4FBF2A431310DC904616FC05;// 0x0B20(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_50C146CE4384544C4B20EF9634BA6C0F;// 0x0BD0(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AFB8926E4592012BC47FF2BB5264170D;// 0x0C18(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_17B7DC294647A923B9134E959FFBB698;// 0x0CC8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1EFCA0B44F0786FBE77968A7EA49AA8F;// 0x0D10(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_4BED6C4E4A22AC2D3BDD369840AE01A1;// 0x0DC0(0x0048)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_4627F44543793C702E80B9B1EB6C0C85;// 0x0E08(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_790AF03C42EE40612D26939983AD622D;// 0x0E78(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_D5ED776F481EC7852C87849B79C21FC9;// 0x0EC0(0x00E0)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_45F1652F4721514A650DD7B91F14BDE8;// 0x0FA0(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_94708E3446AEFD0C9C9D409891E60D71;// 0x1080(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2BB71B2E485B02107DB30491CACD896D;// 0x1160(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_F28A919E4F948255960F7DAA3AFC2562;// 0x11B0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E54A44A046F778459C47C3BEC04D653B;// 0x11F8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_D324C4C649E19CA951526694DDA88E59;// 0x1240(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7E3C44784145321FDF6AB3B9AAD2DF5B;// 0x1288(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9D0C0301477072EB7B0BF19477FE60A1;// 0x12D0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_CB0C5E6E42B06139BE9B60A82AEE13A6;// 0x1380(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CB2083744AC843FC4B34989E6A1BBB72;// 0x13C8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_45E102AD4918AC28DF3017BFF461F7DF;// 0x1478(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_13046FCF4BFFB50B083656B67005044E;// 0x14C0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_E38570D34B5CC9587352C1ABD78DEEDA;// 0x1570(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_BD23DF76483F3CED2338CD82F5B00B93;// 0x15B8(0x00E0)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_SmelterMk1.Anim_SmelterMk1_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_E54A44A046F778459C47C3BEC04D653B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_D324C4C649E19CA951526694DDA88E59();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_D48F108A43361E8AF7D00EA66DCD6902();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_7E3C44784145321FDF6AB3B9AAD2DF5B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_SequencePlayer_9D0C0301477072EB7B0BF19477FE60A1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_F28A919E4F948255960F7DAA3AFC2562();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_SequencePlayer_CB2083744AC843FC4B34989E6A1BBB72();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_SequencePlayer_13046FCF4BFFB50B083656B67005044E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_TransitionResult_2DB75E584ABD638740D083B155BA2681();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_SmelterMk1_AnimGraphNode_SequencePlayer_AFB8926E4592012BC47FF2BB5264170D();
	void AnimNotify_SmelterEnteredProducingState();
	void AnimNotify_SmelterEnteredOfflineState();
	void AnimNotify_SmelterLeftProducingState();
	void AnimNotify_SmelterLeftOfflineState();
	void ExecuteUbergraph_Anim_SmelterMk1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
