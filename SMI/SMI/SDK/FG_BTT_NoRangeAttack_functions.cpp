// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BTT_NoRangeAttack_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.mOnAttackFailed_116612B142195CF8862D28AC809559CE
// ()

void UBTT_NoRangeAttack_C::mOnAttackFailed_116612B142195CF8862D28AC809559CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.mOnAttackFailed_116612B142195CF8862D28AC809559CE");

	UBTT_NoRangeAttack_C_mOnAttackFailed_116612B142195CF8862D28AC809559CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.mOnAttackFinished_116612B142195CF8862D28AC809559CE
// ()

void UBTT_NoRangeAttack_C::mOnAttackFinished_116612B142195CF8862D28AC809559CE()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.mOnAttackFinished_116612B142195CF8862D28AC809559CE");

	UBTT_NoRangeAttack_C_mOnAttackFinished_116612B142195CF8862D28AC809559CE_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_NoRangeAttack_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.ReceiveExecuteAI");

	UBTT_NoRangeAttack_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.ExecuteUbergraph_BTT_NoRangeAttack
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_NoRangeAttack_C::ExecuteUbergraph_BTT_NoRangeAttack(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_NoRangeAttack.BTT_NoRangeAttack_C.ExecuteUbergraph_BTT_NoRangeAttack");

	UBTT_NoRangeAttack_C_ExecuteUbergraph_BTT_NoRangeAttack_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
