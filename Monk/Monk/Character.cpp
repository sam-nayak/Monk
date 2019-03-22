#include "Character.h"
#include "Constants.h"

Character::Character(std::string species, int health, int attack)
	: species(species)
	, healthPoints(health)
	, healthPointsMax(health)
	, attackPoints(attack)
{
}

Character::Character()
{
}

int Character::getHealthPoints() const
{
	return healthPoints;
}

int Character::getHealthPointsMax() const
{
	return healthPointsMax;
}

int Character::getAttackPoints() const
{
	return attackPoints;
}

void Character::setHealthPoints()
{
	healthPoints = healthPointsMax;
}

void Character::setHealthPoints(int health)
{
	if (health < Constants::DEFAULT_HEALTH_DEATH)
	{
		healthPoints = Constants::DEFAULT_HEALTH_DEATH;
	}
	else if (health > healthPointsMax) {
		healthPoints = healthPointsMax;
	}
	else {
		healthPoints = health;
	}
}

void Character::setAttackPoints(int attack)
{
	attackPoints = attack;
}

std::string Character::getSpecies()
{
	return species;
}

bool Character::isAlive()
{
	return healthPoints > Constants::DEFAULT_HEALTH_DEATH;
}

bool Character::hasMaxHealthPoints()
{
	return healthPoints == healthPointsMax;
}
