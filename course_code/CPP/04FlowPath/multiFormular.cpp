#include <iostream>

int main()
{
    // 为了实现稀疏多项式的运算
    int a[4][2] = {{7, 0}, {3, 1}, {9, 8}, {5, 17}};
    int b[3][2] = {{8, 1}, {22, 7}, {-9, 8}};
    std::cout << sizeof(a[1][1]) << std::endl;
    return 0;
}