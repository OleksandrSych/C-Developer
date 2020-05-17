

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Enter your number\n";
	cin >> num;
	if (num % 2 == 0)
		cout << "even number";
	else
		cout << "odd number";
	cout << endl;
	if ((num & 1) == 0)
		cout << "even number";
	else
		cout << "odd number";
	return 0;
}
 