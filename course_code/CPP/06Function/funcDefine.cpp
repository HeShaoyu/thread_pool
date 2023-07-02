#include <iostream>

// 加法函数
int add(int num1, int num2)
{
    return num1 + num2;
}

int main()
{
    int a = 1, b = 2;
    std::cout << a <<  " + " << b << " = " << add(a, b) << std::endl;
    return 0;
}