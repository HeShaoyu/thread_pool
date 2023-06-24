#include <iostream>

int main()
{
    int arr[5] = {1, 2, 3, 8, 7};
    int max = 0;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        max = max > arr[i] ? max : arr[i];
    }
    std::cout << "max: " << max << std::endl;

    int arr2[5];
    for (int i = 0; i < 5; i++)
    {
        arr2[i] = arr[5 - 1 - i];
    }
    std::cout << "after tranverse:";
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr2[i];
    }
    std::cout << std::endl;
    for (int i = 0; i <= sizeof(arr)/sizeof(int)/2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[sizeof(arr)/sizeof(int) - 1 - i];
        arr[sizeof(arr)/sizeof(int) - 1 - i] = temp;
    }
    for (int i = 0; i < 5; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    return 0;
}