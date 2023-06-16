#include <iostream>

int main()
{
    // 在屏幕中输出0-9
    int num = 0;
    do
    {
        std::cout << num++ << std::endl;
    }while(num < 10);
    return 0;
}