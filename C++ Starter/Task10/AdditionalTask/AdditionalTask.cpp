
#include <iostream>
#include <stdlib.h>
using namespace std;
void PrintArray(int[7][7]);

int main()
{

	int myArray[7][7];
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			myArray[i][j] = rand() % 9 + 0;
		}
	}
	PrintArray(myArray);
	cout << endl;
	cout << endl;
	cout << endl;
	//Sort
	for (size_t i = 0; i < 7; i++)
	{
		int min = myArray[i][0];
		int max = myArray[i][0];
		int minIndx = 0;
		int maxIndx = 0;
		for (size_t j = 0; j < 7; j++)
		{
			if (myArray[i][j] > max)
			{
				max = myArray[i][j];
				maxIndx = j;
			}
			if (myArray[i][j] < min)
			{
				min = myArray[i][j];
				minIndx = j;
			}
		}
		if (maxIndx - minIndx > 2)
		{

			for (size_t k = 0; k < maxIndx - minIndx; k++)
			{
				for (size_t m = 0; m < maxIndx - minIndx; m++)
				{
					if (myArray[i][minIndx + 1] > myArray[i][minIndx + 1 + m])
					{
						int temp = myArray[i][minIndx + 1 + m];
						myArray[i][minIndx + 1 + m] = myArray[i][minIndx + 1];
						myArray[i][minIndx + 1] = temp;
					}
				}
			}
		}
		if (minIndx -  maxIndx >  2)
		{

			for (size_t k = 0; k < minIndx - maxIndx; k++)
			{
				for (size_t m = 0; m < minIndx - maxIndx; m++)
				{
					if (myArray[i][maxIndx + 1] < myArray[i][maxIndx + 1 + m])
					{
						int temp = myArray[i][maxIndx + 1 + m];
						myArray[i][maxIndx + 1 + m] = myArray[i][maxIndx + 1];
						myArray[i][maxIndx + 1] = temp;
					}
				}
			}
		}
	}

	PrintArray(myArray);
}


void PrintArray(int myArray[7][7])
{
	for (size_t i = 0; i < 7; i++)
	{
		for (size_t j = 0; j < 7; j++)
		{
			cout << myArray[i][j] << " ";
		}
		cout << endl;
	}
}


