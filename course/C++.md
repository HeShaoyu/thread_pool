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
#### 4.1.2 三目运算符
作用：通过三目运算符实现简单的判断
语法：表达式1 ? 表达式2 : 表达式3
如果表达式1的值为真，执行表达式2，并返回表达式2的结果
如果表达式1的值为假，执行表达式3，并返回表达式3点结果
```c++
#include <iostream>

int main()
{
    // 三目运算符
    // 创建三个变量 a b c
    // 将a 和 b比较，将值大的值赋给c
    int a = 10;
    int b = 20;
    int c = 0;

    c = a > b ? a : b;

    // C++中三目运算符返回的是变量，可以继续赋值
    (a > b ? a : b) = 100;
    std::cout << "a= " << a << " b=" << b << std::endl;
    std::cout << c << std::endl;
    return 0;
}
```
#### 4.1.3 switch语句
作用：执行多条件分支语句
```c++
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
```
### 4.2 循环结构
#### 4.2.1 while循环语句
作用：满足循环条件，执行循环语句
语法: while(循环条件){循环语句}
解释: 只要循环条件的结果为真，就执行循环语句
```c++
#include <iostream>

int main()
{
    // 在屏幕中打印0-9
    int num = 0;
    // 注意事项：一定要避免死循环出现
    while (num < 10)
    {
        std::cout << num++ << std::endl;
    }
    
    return 0;
}
```
#### 4.2.2 do...while循环
作用：满足循环条件，执行循环语句
语法：do{循环语句}while(循环条件);
```c++
#include <iostream>

int main()
{
    // 在屏幕中输出0-9
    int num = 0;
    do
    {
        std::cout << num++ << std::endl;
    }while(num < 10);
    return 0;
}
```
##### 水仙花数
```c++
#include <iostream>
#include <cmath>
int main()
{
    int i = 100;
    while (i < 1000)
    {
        int num1 = i % 10; // 个位
        int num2 = i / 100; // 百位
        int num3 = (i / 10) % 10; // 十位
        int sum = pow(num1, 3) + pow(num2, 3) + pow(num3, 3);
        if (sum == i++)
        {
            std::cout << i - 1 << std::endl;
        }
    }
    
    return 0;
}
```
#### 4.2.3 for循环语句
作用：满足循环条件，执行循环语句
```c++
#include <iostream>

int main()
{
    // for循环，从0打印到9
    /*
    设 语句0: int i = 0
       语句1: i < 10
       语句2: std::cout << "i=" << i << std::endl;
       语句3: i++
    实际上执行顺序是 0 1 2 3 1 2 3 1 2 3 。。。1
    */
    for (int i = 0; i < 10; i++)
    {
        std::cout << "i=" << i << std::endl;
    }
    // 等价于
    int i = 0;
    for (;;)
    {
        if (i >= 10)
        {
            break;
        }
        std::cout << "i=" << i << std::endl;
        i++;
    }
    return 0;
}
```
注意：for循环中的表达式，要用分号隔离
##### 敲桌子
```c++
#include <iostream>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        // 寻找敲桌子次数
        int num1 = i % 10;
        int num2 = i / 10;
        if (i % 7 == 0 or num1 == 7 or num2 == 7)
        {
            std::cout << i << " 敲桌子" << std::endl;
        }
    }
    return 0;
}
```
#### 4.2.4 嵌套循环
作用：在循环体中加入循环，实现嵌套效果
```c++
#include <iostream>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << "x" << i << " = " << i*j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
```
### 4.3 跳转结构
#### 4.3.1 break语句
作用：用于跳出选择结构或者循环结构

break使用的时机：
- 出现在switch条件语句中，作用是终止case并跳出switch
- 出现在循环语句中，作用是跳出当前的循环语句
- 出现在嵌套循环中，跳出最近的内层循环语句
```c++
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
```
#### 4.3.2 continue语句
作用：在循环语句中，跳过本次循环，执行下一次
```c++
#include <iostream>

int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
        {
            continue;// 可以筛选条件，执行到此就不再向下执行，执行下一次的循环
        }
        std::cout << i << std::endl;
    }
    return 0;
}
```
## 5. 数组

### 5.1 概述
所谓数组，就是一个集合，里面存放了相同类型的数据元素
- 特点1:数组的每个元素都是相同的数据类型
- 特点2:数组是由连续的内存位置组成的
### 5.2 一维数组
#### 5.2.1 一维数组的定义方式
一维数组定义的三种方式：
- 数据类型 数组名[数组长度];
- 数据类型 数组名[数组长度] = {值1, 值2, ...,};
- 数据类型 数组名[] = {值1, 值2, ...};

