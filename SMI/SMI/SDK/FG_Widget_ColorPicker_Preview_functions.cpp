// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_ColorPicker_Preview_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.SetColors
// ()
// Parameters:
// struct FLinearColor            PrimaryColor                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FLinearColor            SecondaryColor                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void UWidget_ColorPicker_Preview_C::SetColors(const struct FLinearColor& PrimaryColor, const struct FLinearColor& SecondaryColor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.SetColors");

	UWidget_ColorPicker_Preview_C_SetColors_Params params;
	params.PrimaryColor = PrimaryColor;
	params.SecondaryColor = SecondaryColor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.SetTextures
// ()

void UWidget_ColorPicker_Preview_C::SetTextures()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.SetTextures");

	UWidget_ColorPicker_Preview_C_SetTextures_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.PreConstruct
// ()
// Parameters:
// bool*                          IsDesignTime                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ColorPicker_Preview_C::PreConstruct(bool* IsDesignTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.PreConstruct");

	UWidget_ColorPicker_Preview_C_PreConstruct_Params params;
	params.IsDesignTime = IsDesignTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.ExecuteUbergraph_Widget_ColorPicker_Preview
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UWidget_ColorPicker_Preview_C::ExecuteUbergraph_Widget_ColorPicker_Preview(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ColorPicker_Preview.Widget_ColorPicker_Preview_C.ExecuteUbergraph_Widget_ColorPicker_Preview");

	UWidget_ColorPicker_Preview_C_ExecuteUbergraph_Widget_ColorPicker_Preview_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
