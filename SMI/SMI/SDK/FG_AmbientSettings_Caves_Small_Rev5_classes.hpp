#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_AmbientSettings_Caves_Small_Rev5_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmbientSettings_Caves_Small_Rev5.AmbientSettings_Caves_Small_Rev5_C
// 0x0000 (0x0050 - 0x0050)
class UAmbientSettings_Caves_Small_Rev5_C : public UFGAmbientSettings
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmbientSettings_Caves_Small_Rev5.AmbientSettings_Caves_Small_Rev5_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