sizeof对数组的使用
- sizeof(数组名) 得到的是每个元素占用字节数*元素数
  - int a[5] -> sizeof(a) = 20
- sizeof(数组名[索引])，得到是每个元素占用字节数
  - sizeof(a[1]) = 4
```c++
#include <iostream>

int main()
{
    int arr1[5];
    arr1[0] = 10;
    std::cout << sizeof(arr1[1]) << " " << arr1[1] << std::endl;

    int arr2[5] = {1, 2, 3, 4, 5};
    std::cout << arr2[3] << std::endl;
    // 在初始化没满时，会用0补齐
    int arr4[5] = {};
    std::cout << "arr4: " << arr4[1] << std::endl;

    int arr3[] = {1, 2, 3, 4, 5};
    std::cout << sizeof(arr3)/sizeof(int) << std::endl;
    for (int i = 0; i < (sizeof(arr3)/sizeof(int)); i++)
    {
        std::cout << arr3[i] << std::endl;
    }
    return 0;
}
```
#### 5.2.2 一维数组数组名
用途：
- 可以统计整个数组在内存中的长度
- 可以获取数组在内存中的首地址
```c++
#include <iostream>

int main()
{
    int a[5] = {1, 2, 3};
    // 获取长度
    std::cout << sizeof(a) / sizeof(int) << std::endl;
    // 获取首地址
    std::cout << &a[0] << std::endl;
    std::cout << &a << std::endl;
    std::cout << a << std::endl;
    return 0;
}
```
#### 5.2.3 冒泡排序
- 作用：最常用的排序算法，对数组内元素进行排序
  - 比较相邻的元素，如果第一个比第二个大，就交换他们两个
  - 对每一对相邻元素做同样的工作，执行完毕后，找到第一个最大值
  - 重复以上的步骤，每次比较次数-1，直到不需要比较
```c++
#include <iostream>

int main()
{
    int arr[] = {2, 4, 9, 0, 5, 7, 1, 3, 8};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
    return 0;
}
```
### 5.3 二维数组
#### 5.3.1 二维数组定义方式
二维数组定义的四种方式：
- 数据类型 数组名[行数][列数];
- 数据类型 数组名[行数][列数] = {{数据1, 数据2}, {数据3, 数据4}};
- 数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4};
- 数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4};
- 建议第二种
#### 5.3.2 二维数组数组名
- 查看二维数组所占内存空间
- 获取二维数组首地址
```c++
#include <iostream>

int main()
{
    int arr[2][3] = 
    {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::cout << sizeof(arr) << std::endl; // 24
    std::cout << sizeof(arr[0]) << std::endl; // 12
    std::cout << sizeof(arr[0][0]) << std::endl; // 4
    return 0;
}
```
#### 5.2.3 二维数组应用案例
## 6. 函数
### 6.1 概述
作用：将一段经常使用的代码封装起来，减少重复代码。一个较大的程序，一般分为若干模块，每个模块实现特定的功能
### 6.2 函数的定义
函数的定义一般主要有5个步骤
- 返回值类型
- 函数名
- 参数列表
- 函数体语句
- return表达式
### 6.3 函数的调用
功能：使用定义好的函数
语法：函数名(参数)
### 6.4 值传递
- 所谓值传递，就是函数调用时，实参将数值传给形参
- 值传递时，如果形参发生改变，并不会影响实参
### 6.5 函数的常见样式
- 无参无返
- 有参无返
- 无参有返
- 有参有返
### 6.6 函数的声明
作用：高速编辑器函数名称及如何调用函数，函数的实际主体可以单独定义

函数的声明可以多次，但函数的定义只能有一次
### 6.7 函数的分文件编写
作用：让代码结构更加清晰

