#include "MonsterRoom.h"
#include "Functions.h"
#include "Constants.h"

MonsterRoom::MonsterRoom()
	: Room(Constants::DEFAULT_MONSTERROOM_NAME)
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
		//Battle(player, monster);
		//BattleUI battle = new BattleUI();
	}
	else
	{
		Room::enter(player);
	}
}