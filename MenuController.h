// Scott Camarena
// 
// - SavingsTracker
//		MenuController Class
//============================================================

#include <string>
#include "Savings.h"
#include "Menu.h"

class MenuController
{
private:
	Savings savings;
	Menu menu[3];
	int currMenu;
	string filename;

public:
	MenuController();

	void loadFromFile(string fn = "");
	void saveToFile(string fn = filename);
	void displayMenu();
	void getInput();
	void execCommand();


};
