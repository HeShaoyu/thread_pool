#include <iostream>

int main()
{
    // 整型 short（2） int（4） long（4 or 8） long long（8）
    // 可以利用sizeof关键字来求出数据类型占用内存大小
    // sizeof(数据类型/变量名)
    short num1 = 10;
    std::cout << "short 占用的内存空间为：" << sizeof(short) << std::endl;
    std::cout << "short 占用的内存空间为：" << sizeof(num1) << std::endl;
    int num2 = 10;
    std::cout << "int 占用的内存空间为：" << sizeof(num2) << std::endl;
    long num3 = 10;
    std::cout << "long 占用的内存空间为：" << sizeof(num3) << std::endl;
    long long num4 = 10;
    std::cout << "long long 占用的内存空间为：" << sizeof(num4) << std::endl;
    return 0;
}