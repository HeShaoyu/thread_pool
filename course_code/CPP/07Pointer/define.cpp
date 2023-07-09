#include <iostream>
int main()
{
    int a = 10;

    int* p;
    // std::cout << p++ << std::endl;
    std::cout << *p << std::endl;
    std::cout << sizeof(p) << std::endl;

    // int * p1 = (int*)0x1100;
    // std::cout << *p1 << std::endl;
    int * p2 = NULL;
    std::cout << *p2 << std::endl;
    return 0;
}