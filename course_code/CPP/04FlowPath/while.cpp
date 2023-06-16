#include <iostream>
#include <ctime>
int main()
{
    // 在屏幕中打印0-9
    int num = 0;
    // 注意事项：一定要避免死循环出现
    while (num < 10)
    {
        std::cout << num++ << std::endl;
    }
    // 猜数字
    // 添加一个随机数种子，利用当前系统时间生成随机数，防止每次随机数都一样
    srand((unsigned int)time(NULL));
    int number = rand() % 100 + 1; // 生成0～99的随机数
    int input  = 0;
    while (input != number)
    {
        std::cout << "请输入猜测数字: ";
        std::cin >> input;
        if (input > number)
        {
            std::cout << "猜测过大" << std::endl;
        }
        else if (input < number)
        {
            std::cout << "猜测过小" << std::endl;
        }
    }
    std::cout << "恭喜胜利" << std::endl;
    
    return 0;
}