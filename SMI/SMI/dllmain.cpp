#define _CRT_SECURE_NO_DEPRECATE
#include "dllmain.h"
#include "ChatSystem.h"

using namespace SMI;

bool firstcall = true;

/// EXTRA FUNCTIONS

void AddRecipe(SDK::UClass* recipe);
void Teleport(float x, float y, float z);

/////////////////////////////////////////////////////////////////////////////

/// Custom Hooks

static void(*originalDrawHUD)(SDK::AHUD* hud) = NULL;
void __fastcall hookDrawHUD(SDK::AHUD* hud)
{
	if (firstcall) {
		firstcall = false;
		// Maybe add some stuff to the game here. It's called only once!

		std::cout << "Hello Satisfactory!" << std::endl;
	}

	originalDrawHUD(hud); // call original function
}

static void(*originalEnterChatMessage)(SDK::AFGPlayerController *controller, SDK::FString *inMessage) = NULL;
void __fastcall hookEnterChatMessage(SDK::AFGPlayerController *controller, SDK::FString *inMessage) {
	if (std::wcslen(inMessage->c_str()) < 1) { // check if the message is empty
		originalEnterChatMessage(controller, inMessage); // call original function
		return;
	}

	std::string msg = inMessage->ToString();

	if (msg == "/test") {
		// do stuff
	}
	else {
		originalEnterChatMessage(controller, inMessage); // call original function
	}
}

// Put custom hooks in here
void InitCustomDetours() {
	originalDrawHUD = (void(*)(SDK::AHUD* hud))HookFunction(hookDrawHUD, "AHUD::DrawHUD");
	originalEnterChatMessage = (void(*)(SDK::AFGPlayerController *controller, SDK::FString *inMessage))HookFunction(hookEnterChatMessage, "AFGPlayerController::EnterChatMessage");
}


/////////////////////////////////////////////////////////////////////////////

/// SMI Init

void InitDetours()
{
	std::cout << "Initializing SMI Detours" << std::endl;
	/// Additional functions

	// Static

	AssetLoader::Init();

	_NewUStaticMeshComponent = (SDK::UStaticMeshComponent*(*)(SDK::UObject*, SDK::UClass*, SDK::FName, SDK::EObjectFlags, SDK::UObject*, bool, void*)) FindFunction("NewObject<UStaticMeshComponent>");
	_NewUSkeletalMeshComponent = (SDK::USkeletalMeshComponent*(*)(SDK::UObject*, SDK::UClass*, SDK::FName, SDK::EObjectFlags, SDK::UObject*, bool, void*)) FindFunction("NewObject<USkeletalMeshComponent>");

	// Class Functions
	
	SDK::UWorld::_SpawnActor = (SDK::AActor*(*)(SDK::UWorld *world, SDK::UClass *Class, SDK::FVector *Location, SDK::FRotator *Rotation, SDK::FActorSpawnParameters *SpawnParameters)) FindFunction("UWorld::SpawnActor");
	SDK::UActorComponent::_RegisterComponent = (void(*)(SDK::UActorComponent *Component)) FindFunction("UActorComponent::RegisterComponent");
	SDK::AActor::_AddOwnedComponent = (void(*)(SDK::AActor *Actor, SDK::UActorComponent *Component)) FindFunction("AActor::AddOwnedComponent");
	SDK::AActor::_SetRootComponent = (bool(*)(SDK::AActor *Actor, SDK::USceneComponent *NewRootComponent)) FindFunction("AActor::SetRootComponent");

	AddAvailableRecipe = (void(*)(SDK::AFGRecipeManager *recipeManager, SDK::TSubclassOf<SDK::UFGRecipe> recipe)) FindFunction("AFGRecipeManager::AddAvailableRecipe");

	/// Hooks
	OpenLevel = (void(*)(SDK::UObject *WorldContextObject, SDK::FName LevelName, bool bAbsolute, SDK::FString Options)) FindFunction("UGameplayStatics::OpenLevel");

	InitCustomDetours();
}

