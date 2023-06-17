#include <iostream>

int main()
{
    int arr1[5];
    arr1[0] = 10;
    std::cout << sizeof(arr1[1]) << " " << arr1[1] << std::endl;

    int arr2[5] = {1, 2, 3, 4, 5};
    std::cout << arr2[3] << std::endl;
    // 在初始化没满时，会用0补齐
    int arr4[5] = {};
    std::cout << "arr4: " << arr4[1] << std::endl;

    int arr3[] = {1, 2, 3, 4, 5};
    std::cout << sizeof(arr3)/sizeof(int) << std::endl;
    for (int i = 0; i < (sizeof(arr3)/sizeof(int)); i++)
    {
        std::cout << arr3[i] << std::endl;
    }
    return 0;
}