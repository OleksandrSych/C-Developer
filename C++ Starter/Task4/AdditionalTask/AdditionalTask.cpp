// AdditionalTask.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	cout << "Enter a three-digit number:\n";
	cin >> num;
	cout << endl;
	int a = (num % 1000) / 100;
	int b = (num % 100) / 10;
	int c = (num % 10) / 1;
	if (a != 0)
	{
		if(b==c)
			cout << a<<b<<b<<endl;
		else
		{
			cout << a << b << c << endl;
			cout << a << c << b << endl;
		}
	}
	if (b != 0)
	{
		if (a == c)
			cout << b << a << a << endl;
		else
		{
			cout << b << a << c << endl;
			cout << b << c << a << endl;
		}
	}
	if (c != 0)
	{
		if (a == b)
			cout << c << a << a << endl;
		else
		{
			cout << c << a << b << endl;
			cout << c << b << a << endl;
		}
	} 

	cin.get();
	return 0;
}