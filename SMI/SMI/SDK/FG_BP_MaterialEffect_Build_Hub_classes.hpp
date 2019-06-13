#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_MaterialEffect_Build_Hub_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_MaterialEffect_Build_Hub.BP_MaterialEffect_Build_Hub_C
// 0x0008 (0x0530 - 0x0528)
class UBP_MaterialEffect_Build_Hub_C : public UBP_MaterialEffect_Build_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0528(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_MaterialEffect_Build_Hub.BP_MaterialEffect_Build_Hub_C");
		return ptr;
	}


	void PlayThumpSound();
	void ExecuteUbergraph_BP_MaterialEffect_Build_Hub(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
