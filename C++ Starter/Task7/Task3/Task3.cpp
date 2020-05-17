

#include <iostream>
double AVG(double, double, double);

int main()
{
	std::cout << "AVG(2,4,12) = " << AVG(2, 4, 12) << std::endl;
	std::cout << "AVG(2.3,5.4,16.6) = " << AVG(2.3, 5.4, 16.6) << std::endl;
	return 0;
}
double AVG(double a, double b, double c)
{
	return (a + b + c) / 3.0;
} 