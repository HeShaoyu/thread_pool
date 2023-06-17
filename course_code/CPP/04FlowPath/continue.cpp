#include <iostream>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;// 可以筛选条件，执行到此就不再向下执行，执行下一次的循环
        }
        std::cout << i << std::endl;
    }
    return 0;
}