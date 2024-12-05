// Copyright Sons of Ralph Software

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface	
{
	GENERATED_BODY()

public:
	AAuraEnemy();

public:
	virtual void HighlighActor() override;
	virtual void UnHighlighActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bHightlighted = false;
};
