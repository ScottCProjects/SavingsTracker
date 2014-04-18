// Scott Camarena
// 
// - SavingsTracker
//		Savings Class
//============================================================

#include <string>

struct SavingsGoal
{
	string name;
	int percentIncome;
	int saved;
}


class Savings
{
private:
	SavingsGoal* goal;
	int numGoals;
	int totalSaved;

	bool add_subtract(int amount, int index);
	bool add_subtract(int amount, string name);

public:
	Savings();
	~Savings();

	// Savings Operations
	bool deposit(int amount);
	bool withdraw(int amount);

	// SavingsGoal Operations
	SavingsGoal getGoal(int index);
	SavingsGoal getGoal(string name);
	bool rename(int index, string newName);
	bool changePercent(int index = -1, string n = "", int percent);
	bool depositTo(int index, int amount);
	bool depositTo(string name, int amount);
	bool withdrawFrom(int index, int amount);
	bool withdrawFrom(string name, int amount);

	

};



