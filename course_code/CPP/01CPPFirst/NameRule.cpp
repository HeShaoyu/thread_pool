#include <iostream>

int main()
{
    // 1. 标识符不可以是关键字
    // int int = 10;

    // 2. 标识符只能由字母、数字、下划线组成
    int abc = 10;
    int _abc = 20;
    int _123abc = 30;

    // 3. 第一个字符必须为字母或下划线
    // int 123abc = 40;

    // 4. 标识符中字母区分大小写
    int aaa = 100;
    // std::cout << AAA << std::endl;

    // 建议：给变量起名的时候，最好能够做到见名知意
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    std::cout << sum << std::endl;
    return 0;
}