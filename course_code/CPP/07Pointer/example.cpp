#include <iostream>
void bubbleSort(int* arr, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}
int main()
{
    int a[10] = {3,8,5,6,1,9,2,4,7,10};
    bubbleSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}