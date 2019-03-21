#include <iostream>

#include "TreasureRoom.h"
#include "Constants.h"

TreasureRoom::TreasureRoom()
	: Room(Constants::DEFAULT_TREASUREROOM_NAME)
{
}

void TreasureRoom::enter(Player &player)
{
	isVisited = true;
}
