#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_HUDBox_ObjectScanner_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Construct
struct UWidget_HUDBox_ObjectScanner_C_Construct_Params
{
};

// Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.Tick
struct UWidget_HUDBox_ObjectScanner_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_HUDBox_ObjectScanner.Widget_HUDBox_ObjectScanner_C.ExecuteUbergraph_Widget_HUDBox_ObjectScanner
struct UWidget_HUDBox_ObjectScanner_C_ExecuteUbergraph_Widget_HUDBox_ObjectScanner_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
