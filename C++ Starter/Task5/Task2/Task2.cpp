
#include <iostream>
using namespace std;

int main()
{
	cout << "How many years does the employee work:\n";
	int years;
	cin >> years;
	int bonus = 0;
	if (years < 5)
		bonus = 10;
	else if (years < 10)
		bonus = 15;
	else if (years < 15)
		bonus = 25;
	else if (years < 20)
		bonus = 35;
	else if (years < 25)
		bonus = 45;
	else
		bonus = 50;
	cout << "Bonus is equal " << bonus << "%";
	return 0;
}
 