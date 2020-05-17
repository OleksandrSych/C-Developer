
#include <iostream>
using namespace std;

int main()
{
	int a, b, sum = 0;
	cout << "Enter A = ";
	cin >> a;
	cout << "Enter B = ";
	cin >> b;
	for (int i = a + 1; i < b; i++)
	{
		sum += i;
	}
	cout << "Sum = " << sum << endl;
	cout << "Odd numbers : ";
	for (int i = a + 1; i < b; i++)
	{
		if (i % 2 == 1)
			cout << i<< "  ";
	}
	return 0;
}