void InitSDK()
{
	std::cout << "Initializing SMI SDK" << std::endl;

	BaseAddress = (DWORD_PTR)GetModuleHandle(NULL);
	GetModuleInformation(GetCurrentProcess(), (HMODULE)BaseAddress, &ModuleInfo, sizeof(ModuleInfo));

	auto addrGObj = (DWORD_PTR)Util::FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
		(PBYTE)"\x48\x8D\x0D\x00\x00\x00\x04\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x00\xE8\x00\x00\x00\x01", "xxx???xx???xx???xx???x", 0);
	auto offGObj = *reinterpret_cast<uint32_t*>(addrGObj + 3);
	SDK::UObject::GObjects = reinterpret_cast<SDK::FUObjectArray*>(addrGObj + 7 + offGObj);

	auto addrGName = (DWORD_PTR)Util::FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
		(PBYTE)"\x48\x8B\x05\x00\x00\x00\x03\x48\x85\xC0\x0F\x85\xB0", "xxx???xxxxxxx", 0);
	auto offGName = *reinterpret_cast<uint32_t*>(addrGName + 3);
	SDK::FName::GNames = *reinterpret_cast<SDK::TNameEntryArray**>(addrGName + 7 + offGName);

	auto btAddrUWorld = (DWORD_PTR)Util::FindPattern((PBYTE)BaseAddress, ModuleInfo.SizeOfImage,
		(PBYTE) "\x48\x8B\x1D\x00\x00\x00\x04\x48\x85\xDB\x74\x3B",
		"xxx???xxxxxx", 0);
	auto btOffUWorld = *reinterpret_cast<uint32_t*>(btAddrUWorld + 3);
	world = *reinterpret_cast<SDK::UWorld**>(btAddrUWorld + 7 + btOffUWorld);
}

DWORD WINAPI InitThread()
{
	std::cout << "Initializing SMI" << std::endl;

	InitSDK();
	InitDetours();

	return 0;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	if (fdwReason == DLL_PROCESS_ATTACH) {
		InitThread();
	}

	return (TRUE);
}

/// Extra Function Definitions

void AddRecipe(SDK::UClass* recipe) {
	AddAvailableRecipe(((SDK::AFGGameState*)world->GameState)->mRecipeManager, SDK::TSubclassOf<SDK::UFGRecipe>(recipe));
}

void Teleport(float x, float y, float z) {
	SDK::AFGCharacterPlayer* player = (SDK::AFGCharacterPlayer*)world->OwningGameInstance->LocalPlayers[0]->PlayerController->Character;
	SDK::FHitResult hit;
	player->K2_SetActorLocation(SDK::FVector(x, y, z), false, true, &hit);
}

/// SMI

namespace SMI {

	PVOID FindFunction(LPCSTR function) {
		return DetourFindFunction("FactoryGame-Win64-Shipping.exe", function);
	}

	PVOID HookFunction(const PVOID& function, std::string functionName) {
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		auto original = DetourFindFunction("FactoryGame-Win64-Shipping.exe", functionName.c_str());
		if (!original) {
			MessageBoxA(NULL, ("Failed to hook " + functionName).c_str(), "Failed", MB_OK);
		}
		DetourAttach(&original, function);
		DetourTransactionCommit();

		return original;
	}

	SDK::USkeletalMeshComponent* CreateSkeletalMeshActor(const wchar_t * path, SDK::FVector location, SDK::FRotator rotation, SDK::FVector scale)
	{
		// Spawn Actor
		SDK::FVector loc = SDK::FVector();
		SDK::FRotator rot = SDK::FRotator();

		SDK::FActorSpawnParameters* SpawnInfo = &SDK::FActorSpawnParameters();
		SDK::AActor* actor = world->SpawnActor(SDK::AActor::StaticClass(), &loc, &rot, SpawnInfo);

		if (!actor) {
			MessageBoxA(NULL, "Invlid actor", "Failed", MB_OK);

			return NULL;
		}

		// Add SkeletalMeshComponent
		SDK::USkeletalMesh* mesh = (SDK::USkeletalMesh*)AssetLoader::LoadObjectSimple(SDK::USkeletalMesh::StaticClass(), path);

		SDK::USkeletalMeshComponent* MeshComponent = NewUSkeletalMeshComponent(actor, SDK::USkeletalMeshComponent::StaticClass(), SDK::FName("Mesh"));
		MeshComponent->SetSkeletalMesh(mesh, false);
		MeshComponent->SetIsReplicated(true);

		MeshComponent->RelativeScale3D = scale;
		MeshComponent->RelativeLocation = location;
		MeshComponent->RelativeRotation = rotation;

		// Register
		MeshComponent->RegisterComponent();

		actor->AddOwnedComponent(MeshComponent);
		actor->SetRootComponent(MeshComponent);

		return MeshComponent;
	}

