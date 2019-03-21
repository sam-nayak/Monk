#include "Monster.h"
#include "Constants.h"

Monster::Monster(std::string species, int health, int attack)
	: Character(species, health, attack)
{
}

Monster::Monster()
{
}
