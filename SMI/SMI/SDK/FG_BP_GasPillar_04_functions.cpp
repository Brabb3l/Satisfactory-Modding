// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BP_GasPillar_04_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GasPillar_04.BP_GasPillar_04_C.UserConstructionScript
// ()

void ABP_GasPillar_04_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GasPillar_04.BP_GasPillar_04_C.UserConstructionScript");

	ABP_GasPillar_04_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
