#include <stdio.h>

int main(void)
{
    int a = 5;
    unsigned int b;

    b = a - 10;

    printf("%u\n", b);
    printf("%d", a > b);

    return 0;
}