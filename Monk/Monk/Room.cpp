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

	std::cout << "\nYou are in an empty room" << std::endl;

	if (!player.hasMaxHealthPoints())
	{
		std::string choice;

		std::cout << "\nWhat will " << player.getName() << " do? \n1.) Restore Health" << std::endl;
		getline(std::cin, choice);

		if (choice == "1")
		{
			player.setHealthPoints();

			std::cout << "\nHealth restored" << std::endl;

			std::ofstream file(LOGS_PATHWAY, std::ios_base::app);
			file << player.getName() << 
				" [" << player.getHealthPoints() << "/" << player.getHealthPointsMax()
				<< "]" << std::endl;
			file.close();
		
		}
	}

	std::cout << "============================================" << std::endl;
}