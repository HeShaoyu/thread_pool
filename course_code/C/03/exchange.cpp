#include <stdio.h>

int main()
{
    int i = 3, j = 4;
    int temp;
    temp = i;
    i = j;
    j = temp;
    printf("i = %d, j = %d\n", i, j);
    return 0;
}