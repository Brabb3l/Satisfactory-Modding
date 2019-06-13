// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_WorkBenchIntegrated_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanDismantle
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_WorkBenchIntegrated_C::CanDismantle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.CanDismantle");

	ABuild_WorkBenchIntegrated_C_CanDismantle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetLookAtDecription
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FUseState*              State                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText ABuild_WorkBenchIntegrated_C::GetLookAtDecription(class AFGCharacterPlayer** byCharacter, struct FUseState* State)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.GetLookAtDecription");

	ABuild_WorkBenchIntegrated_C_GetLookAtDecription_Params params;
	params.byCharacter = byCharacter;
	params.State = State;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsUseable
// ()
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABuild_WorkBenchIntegrated_C::IsUseable()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.IsUseable");

	ABuild_WorkBenchIntegrated_C_IsUseable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateUseState
// ()
// Parameters:
// class AFGCharacterPlayer**     byCharacter                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                atLocation                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// class UPrimitiveComponent**    componentHit                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FUseState               out_useState                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void ABuild_WorkBenchIntegrated_C::UpdateUseState(class AFGCharacterPlayer** byCharacter, struct FVector* atLocation, class UPrimitiveComponent** componentHit, struct FUseState* out_useState)
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UpdateUseState");

	ABuild_WorkBenchIntegrated_C_UpdateUseState_Params params;
	params.byCharacter = byCharacter;
	params.atLocation = atLocation;
	params.componentHit = componentHit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (out_useState != nullptr)
		*out_useState = params.out_useState;
}


// Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UserConstructionScript
// ()

void ABuild_WorkBenchIntegrated_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Build_WorkBenchIntegrated.Build_WorkBenchIntegrated_C.UserConstructionScript");

	ABuild_WorkBenchIntegrated_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
