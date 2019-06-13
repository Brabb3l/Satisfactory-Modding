// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_master_river_spline_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function master_river_spline.master_river_spline_C.UserConstructionScript
// ()

void Amaster_river_spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function master_river_spline.master_river_spline_C.UserConstructionScript");

	Amaster_river_spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function master_river_spline.master_river_spline_C.ReceiveBeginPlay
// ()

void Amaster_river_spline_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function master_river_spline.master_river_spline_C.ReceiveBeginPlay");

	Amaster_river_spline_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function master_river_spline.master_river_spline_C.ExecuteUbergraph_master_river_spline
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void Amaster_river_spline_C::ExecuteUbergraph_master_river_spline(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function master_river_spline.master_river_spline_C.ExecuteUbergraph_master_river_spline");

	Amaster_river_spline_C_ExecuteUbergraph_master_river_spline_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
