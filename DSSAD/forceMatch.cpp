#include <stdlib.h>
#include <stdio.h>

struct String
{
    char* data;
    int len;
};

String* initString()
{
    String* s = new String;
    s->data = NULL;
    s->len = 0;
    return s;
}

void stirngAssign(String* s, char* data)
{
    if (s->data)
    {
        free(s->data);
    }
    int len = 0;
    char* temp = data;
    while (*temp)
    {
        len++;
        temp++;
    }
    if (len == 0)
    {
        s->data = NULL;
        s->len = 0;
    }
    else
    {
        temp = data;
        s->len = len;
        s->data = (char*)malloc(sizeof(char) * (len+1));
        for (int i = 0; i < len; i++)
        {
            s->data[i] = * temp;
            temp++;
        }
    }
    
}

bool forceMatch(String* master, String* sub)
{
    int i = 0;
    int j = 0;
    while (i < master->len && j < sub->len)
    {
        if (master->data[i] == sub->data[j])
        {
            if (j+1 == sub->len)
            {
                return true;
            }
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    return false;
    
}

void printString(String* s)
{
    for (int i = 0; i < s->len; i++)
    {
        printf(i == 0 ? "%c " : " -> %c ", s->data[i]);
    }
    printf("\n");
    
}

#define SUB(a) (a) - (a)
int main()
{

    String* s = initString();
    stirngAssign(s, "ababc");
    String* s1 = initString();
    stirngAssign(s1, "abc");
    printString(s);
    bool res = forceMatch(s, s1);
    // int a = '9' - '0';
    // printf("%d", a);

    int a =2, b =3, c = 5, d;
    d = SUB(a+b) * c;
    printf("%d", d);
    return 0;
}