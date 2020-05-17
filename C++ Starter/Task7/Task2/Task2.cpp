 
#include <iostream>

void Hello(void);
int counter = 0;

int main()
{
    for (size_t i = 0; i < 15; i++)
    {
        Hello();
    }
    std::cout << "Counter = "<<counter;
}

void Hello()
{
    std::cout << "Hello Student!\n";
    counter++;
} 