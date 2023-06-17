#include <iostream>

int main()
{
    // 1.switch
    std::cout << "请选择副本的难度：" << std::endl;
    std::cout << "1. 普通\n2. 中等\n3. 困难" << std::endl;
    int select = 0;
    std::cin >> select;
    switch (select)
    {
    case 1: 
        std::cout << "您选择了普通难度" << std::endl;
        break;
    case 2: 
        std::cout << "您选择了中等难度" << std::endl;
        break;
    case 3: 
        std::cout << "您选择了困难难度" << std::endl;
        break;
    default:
        break;
    }
    // 2.循环语句中
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
        if (i == 5)
        {
            break;
        }
    }
    // 3.嵌套循环
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "* ";
            if (i == j)
            {
                break;
            }
            
        }
        std::cout << std::endl;
    }
    return 0;
}