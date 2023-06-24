#include <iostream>

int main()
{
    // 二维数据
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i ++)
    {
        for (int j = 0; j < sizeof(arr[0])/sizeof(int); j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    int arr2[2][3] = 
    {
        {1,2,3},
        {4,5,6}
    };
    for (int i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i ++)
    {
        for (int j = 0; j < sizeof(arr2[0])/sizeof(int); j++)
        {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}