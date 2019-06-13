#pragma once

#include "AssetLoader.h"
#include <iostream>
#include <Windows.h>
#include <Psapi.h>
#include <sstream>
#include "SDK.hpp"
#include "detours/detours.h"
#pragma comment(lib, "detours/detours.lib")

namespace SMI {
	DWORD_PTR BaseAddress;
	MODULEINFO ModuleInfo;
	SDK::UWorld* world;

	PVOID FindFunction(LPCSTR function);
	PVOID HookFunction(const PVOID& function, std::string functionName);

	/// Static functions

	SDK::UStaticMeshComponent*(*_NewUStaticMeshComponent)(SDK::UObject* Outer, SDK::UClass* Class, SDK::FName Name, SDK::EObjectFlags Flags, SDK::UObject* Template, bool bCopyTransientsFromClassDefaults, void* InInstanceGraph) = NULL;
	SDK::UStaticMeshComponent* NewUStaticMeshComponent(SDK::UObject *Outer, SDK::UClass *Class, SDK::FName Name, SDK::EObjectFlags Flags = SDK::RF_NoFlags, SDK::UObject *Template = nullptr, bool bCopyTransientsFromClassDefaults = false) {
		return _NewUStaticMeshComponent(Outer, Class, Name, Flags, Template, bCopyTransientsFromClassDefaults, nullptr);
	}

	SDK::USkeletalMeshComponent*(*_NewUSkeletalMeshComponent)(SDK::UObject* Outer, SDK::UClass* Class, SDK::FName Name, SDK::EObjectFlags Flags, SDK::UObject* Template, bool bCopyTransientsFromClassDefaults, void* InInstanceGraph) = NULL;
	SDK::USkeletalMeshComponent* NewUSkeletalMeshComponent(SDK::UObject *Outer, SDK::UClass *Class, SDK::FName Name, SDK::EObjectFlags Flags = SDK::RF_NoFlags, SDK::UObject *Template = nullptr, bool bCopyTransientsFromClassDefaults = false) {
		return _NewUSkeletalMeshComponent(Outer, Class, Name, Flags, Template, bCopyTransientsFromClassDefaults, nullptr);
	}

	void(*OpenLevel)(SDK::UObject *WorldContextObject, SDK::FName LevelName, bool bAbsolute, SDK::FString Options) = NULL;

	/// Non-static functions

	void(*AddAvailableRecipe)(SDK::AFGRecipeManager *recipeManager, SDK::TSubclassOf<SDK::UFGRecipe> recipe);

	/// SMI Testing Functions

	SDK::USkeletalMeshComponent* CreateSkeletalMeshActor(const wchar_t * path, SDK::FVector location = SDK::FVector(), SDK::FRotator rotation = SDK::FRotator(), SDK::FVector scale = SDK::FVector());

	/// SMI Functions

	SDK::FInventoryStack MakeItemStack(SDK::UClass* clazz, const int& amount);

	/// Util stuff

	class Util
	{
	public:
		static float Dist(const SDK::FVector & V1, const SDK::FVector & V2);
		static bool DataCompare(PBYTE pData, PBYTE bSig, const char * szMask);
		static PBYTE FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, const char * szMask, long offset);
		static SDK::FQuat toQuat(const SDK::FRotator& rotator);
		static SDK::FRotator toEuler(const SDK::FQuat& quat);
	};
}