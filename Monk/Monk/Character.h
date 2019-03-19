#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

class Character
{
	protected:
		int healthPoints;
		int healthPointsMax;
		int attackPoints;

		std::string name;
		std::string species;

	public:
		Character(std::string species, int health, int attack);

		int getHealthPoints() const;
		int getHealthPointsMax() const;
		int getAttackPoints() const;

		void setHealthPoints();
		void setHealthPoints(int health);
		void setAttackPoints(int attack);

		bool isAlive();
		bool hasMaxHealthPoints();

		virtual void printStats();

		std::string getSpecies();
};

#endif
