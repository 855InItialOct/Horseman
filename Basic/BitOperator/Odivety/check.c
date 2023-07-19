#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if (x & 1)
    {
        printf("%d is an odd number.\n", x);
    }
    else
    {
        printf("%d is an even number.\n", x);
    }

    return 0;
}