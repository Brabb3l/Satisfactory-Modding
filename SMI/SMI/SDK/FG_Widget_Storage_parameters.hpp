#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_Storage_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Widget_Storage.Widget_Storage_C.DropInventorySlotStack
struct UWidget_Storage_C_DropInventorySlotStack_Params
{
	class UWidget_InventorySlot_C**                    InventorySlot;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               WasStackMoved;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Widget_Storage.Widget_Storage_C.Cleanup
struct UWidget_Storage_C_Cleanup_Params
{
};

// Function Widget_Storage.Widget_Storage_C.Init
struct UWidget_Storage_C_Init_Params
{
};

// Function Widget_Storage.Widget_Storage_C.Destruct
struct UWidget_Storage_C_Destruct_Params
{
};

// Function Widget_Storage.Widget_Storage_C.Construct
struct UWidget_Storage_C_Construct_Params
{
};

// Function Widget_Storage.Widget_Storage_C.DumpAllInStorage
struct UWidget_Storage_C_DumpAllInStorage_Params
{
};

// Function Widget_Storage.Widget_Storage_C.GrabAllFromStorage
struct UWidget_Storage_C_GrabAllFromStorage_Params
{
};

// Function Widget_Storage.Widget_Storage_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
struct UWidget_Storage_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
{
};

// Function Widget_Storage.Widget_Storage_C.ExecuteUbergraph_Widget_Storage
struct UWidget_Storage_C_ExecuteUbergraph_Widget_Storage_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
