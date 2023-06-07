#include <iostream>
#include <string>
int main()
{

    // 1. 整型
    int a = 0;
    std::cout << "请给整型变量a赋值： " << std::endl;
    std::cin >> a;
    std::cout << "a: " << a << std::endl;
    // 2. 浮点型
    float f = 3.14f;
    std::cout << "请给浮点型变量f赋值：" << std::endl;
    std::cin >> f;
    std::cout << "f: " << f << std::endl;
    // 3. 字符型
    char ch = 'a';
    std::cout << "请给字符型变量赋值：" << std::endl;
    std::cin >> ch;
    std::cout << "ch: " << ch << std::endl;
    // 4. 字符串型
    std::string str = "hello";
    std::cout << "请给字符串str赋值: " << std::endl;
    std::cin >> str;
    std::cout << "字符串str: " << str << std::endl;
    // 5. 布尔类型
    bool flag = false;
    std::cout << "请给bool类型的flag赋值: " << std::endl;
    std::cin >> flag; // 不能打英文 打1 true 2 false bool只要非0值，即为真
    std::cout << "flag: " << flag << std::endl;
    return 0;
}