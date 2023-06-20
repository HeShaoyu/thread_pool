#include <stdio.h>

int main()
{
    int i;
    // scanf("m%d", &i); // &i 表示i的地址，&是一个取址符
    printf("%d\n", i);
    int j, k;
    // scanf("%d%d", &i, &j);
    printf("请输入三个值，中间以,分割:\n");
    scanf("%d,%d,%d", &i, &j, &k);
    printf("i = %d, j = %d, k = %d", i, j, k);

    
    return 0;
}