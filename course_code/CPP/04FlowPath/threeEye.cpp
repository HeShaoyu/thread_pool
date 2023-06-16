#include <iostream>

int main()
{
    // 三目运算符
    // 创建三个变量 a b c
    // 将a 和 b比较，将值大的值赋给c
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;

    // C++中三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 100;
    std::cout << "a= " << a << " b=" << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}