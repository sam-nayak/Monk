#ifndef EMPTYROOM_H
#define EMPTYROOM_H

#include "Room.h"

class EmptyRoom : public Room
{
	public:
		EmptyRoom();
		void enter(Player &player) override;
};

#endif