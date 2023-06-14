#include <stdio.h>

int main(void)
{
    int i = 88;
    /*
    %d 十进制输出
    %x或%X 十六进制输出
    %o表示八进制输出
    */
    printf("i = %d\n", i);
    printf("i = %x\n", i);
    printf("i = %o\n", i);

    return 0;
}