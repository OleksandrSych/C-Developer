
#include <iostream>
using namespace std;

int main()
{
	int num;
	bool isPower = false;
	cout << "Enter your number:\n";
	cin >> num;
	int a = 2;
	while (num >= a)
	{
		if (num == a)
		{
			cout << num << " is a power of 2";
			isPower = true;
		}
		a = a << 1;
	}
	if (!isPower)
		cout << "This is not a power of two";
	return 0;
}

