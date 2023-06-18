#include <iostream>
void printArr(char* a)
{
    strcpy(a, "world");
}
int main()
{
    int a[5] = {1, 2, 3};
    // 获取长度
    std::cout << sizeof(a) / sizeof(int) << std::endl;
    // 获取首地址
    std::cout << &a[0] << std::endl;
    std::cout << &a << std::endl;
    std::cout << a << std::endl;

    int* b = (int*)malloc(sizeof(int) * 10);
    b[0] = 10;
    std::cout << b[0] << " " << b[1] << std::endl;

    char c[10] = "hello";
    std::cout << c << std::endl;
    printArr(c);
    std::cout << c << std::endl; 
    return 0;
}