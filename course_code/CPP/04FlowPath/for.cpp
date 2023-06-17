#include <iostream>

int main()
{
    // for循环，从0打印到9
    /*
    设 语句0: int i = 0
       语句1: i < 10
       语句2: std::cout << "i=" << i << std::endl;
       语句3: i++
    实际上执行顺序是 0 1 2 3 1 2 3 1 2 3 。。。1
    */
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i=" << i << std::endl;
    }
    // 等价于
    int i = 0;
    for (;;)
    {
        if (i >= 10)
        {
            break;
        }
        std::cout << "i=" << i << std::endl;
        i++;
    }
    return 0;
}