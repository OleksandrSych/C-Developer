
#include <iostream>
using namespace std;
void ConvertNum(int, int);

int main()
{
	int num, osn;
	cout << "Enter the number : ";
	cin >> num;
	cout << "Enter the basis of the number system : ";
	cin >> osn;
	ConvertNum(num, osn);
	return 0;
}

void ConvertNum(int num, int base)
{
	if (base <= 1 || base > 35)
		return;
	int temp;

	temp = num % base;

	if (num >= base)
	{
		ConvertNum(num / base, base);
	}
	if (temp > 9)
		cout << (char)(55 + temp);
	else
		cout << temp;
}