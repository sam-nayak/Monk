#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player: public Character {
	public:
		Player();

		void setName(std::string &name_);
		void setDescription(std::string &description_);

		std::string getDescription();

		std::string getName() const;

	private:
		int experience;
		
		std::string description;
};

#endif
