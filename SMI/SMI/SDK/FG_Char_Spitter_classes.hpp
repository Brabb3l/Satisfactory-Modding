#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Char_Spitter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Char_Spitter.Char_Spitter_C
// 0x003D (0x09AD - 0x0970)
class AChar_Spitter_C : public AFGEnemy
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0970(0x0008) (Transient, DuplicateTransient)
	class UCapsuleComponent*                           Capsule;                                                  // 0x0978(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               mIsStrafing;                                              // 0x0980(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0981(0x0007) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnStrafeEnded;                                            // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FTimerHandle                                mStrafeHandler;                                           // 0x0998(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                                     mStrafeDirection;                                         // 0x09A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDoStrafeRight;                                           // 0x09AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Char_Spitter.Char_Spitter_C");
		return ptr;
	}


	struct FVector GetAttackLocation();
	void UpdateStrafeDirection();
	void StopStrafe();
	void DoStrafe();
	void StartStrafe();
	void UserConstructionScript();
	void ReceiveTick(float* DeltaSeconds);
	void OnCurrentAggroTargetReplicated();
	void BndEvt__Capsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void ExecuteUbergraph_Char_Spitter(int EntryPoint);
	void OnStrafeEnded__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
