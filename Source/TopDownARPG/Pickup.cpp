#include "Pickup.h"
#include "Controllers/TopDownARPGPlayerController.h"

APickup::APickup()
{
	PickupMesh = CreateDefaultSubobject<UStaticMeshComponent>("PickupMesh");
	RootComponent = Cast<USceneComponent>(PickupMesh);

	ItemID = FName("No ID");

	Super::Name = "Item";
	Super::Action = "pickup";
}

void APickup::Interact_Implementation(APlayerController* Controller)
{
	Super::Interact_Implementation(Controller);

	ATopDownARPGPlayerController* IController = Cast<ATopDownARPGPlayerController>(Controller);
	if (IController->AddItemToInventoryByID(ItemID))
		Destroy();
}