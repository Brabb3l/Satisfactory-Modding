#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Foundation_8x1_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_Foundation_8x1_01.Build_Foundation_8x1_01_C
// 0x0008 (0x0588 - 0x0580)
class ABuild_Foundation_8x1_01_C : public AFGBuildableFoundation
{
public:
	class UBoxComponent*                               Clearance;                                                // 0x0580(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_Foundation_8x1_01.Build_Foundation_8x1_01_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
