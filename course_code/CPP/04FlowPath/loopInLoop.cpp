#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << "x" << i << " = " << i*j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}