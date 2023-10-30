// Copyright Joseph McLemore

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "EnemyAuraCharacter.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AEnemyAuraCharacter : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()
public:
	AEnemyAuraCharacter();
	virtual void HighlightActor() override;
	virtual void UnhighlightActor() override;

protected:
	virtual void BeginPlay() override;
};
