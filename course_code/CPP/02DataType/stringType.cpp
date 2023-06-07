#include <iostream>
#include <string>
int main()
{
    // C风格字符串
    // 注意事项1 char 字符串名[] 
    // 注意事项2 等号后面要用双引号包含起来
    char str[] = "hello world";
    std::cout << str << std::endl;

    // C++风格字符串
    // 注意事项，包含一个头文件 #include <string>
    std::string str2 = "hello world";
    std::cout << str2 << std::endl;
    return 0;
}