#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Build_HubTerminal_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Build_HubTerminal.Build_HubTerminal_C.CanDismantle
struct ABuild_HubTerminal_C_CanDismantle_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Build_HubTerminal.Build_HubTerminal_C.UpdateUseState
struct ABuild_HubTerminal_C_UpdateUseState_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector*                                    atLocation;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	class UPrimitiveComponent**                        componentHit;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FUseState                                   out_useState;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Build_HubTerminal.Build_HubTerminal_C.GetLookAtDecription
struct ABuild_HubTerminal_C_GetLookAtDecription_Params
{
	class AFGCharacterPlayer**                         byCharacter;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FUseState*                                  State;                                                    // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Build_HubTerminal.Build_HubTerminal_C.UserConstructionScript
struct ABuild_HubTerminal_C_UserConstructionScript_Params
{
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
