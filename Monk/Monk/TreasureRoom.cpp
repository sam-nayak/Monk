#include <iostream>

#include "TreasureRoom.h"
#include "Constants.h"

TreasureRoom::TreasureRoom()
	: Room(DEFAULT_TREASUREROOM_NAME)
{
}

void TreasureRoom::enter(Player &player)
{
	isVisited = true;

	//std::cout << "\n\n============================================" << std::endl;
	//std::cout << "You Win!" << std::endl;
	//std::cout << "============================================" << std::endl;
}
