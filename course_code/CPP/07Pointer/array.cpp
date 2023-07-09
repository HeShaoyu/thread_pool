#include <iostream>



int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    std::cout << "first elem: " << arr[0] << std::endl;
    int* p = arr; // arr就是数组的首地址
    std::cout << "利用指针访问第一个元素：" << *p << std::endl;
    p++;
    std::cout << "利用指针访问第二个元素：" << *p << std::endl;


    return 0;
}