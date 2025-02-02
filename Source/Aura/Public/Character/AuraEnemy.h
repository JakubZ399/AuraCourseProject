

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

class AAuraPlayerState;
/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();
	
	virtual void HighLightActor() override;
	virtual void UnHighLightActor() override;

	UPROPERTY(BlueprintReadOnly)
	bool bIsHighlighted{ false };

protected:
	virtual void BeginPlay() override;
	virtual void InitAbilityActorInfo() override;
};
