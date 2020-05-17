
#include <iostream>
using namespace std;

int main()
{
    int h, w;
    cout << "Enter h = ";
    cin >> h;
    cout << "Enter w = ";
    cin >> w;
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
            cout << "*";
        cout << endl;
    }
    return 0;
}
