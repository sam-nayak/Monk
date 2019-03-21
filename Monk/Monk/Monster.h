#ifndef MONSTER_H
#define MONSTER_H

#include "Character.h"

class Monster
: public Character {
	public:
		Monster(std::string species, int health, int attack);
		Monster();

};


#endif
