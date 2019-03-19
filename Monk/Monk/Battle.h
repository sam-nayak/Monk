#ifndef BATTLE_H
#define BATTLE_H

#include "Room.h"
#include "Monster.h"
#include "Player.h"

class Battle
{
	private:
		Player &player;
		Monster &monster;

		void start();
		void turn(int choice);
		void enemyTurn();
		void fight(Character &attacking, Character &defending);
		void defend(Character &defender);
		void printFight();
		void end();

	public:
		Battle(Player &player, Monster &monster);		
};

#endif
