#include <iostream>

int main()
{
    // 选择结构
    // 单行if语句
    // 用户输入分数，如果分数大于600，视为考上一本大学
    // 1. 用户输入分数
    int score = 0;
    std::cout << "请输入一个分数：" << std::endl;
    std::cin >> score;
    // 2. 打印用户输入的分数
    std::cout << "您输入的分数为：" << score << std::endl;
    // 3. 判断分数是否大于600，如果大于，输出
    // 注意事项，if条件后面不要加分号
    if (score > 600)
    {
        std::cout << "恭喜您考上了一本大学" << std::endl;
    }
    // 多行if语句
    // 输入考试分数，如果分数大于600，考上一本，没有考上，打印未考上
    std::cout << "请再次输入分数：" << std::endl;
    std::cin >> score;
    std::cout << "您考了" << score << "分" << std::endl;
    if (score > 600)
    {
        std::cout << "恭喜考上一本" << std::endl;
    }
    else
    {
        std::cout << "很遗憾，未考上一本" << std::endl;
    }
    // 多条件if语句
    // 输入一个考试分数，如果大于600，视为考上一本
    // 大于500分，视为考上二本
    // 大于400分，视为考上三本
    // 否则带专
    std::cout << "请您最后一次输入分数：" << std::endl;
    std::cin >> score;
    std::cout << "您考了" << score << "分" << std::endl;
    if (score > 600)
    {
        std::cout << "考上了一本" << std::endl;
    }
    else if (score > 500)
    {
        std::cout << "考上了二本" << std::endl;
    }
    else if (score > 400)
    {
        std::cout << "考上了三本" << std::endl;
    }
    else
    {
        std::cout << "考上了带专" << std::endl;
    }
    
    return 0;
}