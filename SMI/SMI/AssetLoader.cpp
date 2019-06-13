#include "AssetLoader.h"

SDK::UObject* AssetLoader::LoadObjectSimple(SDK::UClass *Class, const wchar_t *Name) {
	return _LoadObject(Class, nullptr, Name, nullptr, 0, nullptr, false);
}

SDK::UObject* AssetLoader::LoadObject(SDK::UClass *ObjectClass, SDK::UObject *InOuter, const wchar_t *InName, const wchar_t *Filename, unsigned int LoadFlags, SDK::UPackageMap *Sandbox, bool bAllowObjectReconciliation) {
	return _LoadObject(ObjectClass, InOuter, InName, Filename, LoadFlags, Sandbox, bAllowObjectReconciliation);
}

void AssetLoader::Init() {
	_LoadObject = (SDK::UObject*(*)(SDK::UClass*, SDK::UObject*, const wchar_t*, const wchar_t*, unsigned int, SDK::UPackageMap*, bool)) DetourFindFunction("FactoryGame-Win64-Shipping.exe", "StaticLoadObject");
}

SDK::UObject*(*AssetLoader::_LoadObject)(SDK::UClass *ObjectClass, SDK::UObject *InOuter, const wchar_t *InName, const wchar_t *Filename, unsigned int LoadFlags, SDK::UPackageMap *Sandbox, bool bAllowObjectReconciliation) = NULL;