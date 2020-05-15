
#include <iostream>
using namespace std;
int main()
{
	int x = 10, y = 12, z = 3;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	x += y - x++ * z;
	cout << "x += y - x++ * z" << endl;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	z = --x - y * 5;
	cout << "z = --x - y * 5" << endl;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	y /= x + 5 % z;
	cout << "y /= x + 5 % z" << endl;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	z = x++ + y * 5;
	cout << "z = x++ + y * 5" << endl;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	x = y - x++ * z;
	cout << "x = y - x++ * z" << endl;
	cout << "x=" << x << ", y=" << y << ", z=" << z << endl;
	cin.get();
	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
