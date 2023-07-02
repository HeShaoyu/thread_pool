#include <iostream>

// 值传递，实现两个数字进行交换
void swap(int num1, int num2)
{
    std::cout << "before swap: " << num1 << " " << num2 << std::endl;
    int temp = num1;
    num1 = num2;
    num2 =temp;
    std::cout << "after swap: " << num1 << " " << num2 << std::endl;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    return 0;
}