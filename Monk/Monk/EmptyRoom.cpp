#include "EmptyRoom.h"
#include "Constants.h"

EmptyRoom::EmptyRoom()
	: Room(Constants::DEFAULT_EMPTYROOM_NAME)
{
}

void EmptyRoom::enter(Player &player)
{
	isVisited = true;

	/*if (!player.hasMaxHealthPoints())
	{
		player.setHealthPoints();
	}*/
}