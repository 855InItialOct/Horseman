#include <stdio.h>

int main(void)
{
    int a;

    scanf("%d", &a);

    a = (a >> 8) | (a << 8);

    printf("%d\n", a);

    return 0;
}