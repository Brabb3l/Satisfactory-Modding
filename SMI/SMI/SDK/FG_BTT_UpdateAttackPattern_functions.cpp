// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BTT_UpdateAttackPattern_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_UpdateAttackPattern.BTT_UpdateAttackPattern_C.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_UpdateAttackPattern_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_UpdateAttackPattern.BTT_UpdateAttackPattern_C.ReceiveExecuteAI");

	UBTT_UpdateAttackPattern_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_UpdateAttackPattern.BTT_UpdateAttackPattern_C.ExecuteUbergraph_BTT_UpdateAttackPattern
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_UpdateAttackPattern_C::ExecuteUbergraph_BTT_UpdateAttackPattern(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_UpdateAttackPattern.BTT_UpdateAttackPattern_C.ExecuteUbergraph_BTT_UpdateAttackPattern");

	UBTT_UpdateAttackPattern_C_ExecuteUbergraph_BTT_UpdateAttackPattern_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
