#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Attach_JetPackMk2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Attach_JetPackMk2.Attach_JetPackMk2_C
// 0x0030 (0x0398 - 0x0368)
class AAttach_JetPackMk2_C : public AFGJetPackAttachment
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UParticleSystemComponent*                    JetpackExhaust2;                                          // 0x0370(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    JetpackExhaust;                                           // 0x0378(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    JetpackExhaust1;                                          // 0x0380(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USkeletalMeshComponent*                      Jetpack_skl;                                              // 0x0388(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0390(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Attach_JetPackMk2.Attach_JetPackMk2_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnStopThrusting();
	void OnStartThrusting();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Attach_JetPackMk2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
