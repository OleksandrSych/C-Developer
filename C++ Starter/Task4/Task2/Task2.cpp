 
#include <iostream>
using namespace std;

int main()
{
	double a, b, c;
	cout << "Enter three numbers:\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;
	if (a == b || b == c || a == c)
		cout << "Error!!!";
	else
		cout << "AVG(a,b,c) = "<< (a+b+c)/3;
	return 0;
}
 