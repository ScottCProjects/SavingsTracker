// Scott Camarena
// July 2013
//
// - Savings Tracker
//============================================================

#include <iostream>
#include "MenuController.h"

using namespace std;

int main()
{
	// Setup Objects
	MenuController menuControl();
	menuControl.loadFromFile();

	// Enter Menu Loop
	while(!menuControl.exit())
	{
		// Display Main Menu
		menuControl.display();
		// Take command input
		menuControl.takeInput();

		// Execute Command
		menuControl.execCommand();
		// Save Changes to NEW file
		menuControl.saveToFile("tempFile");
	}

	menuControl.saveToFile();

	return 0;
}
