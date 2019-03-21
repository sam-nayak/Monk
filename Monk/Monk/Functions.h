#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdlib>

#include "Constants.h"

int generateRandomNumber(int min, int max)
{
	return min + rand() % (max + 1);
}

Monster generateRandomMonster()
{
	std::string species = MONSTER_RACES[generateRandomNumber(0, 6)];
	std::string class_ = CLASSES[generateRandomNumber(0, 11)];

	int health = generateRandomNumber(1, 2 * DEFAULT_MONSTER_HEALTH);
	int attack = generateRandomNumber(1, 2 * DEFAULT_MONSTER_ATTACK);

	return Monster(species, health, attack);
}


#endif