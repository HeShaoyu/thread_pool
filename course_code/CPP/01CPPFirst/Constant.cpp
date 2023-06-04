#include <iostream>

// 常量定义方式
// 1. #define 宏常量
// 2. const修饰的变量

#define Day 7

int main()
{
    // Day = 14; Day是个常量，一旦修改就报错
    std::cout << "一周总共有： " << Day << " 天"  << std::endl;

    const int month = 12;
    // month = 24; const修饰的变量也称为常量
    std::cout << "一年总共有" << month << "月" << std::endl;
    return 0;
}