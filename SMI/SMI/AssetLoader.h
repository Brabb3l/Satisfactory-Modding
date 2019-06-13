#pragma once

/// Made by Brabb3l

#include "SDK.hpp"
#include <Windows.h>
#include "detours/detours.h"
#pragma comment(lib, "detours/detours.lib")

class AssetLoader {
public:
	static SDK::UObject* LoadObjectSimple(SDK::UClass *ObjectClass, const wchar_t *InName);

	static SDK::UObject* LoadObject(SDK::UClass *ObjectClass, SDK::UObject *InOuter = nullptr, const wchar_t *InName = nullptr, const wchar_t *Filename = nullptr, unsigned int LoadFlags = 0, SDK::UPackageMap *Sandbox = nullptr, bool bAllowObjectReconciliation = false);

	static void Init();

private:
	static SDK::UObject*(*_LoadObject)(SDK::UClass *ObjectClass, SDK::UObject *InOuter, const wchar_t *InName, const wchar_t *Filename, unsigned int LoadFlags, SDK::UPackageMap *Sandbox, bool bAllowObjectReconciliation);
};