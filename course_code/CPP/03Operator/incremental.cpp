#include <iostream>

int main()
{
    // 1.前置递增
    int a = 10;
    ++a;
    std::cout << "a = " << a << std::endl;

    // 2.后置递增
    int b = 10;
    b++;
    std::cout << "b = " << b << std::endl;

    // 3.前置和后置的区别
    // 前置递增，先+1，再表达式计算
    int a2 = 10;
    int b2 = ++a2 * 10;
    std::cout << "a2 = " << a2 << std::endl;
    std::cout << "b2 = " << b2 << std::endl;
    // 后置递增，先计算，再+1
    int a3 = 10;
    int b3 = a3++ * 10;
    std::cout << "a3 = " << a3 << std::endl;
    std::cout << "b3 = " << b3 << std::endl;
}