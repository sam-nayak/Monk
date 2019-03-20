#include <string>
#include <iostream>
#include <fstream>

#include "Game.h"
#include "Battle.h"
#include "Monster.h"
#include "Constants.h"
#include "Functions.h"


Game::Game()
{
	generateRooms();
}

Room* Game::generateRandomRoom()
{
	int roomType = generateRandomNumber(0, 1);

	switch (roomType)
	{
		case 0:
			return new MonsterRoom();
		case 1:
			return new Room();
		default:
			return NULL;
	}
}

void Game::generateRooms()
{
	for (int i = 0; i < ROOMS_SIZE_X; i++)
	{
		std::vector<Room*> inner;

		for (int i = 0; i < ROOMS_SIZE_Y; i++)
		{
			inner.push_back(generateRandomRoom());
		}
		rooms.push_back(inner);
	}
	rooms[generateRandomNumber(0, ROOMS_SIZE_X-1)][generateRandomNumber(0, ROOMS_SIZE_Y-1)] = new TreasureRoom();
}

void Game::setDetails(std::string name, std::string description)
{
	player.setName(name);
	player.setDescription(description);
}

Player& Game::getPlayer()
{
	return player;
}

void Game::initialise()
{
	std::string name, description;

	//std::cout << "Welcome!\n" << std::endl;

	//std::cout << "Please enter your name: ";
	//getline(std::cin, name);

	name[0] = toupper(name[0]);

	if (name.size() != 0)
		player.setName(name);
		
	//std::cout << "Please enter a description: ";
	//getline(std::cin, description);
	
	player.setDescription(description);

	//std::cout << "============================================" << std::endl;
}

void Game::loseEnding()
{
	std::cout << "\n\n============================================" << std::endl;
	std::cout << "You Lose!" << std::endl;
	std::cout << "============================================" << std::endl;
}

void Game::winEnding()
{
	std::cout << "\n============================================" << std::endl;
	std::cout << "You Win!" << std::endl;
	std::cout << "============================================" << std::endl;
}

void Game::play()
{
	createLogs();

	int currentX = generateRandomNumber(0, ROOMS_SIZE_X-1),
		currentY = generateRandomNumber(0, ROOMS_SIZE_Y-1);

	while (rooms[currentX][currentY]->getName() != DEFAULT_EMPTYROOM_NAME)
	{
		currentX = generateRandomNumber(0, ROOMS_SIZE_X - 1);
		currentY = generateRandomNumber(0, ROOMS_SIZE_Y - 1);
	}

	startRoom = rooms[currentX][currentY];
	currentRoom = startRoom;

	startRoom->setHasVisited();

	printDungeon();

	while (!isFinished)
	{
		std::string direction;

		int nextX = currentX,
			nextY = currentY;

		std::cout << "#~> ";
		getline(std::cin, direction);
		std::cout << std::endl;

		try
		{
			if (direction == "w")
			{
				nextX--;
				direction = "north";
			}
			else if (direction == "a")
			{
				nextY--;
				direction = "west";
			}
			else if (direction == "s")
			{
				nextX++;
				direction = "south";
			}
			else if (direction == "d")
			{
				nextY++;
				direction = "east";
			}
			else
			{
				continue;
			}

			currentRoom = rooms.at(nextX).at(nextY);
		}
		catch(const std::out_of_range)
		{
			std::cout << "You hit a wall\n" << std::endl;
			continue;
		}

		std::cout << "You head " << direction << std::endl;

		currentX = nextX;
		currentY = nextY;

		std::ofstream file(LOGS_PATHWAY, std::ios_base::app);
		file << "\n" << currentRoom->getName() << std::endl;
		file.close();

		currentRoom->enter(player);

		printDungeon();

		if (currentRoom->getName() == DEFAULT_TREASUREROOM_NAME)
		{
			winEnding();
			return;
		}

		if (!player.isAlive())
		{
			loseEnding();
			return;
		}
	}
}

void Game::createLogs()
{
	std::ofstream file(LOGS_PATHWAY, std::ios_base::out);   //std::ios_base::app

	file << player.getName() << " "
		<< player.getHealthPoints() << "/" << player.getHealthPointsMax()
		<< " " << player.getAttackPoints() << std::endl;

	file.close();
}

void Game::printDungeon()
{
	for (size_t i = 0; i < rooms.size(); i++)
	{
		std::cout << "[";
		

		for (size_t j = 0; j < rooms[i].size(); j++)
		{
			Room *room = rooms[i][j];

			std::cout << (room == startRoom ? 'O'
											: room == currentRoom ? 'X'
											: room->hasVisited() 
											? room->getName()[0] : '-');

			if (j != rooms.size()-1)
				std::cout << " ";
		}

		std::cout << "]" << std::endl;
	}

	std::cout << std::endl;
}