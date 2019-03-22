#include "MainUI.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

/**
 * RPG with a GUI using Windows Forms.
 *
 * Features:
 *		- Different rooms (monster, treasure, empty)
 *		- Character movement
 *		- Monster creation
 *
 *		- Battle system (attacking, defending)
 *		- Action/move accuracy
 *		- Text file log of actions
 *		- Dungeon generation
 *
 *		- GUI
 *		- Music
 *
 * @author Samaresh Nayak.
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