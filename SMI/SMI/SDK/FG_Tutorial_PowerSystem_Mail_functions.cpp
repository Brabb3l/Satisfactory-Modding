// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Tutorial_PowerSystem_Mail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_PowerSystem_Mail.Tutorial_PowerSystem_Mail_C.Construct
// ()

void UTutorial_PowerSystem_Mail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_PowerSystem_Mail.Tutorial_PowerSystem_Mail_C.Construct");

	UTutorial_PowerSystem_Mail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_PowerSystem_Mail.Tutorial_PowerSystem_Mail_C.ExecuteUbergraph_Tutorial_PowerSystem_Mail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_PowerSystem_Mail_C::ExecuteUbergraph_Tutorial_PowerSystem_Mail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_PowerSystem_Mail.Tutorial_PowerSystem_Mail_C.ExecuteUbergraph_Tutorial_PowerSystem_Mail");

	UTutorial_PowerSystem_Mail_C_ExecuteUbergraph_Tutorial_PowerSystem_Mail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
