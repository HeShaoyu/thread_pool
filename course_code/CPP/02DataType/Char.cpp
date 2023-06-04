#include <iostream>

int main()
{
    // 1. 字符型变量创建方式
    char ch = 'b';
    std::cout << ch << std::endl;
    // 2. 字符型变量所占内存大小
    std::cout << "char占用" << sizeof(char) << "字节" << std::endl;
    // 3. 字符型变量常见错误
    // char ch2 = "b"; 创建字符型变量要用单引号
    // char ch3 = 'abcdef'; 单引号内只能放一个字符
    // 4. 字符型变量对应ASCII编码
    std::cout << (int)ch << std::endl; // 98
    return 0;
}