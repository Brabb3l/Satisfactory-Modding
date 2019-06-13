// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BTS_TargetLedgeCheck_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.GetKeyLocation
// ()
// Parameters:
// struct FBlackboardKeySelector  Key                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FVector                 Location                       (Parm, OutParm, IsPlainOldData)

void UBTS_TargetLedgeCheck_C::GetKeyLocation(const struct FBlackboardKeySelector& Key, struct FVector* Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.GetKeyLocation");

	UBTS_TargetLedgeCheck_C_GetKeyLocation_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Location != nullptr)
		*Location = params.Location;
}


// Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.ReceiveTickAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_TargetLedgeCheck_C::ReceiveTickAI(class AAIController** OwnerController, class APawn** ControlledPawn, float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.ReceiveTickAI");

	UBTS_TargetLedgeCheck_C_ReceiveTickAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.ExecuteUbergraph_BTS_TargetLedgeCheck
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTS_TargetLedgeCheck_C::ExecuteUbergraph_BTS_TargetLedgeCheck(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTS_TargetLedgeCheck.BTS_TargetLedgeCheck_C.ExecuteUbergraph_BTS_TargetLedgeCheck");

	UBTS_TargetLedgeCheck_C_ExecuteUbergraph_BTS_TargetLedgeCheck_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
