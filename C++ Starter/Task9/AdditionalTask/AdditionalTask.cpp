

#include <iostream>
using namespace std;

double area(double);
double area(double, double);
double area(double, double, double);

int main()
{
	cout << "Cube(2) area = " << area(2) << endl;
	cout << "Regular quadrangular prism(4, 5) area = " << area(4, 5) << endl;
	cout << "Rectangular parallelepiped(2, 7, 9) area = " << area(2, 7, 9) << endl;
	return 0;
}
double area(double a)
{
	return 6 * a * a;
}
double area(double a, double b)
{
	return  a * a * b;
}
double area(double a, double b, double c)
{
	return 2 * (a * b + b * c + c * a);
}