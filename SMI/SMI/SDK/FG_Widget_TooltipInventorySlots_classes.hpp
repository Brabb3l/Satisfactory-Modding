#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_Widget_TooltipInventorySlots_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C
// 0x0018 (0x0220 - 0x0208)
class UWidget_TooltipInventorySlots_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)
	class UVerticalBox*                                mContainer;                                               // 0x0210(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UClass*                                      mSchematic;                                               // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C");
		return ptr;
	}


	void GetExtraInventorySlotText(struct FText* NewParam);
	void GetExtraArmsSlotText(struct FText* NewParam);
	void Construct();
	void ExecuteUbergraph_Widget_TooltipInventorySlots(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
