 
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userText = "";

	cout << "Enter your Text : "; ;
	getline(cin, userText);
 
	string tempWord = "";
	string shortestWord = "";
	for (char symbol : userText)
	{
		if ((symbol >= 65 && symbol <= 90) || (symbol >= 97 && symbol <= 122))
		{ 
			tempWord += symbol;
		}
		else
		{
			if (tempWord.size() > 0 && (tempWord.size() < shortestWord.size() || shortestWord.size() == 0))
			{
				shortestWord = tempWord;
				tempWord = "";
			}
		}
	}
	if (tempWord.size() > 0 && (tempWord.size() < shortestWord.size() || shortestWord.size() == 0))
		shortestWord = tempWord;
	cout << "Shortest word : " << shortestWord;
}

//  