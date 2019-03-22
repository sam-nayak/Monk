#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <cstdlib>

#include "Constants.h"

inline int generateRandomNumber(int min, int max)
{
	return min + rand() % (max + 1);
}

inline Monster generateRandomMonster()
{
	std::string species = Constants::MONSTER_RACES[generateRandomNumber(0, 6)];

	int health = generateRandomNumber(1, 2 * Constants::DEFAULT_MONSTER_HEALTH);
	int attack = generateRandomNumber(1, 2 * Constants::DEFAULT_MONSTER_ATTACK);

	return Monster(species, health, attack);
}


#endif