#pragma once 

#include "CoreMinimal.h"
#include "Interactable.h"
#include "Pickup.generated.h"

UCLASS()
class TOPDOWNARPG_API APickup : public AInteractable
{
	GENERATED_BODY()

public:
	APickup();

	void Interact_Implementation(APlayerController* Controller) override;

protected:
	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemID;
};