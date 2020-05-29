
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userText = "";

	cout << "Enter your Text : ";
	getline(cin, userText);
	char sym;
	cout << "Enter your symbol : ";
	cin >> sym;
	int k = 0;
	for (char symbol : userText)
	{
		if (sym == symbol)
			k++;		 
	}
	if (k == 0)
		cout << "Symbol '"<< sym <<"' not exists in Text";
	else
		cout << "Symbol '" << sym << "' contains "<< k <<"times";
}
