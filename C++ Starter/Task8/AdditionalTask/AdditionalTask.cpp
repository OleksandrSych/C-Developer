

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	char* pConsole = new char[80];
	char* pNew = new char[80];
	bool isStart = false;
	
	cin.getline(pConsole, 80);
	int j = 0;

	for (size_t i = 0; i < 80; i++)
	{
		if (!isStart && pConsole[i] != 32)
			isStart = true;
		if (!isStart)
			continue;
		if (pConsole[i] != -51)
		{
			if (j > 0 && pNew[j - 1] == 32 && pConsole[i] == 32)
				continue;
			pNew[j++] = pConsole[i];
		}
	}
	j--;
	if (pNew[j-1] == 32)
		j-=2;
	cout  << endl;
	for (size_t i = 0; i < j; i++)
	{
		cout << pNew[i];
	}
	cout << ".";
	delete pConsole;
	delete pNew;
	return 0;
}

 