# C++基础入门
## 1 C++初识
### 1.1 第一个C++程序
```c++
#include <iostream>
using namespace std;

int main()
{
    cout << "hello world C++" << endl;
    return 0;
}
```
### 1.2 注释
作用：在代码中添加一些说明和注释
```c++
#include <iostream>
using namespace std;
// 1. 单行注释

// 2. 多行注释

/*
    main是一个程序的入口
    每个程序都必须有这个函数，而且有且仅有一个

*/
int main()
{
    // 下一行代码的意义就是在屏幕中输出hello world
    cout << "hello world C++" << endl;
    return 0;
}
```
### 1.3 变量
变量存在的意义：方便我们管理内存空间
变量创建的语法；数据类型 变量名 = 变量的初始值;
             int a = 10;
```c++
#include <iostream>

int main()
{
    //变量创建语法，数据类型 变量名 = 变量初始值
    int a = 10;
    std::cout << "a = " << a << std::endl;
    return 0;
}
```
### 1.4 常量
作用；用于记录程序中不可更改的数据
1. #define 常量名 常量值
2. const 数据类型 常量名 = 常量值
```c++
#include <iostream>

// 常量定义方式
// 1. #define 宏常量
// 2. const修饰的变量

#define Day 7

int main()
{
    // Day = 14; Day是个常量，一旦修改就报错
    std::cout << "一周总共有： " << Day << " 天"  << std::endl;

    const int month = 12;
    // month = 24; const修饰的变量也称为常量
    std::cout << "一年总共有" << month << "月" << std::endl;
    return 0;
}
```
### 1.5 关键字
作用：关键字是C++中预先保留的单词（标识符）
```c++
#include <iostream>

int main()
{
    // 创建变量：数据类型 变量名称 = 变量初始值
    // 不要用关键字给变量或者常量起名称
    // int int = 10; 第二个int是一个关键字，不可以作为变量的名称
    int a = 10;
    return 0;
}
```
### 1.6 标识符命名规则
- 标识符不可以是关键字
- 标识符只能由字母、数字、下划线组成
- 第一个字符必须为字母或下划线
- 标识符中字母区分大小写

建议：给变量起名的时候，最好能够做到见名知意
## 2 数据类型
C++规定在创建一个变量或者常量时，必须要指定出相应的数据类型，否则无法给变量分配内存
### 2.1 整型
```c++
#include <iostream>

int main()
{
    // 1. 短整型 -32768 - 32767
    short num1 = 32768; // 输出 -32768

    // 2. 整型
    int num2 = 32768;

    // 3. 长整型
    long num3 = 10;

    // 4. 长长整型
    long long num4 = 10;

    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;
    return 0;
}
```
### 2.2 sizeof关键字
sizeof(数据类型/变量名)
```c++
#include <iostream>

int main()
{
    // 整型 short（2） int（4） long（4 or 8） long long（8）
    // 可以利用sizeof关键字来求出数据类型占用内存大小
    // sizeof(数据类型/变量名)
    short num1 = 10;
    std::cout << "short 占用的内存空间为：" << sizeof(short) << std::endl;
    std::cout << "short 占用的内存空间为：" << sizeof(num1) << std::endl;
    int num2 = 10;
    std::cout << "int 占用的内存空间为：" << sizeof(num2) << std::endl;
    long num3 = 10;
    std::cout << "long 占用的内存空间为：" << sizeof(num3) << std::endl;
    long long num4 = 10;
    std::cout << "long long 占用的内存空间为：" << sizeof(num4) << std::endl;
    return 0;
}
```
### 2.3 实型（浮点型）
1. 单精度float 4字节 7个有效数字
2. 双精度double 8字节 15-16有效数字
```c++
#include <iostream>

int main()
{
    // 默认情况下，输出一个小数，会显示6位有效数字
    // 1. 单精度
    float f1 = 3.1415926f;
    std::cout << "f1 = " << f1 << std::endl;

    // 2. 双精度
    double d1 = 3.1415926;
    std::cout << "d1 = " << d1 << std::endl;
    // 统计float和double占用内存空间
    std::cout << "float占用" << sizeof(float) << "字节" << std::endl;
    std::cout << "double占用" << sizeof(double) << "字节" << std::endl;
    // 科学计数法
    float f2 = 3e2; // 3 * 10 ^ 2
    std::cout << "f2 = " << f2 << std::endl;
    float f3 = 3e-2; // 3 * 10 ^ -2
    std::cout << "f3 = " << f3 << std::endl;
    return 0;
}
```
### 2.4 字符型
字符型变量用于显示单个字符
- C和C++中字符型变量只占用一个字节
- 字符型变量并不是把字符本身存入内存中，而是将对应的ASCII编码放到存储单元
```c++
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
    std::cout << (int)ch << std::endl; // a 97 A 65
    return 0;
}
```
### 2.5 转义字符
用于显示一些不能显示出来的ASCII字符
```c++
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
```
### 2.6 字符串型
用于表示一串字符
1. C风格字符串 char 变量名[] = "字符串值"
2. C++风格字符串 string 变量名 = "字符串值"
```c++
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
```
### 2.7 布尔类型
布尔数据类型代表真或者假的值
true 真 1
false 假 0
占用一个字节大小
```c++
#include <iostream>

int main()
{
    // 1. 创建bool数据类型
    bool flag = true;
    std::cout << flag << std::endl; // 1
    flag = false;
    std::cout << flag << std::endl; // 0
    // 2. 查看bool类型所占内存空间大小
    std::cout << "bool类型占用" << sizeof(bool) << "字节" << std::endl; // 1
    return 0;
}
```
### 2.8 数据的输入
用于从键盘获取数据
关键字：cin
语法：cin >> 变量
```c++
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
```
### 3.1 算术运算符
用于处理四则运算
```c++
#include <iostream>

int main()
{
    // 加减乘除
    int a1 = 10;
    int b1 = 3;
    std::cout << a1 + b1 << std::endl;
    std::cout << a1 - b1 << std::endl;
    std::cout << a1 * b1 << std::endl;
    std::cout << a1 / b1 << std::endl; //两个整数相除，结果依然是整数，将小数部分去掉

    int a2 = 10;
    int b2 = 20;
    std::cout << a2 / b2 << std::endl;
    // 两个小数可以相除吗？
    double d1 = 0.5;
    double d2 = 0.22;
    std::cout << d1 / d2 << std::endl;
    return 0;
}
```