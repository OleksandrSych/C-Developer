
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Number of clients: ";
	cin >> n;
	int result = 1;
	int i = 1;
	do
	{
		result *= i;
	} while (++i <= n);
	cout << "There are possible delivery routes: " << result;
	return 0;
}
