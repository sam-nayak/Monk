#include <iostream>
#include <string>
#include <fstream>

#include "Battle.h"
#include "Functions.h"
#include "Constants.h"

std::ofstream file(LOGS_PATHWAY, std::ios_base::app);


Battle::Battle(Player &player, Monster &monster)
	: player(player), monster(monster)
{
	if (monster.isAlive() && player.isAlive())
		start();
}

void Battle::start()
{
	std::cout << "============================================" << std::endl;
	std::cout << monster.getSpecies() << " wants to battle!\n" << std::endl;

	while (monster.isAlive() && player.isAlive())
	{
		std::string choice;

		printFight();

		std::cout << "\nWhat will " << player.getName() << " do? \n1.) Attack \n2.) Defend" << std::endl;
		std::cin >> choice;

		if (choice == "1")
			turn(1);
		else if (choice == "2")
			turn(2);

		std::cout << "--------------------------------------------" << std::endl;
	}

	std::cout << "--------------------------------------------" << std::endl;
	printFight();
	end();
}

void Battle::turn(int choice)
{
	if (choice == 1)
		fight(player, monster);
	else if (choice == 2)
		defend(player);

	if (!monster.isAlive())
	{
		std::cout << "\n" << monster.getSpecies() << " died." << std::endl;
		return;
	}

	enemyTurn();

	if (!player.isAlive())
	{
		std::cout << "\n" << player.getName() << " died." << std::endl;
		return;
	}
}

void Battle::enemyTurn()
{
	double defendChance;
	
	double percent = double(monster.getHealthPoints()) / double(monster.getHealthPointsMax());

	double random = rand() / double(RAND_MAX);

	if (percent < 0.35)
		defendChance = 0.25;
	else if (percent > 0.9)
		defendChance = 0.05;
	else
		defendChance = 0.15;

	if (random < defendChance)
		defend(monster);
	else
		fight(monster, player);
}

void Battle::fight(Character &attacking, Character &defending)
{
	int moveAccuracy = generateRandomNumber(0, ATTACK_ACCURACY);

	std::cout << "\n" << attacking.getSpecies() << " attacked " << defending.getSpecies() << std::endl;

	if (moveAccuracy == 0)
	{
		file << attacking.getSpecies() << " missed!" << std::endl;
		std::cout << attacking.getSpecies() << " missed!" << std::endl;
	}
	else 
	{
		int oldHealth, newHealth, damage, percentage;

		oldHealth = defending.getHealthPoints();
		defending.setHealthPoints(oldHealth - attacking.getAttackPoints());

		newHealth = defending.getHealthPoints();
		damage = oldHealth - newHealth,
		percentage = static_cast<int>(((float)damage / (float)defending.getHealthPointsMax()) * 100);

		std::cout << attacking.getSpecies() << " hit "
			<< defending.getSpecies() << " for " << damage
			<< "hp (" << percentage << "%)!" << std::endl;

		file << attacking.getSpecies() << " hit "
			<< defending.getSpecies() << " for " << damage
			<< "hp (" << percentage << "%) " 
			<< "[" << newHealth << "/" << defending.getHealthPointsMax() << "]"
			<< std::endl;
	}

	//file.close();
}

void Battle::defend(Character &defender)
{
	int moveAccuracy = generateRandomNumber(0, DEFENCE_ACCURACY);

	std::cout << "\n" << defender.getSpecies() << " defended" << std::endl;

	if (moveAccuracy == 0) {
		std::cout << "Move failed!" << std::endl;

		file << defender.getSpecies() << " failed to defend" << std::endl;
	}
	else
	{
		int oldHealth, newHealth;
		
		oldHealth = defender.getHealthPoints();
		defender.setHealthPoints(oldHealth + HEALTH_RECOVERY);
		newHealth = defender.getHealthPoints();

		std::cout << defender.getSpecies() << " recovered " << newHealth-oldHealth << " HP" << std::endl;

		file << defender.getSpecies() << " defended [" << newHealth
				<< "/" << defender.getHealthPointsMax() << "]" << std::endl;
	}
}

void Battle::printFight()
{
	player.printStats();
	std::cout << "\n" << std::endl;
	monster.printStats();
}

void Battle::end()
{
	std::cout << "============================================" << std::endl;
}