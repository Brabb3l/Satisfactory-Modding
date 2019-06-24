#pragma once

/// Made by Brabb3l

#include "SDK.hpp"
#include <Windows.h>
#include "detours/detours.h"
#pragma comment(lib, "detours/detours.lib")

class ChatSystem
{
public:
	static void Init(SDK::AFGChatManager* chatManager);
	static void Cleanup();

	static void SendChatMessage(const wchar_t * message);
	static void SendChatMessage(const wchar_t* message, const wchar_t* senderName);
	static void SendChatMessage(const wchar_t* message, SDK::EFGChatMessageType chatMessageType);
	static void SendChatMessage(const wchar_t* message, const wchar_t* senderName, SDK::EFGChatMessageType chatMessageType);

private:
	static SDK::AFGChatManager* chatManager;
	static void(*AddChatMessageToReceived)(SDK::AFGChatManager* chatManager, SDK::FChatMessageStruct* inMessage);
	static SDK::AFGPlayerState* abusablePlayerState;
};

