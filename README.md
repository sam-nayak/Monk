# Monk

## Outline

You have noticed that recently, a large number of successful Role-Playing Games (RPG) for PC and
consoles have been developed. Despite the number of videogames available, there is a lack of games
where the main hero controlled by the player is a “monk” --as defined by the Dungeons & Dragons manual.
For this reason, you decided to develop a prototype of a game, called Monk, where the main character is
(surprise) a monk that has to explore a dungeon in order to reach the treasure room. After some thought,
you have decided to investigate and develop a low cost version of a usual PC videogame, to test game
dynamics and provide an easy-to-extend preliminary release of the game.

## Aim

- A dungeon generation feature, that should be able to randomly generate dungeons to be explored during the game.
- An exploration feature that allows the controlled monk to explore the dungeon and fight against monsters.

## Requirements

### Dungeon Generation Requirements

- Must generate three types of rooms: empty, with monster, and the treasure room. There can be only one treasure room in a dungeon, but there may be multiple empty and monster rooms.
- Each room is described by its type, and by the rooms it is connected to. Each room has to be connected to at least 1 other room.
- Generate a single type of monster: a goblin with 10 health points, and 2 attack points. 
- Dungeon must have at least 3 rooms, one per type. The monk has to be positioned in one room, and must be able to visit all the rooms, and to reach the treasure in order to finish the game.

### Dungeon Exploration Requirements

- At the start of the game, the player is required to personalise the monk by providing a name, and a short description, and the monk is positioned in a room of the dungeon. The monk has 15 health points, and 3 attack points.
- The monk can move between two rooms, but only if they are connected.
- In an empty room, the monk can pray in order to fully restore his health points.
- When entering a monster room, the monk has to fight. A fight is a turn-based combat. In each turn, the player and the automatically controlled monster can select the action to perform from 2 possible actions. An action has a 50% chance of failure.
	- Attack: this reduces the health points of the other fighter by the amount of “attack points” of the attacker.
    - Defend: the fighter recovers one health point.
- During the exploration, information about the visited rooms, the performed actions, and the combats must be shown on screen, and stored in a file. Information logged must include the visited rooms and their type; in case of a fight, for each turn must log: the health points of the monk and of the monster, and the actions each of them performed.
- The exploration ends when the monk reaches the treasure room, or he is defeated (reaches 0 or less health points) in a combat.


## Credits

Music from:
 - Title Music: https://opengameart.org/content/rpg-title-1
 - Battle Music: https://opengameart.org/content/rpg-battle-theme-ii
 
Art from:
- Icons: https://opengameart.org/content/fantasy-icon-pack-by-ravenmore-0
