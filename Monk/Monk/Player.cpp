#include "Player.h"
#include "Constants.h"

Player::Player()
	: Character(Constants::DEFAULT_PLAYER_RACE,
		Constants::DEFAULT_PLAYER_HEALTH,
		Constants::DEFAULT_PLAYER_ATTACK)

	, description(Constants::DEFAULT_PLAYER_NAME)
{
}

void Player::setName(std::string &name)
{
	this->name = name;
	this->species = name;
}

std::string Player::getName() const
{
	return name;
}

void Player::setDescription(std::string &description)
{
	this->description = description;
}

std::string Player::getDescription()
{
	return description;
}