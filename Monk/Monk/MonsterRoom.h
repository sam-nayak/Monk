#ifndef MONSTERROOM_H
#define MONSTERROOM_H

#include "Room.h"
#include "Monster.h"
#include "Player.h"

class MonsterRoom: public Room
{
	private:
		Monster monster;
		Player player;

	public:
		MonsterRoom();

		Monster getMonster() const;

		void enter(Player &player) override;
};

#endif