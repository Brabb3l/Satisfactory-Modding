// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Tutorial_ResourceExtractors_Mail_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Tutorial_ResourceExtractors_Mail.Tutorial_ResourceExtractors_Mail_C.Construct
// ()

void UTutorial_ResourceExtractors_Mail_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ResourceExtractors_Mail.Tutorial_ResourceExtractors_Mail_C.Construct");

	UTutorial_ResourceExtractors_Mail_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Tutorial_ResourceExtractors_Mail.Tutorial_ResourceExtractors_Mail_C.ExecuteUbergraph_Tutorial_ResourceExtractors_Mail
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UTutorial_ResourceExtractors_Mail_C::ExecuteUbergraph_Tutorial_ResourceExtractors_Mail(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial_ResourceExtractors_Mail.Tutorial_ResourceExtractors_Mail_C.ExecuteUbergraph_Tutorial_ResourceExtractors_Mail");

	UTutorial_ResourceExtractors_Mail_C_ExecuteUbergraph_Tutorial_ResourceExtractors_Mail_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
