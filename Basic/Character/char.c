#include <stdio.h>

int main()
{
    char ch;
    ch = 'A';
    printf("char:%c\n",ch);
    ch = 83;
    printf("83:%c",ch);
    printf("'S':%d\n",ch);

    printf("A -> a (A+32/0x20):%c\n",'A'+32);
    printf("a -> A (a-32/0x20):%c\n",'a'-32);

    return 0;
}