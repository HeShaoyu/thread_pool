#include <iostream>

int main()
{
    // const修饰指针 常量指针
    int a = 10;
    int b = 10;
    const int * p = &a;
    // 指针指向的值不可以改，指针的值可以改
    // *p = 20; error
    p = &b; // 正确
    // const修饰常量 指针常量
    int * const p2 = &a;
    // 指针的值不可以改，指针指向的值可以改
    *p2 = 100;
    // p2 = &b; error
    // const修饰指针和常量
    const int * const p3 = &a;
    // 指针的指向，指针的值都不可以改
    // *p3 = 100;
    // p3 = &b
    return 0;
}