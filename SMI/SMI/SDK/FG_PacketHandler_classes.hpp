#pragma once

// Satisfactory SDK (V0.1.12 - Build 99303)

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "FG_PacketHandler_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PacketHandler.HandlerComponentFactory
// 0x0000 (0x0028 - 0x0028)
class UHandlerComponentFactory : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PacketHandler.HandlerComponentFactory");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
