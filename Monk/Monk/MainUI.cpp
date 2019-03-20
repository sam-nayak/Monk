#include "MainUI.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

/*
TODO:
	Basic:
		- Action/move priorities (1, 2, 3)
		- Text file monsters
		- Real random functions
		- Action/move accuracy
		- Text file log of actions

	Advanced:
		- Dungeon generation algorithm
			- Polymorphic structure for rooms
		- GUI system
		- Items
		- Different rooms
		- Multiple monsters in one room
		- Music

	Features:
		- Time limit RPG (i.e 30 seconds per fight)
		- Different floors (stairs)

DONE:
	Basic:
		- 'Battle' class
		- 'Race' member variable
*/

[STAThreadAttribute]
int main(array < String^ > ^ args)
{
	std::srand(unsigned(std::time(NULL)));

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Monk::MainUI form;
	Application::Run(%form);

	return 0;
}