	SDK::UStaticMeshComponent* CreateMeshActor(const wchar_t * path, SDK::FVector location, SDK::FRotator rotation, SDK::FVector scale)
	{
		// Spawn Actor
		SDK::FVector loc = SDK::FVector();
		SDK::FRotator rot = SDK::FRotator();

		SDK::FActorSpawnParameters* SpawnInfo = &SDK::FActorSpawnParameters();
		SDK::AActor* actor = world->SpawnActor(SDK::AActor::StaticClass(), &loc, &rot, SpawnInfo);

		// Add StaticMeshComponent
		SDK::UStaticMesh* mesh = (SDK::UStaticMesh*)AssetLoader::LoadObjectSimple(SDK::UStaticMesh::StaticClass(), path); // unreal engine automatically caches that specific object

		SDK::UStaticMeshComponent* MeshComponent = NewUStaticMeshComponent(actor, SDK::UStaticMeshComponent::StaticClass(), SDK::FName("Mesh"));
		MeshComponent->SetStaticMesh(mesh);
		MeshComponent->SetIsReplicated(true);

		MeshComponent->RelativeScale3D = scale;
		MeshComponent->RelativeLocation = location;
		MeshComponent->RelativeRotation = rotation;

		// Register
		MeshComponent->RegisterComponent();

		actor->AddOwnedComponent(MeshComponent);
		actor->SetRootComponent(MeshComponent);

		return MeshComponent;
	}

	SDK::FInventoryStack MakeItemStack(SDK::UClass* clazz, const int& amount) {
		SDK::FInventoryStack stack = SDK::FInventoryStack();
		SDK::FInventoryItem item = SDK::FInventoryItem();

		item.ItemClass = clazz;

		stack.Item = item;
		stack.NumItems = amount;

		return stack;
	}

	float Util::Dist(const SDK::FVector & V1, const SDK::FVector & V2) {
		return sqrt((V1.X - V2.X) * (V1.X - V2.X) + (V1.Y - V2.Y) * (V1.Y - V2.Y) + (V1.Z - V2.Z) * (V1.Z - V2.Z));
	}

	bool Util::DataCompare(PBYTE pData, PBYTE bSig, const char* szMask)
	{
		for (; *szMask; ++szMask, ++pData, ++bSig)
		{
			if (*szMask == 'x' && *pData != *bSig)
				return false;
		}
		return (*szMask) == 0;
	}

	PBYTE Util::FindPattern(PBYTE dwAddress, DWORD dwSize, PBYTE pbSig, const char* szMask, long offset)
	{
		size_t length = strlen(szMask);
		for (size_t i = NULL; i < dwSize - length; i++)
		{
			if (DataCompare(dwAddress + i, pbSig, szMask))
				return dwAddress + i + offset;
		}
		return 0;
	}

	SDK::FQuat Util::toQuat(const SDK::FRotator& rotator) {
		double cy = cos(rotator.Yaw * 0.5);
		double sy = sin(rotator.Yaw * 0.5);
		double cp = cos(rotator.Pitch * 0.5);
		double sp = sin(rotator.Pitch * 0.5);
		double cr = cos(rotator.Roll * 0.5);
		double sr = sin(rotator.Roll * 0.5);

		SDK::FQuat q;
		q.W = cy * cp * cr + sy * sp * sr;
		q.X = cy * cp * sr - sy * sp * cr;
		q.Y = sy * cp * sr + cy * sp * cr;
		q.Z = sy * cp * cr - cy * sp * sr;
		return q;
	}

	SDK::FRotator Util::toEuler(const SDK::FQuat& quat)
	{
		double roll;
		double pitch;
		double yaw;

		double sinr_cosp = 2.0 * (quat.W * quat.X + quat.Y * quat.Z);
		double cosr_cosp = 1.0 - 2.0 * (quat.X * quat.X + quat.Y * quat.Y);
		roll = atan2(sinr_cosp, cosr_cosp);

		double sinp = 2.0 * (quat.W * quat.Y - quat.Z * quat.X);
		if (fabs(sinp) >= 1)
			pitch = copysign(3.14159265358979323846 / 2, sinp);
		else
			pitch = asin(sinp);

		double siny_cosp = 2.0 * (quat.W * quat.Z + quat.X * quat.Y);
		double cosy_cosp = 1.0 - 2.0 * (quat.Y * quat.Y + quat.Z * quat.Z);
		yaw = atan2(siny_cosp, cosy_cosp);

		return SDK::FRotator(pitch, yaw, roll);
	}
}