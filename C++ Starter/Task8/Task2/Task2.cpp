

#include <iostream>
using namespace std;

int main()
{
	char* pConsole = new char[80];
	int* pNumbers = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		pNumbers[i] = 0;
	}
	bool yy = false;
	cin.getline(pConsole, 80);
	for (int i = 0; i < 80; i++)
	{
		if (pConsole[i] > 47 && pConsole[i] < 58)
			pNumbers[pConsole[i]-48] += 1;
	}

	int maxNum = 0;
	for (size_t i = 1; i < 10; i++)
	{
		if (pNumbers[maxNum] < pNumbers[i])
			maxNum = i;
	}
	if(pNumbers[maxNum] != 0)
		cout << maxNum <<" - "<< pNumbers[maxNum];
	else
		cout << "No numbers in this text.";
	return 0;
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
