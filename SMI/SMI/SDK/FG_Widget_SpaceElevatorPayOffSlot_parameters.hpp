#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_SpaceElevatorPayOffSlot_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot
struct UWidget_SpaceElevatorPayOffSlot_C_DropOntoInventorySlot_Params
{
	class UWidget_InventorySlot_C*                     InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip
struct UWidget_SpaceElevatorPayOffSlot_C_GetCustomTooltip_Params
{
	class UWidget*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility
struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffSlotVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressBarVisibility
struct UWidget_SpaceElevatorPayOffSlot_C_GetProgressBarVisibility_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback
struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffColorFeedback_Params
{
	struct FSlateColor                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage
struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffFeedbackImage_Params
{
	ESlateVisibility                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressBarPercent
struct UWidget_SpaceElevatorPayOffSlot_C_GetProgressBarPercent_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop
struct UWidget_SpaceElevatorPayOffSlot_C_OnDrop_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	struct FPointerEvent*                              PointerEvent;                                             // (BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation**                         Operation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText
struct UWidget_SpaceElevatorPayOffSlot_C_GetItemQuotaText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText
struct UWidget_SpaceElevatorPayOffSlot_C_GetItemText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage
struct UWidget_SpaceElevatorPayOffSlot_C_GetItemImage_Params
{
	struct FSlateBrush                                 ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct
struct UWidget_SpaceElevatorPayOffSlot_C_Construct_Params
{
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick
struct UWidget_SpaceElevatorPayOffSlot_C_Tick_Params
{
	struct FGeometry*                                  MyGeometry;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float*                                             InDeltaTime;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer
struct UWidget_SpaceElevatorPayOffSlot_C_GlowTimer_Params
{
};

// Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot
struct UWidget_SpaceElevatorPayOffSlot_C_ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
