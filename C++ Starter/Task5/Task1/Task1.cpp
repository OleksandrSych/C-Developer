
#include <iostream>
using namespace std;

int main()
{
	char ch;
	cout << "Enter Char\n";
	while (true)
	{
		cin >> ch;
		if (ch == '#')
			break; 
		if (isalpha(ch))
			cout << (char)(islower(ch) ? toupper(ch) : tolower(ch)) << endl;
	}
	cout << "Exit\n";
}
