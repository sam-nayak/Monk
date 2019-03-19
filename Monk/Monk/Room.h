#ifndef ROOM_H
#define ROOM_H

#include <string>

#include "Player.h"

class Room
{
	protected:
		std::string name;
		bool isVisited = false;

	public:
		Room();
		Room(std::string name);

		std::string getName();

		bool hasVisited();

		void setHasVisited();

		virtual void enter(Player &player);
};

#endif
