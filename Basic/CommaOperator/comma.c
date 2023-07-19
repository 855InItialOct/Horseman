#include <stdio.h>

int main()
{
    int expression = 3;
    int expression1;
    expression1 = expression *= 2, expression += 4;
    printf("expression:%d\texpression1:%d\n",expression,expression1);

    return 0;
}