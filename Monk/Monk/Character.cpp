#include <iostream>

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
	if (health < DEFAULT_HEALTH_DEATH)
	{
		healthPoints = DEFAULT_HEALTH_DEATH;
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

void Character::printStats()
{
	int percent = static_cast<int>((float(healthPoints) / float(healthPointsMax)) * 100);

	std::cout << species
				<< "\nAP: " << attackPoints
				<< "\nHP: " << healthPoints << "/" << healthPointsMax 
				<< " (" << percent << "%)" << std::endl;
}

std::string Character::getSpecies()
{
	return species;
}

bool Character::isAlive()
{
	//if (healthPoints < DEFAULT_HEALTH_DEATH);
	//	healthPoints = DEFAULT_HEALTH_DEATH;

	return healthPoints > DEFAULT_HEALTH_DEATH;
}

bool Character::hasMaxHealthPoints()
{
	return healthPoints == healthPointsMax;
}
