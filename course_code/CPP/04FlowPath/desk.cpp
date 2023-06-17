#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // 寻找敲桌子次数
        int num1 = i % 10;
        int num2 = i / 10;
        if (i % 7 == 0 or num1 == 7 or num2 == 7)
        {
            std::cout << i << " 敲桌子" << std::endl;
        }
    }
    return 0;
}