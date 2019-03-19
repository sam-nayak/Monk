#ifndef TREASUREROOM_H
#define TREASUREROOM_H

#include "Room.h"

class TreasureRoom: public Room
{
	public:
		TreasureRoom();

		void enter(Player &player) override;
};

#endif

