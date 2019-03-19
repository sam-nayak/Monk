#ifndef PLAYER_H
#define PLAYER_H

#include "Character.h"

class Player: public Character {
	public:
		Player();

		void setName(std::string &name_);
		void setDescription(std::string &description_);

		void printStats() override;

		std::string getName() const;

	private:
		int experience;
		
		std::string description;
		std::string class_;
};

#endif
