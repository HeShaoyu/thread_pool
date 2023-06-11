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
## 3. 运算符
### 3.1 算术运算符
#### 四则运算
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
#### 取模
```c++
10 % 3 = 1
10 % 0 // 不可，除数不能为0
double d1 = 3.14
double d2 = 1.1
double d3 = d1 % d2 // 不可，浮点数不可以取模运算
```
#### 前置后置递增运算
前置递增先对变量++，再计算表达式，后置就相反
```c++
#include <iostream>

int main()
{
    // 1.前置递增
    int a = 10;
    ++a;
    std::cout << "a = " << a << std::endl;

    // 2.后置递增
    int b = 10;
    b++;
    std::cout << "b = " << b << std::endl;

    // 3.前置和后置的区别
    // 前置递增，先+1，再表达式计算
    int a2 = 10;
    int b2 = ++a2 * 10;
    std::cout << "a2 = " << a2 << std::endl;
    std::cout << "b2 = " << b2 << std::endl;
    // 后置递增，先计算，再+1
    int a3 = 10;
    int b3 = a3++ * 10;
    std::cout << "a3 = " << a3 << std::endl;
    std::cout << "b3 = " << b3 << std::endl;
}
```
### 3.2 赋值运算符
- = 赋值
- += 加等于
- -= 减等于
- *= 乘等于
- /= 除等于
- %= 模等于
```c++
#include <iostream>

int main()
{
    // 赋值运算
    int a = 10;
    a = 100;
    std::cout << "a = " << a << std::endl;
    // +=
    a = 10;
    a += 2; // a = a + 2;
    std::cout << "a = " << a << std::endl;
    // -=
    a = 10;
    a -= 2; // a = a -2;
    std::cout << "a = " << a << std::endl;
    // *=
    a = 10;
    a *= 2; // a = a * 2;
    std::cout << "a = " << a << std::endl;
    // /=
    a = 10;
    a /= 2; // a = a / 2;
    std::cout << "a = " << a << std::endl;
    // %=
    a = 10;
    a %= 2; // a = a % 2;
    std::cout << "a = " << a << std::endl;
    return 0;
}
```
### 3.3 比较运算符
- == 相等于
- ！= 不等于
- $>$ 大于
- $<$ 小于
- $>=$ 大于等于
- $<=$ 小于等于
```c++
#include <iostream>

int main()
{
    // ==
    int a = 10;
    int b = 20;
    std::cout << (a == b) << std::endl;
    // !=
    std::cout << (a != b) << std::endl;
    // >
    std::cout << (a > b) << std::endl;
    // <
    std::cout << (a < b) << std::endl;
    // >=
    std::cout << (a >= b) << std::endl;
    // <=
    std::cout << (a <= b) << std::endl;
    return 0;
}
```
### 3.4 逻辑运算法
- ! 非
- && 与
- || 或
```c++
#include <iostream>

int main()
{
    // 逻辑运算符 非 !
    int a = 10;
    // 在c++中，除了0，都为真
    std::cout << !a << std::endl;
    std::cout << !!a << std::endl;
    // 逻辑运算符 与 &&
    // 同真为真，其余为假
    int b = 10;
    int c = 10;
    std::cout << (b && c) << std::endl;
    b = 10;
    c = 0;
    std::cout << (b && c) << std::endl;
    // 逻辑运算符 或 ||
    // 同假为假，其余为真
    int d = 10;
    int e = 10;
    std::cout << (d || e) << std::endl;
    d = 10;
    e = 0;
    std::cout << (d || e) << std::endl;
    d = 0;
    e = 0;
    std::cout << (d || e) << std::endl;
    return 0;
}
```
## 4. 程序流程结构
C/C++支持最基本的三种程序运行结构：顺序结构、选择结构、循环结构
- 顺序结构：程序按顺序执行，不发生跳转
- 选择结构：依据条件是否满足，有选择的执行相应功能
- 循环结构：依据条件是否满足，循环多次执行某段代码
### 4.1 选择结构
#### 4.1.1 if语句
- 单行格式if语句
- 多行格式if语句
- 多条件if语句
- 嵌套if语句 
```c++
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
```

### 4.2 循环结构
### 4.3 跳转结构
## 5. 数组
## 6. 函数
## 7. 指针
## 8. 结构题
