#include <iostream>
#include <cmath>
int main()
{
    int i = 100;
    while (i < 1000)
    {
        int num1 = i % 10; // 个位
        int num2 = i / 100; // 百位
        int num3 = (i / 10) % 10; // 十位
        int sum = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
        if (sum == i++)
        {
            std::cout << i - 1 << std::endl;
        }
    }
    
    return 0;
}