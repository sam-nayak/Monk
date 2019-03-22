#include "Room.h"
#include "Constants.h"

Room::Room()
	: name(Constants::DEFAULT_ROOM_NAME)
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
}