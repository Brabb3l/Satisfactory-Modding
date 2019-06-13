#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Controller_Spitter_Alternative_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Controller_Spitter_Alternative.Controller_Spitter_Alternative_C
// 0x0010 (0x0520 - 0x0510)
class AController_Spitter_Alternative_C : public ABP_EnemyController_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	struct FName                                       mDoPanicName;                                             // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Controller_Spitter_Alternative.Controller_Spitter_Alternative_C");
		return ptr;
	}


	void UserConstructionScript();
	void BndEvt__PerceptionComponent_K2Node_ComponentBoundEvent_0_ActorPerceptionUpdatedDelegate__DelegateSignature(class AActor* Actor, const struct FAIStimulus& Stimulus);
	void ExecuteUbergraph_Controller_Spitter_Alternative(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
