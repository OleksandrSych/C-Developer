// Task4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

bool Conjunction(bool, bool);
bool Disjunction(bool, bool);

int main()
{
    bool a = true, b = false;
    cout << boolalpha << "true && false = "<< Conjunction(a,b) << endl;
    cout << boolalpha << "true || false = " << Disjunction(a, b) << endl;
    return 0;
}
bool Conjunction(bool a, bool b)
{
    return a && b;
}
bool Disjunction(bool a, bool b)
{
    return a || b;
}