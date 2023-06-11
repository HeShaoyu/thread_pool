#include <iostream>

int main()
{
    // 逻辑运算符 非 !
    int a = 10;
    // 在c++中，除了0，都为真
    std::cout << !a << std::endl;
    std::cout << !!a << std::endl;
    // 逻辑运算符 与 &&
    // 同真为真，其余为假
    int b = 10;
    int c = 10;
    std::cout << (b && c) << std::endl;
    b = 10;
    c = 0;
    std::cout << (b && c) << std::endl;
    // 逻辑运算符 或 ||
    // 同假为假，其余为真
    int d = 10;
    int e = 10;
    std::cout << (d || e) << std::endl;
    d = 10;
    e = 0;
    std::cout << (d || e) << std::endl;
    d = 0;
    e = 0;
    std::cout << (d || e) << std::endl;
    return 0;
}