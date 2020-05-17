 
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter the sides of the triangle\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c; 

	if (a * b * c == 0)
		cout << "A triangle with zero sides does not exist.";
	else if (a < b + c && b < a + c && c < a + b)
		cout << "A triangle with such sides exist!!!";
	else
		cout << "A triangle with such sides does not exist.";
 
	return 0;
}


