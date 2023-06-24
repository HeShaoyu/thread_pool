#include <iostream>

int main()
{
    int arr[] = {2, 4, 9, 0, 5, 7, 1, 3, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    return 0;
}