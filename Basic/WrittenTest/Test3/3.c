#include <stdio.h>

int main(void)
{
    char c1, c2;
    unsigned char c3;

    c1 = 250;
    c2 = c1 + 249;
    c3 = c1 + 249;

    printf("c1 = %d\n", c1);
    printf("c1 = %u\n", c1);

    printf("c2 = %d\n", c2);
    printf("c2 = %u\n", c2);

    printf("c3 = %d\n", c3);
    printf("c3 = %u\n", c3);

    return 0;
}