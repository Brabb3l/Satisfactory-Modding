#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_MinerMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_MinerMk2.Build_MinerMk2_C
// 0x0080 (0x06E8 - 0x0668)
class ABuild_MinerMk2_C : public AFGBuildableResourceExtractor
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0668(0x0008) (Transient, DuplicateTransient)
	class UFGFactoryLegsComponent*                     FGFactoryLegs;                                            // 0x0670(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      MainMesh;                                                 // 0x0678(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGColoredInstanceMeshProxy*                 FGColoredInstanceMeshProxy;                               // 0x0680(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_ProductionIndicatorInstanced_C*          BP_ProductionIndicatorInstanced;                          // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            Snap;                                                     // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGPowerConnectionComponent*                 PowerInput;                                               // 0x0698(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UStaticMeshComponent*                        FogPlane_01;                                              // 0x06A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_LadderComponent_C*                       Ladder;                                                   // 0x06A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBoxComponent*                               Clearance;                                                // 0x06B0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UFGFactoryConnectionComponent*               Output0;                                                  // 0x06B8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FParticleMap>                        mParticleMap;                                             // 0x06C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UParticleSystemComponent*                    mVentVfx01;                                               // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mVentVfx02;                                               // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    mDrillingVfx01;                                           // 0x06E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_MinerMk2.Build_MinerMk2_C");
		return ptr;
	}


	void GetMiningParticles(class UParticleSystem** FirstParticle, class UParticleSystem** SecondParticle, bool* foundParticle);
	void GetExtractedResource(class UClass** Resource);
	void SetDisplayText(const struct FText& newText);
	void UserConstructionScript();
	void GainedSignificance();
	void LostSignificance();
	void StartProductionLoopEffects();
	void StopProductionLoopEffects();
	void ReceiveDestroyed();
	void ExecuteUbergraph_Build_MinerMk2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
