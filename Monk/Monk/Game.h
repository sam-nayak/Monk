#ifndef GAME_H
#define GAME_H

#include <vector>

#include "Player.h"
#include "Monster.h"
#include "MonsterRoom.h"
#include "TreasureRoom.h"

class Game
{
	private:
		Player player;
		std::vector<std::vector<Room*>> rooms;

		Room* startRoom;
		Room* currentRoom;

		bool isFinished = false;

		void initialise();

		void loseEnding();
		void winEnding();

		void generateRooms();
		Room* generateRandomRoom();

		void createLogs();
		
	public:
		Game();
		void play();
		void printDungeon();
		void setDetails(std::string name, std::string description);
		Player& getPlayer();
};

#endif
