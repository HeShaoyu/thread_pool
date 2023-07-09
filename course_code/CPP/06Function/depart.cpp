#include <iostream>
#include "depart.h"
// 两个数字交换的函数



int main(){

    int a = 10;
    int b = 20;
    swap(a, b);
    return 0;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << "a = " << a << " b = " << b << std::endl;
}