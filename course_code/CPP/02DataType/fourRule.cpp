#include <iostream>

int main()
{
    // 加减乘除
    int a1 = 10;
    int b1 = 3;
    std::cout << a1 + b1 << std::endl;
    std::cout << a1 - b1 << std::endl;
    std::cout << a1 * b1 << std::endl;
    std::cout << a1 / b1 << std::endl; //两个整数相除，结果依然是整数，将小数部分去掉

    int a2 = 10;
    int b2 = 20;
    std::cout << a2 / b2 << std::endl;
    // 两个小数可以相除吗？
    double d1 = 0.5;
    double d2 = 0.22;
    std::cout << d1 / d2 << std::endl;
    return 0;
}