#include <iostream>

int main()
{
    // 转义字符
    // 换行符 \n
    std::cout << "hello world\n";
    // 反斜杠
    std::cout << "\\" << std::endl;
    // 水平制表符 整齐地输出数据
    std::cout << "aaa\thelloworld" << std::endl;
    std::cout << "aa\thelloworld" << std::endl;
    std::cout << "aaaa\thelloworld" << std::endl;
    return 0;
}