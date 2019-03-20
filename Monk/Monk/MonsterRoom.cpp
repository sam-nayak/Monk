#include <iostream>

#include "MonsterRoom.h"
#include "Battle.h"
#include "Functions.h"
#include "Constants.h"
#include "BattleUI.h"

MonsterRoom::MonsterRoom()
	: Room(DEFAULT_MONSTERROOM_NAME)
	, monster(generateRandomMonster())
{
}

Monster MonsterRoom::getMonster() const
{
	return monster;
}

void MonsterRoom::enter(Player &player)
{
	isVisited = true;

	if (monster.isAlive())
	{
		Battle(player, monster);
		//BattleUI battle = new BattleUI();
	}
	else
	{
		std::cout << "\nA dead " << monster.getSpecies() << " lies on the ground in the middle of the room" << std::endl;

		Room::enter(player);
	}
}