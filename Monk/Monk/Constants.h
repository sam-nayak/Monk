#ifndef CONSTANTS_H
#define CONSTANTS_H

namespace Constants
{
	const std::string PLAYER_RACES[] = {
		"Human", "Dwarf", "Night Elf", "Gnome", "Draenei", "Worgen", "Pandaren"
	};

	const std::string MONSTER_RACES[] = {
		"Orc", "Undead", "Tauren", "Troll", "Blood Elf", "Goblin", "Pandaren"
	};

	const std::string DEFAULT_EMPTYROOM_NAME = "Empty Room";
	const std::string DEFAULT_MONSTERROOM_NAME = "Monster Room";
	const std::string DEFAULT_TREASUREROOM_NAME = "Treasure Room";
	const std::string DEFAULT_ROOM_NAME = "None";

	const std::string DEFAULT_PLAYER_NAME = "Unknown";
	const std::string DEFAULT_PLAYER_RACE = PLAYER_RACES[0];

	const std::string DEFAULT_MONSTER_NAME = "Monster";
	const std::string DEFAULT_MONSTER_RACE = MONSTER_RACES[0];

	const int ROOMS_SIZE_X = 6;
	const int ROOMS_SIZE_Y = 5;

	const int HEALTH_RECOVERY = 1;
	const int DEFAULT_HEALTH_DEATH = 0;

	const int ATTACK_ACCURACY = 2;
	const int DEFENCE_ACCURACY = 2;

	const int DEFAULT_PLAYER_HEALTH = 15;
	const int DEFAULT_PLAYER_ATTACK = 3;

	const int DEFAULT_MONSTER_HEALTH = 10;
	const int DEFAULT_MONSTER_ATTACK = 2;

	const std::string LOGS_PATHWAY = "Resources\\logs.txt";
	const std::string TITLE_MUSIC_PATHWAY = "Resources\\Title_Music.wav";
	const std::string BATTLE_MUSIC_PATHWAY = "Resources\\Battle_Music.wav";

};

#endif