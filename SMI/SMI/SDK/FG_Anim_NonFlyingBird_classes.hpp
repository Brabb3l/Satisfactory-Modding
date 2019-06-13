#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Anim_NonFlyingBird_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Anim_NonFlyingBird.Anim_NonFlyingBird_C
// 0x2D7C (0x31FC - 0x0480)
class UAnim_NonFlyingBird_C : public UFGCharacterAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0480(0x0008) (Transient, DuplicateTransient)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD;// 0x0488(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D;// 0x04D0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1D36264049ECD049E74B4B9C74039CF1;// 0x0518(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_CA78DDEC4BFEB1C7E21681903550772B;// 0x0560(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_694A5C404254F451A9F9AFBDF84B9EB7;// 0x05A8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BF89D0C742A9E2A9E3DDF3B98FD51A81;// 0x05F0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_10926B584B7CDD4D1443AFAC460E066A;// 0x0638(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0126102A476E3DA76FB6EF8D310D64B3;// 0x0680(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_87F75D2E4BFE8554532E9D9FBE5BBD90;// 0x06C8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68DB26574E4C52578E6033994EC4068E;// 0x0710(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_83711B374B983B85DAEE719C0900E946;// 0x0758(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ADC41E6049F35E34A53BD19202768AB2;// 0x07A0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7EBE06F34BBD492ED2995A84EEC8CA13;// 0x0850(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_BDF1DFB547BC2081EF4765867D2165B4;// 0x0898(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_C76A649E4AF140CCF56052901CAD2393;// 0x08E0(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_68EA3D054DB99A7474521BA4348F453A;// 0x0928(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_883AD7EF4BADD62F82C827926B28E8E3;// 0x0970(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1D1ABBE748860A41D28867A1843FC61D;// 0x09B8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_19BED5934C8EF9F7A77D38970749CFE5;// 0x0A68(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7ECDEBD14EF43FDEF052E49BBE873423;// 0x0AB0(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BBF55B41414546F924306A97DE9E25F5;// 0x0B60(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EB564BEF4E7A03E6F6143AAC7114DA5D;// 0x0BA8(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_62C6517F43BD17E7A52F89B4CF9E264F;// 0x0C58(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_374F253340A2A319CB188D8409B77712;// 0x0CA0(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_67C94BEE4EA6B39A1856DFA44B18391C;// 0x0CD8(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_2D3B4D3341E35CB0246202AFE5882FBD;// 0x0D20(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BF3F95294DB5452EE450AF8B5EA0570F;// 0x0E00(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AB39A754366736A558FDB8CFC71BEAF;// 0x0E48(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_B7BFA7F64E5D00660120F1B5D80D0B61;// 0x0E90(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_B51764904DD10C4B527EAD95957B718B;// 0x0F20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2337D188468DCC815AFC758DC7C54EF4;// 0x0F68(0x00B0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_997B12D147914876F51030A0C8CE7B8B;// 0x1018(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_5BC38D3148BD588F7E00D69158893658;// 0x1060(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8B33C17E435B724D286697ACC7179CA9;// 0x1140(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_12D3EAA6436388A5BE8FE5ABE9EBA2D5;// 0x1188(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_8DC639204057972E8F854D83719EB11B;// 0x11D0(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_777637684DB86366A0B3CAA9FBE3482C;// 0x1218(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2F983D01442290DE99BE2A8681FFE5C9;// 0x12A8(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_F43EB3D041D62067A0A41B9236AD4449;// 0x12F0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_0A7953924CF9F66B2B65C0858423A619;// 0x1380(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_7F5C71DA44C6D4BEF08EE0BB3FD76980;// 0x13C8(0x00E0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_2FC947EB4E7E4B5582760CAAE5F50363;// 0x14A8(0x0048)
	struct FAnimNode_RandomPlayer                      AnimGraphNode_RandomPlayer_A9A307F040B3E3E0890BF6944CE2616B;// 0x14F0(0x0090)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_BD3DC81C4C86FBD97AD7699792A360D0;// 0x1580(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_DFD31E6042A46BAEB6D663AA0F9C5F7D;// 0x15C8(0x00E0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_705304124D82368FB97722921FD5334A;// 0x16A8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_F2B4CA1D40BCCB1C520AA7BC5F9E2E38;// 0x16F0(0x00E0)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_05C126F44A9F16648DD6B388F6C33A5F;// 0x17D0(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_69B8DC9248D519E0584DFD81A9AA2E72;// 0x1930(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_C760F5154AF54D2778ACB49A9035B9AA;// 0x1978(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_EF3CEF7A453F651BF3E402BB2E6A9795;// 0x19C0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_31BFAB4F4FBBB8DFF431C1B3C77B3BCB;// 0x1AA0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BE68F9F54553B912507BB180E9F0FCD3;// 0x1AF0(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_5F52D0D14937CA30159422BA55A5C718;// 0x1B40(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_36FB95424048EBDEEAC525B07E5E3591;// 0x1CA0(0x0160)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_0BB399E84B731AB3EBC96DB2C9B9EC8F;// 0x1E00(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_92E64BBF4C6123CFB9F2F8AE835DA27C;// 0x1E48(0x00D0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_641B010E4ABEF390EA12ABA98DD31315;// 0x1F18(0x0048)
	struct FAnimNode_AnimDynamics                      AnimGraphNode_AnimDynamics_7E957D4C4174E2559ECAD5A9BF90269C;// 0x1F60(0x0380)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_114B8994404579A3371279B1319293B6;// 0x22E0(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0EDC6F76461CF802C87BD68CBEA926B1;// 0x2328(0x0160)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_0FAEA1A64B563AA9612CEC83AFEB2B0D;// 0x2488(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_DD12E8E64B1EA9C942E361862ECC6C53;// 0x25E8(0x00D0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_07772BAA441F9BB5D9C87097B9BDA754;// 0x26B8(0x0048)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_BB464F59412F349DC1C2BC95672015DE;// 0x2700(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D146B66140BD8219174F9EA7B5881637;// 0x27E0(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_877683E64EAEF2CA9B5A82BE59A7AC5E;// 0x2830(0x0050)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_34B195164CD34B68146E62986D5CAF0A;// 0x2880(0x0160)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F187D61B47A7B311D7C631B70507AC99;// 0x29E0(0x00D0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_5AFEAFE945857AA8D3C6139C59441ED8;// 0x2AB0(0x00E0)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D648CAD44E912D38588F92B9A21B6F95;// 0x2B90(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_78AC0C93490942E2CE13388F0A7735E2;// 0x2BE0(0x0050)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_9785C823447B96031FF317B0D3E47593;// 0x2C30(0x0048)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_164DE0784E9E0FCE23E65291A23FD363;// 0x2C78(0x0050)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4AA4A0BD4C36D20877B4C598C37F2791;// 0x2CC8(0x0048)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E2E2D2C3420B0B118E0C66BB7D9FAD61;// 0x2D10(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8691C78B41CE7191E40E159A06D14AFE;// 0x2D58(0x0128)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_56C708E4409610CD160285BC916AB814;// 0x2E80(0x0048)
	struct FAnimNode_RefPose                           AnimGraphNode_IdentityPose_AE7435854E5E33EC597772843AF25173;// 0x2EC8(0x0038)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_364370074F2141E0EB453F9E24903615;// 0x2F00(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_370D9EB646005FCF0BA13CA9FC60BFE2;// 0x2F48(0x00E0)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_698D43D64FA8B626F611AEA1D442A830;// 0x3028(0x0118)
	struct FAnimNode_Root                              AnimGraphNode_Root_32E7C009469E271911BAA99838402284;      // 0x3140(0x0048)
	class USkeletalMeshComponent*                      mSkeletalmeshComponent;                                   // 0x3188(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mRadialDmgTaken;                                          // 0x3190(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x3191(0x0003) MISSED OFFSET
	float                                              mHitDirection;                                            // 0x3194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mPointDmgTaken;                                           // 0x3198(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mIsLuring;                                                // 0x3199(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x319A(0x0006) MISSED OFFSET
	class UParticleSystemComponent*                    mLuringVfx;                                               // 0x31A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	bool                                               mAg_WalkToRunTranstition;                                 // 0x31A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_RunToWalk;                                            // 0x31A9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsFalling;                                            // 0x31AA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsJumping;                                            // 0x31AB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IdleToWalkTransition;                                 // 0x31AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_WalkToIdleTransition;                                 // 0x31AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_LuringToMovingTransition;                             // 0x31AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsWalking;                                            // 0x31AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_SurfaceRotationClamp;                                 // 0x31B0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               mAG_IsRunning;                                            // 0x31BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x31BD(0x0003) MISSED OFFSET
	struct FRotator                                    mAG_RunLeanRotationSpine;                                 // 0x31C0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_RunLeanRotationPelvis;                                // 0x31CC(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_WalkLeanRotationSpine;                                // 0x31D8(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_WalkLeanRotationTail;                                 // 0x31E4(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    mAG_WalkLeanRotationHead;                                 // 0x31F0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_NonFlyingBird.Anim_NonFlyingBird_C");
		return ptr;
	}


	void CalculateAnimGraphVariables();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_05C126F44A9F16648DD6B388F6C33A5F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_5F52D0D14937CA30159422BA55A5C718();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_36FB95424048EBDEEAC525B07E5E3591();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_BlendListByBool_92E64BBF4C6123CFB9F2F8AE835DA27C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_0EDC6F76461CF802C87BD68CBEA926B1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_0FAEA1A64B563AA9612CEC83AFEB2B0D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_BlendListByBool_DD12E8E64B1EA9C942E361862ECC6C53();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_ModifyBone_34B195164CD34B68146E62986D5CAF0A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_BlendListByBool_F187D61B47A7B311D7C631B70507AC99();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_CA78DDEC4BFEB1C7E21681903550772B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_E2E2D2C3420B0B118E0C66BB7D9FAD61();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_BlendSpacePlayer_8691C78B41CE7191E40E159A06D14AFE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_1D36264049ECD049E74B4B9C74039CF1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_8DC639204057972E8F854D83719EB11B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_93F56C3644CD506A5E44A9B89733CE4D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_12D3EAA6436388A5BE8FE5ABE9EBA2D5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_694A5C404254F451A9F9AFBDF84B9EB7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_60BE805E4E0C482A65AABD803219B2BD();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_BF89D0C742A9E2A9E3DDF3B98FD51A81();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_883AD7EF4BADD62F82C827926B28E8E3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_10926B584B7CDD4D1443AFAC460E066A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_68EA3D054DB99A7474521BA4348F453A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_BDF1DFB547BC2081EF4765867D2165B4();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_0126102A476E3DA76FB6EF8D310D64B3();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_83711B374B983B85DAEE719C0900E946();
	void OnRadialDamageTaken();
	void OnPointDamageTaken(struct FVector* shootDIrection);
	void AnimNotify_NFBEnteredIdleLuringState();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_68DB26574E4C52578E6033994EC4068E();
	void AnimNotify_AnimNotify_NFB_Jump();
	void AnimNotify_AnimNotify_NFB_Land();
	void AnimNotify_NFB_EnteredMoving();
	void AnimNotify_NFBLeftLuringState();
	void AnimNotify_NFB_LeftMoving();
	void AnimNotify_AnimNotify_NFB_VO_Long();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void AnimNotify_AnimNotify_NFB_JumpLoop();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_NonFlyingBird_AnimGraphNode_TransitionResult_87F75D2E4BFE8554532E9D9FBE5BBD90();
	void ExecuteUbergraph_Anim_NonFlyingBird(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
