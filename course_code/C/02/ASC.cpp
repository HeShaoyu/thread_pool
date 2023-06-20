/*
    时间
*/
#include <stdio.h>

int main()
{
    char ch = 'A';
    // char ch1 = "AB"; "AB"是字符串，不能把字符串赋给单个字符变量
    // char ch2 = "A"; 不行，"A"也是字符串，字符串默认添加了'\0'
    // char ch3 = 'AB'; 错误
    // char ch = 'B'; ch被定义了两次
    ch = 'C'; // 可行
    printf("%c\n", ch);
    printf("%d\n", ch);
    return 0;
}