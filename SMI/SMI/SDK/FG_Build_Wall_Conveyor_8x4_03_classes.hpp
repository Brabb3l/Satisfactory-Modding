#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Wall_Conveyor_8x4_03_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_Wall_Conveyor_8x4_03.Build_Wall_Conveyor_8x4_03_C
// 0x0008 (0x0580 - 0x0578)
class ABuild_Wall_Conveyor_8x4_03_C : public AFGBuildableWall
{
public:
	class UFGFactoryConnectionComponent*               SnapOnly0;                                                // 0x0578(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_Wall_Conveyor_8x4_03.Build_Wall_Conveyor_8x4_03_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
