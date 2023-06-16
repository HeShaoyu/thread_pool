#include <iostream>

int main()
{
    // switch语句
    // 给一个电影打分
    std::cout << "请给电影打分" << std::endl;
    int score = 0;
    std::cin >> score;
    std::cout << "您打的分数为：" << score << std::endl;
    switch (score)
    {
    case 10:
        std::cout << "您认为是经典电影" << std::endl;
        break; // 退出当前分支
    case 9:
        std::cout << "您认为是经典电影" << std::endl;
        break;
    case 8:
        std::cout << "您认为电影非常好" << std::endl;
        break;
    case 7:
        std::cout << "您认为电影非常好" << std::endl;
        break;
    case 6:
        std::cout << "您认为电影一般" << std::endl;
        break;
    case 5:
        std::cout << "您认为电影一般" << std::endl;
        break;
    default:
        std::cout << "您认为这是烂片" << std::endl;
        break;    
    }
    // if 和 switch区别
    // switch 缺点，判断时候只能是整型或字符型，不可以是一个区间
    // switch 优点，结构清晰，执行效率高
    return 0;
}