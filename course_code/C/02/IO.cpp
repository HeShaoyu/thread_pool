#include <stdio.h>

int main()
{
    printf("哈哈🤣\n"); // \n表示换行
    int i = 10;
    printf("%d\n", i); // d是十进制
    
    int j = 3;
    int k = 5;
    printf("%d %d\n", j, k);

    // printf中%X及其相关用法 
    int a = 47;
    printf("%x\n", a); // 2f
    printf("%X\n", a); // 2F
    printf("%#X\n", a); // 0x2F
    printf("%#x\n", a); // 0x2f
    return 0;
}