#include <iostream>

#include "Player.h"
#include "Constants.h"

Player::Player()
	: Character(DEFAULT_PLAYER_RACE,
		DEFAULT_PLAYER_HEALTH,
		DEFAULT_PLAYER_ATTACK)

	, description(DEFAULT_PLAYER_NAME)
	, class_(DEFAULT_PLAYER_CLASS)
{
}

void Player::setName(std::string &name_)
{
	name = name_;
}

std::string Player::getName() const
{
	return name;
}

void Player::setDescription(std::string &description_)
{
	description = description_;
}


void Player::printStats()
{
	int percent = static_cast<int>((float(healthPoints) / float(healthPointsMax)) * 100);

	std::cout << name << " | " << species << " " << class_
		<< "\nAP: " << attackPoints
		<< "\nHP: " << healthPoints << "/" << healthPointsMax
		<< " (" << percent << "%)" << std::endl;
}