#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_Stairs_Left_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Build_Stairs_Left_01.Build_Stairs_Left_01_C
// 0x0000 (0x0580 - 0x0580)
class ABuild_Stairs_Left_01_C : public AFGBuildableStair
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Build_Stairs_Left_01.Build_Stairs_Left_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
