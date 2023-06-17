#include <iostream>

int main()
{
    int a[5] = {1, 2, 3};
    // 获取长度
    std::cout << sizeof(a) / sizeof(int) << std::endl;
    // 获取首地址
    std::cout << &a[0] << std::endl;
    std::cout << &a << std::endl;
    std::cout << a << std::endl;
    return 0;
}