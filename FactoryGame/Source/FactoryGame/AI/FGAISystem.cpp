// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAISystem.h"

UFGAISystem::UFGAISystem( const FObjectInitializer& ObjectInitializer ) : Super(ObjectInitializer) { }
void UFGAISystem::InitializeActorsForPlay( bool bTimeGotReset ){ }
void UFGAISystem::Tick( float DeltaTime ){ }
bool UFGAISystem::IsTickable() const{ return bool(); }
UFGAISystem* UFGAISystem::GetCurrentFG( UWorld* world ){ return nullptr; }
UFGAISystem* UFGAISystem::GetCurrentFGSafe( UWorld* world ){ return nullptr; }
void UFGAISystem::TickSpawners( float dt ){ }
void UFGAISystem::AddToTargetableList( TScriptInterface<class IFGAggroTargetInterface> aggroTarget ){ }
void UFGAISystem::RemoveFromTargetableList( TScriptInterface<class IFGAggroTargetInterface> aggroTarget ){ }
const TArray< class TScriptInterface< IFGAggroTargetInterface > >& UFGAISystem::GetAggroTargetList() const{ return *(new TArray< class TScriptInterface< IFGAggroTargetInterface > >); }
void UFGAISystem::ClearAllPardonedActors(){ }
void UFGAISystem::PardonActor( AActor* inActor ){ }
void UFGAISystem::UnpardonActor( AActor* inActor ){ }
bool UFGAISystem::IsActorPardoned( AActor* inActor ){ return bool(); }
void UFGAISystem::AddToTargetableListImp( TScriptInterface<class IFGAggroTargetInterface> aggroTarget ){ }
void UFGAISystem::RemoveFromTargetableListImp( TScriptInterface<class IFGAggroTargetInterface> aggroTarget ){ }
void UFGAISystem::OnActorSpawned( AActor* spawnedActor ){ }
void UFGAISystem::AggroTargetDestroyed( AActor* destroyedActor ){ }
void UFGAISystem::CreatureDestroyed( AActor* destroyedEnemy ){ }
void UFGAISystem::PlayerDestroyed( AActor* destroyedPlayer ){ }
float UFGAISystem::FindClosestPlayerSq(  AActor* actor,  AFGCharacterPlayer*& out_closestPlayer ) const{ return float(); }