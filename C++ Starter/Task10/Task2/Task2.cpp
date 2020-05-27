
#include <iostream>
using namespace std;

int main()
{
	int size = 0;
	int* myArray = new int[0];
	int num;
	do
	{
		cout << endl;
		cin >> num;
		if (num >= 0)
		{
			int* tempArray = new  int[size + 1];
			for (size_t i = 0; i < size; i++)
			{
				tempArray[i] = myArray[i];
			}
			tempArray[size++] = num;
			myArray = tempArray;

			//print result			
			for (size_t i = 0; i < size; i++)
			{
				cout << myArray[i];
			}
		}
	} while (num >= 0);

	//print result
	cout << "End" << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << myArray[i];
	}
}
