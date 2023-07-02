#include <iostream>

int main()
{
    int arr[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::cout << sizeof(arr) << std::endl; // 24
    std::cout << sizeof(arr[0]) << std::endl; // 12
    std::cout << sizeof(arr[0][0]) << std::endl; // 4
    return 0;
}