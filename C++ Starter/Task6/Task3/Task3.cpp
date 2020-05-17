
#include <iostream>
using namespace std;

int main()
{
	int h, w;
	cout << "Enter h = ";
	cin >> h;
	cout << "Enter w = ";
	cin >> w;
	cout << "Rectangle" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == 0 || i == h - 1 || j == 0 || j == w - 1)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << "Right triangle" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == h - 1 || j == round(i * 1.0 * w / h) || j == 0)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << "Equilateral triangle" << endl;
	for (int i = 1; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (i == h - 1 || j == round(i * 0.5 * w / h + w/2.0) || j == w - round(i * 0.5 * w / h + w / 2.0))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	cout << "Rhombus" << endl;
	for (int i = 0; i < h; i++)
	{
		for (int j = 0; j < w; j++)
		{
			if (j == round(i * w / h + w / 2.0) || j == w - round(i * w / h - w / 2.0)|| j == round(i * w / h - w / 2.0) || j == w - round(i * w / h + w / 2.0))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
