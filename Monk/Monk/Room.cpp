#include <iostream>
#include <fstream>

#include "Room.h"
#include "Constants.h"

Room::Room()
	: name(DEFAULT_EMPTYROOM_NAME)
{
}

Room::Room(std::string name)
	: name(name)
{
}

std::string Room::getName()
{
	return name;
}

bool Room::hasVisited()
{
	return isVisited;
}

void Room::setHasVisited()
{
	isVisited = true;
}


void Room::enter(Player &player)
{
	isVisited = true;

	/*if (!player.hasMaxHealthPoints())
	{
		player.setHealthPoints();

		std::ofstream file(LOGS_PATHWAY, std::ios_base::app);
		file << player.getName() <<
			" [" << player.getHealthPoints() << "/" << player.getHealthPointsMax()
			<< "]" << std::endl;
		file.close();
	}*/
}