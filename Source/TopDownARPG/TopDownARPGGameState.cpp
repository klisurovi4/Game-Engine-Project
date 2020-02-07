#include "TopDownARPGGameState.h"

ATopDownARPGGameState::ATopDownARPGGameState()
{
	static ConstructorHelpers::FObjectFinder<UDataTable> BP_ItemDB(TEXT("DataTable'/Game/Data/ItemDB.ItemDB'"));
	ItemDB = BP_ItemDB.Object;
}

UDataTable* ATopDownARPGGameState::GetItemDB() const
{
	return ItemDB;
}
