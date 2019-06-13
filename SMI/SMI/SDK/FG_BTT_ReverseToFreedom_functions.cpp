// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_BTT_ReverseToFreedom_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ReverseComplete
// ()

void UBTT_ReverseToFreedom_C::ReverseComplete()
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ReverseComplete");

	UBTT_ReverseToFreedom_C_ReverseComplete_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ReceiveExecuteAI
// ()
// Parameters:
// class AAIController**          OwnerController                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class APawn**                  ControlledPawn                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_ReverseToFreedom_C::ReceiveExecuteAI(class AAIController** OwnerController, class APawn** ControlledPawn)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ReceiveExecuteAI");

	UBTT_ReverseToFreedom_C_ReceiveExecuteAI_Params params;
	params.OwnerController = OwnerController;
	params.ControlledPawn = ControlledPawn;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ExecuteUbergraph_BTT_ReverseToFreedom
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBTT_ReverseToFreedom_C::ExecuteUbergraph_BTT_ReverseToFreedom(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BTT_ReverseToFreedom.BTT_ReverseToFreedom_C.ExecuteUbergraph_BTT_ReverseToFreedom");

	UBTT_ReverseToFreedom_C_ExecuteUbergraph_BTT_ReverseToFreedom_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