函数分文件编写一般有4个步骤：
- 创建后缀名为.h的头文件
- 创建后缀名为.cpp的源文件
- 在头文件中写函数的声明
- 在源文件中写函数的定义
## 7. 指针
### 7.1 指针的基本概念
指针的作用：可以通过指针间接访问内存
- 内存编号是从0开始记录的，一般用十六进制数字表示
- 可以利用指针变量保存地址
### 7.2 指针变量的定义和使用
指针变量定义语法：数据类型 * 变量名
### 7.3 指针所占内存空间
32位：4个字节
64位：8个字节
### 7.4 空指针和野指针
- 空指针：指针变量指向内存中编号为0的空间
- 用途：初始化指针变量
- 注意：空指针指向的内存是不可以访问的
```c++
int * p2 = NULL;
    std::cout << *p2 << std::endl;
```
- 野指针：指针变量指向非法的内存空间
```c++
int * p1 = (int*)0x1100;
std::cout << *p1 << std::endl;
```
### 7.5 const修饰指针
const修饰指针有三种情况：
- const修饰指针 ---常量指针
  - const int * p; int不可改，int*可改
- const修饰常量 ---指针常量
  - int * const p; int可以改，int*不可改
- const既修饰指针，又修饰常量
  - const int * const p; int不可改，int*也不可改
```c++
// const修饰指针 常量指针
int a = 10;
int b = 10;
const int * p = &a;
// 指针指向的值不可以改，指针的值可以改
// *p = 20; error
p = &b; // 正确
// const修饰常量 指针常量
int * const p2 = &a;
// 指针的值不可以改，指针指向的值可以改
*p2 = 100;
// p2 = &b; error
// const修饰指针和常量
const int * const p3 = &a;
// 指针的指向，指针的值都不可以改
// *p3 = 100;
// p3 = &b
```
### 7.6 指针和数组
作用：利用指针访问数组中的元素
```c++
int arr[10] = {1,2,3,4,5,6,7,8,9,10};
std::cout << "first elem: " << arr[0] << std::endl;
int* p = arr; // arr就是数组的首地址
std::cout << "利用指针访问第一个元素：" << *p << std::endl;
p++;
std::cout << "利用指针访问第二个元素：" << *p << std::endl;
return 0;
```
### 7.7 指针和函数
作用：利用指针作为函数参数，可以修改实参的值
### 7.8 指针、数组、函数
案例描述：封装一个函数，利用冒泡排序，实现对整型数组的升序排序
```c++
#include <iostream>
void bubbleSort(int* arr, int len)
{
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}
int main()
{
    int a[10] = {3,8,5,6,1,9,2,4,7,10};
    bubbleSort(a, 10);
    for (int i = 0; i < 10; i++)
    {
        std::cout << a[i] << std::endl;
    }
    return 0;
}
```
## 8. 结构体
### 8.1 结构体基本概念
结构体属于用户自定义的数据类型，允许用户存储不同的数据类型
### 8.2 结构体定义和使用
语法：struct 结构体名 {结构体成员列表};

通过结构体创建变量的方式有三种：
- struct 结构体名 变量名
- struct 结构体名 变量名 = {成员1值, 成员2值...}
- 定义结构体时顺便创建变量
```c++
#include <iostream>
#include <string>
// 创建一个学生
struct Student
{
    std::string name;
    int age;
    int score;
};
int main()
{
    Student s1;
    s1.name = "orange";
    s1.age = 12;
    s1.score = 88;
    std::cout << s1.name << " " << s1.age << " " << s1.score << std::endl;
    Student s2 = {"apple", 10, 80};
    std::cout << s2.name << " " << s2.age << " " << s2.score << std::endl;
    
    return 0;
}
```
### 8.3 结构体数组
作用：将自定义的结构体放到数组中方便维护
语法：struct 结构体名 数组名[元素个数] = {{}, {}, ...}
```c++
#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};

int main()
{
    Student s[2] = {{"apple", 10}, {"orange", 20}};
    for (int i = 0; i < sizeof(s) / sizeof(s[0]); i++)
    {
        std::cout << s[i].name << " " << s[i].age << std::endl;
    }
    return 0;
}

```
### 8.4 结构体指针
作用：通过指针访问结构体的成员
- 利用操作符->可用通过结构体指针访问结构体属性
```c++
#include <iostream>
#include <string>

struct Student
{
    std::string name;
    int age;
};
int main()
{
    Student s = {"apple", 60};
    Student* p = &s;
    std::cout << p->name << " " << p->age << std::endl;
    return 0;
}
```
### 8.5 结构体嵌套结构体
作用：结构体中的成员可以是另一个结构体

例如：每个老师辅导一个学员，一个老师的结构体中，记录一个学生的结构体
### 8.6 结构体做函数参数
作用：将结构体作为参数向函数中传递
- 值传递
- 地址传递
### 8.7 结构体中const使用场景
作用：用const来防止误操作
