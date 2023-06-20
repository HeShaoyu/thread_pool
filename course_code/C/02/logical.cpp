#include <stdio.h>

int main()
{
    int i = 0;
    int k = 20;
    int m = (1 > 0) && (k = 0);
    printf("m = %d, k = %d\n", m, k);
    return 0;
}