
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userText = "";
	string newText = "";
	cout << "Enter your Text : ";
	getline(cin, userText);
	 
	for (char symbol : userText)
	{
		newText = symbol + newText;
	}
	cout << newText;
	 
}
