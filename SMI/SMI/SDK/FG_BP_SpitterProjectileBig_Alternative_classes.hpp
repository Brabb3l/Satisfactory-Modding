#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_SpitterProjectileBig_Alternative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_SpitterProjectileBig_Alternative.BP_SpitterProjectileBig_Alternative_C
// 0x0040 (0x03E8 - 0x03A8)
class ABP_SpitterProjectileBig_Alternative_C : public AFGProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03A8(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    Projectile;                                               // 0x03B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        Sphere;                                                   // 0x03B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              mSpeedAdjustment;                                         // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               mDoSplit;                                                 // 0x03C4(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C5(0x0003) MISSED OFFSET
	int                                                mNumberofSplitProjectiles;                                // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              mSplitConeHalfAngle;                                      // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     mAttackLocation;                                          // 0x03D0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class APawn*                                       mTargetPawn;                                              // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_SpitterProjectileBig_Alternative.BP_SpitterProjectileBig_Alternative_C");
		return ptr;
	}


	void GetNewTarget();
	void GetNewTargetLocation();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SplitProjectile();
	void ReceiveTick(float* DeltaSeconds);
	void BndEvt__mProjectileMovement_K2Node_ComponentBoundEvent_0_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* component, bool bReset);
	void PlayExplosionEffects();
	void OnTakeAnyDamage_Event_1(class AActor* damagedActor, float Damage, class UDamageType* DamageType, class AController* instigatedBy, class AActor* damageCauser);
	void ExecuteUbergraph_BP_SpitterProjectileBig_Alternative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
