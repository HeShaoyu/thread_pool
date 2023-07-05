#include <stdio.h>

int main()
{
    float score;
    printf("please input score: ");
    scanf("%f", &score);
    printf("your score: %f\n", score);
    if (score > 100)
        printf("you are dreaming!\n");
    else if (90 <= score && score <= 100)
    {
        printf("you are excellent\n"); 
    }
    else if (80 <= score && score <90)
    {
        printf("good\n");
    }
    else if (60 <= score && score < 80)
    {
        printf("ok\n");
    }
    else if(0 <= score && score < 60)
    {
        printf("contine make efforts\n");
    }
    else
    {
        printf("分数过低\n");
    }
    return 0;
}