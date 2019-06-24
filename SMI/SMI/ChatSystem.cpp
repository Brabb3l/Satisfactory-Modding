#include "ChatSystem.h"

void(*ChatSystem::AddChatMessageToReceived)(SDK::AFGChatManager* chatManager, SDK::FChatMessageStruct* inMessage) = NULL;
SDK::AFGChatManager* ChatSystem::chatManager = NULL;
SDK::AFGPlayerState* ChatSystem::abusablePlayerState = NULL;

void ChatSystem::Init(SDK::AFGChatManager* chatManager) {
	ChatSystem::chatManager = chatManager;
	ChatSystem::abusablePlayerState = new SDK::AFGPlayerState;
	ChatSystem::abusablePlayerState->PlayerId = 999;
	AddChatMessageToReceived = (void(*)(SDK::AFGChatManager* chatManager, SDK::FChatMessageStruct* inMessage)) DetourFindFunction("FactoryGame-Win64-Shipping.exe", "AFGChatManager::AddChatMessageToReceived");
}

void ChatSystem::Cleanup() {
	delete ChatSystem::abusablePlayerState;
}

void ChatSystem::SendChatMessage(const wchar_t* message) {
	SendChatMessage(message, L"System", SDK::EFGChatMessageType::CMT_PlayerMessage);
}

void ChatSystem::SendChatMessage(const wchar_t* message, const wchar_t* senderName) {
	SendChatMessage(message, senderName, SDK::EFGChatMessageType::CMT_PlayerMessage);
}

void ChatSystem::SendChatMessage(const wchar_t* message, SDK::EFGChatMessageType chatMessageType) {
	SendChatMessage(message, L"System", chatMessageType);
}

void ChatSystem::SendChatMessage(const wchar_t* message, const wchar_t* senderName, SDK::EFGChatMessageType chatMessageType) {
	SDK::FChatMessageStruct msg = SDK::FChatMessageStruct();

	// create fake player state
	ChatSystem::abusablePlayerState->PlayerNamePrivate = ChatSystem::abusablePlayerState->PlayerName = SDK::FString(senderName);

	msg.MessageString = SDK::FString(message);
	msg.MessageType = chatMessageType;
	msg.Sender = ChatSystem::abusablePlayerState;
	msg.ServerTimeStamp = 0;

	AddChatMessageToReceived(chatManager, &msg);
}